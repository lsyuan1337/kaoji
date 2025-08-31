/* Generated code for Python module 'torchvision.transforms.autoaugment'
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

/* The "module_torchvision$transforms$autoaugment" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torchvision$transforms$autoaugment;
PyDictObject *moduledict_torchvision$transforms$autoaugment;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[198];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[198];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torchvision.transforms.autoaugment"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 198; i++) {
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
void checkModuleConstants_torchvision$transforms$autoaugment(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 198; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_b99ecbd60a2fc119336c0cc9d46b0416;
static PyCodeObject *codeobj_0b4220303ade1820ae0be1210b27db7c;
static PyCodeObject *codeobj_2b5c3c62b4d4b2f1a045f10bdf1379d2;
static PyCodeObject *codeobj_fd129339e8ab215579c774d6e3da57da;
static PyCodeObject *codeobj_aa1be9a4cb1dd3079f4db6300567142a;
static PyCodeObject *codeobj_294d4b49991cc258f2fb6225b0d2d78c;
static PyCodeObject *codeobj_95535ae25141f4f0912ee1431e3b9ac8;
static PyCodeObject *codeobj_4a363daefc9bf36d56ceb4bfca241f3a;
static PyCodeObject *codeobj_b829629fcab49d5d41e9133a9183ab4d;
static PyCodeObject *codeobj_9d0edb75d569cd59f3ba2328ed817086;
static PyCodeObject *codeobj_bc768d3db5e1fb005880d58e8f74369e;
static PyCodeObject *codeobj_a74df2dee79e283dbcf1330406c54292;
static PyCodeObject *codeobj_4ee756858305195a77df8700f0465e3f;
static PyCodeObject *codeobj_223d1120cf1e550b93d9cd251d204f1e;
static PyCodeObject *codeobj_d0b03dbfa9ba2586af0f1b9062579614;
static PyCodeObject *codeobj_942d356b514c4005186d2830f3544426;
static PyCodeObject *codeobj_7f0298f0ecb4d5ff1c8b525e530b277f;
static PyCodeObject *codeobj_ba3cafdb6201ce2e8b3e6418ffba2537;
static PyCodeObject *codeobj_2cfea675fcf1fc2ac84ce8ef5655b27f;
static PyCodeObject *codeobj_b0032c46e5238e28ef34849b27595621;
static PyCodeObject *codeobj_1139c67d626c45df5badcd720f643472;
static PyCodeObject *codeobj_4daa29c3e5a4d05a6814684ba59d4ada;
static PyCodeObject *codeobj_97e98bd3b0f6a954ec9dcf0643fad233;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[180]); CHECK_OBJECT(module_filename_obj);
    codeobj_b99ecbd60a2fc119336c0cc9d46b0416 = MAKE_CODE_OBJECT(module_filename_obj, 267, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[182], NULL, 1, 0, 0);
    codeobj_0b4220303ade1820ae0be1210b27db7c = MAKE_CODE_OBJECT(module_filename_obj, 351, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[182], NULL, 1, 0, 0);
    codeobj_2b5c3c62b4d4b2f1a045f10bdf1379d2 = MAKE_CODE_OBJECT(module_filename_obj, 436, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[181], mod_consts[181], mod_consts[182], NULL, 1, 0, 0);
    codeobj_fd129339e8ab215579c774d6e3da57da = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[183], mod_consts[183], NULL, NULL, 0, 0, 0);
    codeobj_aa1be9a4cb1dd3079f4db6300567142a = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_NOFREE, mod_consts[146], mod_consts[146], mod_consts[184], NULL, 0, 0, 0);
    codeobj_294d4b49991cc258f2fb6225b0d2d78c = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[184], NULL, 0, 0, 0);
    codeobj_95535ae25141f4f0912ee1431e3b9ac8 = MAKE_CODE_OBJECT(module_filename_obj, 286, CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[184], NULL, 0, 0, 0);
    codeobj_4a363daefc9bf36d56ceb4bfca241f3a = MAKE_CODE_OBJECT(module_filename_obj, 378, CO_NOFREE, mod_consts[174], mod_consts[174], mod_consts[184], NULL, 0, 0, 0);
    codeobj_b829629fcab49d5d41e9133a9183ab4d = MAKE_CODE_OBJECT(module_filename_obj, 394, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[40], mod_consts[40], mod_consts[185], mod_consts[184], 4, 0, 0);
    codeobj_9d0edb75d569cd59f3ba2328ed817086 = MAKE_CODE_OBJECT(module_filename_obj, 305, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[40], mod_consts[40], mod_consts[186], mod_consts[184], 6, 0, 0);
    codeobj_bc768d3db5e1fb005880d58e8f74369e = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[40], mod_consts[40], mod_consts[187], mod_consts[184], 4, 0, 0);
    codeobj_a74df2dee79e283dbcf1330406c54292 = MAKE_CODE_OBJECT(module_filename_obj, 282, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[188], NULL, 1, 0, 0);
    codeobj_4ee756858305195a77df8700f0465e3f = MAKE_CODE_OBJECT(module_filename_obj, 365, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[189], NULL, 1, 0, 0);
    codeobj_223d1120cf1e550b93d9cd251d204f1e = MAKE_CODE_OBJECT(module_filename_obj, 452, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[163], mod_consts[189], NULL, 1, 0, 0);
    codeobj_d0b03dbfa9ba2586af0f1b9062579614 = MAKE_CODE_OBJECT(module_filename_obj, 13, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[190], NULL, 5, 0, 0);
    codeobj_942d356b514c4005186d2830f3544426 = MAKE_CODE_OBJECT(module_filename_obj, 405, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[191], NULL, 2, 0, 0);
    codeobj_7f0298f0ecb4d5ff1c8b525e530b277f = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[192], NULL, 3, 0, 0);
    codeobj_ba3cafdb6201ce2e8b3e6418ffba2537 = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[192], NULL, 3, 0, 0);
    codeobj_2cfea675fcf1fc2ac84ce8ef5655b27f = MAKE_CODE_OBJECT(module_filename_obj, 133, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[193], NULL, 2, 0, 0);
    codeobj_b0032c46e5238e28ef34849b27595621 = MAKE_CODE_OBJECT(module_filename_obj, 339, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[194], NULL, 2, 0, 0);
    codeobj_1139c67d626c45df5badcd720f643472 = MAKE_CODE_OBJECT(module_filename_obj, 424, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[195], NULL, 2, 0, 0);
    codeobj_4daa29c3e5a4d05a6814684ba59d4ada = MAKE_CODE_OBJECT(module_filename_obj, 255, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[196], NULL, 2, 0, 0);
    codeobj_97e98bd3b0f6a954ec9dcf0643fad233 = MAKE_CODE_OBJECT(module_filename_obj, 242, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[197], NULL, 1, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__10_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__11___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__12___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__13__augmentation_space(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__14_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__15___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__1__apply_op(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__2___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__3__get_policies(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__4__augmentation_space(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__5_get_params(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__6_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__7___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__8___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__9__augmentation_space(PyObject *annotations);


// The module function definitions.
static PyObject *impl_torchvision$transforms$autoaugment$$$function__1__apply_op(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_img = python_pars[0];
    PyObject *par_op_name = python_pars[1];
    PyObject *par_magnitude = python_pars[2];
    PyObject *par_interpolation = python_pars[3];
    PyObject *par_fill = python_pars[4];
    struct Nuitka_FrameObject *frame_d0b03dbfa9ba2586af0f1b9062579614;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_d0b03dbfa9ba2586af0f1b9062579614 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d0b03dbfa9ba2586af0f1b9062579614)) {
        Py_XDECREF(cache_frame_d0b03dbfa9ba2586af0f1b9062579614);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d0b03dbfa9ba2586af0f1b9062579614 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d0b03dbfa9ba2586af0f1b9062579614 = MAKE_FUNCTION_FRAME(codeobj_d0b03dbfa9ba2586af0f1b9062579614, module_torchvision$transforms$autoaugment, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d0b03dbfa9ba2586af0f1b9062579614->m_type_description == NULL);
    frame_d0b03dbfa9ba2586af0f1b9062579614 = cache_frame_d0b03dbfa9ba2586af0f1b9062579614;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d0b03dbfa9ba2586af0f1b9062579614);
    assert(Py_REFCNT(frame_d0b03dbfa9ba2586af0f1b9062579614) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_1 = par_op_name;
        tmp_cmp_expr_right_1 = mod_consts[0];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
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
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        PyObject *tmp_kw_call_dict_value_6_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_kw_call_arg_value_0_1 = par_img;
        tmp_kw_call_dict_value_0_1 = mod_consts[3];
        tmp_kw_call_dict_value_1_1 = MAKE_LIST_REPEATED(2, mod_consts[4]);
        tmp_kw_call_dict_value_2_1 = mod_consts[5];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_magnitude);
        tmp_args_element_value_2 = par_magnitude;
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 28;
        tmp_args_element_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[8], tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 28;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_kw_call_dict_value_1_1);

            exception_lineno = 28;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_3_1 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_kw_call_dict_value_3_1, 0, tmp_list_element_1);
        tmp_list_element_1 = mod_consts[3];
        PyList_SET_ITEM0(tmp_kw_call_dict_value_3_1, 1, tmp_list_element_1);
        CHECK_OBJECT(par_interpolation);
        tmp_kw_call_dict_value_4_1 = par_interpolation;
        CHECK_OBJECT(par_fill);
        tmp_kw_call_dict_value_5_1 = par_fill;
        tmp_kw_call_dict_value_6_1 = MAKE_LIST_REPEATED(2, mod_consts[4]);
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 23;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1, tmp_kw_call_dict_value_6_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        Py_DECREF(tmp_kw_call_dict_value_3_1);
        Py_DECREF(tmp_kw_call_dict_value_6_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_img;
            assert(old != NULL);
            par_img = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_2 = par_op_name;
        tmp_cmp_expr_right_2 = mod_consts[10];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_kw_call_dict_value_1_2;
        PyObject *tmp_kw_call_dict_value_2_2;
        PyObject *tmp_kw_call_dict_value_3_2;
        PyObject *tmp_list_element_2;
        PyObject *tmp_kw_call_dict_value_4_2;
        PyObject *tmp_kw_call_dict_value_5_2;
        PyObject *tmp_kw_call_dict_value_6_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_kw_call_arg_value_0_2 = par_img;
        tmp_kw_call_dict_value_0_2 = mod_consts[3];
        tmp_kw_call_dict_value_1_2 = MAKE_LIST_REPEATED(2, mod_consts[4]);
        tmp_kw_call_dict_value_2_2 = mod_consts[5];
        tmp_list_element_2 = mod_consts[3];
        tmp_kw_call_dict_value_3_2 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_4;
            PyList_SET_ITEM0(tmp_kw_call_dict_value_3_2, 0, tmp_list_element_2);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[7]);
            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[6]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 41;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            CHECK_OBJECT(par_magnitude);
            tmp_args_element_value_4 = par_magnitude;
            frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 41;
            tmp_args_element_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[8], tmp_args_element_value_4);
            if (tmp_args_element_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_4);

                exception_lineno = 41;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 41;
            tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_kw_call_dict_value_3_2, 1, tmp_list_element_2);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_1_2);
        Py_DECREF(tmp_kw_call_dict_value_3_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        CHECK_OBJECT(par_interpolation);
        tmp_kw_call_dict_value_4_2 = par_interpolation;
        CHECK_OBJECT(par_fill);
        tmp_kw_call_dict_value_5_2 = par_fill;
        tmp_kw_call_dict_value_6_2 = MAKE_LIST_REPEATED(2, mod_consts[4]);
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 36;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[7] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_2, tmp_kw_call_dict_value_2_2, tmp_kw_call_dict_value_3_2, tmp_kw_call_dict_value_4_2, tmp_kw_call_dict_value_5_2, tmp_kw_call_dict_value_6_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[9]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_1_2);
        Py_DECREF(tmp_kw_call_dict_value_3_2);
        Py_DECREF(tmp_kw_call_dict_value_6_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_img;
            assert(old != NULL);
            par_img = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_3 = par_op_name;
        tmp_cmp_expr_right_3 = mod_consts[11];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_kw_call_dict_value_1_3;
        PyObject *tmp_list_element_3;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_kw_call_dict_value_2_3;
        PyObject *tmp_kw_call_dict_value_3_3;
        PyObject *tmp_kw_call_dict_value_4_3;
        PyObject *tmp_kw_call_dict_value_5_3;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[2]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_kw_call_arg_value_0_3 = par_img;
        tmp_kw_call_dict_value_0_3 = mod_consts[3];
        CHECK_OBJECT(par_magnitude);
        tmp_int_arg_1 = par_magnitude;
        tmp_list_element_3 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 50;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_3 = MAKE_LIST_EMPTY(2);
        PyList_SET_ITEM(tmp_kw_call_dict_value_1_3, 0, tmp_list_element_3);
        tmp_list_element_3 = mod_consts[4];
        PyList_SET_ITEM0(tmp_kw_call_dict_value_1_3, 1, tmp_list_element_3);
        tmp_kw_call_dict_value_2_3 = mod_consts[5];
        CHECK_OBJECT(par_interpolation);
        tmp_kw_call_dict_value_3_3 = par_interpolation;
        tmp_kw_call_dict_value_4_3 = MAKE_LIST2(mod_consts[3],mod_consts[3]);
        CHECK_OBJECT(par_fill);
        tmp_kw_call_dict_value_5_3 = par_fill;
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 47;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_3, tmp_kw_call_dict_value_1_3, tmp_kw_call_dict_value_2_3, tmp_kw_call_dict_value_3_3, tmp_kw_call_dict_value_4_3, tmp_kw_call_dict_value_5_3};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_dict_value_1_3);
        Py_DECREF(tmp_kw_call_dict_value_4_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_img;
            assert(old != NULL);
            par_img = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_4 = par_op_name;
        tmp_cmp_expr_right_4 = mod_consts[13];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_kw_call_dict_value_1_4;
        PyObject *tmp_list_element_4;
        PyObject *tmp_kw_call_dict_value_2_4;
        PyObject *tmp_kw_call_dict_value_3_4;
        PyObject *tmp_kw_call_dict_value_4_4;
        PyObject *tmp_kw_call_dict_value_5_4;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[2]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_kw_call_arg_value_0_4 = par_img;
        tmp_kw_call_dict_value_0_4 = mod_consts[3];
        tmp_list_element_4 = mod_consts[4];
        tmp_kw_call_dict_value_1_4 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_int_arg_2;
            PyList_SET_ITEM0(tmp_kw_call_dict_value_1_4, 0, tmp_list_element_4);
            CHECK_OBJECT(par_magnitude);
            tmp_int_arg_2 = par_magnitude;
            tmp_list_element_4 = PyNumber_Int(tmp_int_arg_2);
            if (tmp_list_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;
                type_description_1 = "ooooo";
                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_kw_call_dict_value_1_4, 1, tmp_list_element_4);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_dict_value_1_4);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_kw_call_dict_value_2_4 = mod_consts[5];
        CHECK_OBJECT(par_interpolation);
        tmp_kw_call_dict_value_3_4 = par_interpolation;
        tmp_kw_call_dict_value_4_4 = MAKE_LIST2(mod_consts[3],mod_consts[3]);
        CHECK_OBJECT(par_fill);
        tmp_kw_call_dict_value_5_4 = par_fill;
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 57;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_4, tmp_kw_call_dict_value_1_4, tmp_kw_call_dict_value_2_4, tmp_kw_call_dict_value_3_4, tmp_kw_call_dict_value_4_4, tmp_kw_call_dict_value_5_4};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_dict_value_1_4);
        Py_DECREF(tmp_kw_call_dict_value_4_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_img;
            assert(old != NULL);
            par_img = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_5 = par_op_name;
        tmp_cmp_expr_right_5 = mod_consts[14];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_5;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_5;
        PyObject *tmp_kw_call_dict_value_1_5;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[15]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_kw_call_arg_value_0_5 = par_img;
        CHECK_OBJECT(par_magnitude);
        tmp_kw_call_arg_value_1_1 = par_magnitude;
        CHECK_OBJECT(par_interpolation);
        tmp_kw_call_dict_value_0_5 = par_interpolation;
        CHECK_OBJECT(par_fill);
        tmp_kw_call_dict_value_1_5 = par_fill;
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 67;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_5, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_5, tmp_kw_call_dict_value_1_5};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_called_value_7);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_img;
            assert(old != NULL);
            par_img = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_6 = par_op_name;
        tmp_cmp_expr_right_6 = mod_consts[17];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[18]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_args_element_value_5 = par_img;
        tmp_add_expr_left_1 = mod_consts[5];
        CHECK_OBJECT(par_magnitude);
        tmp_add_expr_right_1 = par_magnitude;
        tmp_args_element_value_6 = BINARY_OPERATION_ADD_OBJECT_FLOAT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_img;
            assert(old != NULL);
            par_img = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_7 = par_op_name;
        tmp_cmp_expr_right_7 = mod_consts[19];
        tmp_condition_result_7 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_7 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[20]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_args_element_value_7 = par_img;
        tmp_add_expr_left_2 = mod_consts[5];
        CHECK_OBJECT(par_magnitude);
        tmp_add_expr_right_2 = par_magnitude;
        tmp_args_element_value_8 = BINARY_OPERATION_ADD_OBJECT_FLOAT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 71;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_img;
            assert(old != NULL);
            par_img = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_8 = par_op_name;
        tmp_cmp_expr_right_8 = mod_consts[21];
        tmp_condition_result_8 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[22]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_args_element_value_9 = par_img;
        tmp_add_expr_left_3 = mod_consts[5];
        CHECK_OBJECT(par_magnitude);
        tmp_add_expr_right_3 = par_magnitude;
        tmp_args_element_value_10 = BINARY_OPERATION_ADD_OBJECT_FLOAT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 73;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 73;
        {
            PyObject *call_args[] = {tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_8 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_img;
            assert(old != NULL);
            par_img = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_9 = par_op_name;
        tmp_cmp_expr_right_9 = mod_consts[23];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[24]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_args_element_value_11 = par_img;
        tmp_add_expr_left_4 = mod_consts[5];
        CHECK_OBJECT(par_magnitude);
        tmp_add_expr_right_4 = par_magnitude;
        tmp_args_element_value_12 = BINARY_OPERATION_ADD_OBJECT_FLOAT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 75;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 75;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_img;
            assert(old != NULL);
            par_img = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_10 = par_op_name;
        tmp_cmp_expr_right_10 = mod_consts[25];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_int_arg_3;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[26]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_args_element_value_13 = par_img;
        CHECK_OBJECT(par_magnitude);
        tmp_int_arg_3 = par_magnitude;
        tmp_args_element_value_14 = PyNumber_Int(tmp_int_arg_3);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 77;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 77;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_10 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_img;
            assert(old != NULL);
            par_img = tmp_assign_source_10;
            Py_DECREF(old);
        }

    }
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_11 = par_op_name;
        tmp_cmp_expr_right_11 = mod_consts[27];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_args_element_value_15 = par_img;
        CHECK_OBJECT(par_magnitude);
        tmp_args_element_value_16 = par_magnitude;
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 79;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_assign_source_11 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_img;
            assert(old != NULL);
            par_img = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_12 = par_op_name;
        tmp_cmp_expr_right_12 = mod_consts[29];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_17;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_args_element_value_17 = par_img;
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 81;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[30], tmp_args_element_value_17);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_img;
            assert(old != NULL);
            par_img = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_13 = par_op_name;
        tmp_cmp_expr_right_13 = mod_consts[31];
        tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_18;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_args_element_value_18 = par_img;
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 83;
        tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[32], tmp_args_element_value_18);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_img;
            assert(old != NULL);
            par_img = tmp_assign_source_13;
            Py_DECREF(old);
        }

    }
    goto branch_end_13;
    branch_no_13:;
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_14 = par_op_name;
        tmp_cmp_expr_right_14 = mod_consts[33];
        tmp_condition_result_14 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        if (tmp_condition_result_14 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_19;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_args_element_value_19 = par_img;
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 85;
        tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[34], tmp_args_element_value_19);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_img;
            assert(old != NULL);
            par_img = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    goto branch_end_14;
    branch_no_14:;
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        CHECK_OBJECT(par_op_name);
        tmp_cmp_expr_left_15 = par_op_name;
        tmp_cmp_expr_right_15 = mod_consts[35];
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[36];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_op_name);
            tmp_format_value_1 = par_op_name;
            tmp_format_spec_1 = mod_consts[37];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[38];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[37], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame.f_lineno = 89;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 89;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_15:;
    branch_end_14:;
    branch_end_13:;
    branch_end_12:;
    branch_end_11:;
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_5:;
    branch_end_4:;
    branch_end_3:;
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d0b03dbfa9ba2586af0f1b9062579614, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d0b03dbfa9ba2586af0f1b9062579614->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d0b03dbfa9ba2586af0f1b9062579614, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d0b03dbfa9ba2586af0f1b9062579614,
        type_description_1,
        par_img,
        par_op_name,
        par_magnitude,
        par_interpolation,
        par_fill
    );


    // Release cached frame if used for exception.
    if (frame_d0b03dbfa9ba2586af0f1b9062579614 == cache_frame_d0b03dbfa9ba2586af0f1b9062579614) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d0b03dbfa9ba2586af0f1b9062579614);
        cache_frame_d0b03dbfa9ba2586af0f1b9062579614 = NULL;
    }

    assertFrameObject(frame_d0b03dbfa9ba2586af0f1b9062579614);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_img);
    tmp_return_value = par_img;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_img);
    Py_DECREF(par_img);
    par_img = NULL;
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

    Py_XDECREF(par_img);
    par_img = NULL;
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
    CHECK_OBJECT(par_op_name);
    Py_DECREF(par_op_name);
    CHECK_OBJECT(par_magnitude);
    Py_DECREF(par_magnitude);
    CHECK_OBJECT(par_interpolation);
    Py_DECREF(par_interpolation);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_op_name);
    Py_DECREF(par_op_name);
    CHECK_OBJECT(par_magnitude);
    Py_DECREF(par_magnitude);
    CHECK_OBJECT(par_interpolation);
    Py_DECREF(par_interpolation);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$transforms$autoaugment$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_policy = python_pars[1];
    PyObject *par_interpolation = python_pars[2];
    PyObject *par_fill = python_pars[3];
    struct Nuitka_FrameObject *frame_bc768d3db5e1fb005880d58e8f74369e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_bc768d3db5e1fb005880d58e8f74369e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_bc768d3db5e1fb005880d58e8f74369e)) {
        Py_XDECREF(cache_frame_bc768d3db5e1fb005880d58e8f74369e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bc768d3db5e1fb005880d58e8f74369e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bc768d3db5e1fb005880d58e8f74369e = MAKE_FUNCTION_FRAME(codeobj_bc768d3db5e1fb005880d58e8f74369e, module_torchvision$transforms$autoaugment, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bc768d3db5e1fb005880d58e8f74369e->m_type_description == NULL);
    frame_bc768d3db5e1fb005880d58e8f74369e = cache_frame_bc768d3db5e1fb005880d58e8f74369e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bc768d3db5e1fb005880d58e8f74369e);
    assert(Py_REFCNT(frame_bc768d3db5e1fb005880d58e8f74369e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 127;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$transforms$autoaugment, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_bc768d3db5e1fb005880d58e8f74369e->m_frame.f_lineno = 127;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[40]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_policy);
        tmp_assattr_value_1 = par_policy;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[41], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_interpolation);
        tmp_assattr_value_2 = par_interpolation;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[42], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_fill);
        tmp_assattr_value_3 = par_fill;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[43], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_policy);
        tmp_args_element_value_1 = par_policy;
        frame_bc768d3db5e1fb005880d58e8f74369e->m_frame.f_lineno = 131;
        tmp_assattr_value_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[44], tmp_args_element_value_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[45], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bc768d3db5e1fb005880d58e8f74369e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bc768d3db5e1fb005880d58e8f74369e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bc768d3db5e1fb005880d58e8f74369e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bc768d3db5e1fb005880d58e8f74369e,
        type_description_1,
        par_self,
        par_policy,
        par_interpolation,
        par_fill,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_bc768d3db5e1fb005880d58e8f74369e == cache_frame_bc768d3db5e1fb005880d58e8f74369e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bc768d3db5e1fb005880d58e8f74369e);
        cache_frame_bc768d3db5e1fb005880d58e8f74369e = NULL;
    }

    assertFrameObject(frame_bc768d3db5e1fb005880d58e8f74369e);

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
    CHECK_OBJECT(par_policy);
    Py_DECREF(par_policy);
    CHECK_OBJECT(par_interpolation);
    Py_DECREF(par_interpolation);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_policy);
    Py_DECREF(par_policy);
    CHECK_OBJECT(par_interpolation);
    Py_DECREF(par_interpolation);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$transforms$autoaugment$$$function__3__get_policies(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_policy = python_pars[1];
    struct Nuitka_FrameObject *frame_2cfea675fcf1fc2ac84ce8ef5655b27f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2cfea675fcf1fc2ac84ce8ef5655b27f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_2cfea675fcf1fc2ac84ce8ef5655b27f)) {
        Py_XDECREF(cache_frame_2cfea675fcf1fc2ac84ce8ef5655b27f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2cfea675fcf1fc2ac84ce8ef5655b27f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2cfea675fcf1fc2ac84ce8ef5655b27f = MAKE_FUNCTION_FRAME(codeobj_2cfea675fcf1fc2ac84ce8ef5655b27f, module_torchvision$transforms$autoaugment, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2cfea675fcf1fc2ac84ce8ef5655b27f->m_type_description == NULL);
    frame_2cfea675fcf1fc2ac84ce8ef5655b27f = cache_frame_2cfea675fcf1fc2ac84ce8ef5655b27f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2cfea675fcf1fc2ac84ce8ef5655b27f);
    assert(Py_REFCNT(frame_2cfea675fcf1fc2ac84ce8ef5655b27f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_policy);
        tmp_cmp_expr_left_1 = par_policy;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[47]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = LIST_COPY(mod_consts[48]);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_policy);
        tmp_cmp_expr_left_2 = par_policy;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[49]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
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
    tmp_return_value = LIST_COPY(mod_consts[50]);
    goto frame_return_exit_1;
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_policy);
        tmp_cmp_expr_left_3 = par_policy;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[51]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = LIST_COPY(mod_consts[52]);
    goto frame_return_exit_1;
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[53];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_policy);
            tmp_format_value_1 = par_policy;
            tmp_format_spec_1 = mod_consts[37];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 221;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[38];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[37], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 221;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2cfea675fcf1fc2ac84ce8ef5655b27f->m_frame.f_lineno = 221;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 221;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_2cfea675fcf1fc2ac84ce8ef5655b27f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2cfea675fcf1fc2ac84ce8ef5655b27f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2cfea675fcf1fc2ac84ce8ef5655b27f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2cfea675fcf1fc2ac84ce8ef5655b27f,
        type_description_1,
        par_self,
        par_policy
    );


    // Release cached frame if used for exception.
    if (frame_2cfea675fcf1fc2ac84ce8ef5655b27f == cache_frame_2cfea675fcf1fc2ac84ce8ef5655b27f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2cfea675fcf1fc2ac84ce8ef5655b27f);
        cache_frame_2cfea675fcf1fc2ac84ce8ef5655b27f = NULL;
    }

    assertFrameObject(frame_2cfea675fcf1fc2ac84ce8ef5655b27f);

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
    CHECK_OBJECT(par_policy);
    Py_DECREF(par_policy);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_policy);
    Py_DECREF(par_policy);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$transforms$autoaugment$$$function__4__augmentation_space(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_num_bins = python_pars[1];
    PyObject *par_image_size = python_pars[2];
    struct Nuitka_FrameObject *frame_7f0298f0ecb4d5ff1c8b525e530b277f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_7f0298f0ecb4d5ff1c8b525e530b277f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7f0298f0ecb4d5ff1c8b525e530b277f)) {
        Py_XDECREF(cache_frame_7f0298f0ecb4d5ff1c8b525e530b277f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f0298f0ecb4d5ff1c8b525e530b277f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f0298f0ecb4d5ff1c8b525e530b277f = MAKE_FUNCTION_FRAME(codeobj_7f0298f0ecb4d5ff1c8b525e530b277f, module_torchvision$transforms$autoaugment, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_type_description == NULL);
    frame_7f0298f0ecb4d5ff1c8b525e530b277f = cache_frame_7f0298f0ecb4d5ff1c8b525e530b277f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7f0298f0ecb4d5ff1c8b525e530b277f);
    assert(Py_REFCNT(frame_7f0298f0ecb4d5ff1c8b525e530b277f) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_dict_key_1 = mod_consts[0];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[3];
        tmp_args_element_value_2 = mod_consts[56];
        CHECK_OBJECT(par_num_bins);
        tmp_args_element_value_3 = par_num_bins;
        frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 226;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_tuple_element_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[55],
                call_args
            );
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_True;
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_return_value = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_mult_expr_left_2;
            PyObject *tmp_mult_expr_right_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_truediv_expr_left_1;
            PyObject *tmp_truediv_expr_right_1;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_called_instance_13;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_called_instance_14;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_4 = mod_consts[3];
            tmp_args_element_value_5 = mod_consts[56];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_6 = par_num_bins;
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 227;
            {
                PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_tuple_element_2 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_2,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 227;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_2);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[11];
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_7 = mod_consts[3];
            tmp_mult_expr_left_1 = mod_consts[57];
            CHECK_OBJECT(par_image_size);
            tmp_expression_value_2 = par_image_size;
            tmp_subscript_value_1 = mod_consts[4];
            tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
            if (tmp_mult_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 228;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_8 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            Py_DECREF(tmp_mult_expr_right_1);
            if (tmp_args_element_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 228;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_9 = par_num_bins;
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 228;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
                tmp_tuple_element_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
            }

            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 228;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_3);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[13];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[55]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_10 = mod_consts[3];
            tmp_mult_expr_left_2 = mod_consts[57];
            CHECK_OBJECT(par_image_size);
            tmp_expression_value_4 = par_image_size;
            tmp_subscript_value_2 = mod_consts[58];
            tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 1);
            if (tmp_mult_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 229;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_11 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
            Py_DECREF(tmp_mult_expr_right_2);
            if (tmp_args_element_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 229;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_12 = par_num_bins;
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 229;
            {
                PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_4);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[14];
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_13 = mod_consts[3];
            tmp_args_element_value_14 = mod_consts[59];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_15 = par_num_bins;
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 230;
            {
                PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
                tmp_tuple_element_5 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_3,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 230;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_5);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[17];
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_16 = mod_consts[3];
            tmp_args_element_value_17 = mod_consts[60];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_18 = par_num_bins;
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 231;
            {
                PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
                tmp_tuple_element_6 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_4,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 231;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_6);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_5 == NULL)) {
                tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_19 = mod_consts[3];
            tmp_args_element_value_20 = mod_consts[60];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_21 = par_num_bins;
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 232;
            {
                PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
                tmp_tuple_element_7 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_5,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_7);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[21];
            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_6 == NULL)) {
                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_22 = mod_consts[3];
            tmp_args_element_value_23 = mod_consts[60];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_24 = par_num_bins;
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 233;
            {
                PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
                tmp_tuple_element_8 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_6,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_8);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[23];
            tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_7 == NULL)) {
                tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_25 = mod_consts[3];
            tmp_args_element_value_26 = mod_consts[60];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_27 = par_num_bins;
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 234;
            {
                PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
                tmp_tuple_element_9 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_7,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_9);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[25];
            tmp_sub_expr_left_1 = mod_consts[61];
            tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_10 == NULL)) {
                tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_28 = par_num_bins;
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 235;
            tmp_truediv_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_10, mod_consts[62], tmp_args_element_value_28);
            if (tmp_truediv_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_num_bins);
            tmp_sub_expr_left_2 = par_num_bins;
            tmp_sub_expr_right_2 = mod_consts[58];
            tmp_truediv_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_1);

                exception_lineno = 235;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_truediv_expr_right_2 = mod_consts[63];
            tmp_truediv_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_truediv_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_1);

                exception_lineno = 235;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_called_instance_9 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
            Py_DECREF(tmp_truediv_expr_left_1);
            Py_DECREF(tmp_truediv_expr_right_1);
            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 235;
            tmp_called_instance_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[64]);
            Py_DECREF(tmp_called_instance_9);
            if (tmp_called_instance_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 235;
            tmp_sub_expr_right_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[65]);
            Py_DECREF(tmp_called_instance_8);
            if (tmp_sub_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_10 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_right_1);
            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 235;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = Py_False;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_10);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[27];
            tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_11 == NULL)) {
                tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_29 = mod_consts[66];
            tmp_args_element_value_30 = mod_consts[3];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_31 = par_num_bins;
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 236;
            {
                PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
                tmp_tuple_element_11 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_11,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 236;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = Py_False;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_11);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[29];
            tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_12 == NULL)) {
                tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 237;
            tmp_tuple_element_12 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_12,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[68], 0)
            );

            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 237;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = Py_False;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_12);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[31];
            tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_13 == NULL)) {
                tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 238;
            tmp_tuple_element_13 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_13,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[68], 0)
            );

            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = Py_False;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_13);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[33];
            tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_14 == NULL)) {
                tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame.f_lineno = 239;
            tmp_tuple_element_14 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_14,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[68], 0)
            );

            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_False;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_14);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_7f0298f0ecb4d5ff1c8b525e530b277f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f0298f0ecb4d5ff1c8b525e530b277f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f0298f0ecb4d5ff1c8b525e530b277f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f0298f0ecb4d5ff1c8b525e530b277f,
        type_description_1,
        par_self,
        par_num_bins,
        par_image_size
    );


    // Release cached frame if used for exception.
    if (frame_7f0298f0ecb4d5ff1c8b525e530b277f == cache_frame_7f0298f0ecb4d5ff1c8b525e530b277f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f0298f0ecb4d5ff1c8b525e530b277f);
        cache_frame_7f0298f0ecb4d5ff1c8b525e530b277f = NULL;
    }

    assertFrameObject(frame_7f0298f0ecb4d5ff1c8b525e530b277f);

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
    CHECK_OBJECT(par_num_bins);
    Py_DECREF(par_num_bins);
    CHECK_OBJECT(par_image_size);
    Py_DECREF(par_image_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_num_bins);
    Py_DECREF(par_num_bins);
    CHECK_OBJECT(par_image_size);
    Py_DECREF(par_image_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$transforms$autoaugment$$$function__5_get_params(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_transform_num = python_pars[0];
    PyObject *var_policy_id = NULL;
    PyObject *var_probs = NULL;
    PyObject *var_signs = NULL;
    struct Nuitka_FrameObject *frame_97e98bd3b0f6a954ec9dcf0643fad233;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_97e98bd3b0f6a954ec9dcf0643fad233 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_97e98bd3b0f6a954ec9dcf0643fad233)) {
        Py_XDECREF(cache_frame_97e98bd3b0f6a954ec9dcf0643fad233);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97e98bd3b0f6a954ec9dcf0643fad233 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97e98bd3b0f6a954ec9dcf0643fad233 = MAKE_FUNCTION_FRAME(codeobj_97e98bd3b0f6a954ec9dcf0643fad233, module_torchvision$transforms$autoaugment, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_97e98bd3b0f6a954ec9dcf0643fad233->m_type_description == NULL);
    frame_97e98bd3b0f6a954ec9dcf0643fad233 = cache_frame_97e98bd3b0f6a954ec9dcf0643fad233;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_97e98bd3b0f6a954ec9dcf0643fad233);
    assert(Py_REFCNT(frame_97e98bd3b0f6a954ec9dcf0643fad233) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_transform_num);
        tmp_args_element_value_1 = par_transform_num;
        tmp_args_element_value_2 = mod_consts[70];
        frame_97e98bd3b0f6a954ec9dcf0643fad233->m_frame.f_lineno = 249;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_called_instance_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[69],
                call_args
            );
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_97e98bd3b0f6a954ec9dcf0643fad233->m_frame.f_lineno = 249;
        tmp_int_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[71]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_policy_id == NULL);
        var_policy_id = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_3;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_97e98bd3b0f6a954ec9dcf0643fad233->m_frame.f_lineno = 250;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[72],
            PyTuple_GET_ITEM(mod_consts[73], 0)
        );

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_probs == NULL);
        var_probs = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_97e98bd3b0f6a954ec9dcf0643fad233->m_frame.f_lineno = 251;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_4,
            mod_consts[69],
            &PyTuple_GET_ITEM(mod_consts[74], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_signs == NULL);
        var_signs = tmp_assign_source_3;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_97e98bd3b0f6a954ec9dcf0643fad233, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97e98bd3b0f6a954ec9dcf0643fad233->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97e98bd3b0f6a954ec9dcf0643fad233, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97e98bd3b0f6a954ec9dcf0643fad233,
        type_description_1,
        par_transform_num,
        var_policy_id,
        var_probs,
        var_signs
    );


    // Release cached frame if used for exception.
    if (frame_97e98bd3b0f6a954ec9dcf0643fad233 == cache_frame_97e98bd3b0f6a954ec9dcf0643fad233) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_97e98bd3b0f6a954ec9dcf0643fad233);
        cache_frame_97e98bd3b0f6a954ec9dcf0643fad233 = NULL;
    }

    assertFrameObject(frame_97e98bd3b0f6a954ec9dcf0643fad233);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_policy_id);
        tmp_tuple_element_1 = var_policy_id;
        tmp_return_value = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_probs);
        tmp_tuple_element_1 = var_probs;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_signs);
        tmp_tuple_element_1 = var_signs;
        PyTuple_SET_ITEM0(tmp_return_value, 2, tmp_tuple_element_1);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_policy_id);
    Py_DECREF(var_policy_id);
    var_policy_id = NULL;
    CHECK_OBJECT(var_probs);
    Py_DECREF(var_probs);
    var_probs = NULL;
    CHECK_OBJECT(var_signs);
    Py_DECREF(var_signs);
    var_signs = NULL;
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

    Py_XDECREF(var_policy_id);
    var_policy_id = NULL;
    Py_XDECREF(var_probs);
    var_probs = NULL;
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
    CHECK_OBJECT(par_transform_num);
    Py_DECREF(par_transform_num);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_transform_num);
    Py_DECREF(par_transform_num);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$transforms$autoaugment$$$function__6_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_img = python_pars[1];
    PyObject *var_fill = NULL;
    PyObject *var_transform_id = NULL;
    PyObject *var_probs = NULL;
    PyObject *var_signs = NULL;
    PyObject *var_i = NULL;
    PyObject *var_op_name = NULL;
    PyObject *var_p = NULL;
    PyObject *var_magnitude_id = NULL;
    PyObject *var_op_meta = NULL;
    PyObject *var_magnitudes = NULL;
    PyObject *var_signed = NULL;
    PyObject *var_magnitude = NULL;
    PyObject *outline_0_var_f = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    struct Nuitka_FrameObject *frame_4daa29c3e5a4d05a6814684ba59d4ada;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_b99ecbd60a2fc119336c0cc9d46b0416_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_b99ecbd60a2fc119336c0cc9d46b0416_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4daa29c3e5a4d05a6814684ba59d4ada = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4daa29c3e5a4d05a6814684ba59d4ada)) {
        Py_XDECREF(cache_frame_4daa29c3e5a4d05a6814684ba59d4ada);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4daa29c3e5a4d05a6814684ba59d4ada == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4daa29c3e5a4d05a6814684ba59d4ada = MAKE_FUNCTION_FRAME(codeobj_4daa29c3e5a4d05a6814684ba59d4ada, module_torchvision$transforms$autoaugment, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4daa29c3e5a4d05a6814684ba59d4ada->m_type_description == NULL);
    frame_4daa29c3e5a4d05a6814684ba59d4ada = cache_frame_4daa29c3e5a4d05a6814684ba59d4ada;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4daa29c3e5a4d05a6814684ba59d4ada);
    assert(Py_REFCNT(frame_4daa29c3e5a4d05a6814684ba59d4ada) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fill == NULL);
        var_fill = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_img);
        tmp_isinstance_inst_1 = par_img;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_fill);
        tmp_isinstance_inst_2 = var_fill;
        tmp_isinstance_cls_2 = mod_consts[77];
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_fill);
        tmp_float_arg_1 = var_fill;
        tmp_list_element_1 = TO_FLOAT(tmp_float_arg_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_mult_expr_left_1, 0, tmp_list_element_1);
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 265;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_args_element_value_1 = par_img;
        frame_4daa29c3e5a4d05a6814684ba59d4ada->m_frame.f_lineno = 265;
        tmp_mult_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[78], tmp_args_element_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 265;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_fill;
            assert(old != NULL);
            var_fill = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_fill);
        tmp_cmp_expr_left_1 = var_fill;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_fill);
            tmp_iter_arg_1 = var_fill;
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "oooooooooooooo";
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
        if (isFrameUnusable(cache_frame_b99ecbd60a2fc119336c0cc9d46b0416_2)) {
            Py_XDECREF(cache_frame_b99ecbd60a2fc119336c0cc9d46b0416_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b99ecbd60a2fc119336c0cc9d46b0416_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b99ecbd60a2fc119336c0cc9d46b0416_2 = MAKE_FUNCTION_FRAME(codeobj_b99ecbd60a2fc119336c0cc9d46b0416, module_torchvision$transforms$autoaugment, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_b99ecbd60a2fc119336c0cc9d46b0416_2->m_type_description == NULL);
        frame_b99ecbd60a2fc119336c0cc9d46b0416_2 = cache_frame_b99ecbd60a2fc119336c0cc9d46b0416_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b99ecbd60a2fc119336c0cc9d46b0416_2);
        assert(Py_REFCNT(frame_b99ecbd60a2fc119336c0cc9d46b0416_2) == 2);

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
                    type_description_2 = "o";
                    exception_lineno = 267;
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
                PyObject *old = outline_0_var_f;
                outline_0_var_f = tmp_assign_source_7;
                Py_INCREF(outline_0_var_f);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_float_arg_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_f);
            tmp_float_arg_2 = outline_0_var_f;
            tmp_append_value_1 = TO_FLOAT(tmp_float_arg_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_2 = "o";
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
            exception_tb = MAKE_TRACEBACK(frame_b99ecbd60a2fc119336c0cc9d46b0416_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b99ecbd60a2fc119336c0cc9d46b0416_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b99ecbd60a2fc119336c0cc9d46b0416_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b99ecbd60a2fc119336c0cc9d46b0416_2,
            type_description_2,
            outline_0_var_f
        );


        // Release cached frame if used for exception.
        if (frame_b99ecbd60a2fc119336c0cc9d46b0416_2 == cache_frame_b99ecbd60a2fc119336c0cc9d46b0416_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_b99ecbd60a2fc119336c0cc9d46b0416_2);
            cache_frame_b99ecbd60a2fc119336c0cc9d46b0416_2 = NULL;
        }

        assertFrameObject(frame_b99ecbd60a2fc119336c0cc9d46b0416_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_f);
        outline_0_var_f = NULL;
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

        Py_XDECREF(outline_0_var_f);
        outline_0_var_f = NULL;
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
        exception_lineno = 267;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = var_fill;
            assert(old != NULL);
            var_fill = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_end_2:;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[79]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[45]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 269;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_2 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 269;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        frame_4daa29c3e5a4d05a6814684ba59d4ada->m_frame.f_lineno = 269;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_8 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_8;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 269;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 269;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 269;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_11;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 269;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[80];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 269;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        assert(var_transform_id == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_transform_id = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        assert(var_probs == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_probs = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_3;
        assert(var_signs == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_signs = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        tmp_called_value_2 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[45]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_transform_id);
        tmp_subscript_value_1 = var_transform_id;
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_4daa29c3e5a4d05a6814684ba59d4ada->m_frame.f_lineno = 271;
        tmp_iter_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = MAKE_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_15;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_16 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_16 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooo";
                exception_lineno = 271;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_4 = tmp_for_loop_1__iter_value;
        tmp_assign_source_17 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_4, 0, 2);
        if (tmp_assign_source_18 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 271;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_18;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_5, 1, 2);
        if (tmp_assign_source_19 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 271;
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_19;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 271;
                    goto try_except_handler_8;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[81];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 271;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_7;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_20;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_20 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_20;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_iter_arg_5 = tmp_tuple_unpack_2__element_2;
        tmp_assign_source_21 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_22 = UNPACK_NEXT(tmp_unpack_6, 0, 3);
        if (tmp_assign_source_22 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 271;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_23 = UNPACK_NEXT(tmp_unpack_7, 1, 3);
        if (tmp_assign_source_23 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 271;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_23;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_24 = UNPACK_NEXT(tmp_unpack_8, 2, 3);
        if (tmp_assign_source_24 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 271;
            goto try_except_handler_10;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_3;
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_24;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 271;
                    goto try_except_handler_10;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[80];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 271;
            goto try_except_handler_10;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_10:;
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

    goto try_except_handler_9;
    // End of try:
    try_end_4:;
    goto try_end_5;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_7;
    // End of try:
    try_end_5:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_7:;
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

    goto try_except_handler_6;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_25 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_op_name;
            var_op_name = tmp_assign_source_25;
            Py_INCREF(var_op_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_26;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_26 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_26;
            Py_INCREF(var_p);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_27 = tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = var_magnitude_id;
            var_magnitude_id = tmp_assign_source_27;
            Py_INCREF(var_magnitude_id);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_probs);
        tmp_expression_value_6 = var_probs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        CHECK_OBJECT(var_p);
        tmp_cmp_expr_right_2 = var_p;
        tmp_condition_result_4 = RICH_COMPARE_LE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 273;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_7 = par_self;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[83]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_args_element_value_4 = mod_consts[84];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 273;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[85]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 273;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        if (par_img == NULL) {
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 273;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_args_element_value_6 = par_img;
        frame_4daa29c3e5a4d05a6814684ba59d4ada->m_frame.f_lineno = 273;
        tmp_args_element_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_4);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 273;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        frame_4daa29c3e5a4d05a6814684ba59d4ada->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_28 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_op_meta;
            var_op_meta = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_op_meta);
        tmp_expression_value_9 = var_op_meta;
        CHECK_OBJECT(var_op_name);
        tmp_subscript_value_3 = var_op_name;
        tmp_iter_arg_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_3);
        if (tmp_iter_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_11;
        }
        tmp_assign_source_29 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT(tmp_unpack_9, 0, 2);
        if (tmp_assign_source_30 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 274;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_30;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_31 = UNPACK_NEXT(tmp_unpack_10, 1, 2);
        if (tmp_assign_source_31 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooo";
            exception_lineno = 274;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_31;
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

                    type_description_1 = "oooooooooooooo";
                    exception_lineno = 274;
                    goto try_except_handler_12;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[81];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooo";
            exception_lineno = 274;
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

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
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

    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_6;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_32 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_magnitudes;
            var_magnitudes = tmp_assign_source_32;
            Py_INCREF(var_magnitudes);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_33;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_33 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_signed;
            var_signed = tmp_assign_source_33;
            Py_INCREF(var_signed);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_34;
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_float_arg_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_magnitude_id);
        tmp_cmp_expr_left_3 = var_magnitude_id;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_magnitudes);
        tmp_expression_value_10 = var_magnitudes;
        CHECK_OBJECT(var_magnitude_id);
        tmp_subscript_value_4 = var_magnitude_id;
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_4);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        frame_4daa29c3e5a4d05a6814684ba59d4ada->m_frame.f_lineno = 275;
        tmp_float_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[71]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_float_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_34 = TO_FLOAT(tmp_float_arg_3);
        Py_DECREF(tmp_float_arg_3);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_34 = mod_consts[3];
        Py_INCREF(tmp_assign_source_34);
        condexpr_end_1:;
        {
            PyObject *old = var_magnitude;
            var_magnitude = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_signed);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_signed);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_signs);
        tmp_expression_value_11 = var_signs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_5 = var_i;
        tmp_cmp_expr_left_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_5);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_cmp_expr_right_4 = mod_consts[4];
        tmp_and_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_and_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_condition_result_6 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_6 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_imult_expr_left_1;
        PyObject *tmp_imult_expr_right_1;
        CHECK_OBJECT(var_magnitude);
        tmp_imult_expr_left_1 = var_magnitude;
        tmp_imult_expr_right_1 = mod_consts[87];
        tmp_result = INPLACE_OPERATION_MULT_OBJECT_FLOAT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        tmp_assign_source_35 = tmp_imult_expr_left_1;
        var_magnitude = tmp_assign_source_35;

    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        if (par_img == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_kw_call_arg_value_0_1 = par_img;
        CHECK_OBJECT(var_op_name);
        tmp_kw_call_arg_value_1_1 = var_op_name;
        CHECK_OBJECT(var_magnitude);
        tmp_kw_call_arg_value_2_1 = var_magnitude;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_12 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[42]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        if (var_fill == NULL) {
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }

        tmp_kw_call_dict_value_1_1 = var_fill;
        frame_4daa29c3e5a4d05a6814684ba59d4ada->m_frame.f_lineno = 278;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_36 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "oooooooooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = par_img;
            par_img = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    branch_no_4:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 271;
        type_description_1 = "oooooooooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (par_img == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 280;
        type_description_1 = "oooooooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_img;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4daa29c3e5a4d05a6814684ba59d4ada, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4daa29c3e5a4d05a6814684ba59d4ada->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4daa29c3e5a4d05a6814684ba59d4ada, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4daa29c3e5a4d05a6814684ba59d4ada,
        type_description_1,
        par_self,
        par_img,
        var_fill,
        var_transform_id,
        var_probs,
        var_signs,
        var_i,
        var_op_name,
        var_p,
        var_magnitude_id,
        var_op_meta,
        var_magnitudes,
        var_signed,
        var_magnitude
    );


    // Release cached frame if used for exception.
    if (frame_4daa29c3e5a4d05a6814684ba59d4ada == cache_frame_4daa29c3e5a4d05a6814684ba59d4ada) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4daa29c3e5a4d05a6814684ba59d4ada);
        cache_frame_4daa29c3e5a4d05a6814684ba59d4ada = NULL;
    }

    assertFrameObject(frame_4daa29c3e5a4d05a6814684ba59d4ada);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_img);
    par_img = NULL;
    Py_XDECREF(var_fill);
    var_fill = NULL;
    CHECK_OBJECT(var_transform_id);
    Py_DECREF(var_transform_id);
    var_transform_id = NULL;
    CHECK_OBJECT(var_probs);
    Py_DECREF(var_probs);
    var_probs = NULL;
    CHECK_OBJECT(var_signs);
    Py_DECREF(var_signs);
    var_signs = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_op_name);
    var_op_name = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_magnitude_id);
    var_magnitude_id = NULL;
    Py_XDECREF(var_op_meta);
    var_op_meta = NULL;
    Py_XDECREF(var_magnitudes);
    var_magnitudes = NULL;
    Py_XDECREF(var_signed);
    var_signed = NULL;
    Py_XDECREF(var_magnitude);
    var_magnitude = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_img);
    par_img = NULL;
    Py_XDECREF(var_fill);
    var_fill = NULL;
    Py_XDECREF(var_transform_id);
    var_transform_id = NULL;
    Py_XDECREF(var_probs);
    var_probs = NULL;
    Py_XDECREF(var_signs);
    var_signs = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_op_name);
    var_op_name = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_magnitude_id);
    var_magnitude_id = NULL;
    Py_XDECREF(var_op_meta);
    var_op_meta = NULL;
    Py_XDECREF(var_magnitudes);
    var_magnitudes = NULL;
    Py_XDECREF(var_signed);
    var_signed = NULL;
    Py_XDECREF(var_magnitude);
    var_magnitude = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

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


static PyObject *impl_torchvision$transforms$autoaugment$$$function__7___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_a74df2dee79e283dbcf1330406c54292;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a74df2dee79e283dbcf1330406c54292 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a74df2dee79e283dbcf1330406c54292)) {
        Py_XDECREF(cache_frame_a74df2dee79e283dbcf1330406c54292);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a74df2dee79e283dbcf1330406c54292 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a74df2dee79e283dbcf1330406c54292 = MAKE_FUNCTION_FRAME(codeobj_a74df2dee79e283dbcf1330406c54292, module_torchvision$transforms$autoaugment, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a74df2dee79e283dbcf1330406c54292->m_type_description == NULL);
    frame_a74df2dee79e283dbcf1330406c54292 = cache_frame_a74df2dee79e283dbcf1330406c54292;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a74df2dee79e283dbcf1330406c54292);
    assert(Py_REFCNT(frame_a74df2dee79e283dbcf1330406c54292) == 2);

    // Framed code:
    {
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[90]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[37];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(6);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[91];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[41]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[37];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[92];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[43]);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[37];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[93];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = PyUnicode_Join(mod_consts[37], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
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
        exception_tb = MAKE_TRACEBACK(frame_a74df2dee79e283dbcf1330406c54292, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a74df2dee79e283dbcf1330406c54292->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a74df2dee79e283dbcf1330406c54292, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a74df2dee79e283dbcf1330406c54292,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_a74df2dee79e283dbcf1330406c54292 == cache_frame_a74df2dee79e283dbcf1330406c54292) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a74df2dee79e283dbcf1330406c54292);
        cache_frame_a74df2dee79e283dbcf1330406c54292 = NULL;
    }

    assertFrameObject(frame_a74df2dee79e283dbcf1330406c54292);

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


static PyObject *impl_torchvision$transforms$autoaugment$$$function__8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_num_ops = python_pars[1];
    PyObject *par_magnitude = python_pars[2];
    PyObject *par_num_magnitude_bins = python_pars[3];
    PyObject *par_interpolation = python_pars[4];
    PyObject *par_fill = python_pars[5];
    struct Nuitka_FrameObject *frame_9d0edb75d569cd59f3ba2328ed817086;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_9d0edb75d569cd59f3ba2328ed817086 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9d0edb75d569cd59f3ba2328ed817086)) {
        Py_XDECREF(cache_frame_9d0edb75d569cd59f3ba2328ed817086);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d0edb75d569cd59f3ba2328ed817086 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d0edb75d569cd59f3ba2328ed817086 = MAKE_FUNCTION_FRAME(codeobj_9d0edb75d569cd59f3ba2328ed817086, module_torchvision$transforms$autoaugment, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9d0edb75d569cd59f3ba2328ed817086->m_type_description == NULL);
    frame_9d0edb75d569cd59f3ba2328ed817086 = cache_frame_9d0edb75d569cd59f3ba2328ed817086;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9d0edb75d569cd59f3ba2328ed817086);
    assert(Py_REFCNT(frame_9d0edb75d569cd59f3ba2328ed817086) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 313;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$transforms$autoaugment, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        frame_9d0edb75d569cd59f3ba2328ed817086->m_frame.f_lineno = 313;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[40]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_num_ops);
        tmp_assattr_value_1 = par_num_ops;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[94], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_magnitude);
        tmp_assattr_value_2 = par_magnitude;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[95], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_num_magnitude_bins);
        tmp_assattr_value_3 = par_num_magnitude_bins;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[96], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_interpolation);
        tmp_assattr_value_4 = par_interpolation;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[42], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_fill);
        tmp_assattr_value_5 = par_fill;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[43], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9d0edb75d569cd59f3ba2328ed817086, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d0edb75d569cd59f3ba2328ed817086->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d0edb75d569cd59f3ba2328ed817086, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d0edb75d569cd59f3ba2328ed817086,
        type_description_1,
        par_self,
        par_num_ops,
        par_magnitude,
        par_num_magnitude_bins,
        par_interpolation,
        par_fill,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_9d0edb75d569cd59f3ba2328ed817086 == cache_frame_9d0edb75d569cd59f3ba2328ed817086) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9d0edb75d569cd59f3ba2328ed817086);
        cache_frame_9d0edb75d569cd59f3ba2328ed817086 = NULL;
    }

    assertFrameObject(frame_9d0edb75d569cd59f3ba2328ed817086);

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
    CHECK_OBJECT(par_num_ops);
    Py_DECREF(par_num_ops);
    CHECK_OBJECT(par_magnitude);
    Py_DECREF(par_magnitude);
    CHECK_OBJECT(par_num_magnitude_bins);
    Py_DECREF(par_num_magnitude_bins);
    CHECK_OBJECT(par_interpolation);
    Py_DECREF(par_interpolation);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_num_ops);
    Py_DECREF(par_num_ops);
    CHECK_OBJECT(par_magnitude);
    Py_DECREF(par_magnitude);
    CHECK_OBJECT(par_num_magnitude_bins);
    Py_DECREF(par_num_magnitude_bins);
    CHECK_OBJECT(par_interpolation);
    Py_DECREF(par_interpolation);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$transforms$autoaugment$$$function__9__augmentation_space(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_num_bins = python_pars[1];
    PyObject *par_image_size = python_pars[2];
    struct Nuitka_FrameObject *frame_ba3cafdb6201ce2e8b3e6418ffba2537;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ba3cafdb6201ce2e8b3e6418ffba2537 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ba3cafdb6201ce2e8b3e6418ffba2537)) {
        Py_XDECREF(cache_frame_ba3cafdb6201ce2e8b3e6418ffba2537);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba3cafdb6201ce2e8b3e6418ffba2537 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba3cafdb6201ce2e8b3e6418ffba2537 = MAKE_FUNCTION_FRAME(codeobj_ba3cafdb6201ce2e8b3e6418ffba2537, module_torchvision$transforms$autoaugment, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_type_description == NULL);
    frame_ba3cafdb6201ce2e8b3e6418ffba2537 = cache_frame_ba3cafdb6201ce2e8b3e6418ffba2537;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ba3cafdb6201ce2e8b3e6418ffba2537);
    assert(Py_REFCNT(frame_ba3cafdb6201ce2e8b3e6418ffba2537) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        tmp_dict_key_1 = mod_consts[35];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 323;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[67],
            PyTuple_GET_ITEM(mod_consts[68], 0)
        );

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_False;
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_return_value = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_mult_expr_left_1;
            PyObject *tmp_mult_expr_right_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_mult_expr_left_2;
            PyObject *tmp_mult_expr_right_2;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_2;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_truediv_expr_left_1;
            PyObject *tmp_truediv_expr_right_1;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_called_instance_13;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_called_instance_14;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[0];
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_1 = mod_consts[3];
            tmp_args_element_value_2 = mod_consts[56];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_3 = par_num_bins;
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 324;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_tuple_element_2 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_2,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 324;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_2);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_4 = mod_consts[3];
            tmp_args_element_value_5 = mod_consts[56];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_6 = par_num_bins;
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 325;
            {
                PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_tuple_element_3 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_3,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_3);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[11];
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_7 = mod_consts[3];
            tmp_mult_expr_left_1 = mod_consts[57];
            CHECK_OBJECT(par_image_size);
            tmp_expression_value_2 = par_image_size;
            tmp_subscript_value_1 = mod_consts[4];
            tmp_mult_expr_right_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
            if (tmp_mult_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 326;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_8 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
            Py_DECREF(tmp_mult_expr_right_1);
            if (tmp_args_element_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_1);

                exception_lineno = 326;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_9 = par_num_bins;
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 326;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
                tmp_tuple_element_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
            }

            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_8);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 326;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_4);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[13];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[55]);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_10 = mod_consts[3];
            tmp_mult_expr_left_2 = mod_consts[57];
            CHECK_OBJECT(par_image_size);
            tmp_expression_value_4 = par_image_size;
            tmp_subscript_value_2 = mod_consts[58];
            tmp_mult_expr_right_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 1);
            if (tmp_mult_expr_right_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 327;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_11 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
            Py_DECREF(tmp_mult_expr_right_2);
            if (tmp_args_element_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_2);

                exception_lineno = 327;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_12 = par_num_bins;
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 327;
            {
                PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
                tmp_tuple_element_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
            }

            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_11);
            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_5);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[14];
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_13 = mod_consts[3];
            tmp_args_element_value_14 = mod_consts[59];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_15 = par_num_bins;
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 328;
            {
                PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
                tmp_tuple_element_6 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_4,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_6);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[17];
            tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_5 == NULL)) {
                tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_16 = mod_consts[3];
            tmp_args_element_value_17 = mod_consts[60];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_18 = par_num_bins;
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 329;
            {
                PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
                tmp_tuple_element_7 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_5,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 329;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_7);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_6 == NULL)) {
                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_19 = mod_consts[3];
            tmp_args_element_value_20 = mod_consts[60];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_21 = par_num_bins;
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 330;
            {
                PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
                tmp_tuple_element_8 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_6,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 330;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_8);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[21];
            tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_7 == NULL)) {
                tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_22 = mod_consts[3];
            tmp_args_element_value_23 = mod_consts[60];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_24 = par_num_bins;
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 331;
            {
                PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
                tmp_tuple_element_9 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_7,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 331;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_9);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[23];
            tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_8 == NULL)) {
                tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_25 = mod_consts[3];
            tmp_args_element_value_26 = mod_consts[60];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_27 = par_num_bins;
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 332;
            {
                PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
                tmp_tuple_element_10 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_8,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 332;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_10);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[25];
            tmp_sub_expr_left_1 = mod_consts[61];
            tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_11 == NULL)) {
                tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_28 = par_num_bins;
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 333;
            tmp_truediv_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_11, mod_consts[62], tmp_args_element_value_28);
            if (tmp_truediv_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_num_bins);
            tmp_sub_expr_left_2 = par_num_bins;
            tmp_sub_expr_right_2 = mod_consts[58];
            tmp_truediv_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_1);

                exception_lineno = 333;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_truediv_expr_right_2 = mod_consts[63];
            tmp_truediv_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_truediv_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_1);

                exception_lineno = 333;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_called_instance_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
            Py_DECREF(tmp_truediv_expr_left_1);
            Py_DECREF(tmp_truediv_expr_right_1);
            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 333;
            tmp_called_instance_9 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[64]);
            Py_DECREF(tmp_called_instance_10);
            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 333;
            tmp_sub_expr_right_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[65]);
            Py_DECREF(tmp_called_instance_9);
            if (tmp_sub_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_11 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_right_1);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 333;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = Py_False;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_11);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[27];
            tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_12 == NULL)) {
                tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_29 = mod_consts[66];
            tmp_args_element_value_30 = mod_consts[3];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_31 = par_num_bins;
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 334;
            {
                PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
                tmp_tuple_element_12 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_12,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 334;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = Py_False;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_12);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[29];
            tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_13 == NULL)) {
                tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 335;
            tmp_tuple_element_13 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_13,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[68], 0)
            );

            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 335;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = Py_False;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_13);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[31];
            tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_14 == NULL)) {
                tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame.f_lineno = 336;
            tmp_tuple_element_14 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_14,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[68], 0)
            );

            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 336;
                type_description_1 = "ooo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_False;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_14);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_ba3cafdb6201ce2e8b3e6418ffba2537, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba3cafdb6201ce2e8b3e6418ffba2537->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba3cafdb6201ce2e8b3e6418ffba2537, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba3cafdb6201ce2e8b3e6418ffba2537,
        type_description_1,
        par_self,
        par_num_bins,
        par_image_size
    );


    // Release cached frame if used for exception.
    if (frame_ba3cafdb6201ce2e8b3e6418ffba2537 == cache_frame_ba3cafdb6201ce2e8b3e6418ffba2537) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ba3cafdb6201ce2e8b3e6418ffba2537);
        cache_frame_ba3cafdb6201ce2e8b3e6418ffba2537 = NULL;
    }

    assertFrameObject(frame_ba3cafdb6201ce2e8b3e6418ffba2537);

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
    CHECK_OBJECT(par_num_bins);
    Py_DECREF(par_num_bins);
    CHECK_OBJECT(par_image_size);
    Py_DECREF(par_image_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_num_bins);
    Py_DECREF(par_num_bins);
    CHECK_OBJECT(par_image_size);
    Py_DECREF(par_image_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$transforms$autoaugment$$$function__10_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_img = python_pars[1];
    PyObject *var_fill = NULL;
    PyObject *var__ = NULL;
    PyObject *var_op_meta = NULL;
    PyObject *var_op_index = NULL;
    PyObject *var_op_name = NULL;
    PyObject *var_magnitudes = NULL;
    PyObject *var_signed = NULL;
    PyObject *var_magnitude = NULL;
    PyObject *outline_0_var_f = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_b0032c46e5238e28ef34849b27595621;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_0b4220303ade1820ae0be1210b27db7c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_0b4220303ade1820ae0be1210b27db7c_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b0032c46e5238e28ef34849b27595621 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b0032c46e5238e28ef34849b27595621)) {
        Py_XDECREF(cache_frame_b0032c46e5238e28ef34849b27595621);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0032c46e5238e28ef34849b27595621 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0032c46e5238e28ef34849b27595621 = MAKE_FUNCTION_FRAME(codeobj_b0032c46e5238e28ef34849b27595621, module_torchvision$transforms$autoaugment, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b0032c46e5238e28ef34849b27595621->m_type_description == NULL);
    frame_b0032c46e5238e28ef34849b27595621 = cache_frame_b0032c46e5238e28ef34849b27595621;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b0032c46e5238e28ef34849b27595621);
    assert(Py_REFCNT(frame_b0032c46e5238e28ef34849b27595621) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fill == NULL);
        var_fill = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_img);
        tmp_isinstance_inst_1 = par_img;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_fill);
        tmp_isinstance_inst_2 = var_fill;
        tmp_isinstance_cls_2 = mod_consts[77];
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_fill);
        tmp_float_arg_1 = var_fill;
        tmp_list_element_1 = TO_FLOAT(tmp_float_arg_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_mult_expr_left_1, 0, tmp_list_element_1);
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_args_element_value_1 = par_img;
        frame_b0032c46e5238e28ef34849b27595621->m_frame.f_lineno = 349;
        tmp_mult_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[78], tmp_args_element_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_fill;
            assert(old != NULL);
            var_fill = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_fill);
        tmp_cmp_expr_left_1 = var_fill;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_fill);
            tmp_iter_arg_1 = var_fill;
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_1 = "oooooooooo";
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
        if (isFrameUnusable(cache_frame_0b4220303ade1820ae0be1210b27db7c_2)) {
            Py_XDECREF(cache_frame_0b4220303ade1820ae0be1210b27db7c_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_0b4220303ade1820ae0be1210b27db7c_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_0b4220303ade1820ae0be1210b27db7c_2 = MAKE_FUNCTION_FRAME(codeobj_0b4220303ade1820ae0be1210b27db7c, module_torchvision$transforms$autoaugment, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_0b4220303ade1820ae0be1210b27db7c_2->m_type_description == NULL);
        frame_0b4220303ade1820ae0be1210b27db7c_2 = cache_frame_0b4220303ade1820ae0be1210b27db7c_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_0b4220303ade1820ae0be1210b27db7c_2);
        assert(Py_REFCNT(frame_0b4220303ade1820ae0be1210b27db7c_2) == 2);

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
                    type_description_2 = "o";
                    exception_lineno = 351;
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
                PyObject *old = outline_0_var_f;
                outline_0_var_f = tmp_assign_source_7;
                Py_INCREF(outline_0_var_f);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_float_arg_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_f);
            tmp_float_arg_2 = outline_0_var_f;
            tmp_append_value_1 = TO_FLOAT(tmp_float_arg_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_2 = "o";
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
            exception_tb = MAKE_TRACEBACK(frame_0b4220303ade1820ae0be1210b27db7c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_0b4220303ade1820ae0be1210b27db7c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_0b4220303ade1820ae0be1210b27db7c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_0b4220303ade1820ae0be1210b27db7c_2,
            type_description_2,
            outline_0_var_f
        );


        // Release cached frame if used for exception.
        if (frame_0b4220303ade1820ae0be1210b27db7c_2 == cache_frame_0b4220303ade1820ae0be1210b27db7c_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_0b4220303ade1820ae0be1210b27db7c_2);
            cache_frame_0b4220303ade1820ae0be1210b27db7c_2 = NULL;
        }

        assertFrameObject(frame_0b4220303ade1820ae0be1210b27db7c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_f);
        outline_0_var_f = NULL;
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

        Py_XDECREF(outline_0_var_f);
        outline_0_var_f = NULL;
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
        exception_lineno = 351;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = var_fill;
            assert(old != NULL);
            var_fill = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_end_2:;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_xrange_low_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[94]);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_2 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "oooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooo";
                exception_lineno = 353;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_10;
            Py_INCREF(var__);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 354;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_3 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[83]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 354;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_4 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[96]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 354;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 354;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[85]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 354;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        if (par_img == NULL) {
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 354;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }

        tmp_args_element_value_4 = par_img;
        frame_b0032c46e5238e28ef34849b27595621->m_frame.f_lineno = 354;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 354;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        frame_b0032c46e5238e28ef34849b27595621->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_op_meta;
            var_op_meta = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[69]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_op_meta);
        tmp_len_arg_1 = var_op_meta;
        tmp_args_element_value_5 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 355;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_args_element_value_6 = mod_consts[70];
        frame_b0032c46e5238e28ef34849b27595621->m_frame.f_lineno = 355;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        frame_b0032c46e5238e28ef34849b27595621->m_frame.f_lineno = 355;
        tmp_int_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[71]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_12 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_op_index;
            var_op_index = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_op_meta);
        tmp_expression_value_8 = var_op_meta;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[97]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        frame_b0032c46e5238e28ef34849b27595621->m_frame.f_lineno = 356;
        tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_7 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(var_op_index);
        tmp_subscript_value_1 = var_op_index;
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_op_name;
            var_op_name = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_op_meta);
        tmp_expression_value_9 = var_op_meta;
        CHECK_OBJECT(var_op_name);
        tmp_subscript_value_2 = var_op_name;
        tmp_iter_arg_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_2);
        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_14 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_3);
        Py_DECREF(tmp_iter_arg_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "oooooooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
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
            exception_lineno = 357;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooo";
            exception_lineno = 357;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_16;
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
                    exception_lineno = 357;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[81];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooo";
            exception_lineno = 357;
            goto try_except_handler_6;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_17 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_magnitudes;
            var_magnitudes = tmp_assign_source_17;
            Py_INCREF(var_magnitudes);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_18 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_signed;
            var_signed = tmp_assign_source_18;
            Py_INCREF(var_signed);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_19;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_float_arg_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(var_magnitudes);
        tmp_expression_value_10 = var_magnitudes;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[98]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_cmp_expr_right_2 = mod_consts[4];
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_magnitudes);
        tmp_expression_value_11 = var_magnitudes;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 358;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_12 = par_self;
        tmp_subscript_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[95]);
        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        frame_b0032c46e5238e28ef34849b27595621->m_frame.f_lineno = 358;
        tmp_float_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[71]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_float_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_19 = TO_FLOAT(tmp_float_arg_3);
        Py_DECREF(tmp_float_arg_3);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_19 = mod_consts[3];
        Py_INCREF(tmp_assign_source_19);
        condexpr_end_1:;
        {
            PyObject *old = var_magnitude;
            var_magnitude = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_signed);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_signed);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        frame_b0032c46e5238e28ef34849b27595621->m_frame.f_lineno = 359;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_4,
            mod_consts[69],
            &PyTuple_GET_ITEM(mod_consts[99], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 359;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_imult_expr_left_1;
        PyObject *tmp_imult_expr_right_1;
        CHECK_OBJECT(var_magnitude);
        tmp_imult_expr_left_1 = var_magnitude;
        tmp_imult_expr_right_1 = mod_consts[87];
        tmp_result = INPLACE_OPERATION_MULT_OBJECT_FLOAT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_20 = tmp_imult_expr_left_1;
        var_magnitude = tmp_assign_source_20;

    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        if (par_img == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 361;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }

        tmp_kw_call_arg_value_0_1 = par_img;
        CHECK_OBJECT(var_op_name);
        tmp_kw_call_arg_value_1_1 = var_op_name;
        CHECK_OBJECT(var_magnitude);
        tmp_kw_call_arg_value_2_1 = var_magnitude;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[82]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 361;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }

        tmp_expression_value_13 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[42]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        if (var_fill == NULL) {
            Py_DECREF(tmp_kw_call_dict_value_0_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[43]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 361;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }

        tmp_kw_call_dict_value_1_1 = var_fill;
        frame_b0032c46e5238e28ef34849b27595621->m_frame.f_lineno = 361;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "oooooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = par_img;
            par_img = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 353;
        type_description_1 = "oooooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_4:;
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
    try_end_3:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    if (par_img == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 363;
        type_description_1 = "oooooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_img;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b0032c46e5238e28ef34849b27595621, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0032c46e5238e28ef34849b27595621->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0032c46e5238e28ef34849b27595621, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0032c46e5238e28ef34849b27595621,
        type_description_1,
        par_self,
        par_img,
        var_fill,
        var__,
        var_op_meta,
        var_op_index,
        var_op_name,
        var_magnitudes,
        var_signed,
        var_magnitude
    );


    // Release cached frame if used for exception.
    if (frame_b0032c46e5238e28ef34849b27595621 == cache_frame_b0032c46e5238e28ef34849b27595621) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b0032c46e5238e28ef34849b27595621);
        cache_frame_b0032c46e5238e28ef34849b27595621 = NULL;
    }

    assertFrameObject(frame_b0032c46e5238e28ef34849b27595621);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_img);
    par_img = NULL;
    Py_XDECREF(var_fill);
    var_fill = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_op_meta);
    var_op_meta = NULL;
    Py_XDECREF(var_op_index);
    var_op_index = NULL;
    Py_XDECREF(var_op_name);
    var_op_name = NULL;
    Py_XDECREF(var_magnitudes);
    var_magnitudes = NULL;
    Py_XDECREF(var_signed);
    var_signed = NULL;
    Py_XDECREF(var_magnitude);
    var_magnitude = NULL;
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

    Py_XDECREF(par_img);
    par_img = NULL;
    Py_XDECREF(var_fill);
    var_fill = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_op_meta);
    var_op_meta = NULL;
    Py_XDECREF(var_op_index);
    var_op_index = NULL;
    Py_XDECREF(var_op_name);
    var_op_name = NULL;
    Py_XDECREF(var_magnitudes);
    var_magnitudes = NULL;
    Py_XDECREF(var_signed);
    var_signed = NULL;
    Py_XDECREF(var_magnitude);
    var_magnitude = NULL;
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


static PyObject *impl_torchvision$transforms$autoaugment$$$function__11___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_s = NULL;
    struct Nuitka_FrameObject *frame_4ee756858305195a77df8700f0465e3f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4ee756858305195a77df8700f0465e3f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4ee756858305195a77df8700f0465e3f)) {
        Py_XDECREF(cache_frame_4ee756858305195a77df8700f0465e3f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4ee756858305195a77df8700f0465e3f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4ee756858305195a77df8700f0465e3f = MAKE_FUNCTION_FRAME(codeobj_4ee756858305195a77df8700f0465e3f, module_torchvision$transforms$autoaugment, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4ee756858305195a77df8700f0465e3f->m_type_description == NULL);
    frame_4ee756858305195a77df8700f0465e3f = cache_frame_4ee756858305195a77df8700f0465e3f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4ee756858305195a77df8700f0465e3f);
    assert(Py_REFCNT(frame_4ee756858305195a77df8700f0465e3f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[90]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[37];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(12);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_format_spec_4;
            PyObject *tmp_format_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_format_spec_5;
            PyObject *tmp_format_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_format_spec_6;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[101];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[94]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[37];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[102];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[95]);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[37];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[103];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[96]);
            if (tmp_format_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_4 = mod_consts[37];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[104];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_format_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[42]);
            if (tmp_format_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_5 = mod_consts[37];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_5, tmp_format_spec_5);
            Py_DECREF(tmp_format_value_5);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 8, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[92];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 9, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_7 = par_self;
            tmp_format_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[43]);
            if (tmp_format_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_6 = mod_consts[37];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_6, tmp_format_spec_6);
            Py_DECREF(tmp_format_value_6);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 367;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 10, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[93];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 11, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[37], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4ee756858305195a77df8700f0465e3f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4ee756858305195a77df8700f0465e3f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4ee756858305195a77df8700f0465e3f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4ee756858305195a77df8700f0465e3f,
        type_description_1,
        par_self,
        var_s
    );


    // Release cached frame if used for exception.
    if (frame_4ee756858305195a77df8700f0465e3f == cache_frame_4ee756858305195a77df8700f0465e3f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4ee756858305195a77df8700f0465e3f);
        cache_frame_4ee756858305195a77df8700f0465e3f = NULL;
    }

    assertFrameObject(frame_4ee756858305195a77df8700f0465e3f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_s);
    tmp_return_value = var_s;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_s);
    Py_DECREF(var_s);
    var_s = NULL;
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


static PyObject *impl_torchvision$transforms$autoaugment$$$function__12___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_num_magnitude_bins = python_pars[1];
    PyObject *par_interpolation = python_pars[2];
    PyObject *par_fill = python_pars[3];
    struct Nuitka_FrameObject *frame_b829629fcab49d5d41e9133a9183ab4d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b829629fcab49d5d41e9133a9183ab4d = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b829629fcab49d5d41e9133a9183ab4d)) {
        Py_XDECREF(cache_frame_b829629fcab49d5d41e9133a9183ab4d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b829629fcab49d5d41e9133a9183ab4d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b829629fcab49d5d41e9133a9183ab4d = MAKE_FUNCTION_FRAME(codeobj_b829629fcab49d5d41e9133a9183ab4d, module_torchvision$transforms$autoaugment, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b829629fcab49d5d41e9133a9183ab4d->m_type_description == NULL);
    frame_b829629fcab49d5d41e9133a9183ab4d = cache_frame_b829629fcab49d5d41e9133a9183ab4d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b829629fcab49d5d41e9133a9183ab4d);
    assert(Py_REFCNT(frame_b829629fcab49d5d41e9133a9183ab4d) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[39]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 400;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$transforms$autoaugment, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        frame_b829629fcab49d5d41e9133a9183ab4d->m_frame.f_lineno = 400;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[40]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_num_magnitude_bins);
        tmp_assattr_value_1 = par_num_magnitude_bins;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[96], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_interpolation);
        tmp_assattr_value_2 = par_interpolation;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[42], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_fill);
        tmp_assattr_value_3 = par_fill;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[43], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b829629fcab49d5d41e9133a9183ab4d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b829629fcab49d5d41e9133a9183ab4d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b829629fcab49d5d41e9133a9183ab4d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b829629fcab49d5d41e9133a9183ab4d,
        type_description_1,
        par_self,
        par_num_magnitude_bins,
        par_interpolation,
        par_fill,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b829629fcab49d5d41e9133a9183ab4d == cache_frame_b829629fcab49d5d41e9133a9183ab4d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b829629fcab49d5d41e9133a9183ab4d);
        cache_frame_b829629fcab49d5d41e9133a9183ab4d = NULL;
    }

    assertFrameObject(frame_b829629fcab49d5d41e9133a9183ab4d);

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
    CHECK_OBJECT(par_num_magnitude_bins);
    Py_DECREF(par_num_magnitude_bins);
    CHECK_OBJECT(par_interpolation);
    Py_DECREF(par_interpolation);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_num_magnitude_bins);
    Py_DECREF(par_num_magnitude_bins);
    CHECK_OBJECT(par_interpolation);
    Py_DECREF(par_interpolation);
    CHECK_OBJECT(par_fill);
    Py_DECREF(par_fill);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$transforms$autoaugment$$$function__13__augmentation_space(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_num_bins = python_pars[1];
    struct Nuitka_FrameObject *frame_942d356b514c4005186d2830f3544426;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_942d356b514c4005186d2830f3544426 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_942d356b514c4005186d2830f3544426)) {
        Py_XDECREF(cache_frame_942d356b514c4005186d2830f3544426);

#if _DEBUG_REFCOUNTS
        if (cache_frame_942d356b514c4005186d2830f3544426 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_942d356b514c4005186d2830f3544426 = MAKE_FUNCTION_FRAME(codeobj_942d356b514c4005186d2830f3544426, module_torchvision$transforms$autoaugment, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_942d356b514c4005186d2830f3544426->m_type_description == NULL);
    frame_942d356b514c4005186d2830f3544426 = cache_frame_942d356b514c4005186d2830f3544426;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_942d356b514c4005186d2830f3544426);
    assert(Py_REFCNT(frame_942d356b514c4005186d2830f3544426) == 2);

    // Framed code:
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_instance_1;
        tmp_dict_key_1 = mod_consts[35];
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 408;
        tmp_tuple_element_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[67],
            PyTuple_GET_ITEM(mod_consts[68], 0)
        );

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = Py_False;
        PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_1);
        tmp_return_value = _PyDict_NewPresized( 14 );
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_args_element_value_3;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_args_element_value_5;
            PyObject *tmp_args_element_value_6;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_args_element_value_7;
            PyObject *tmp_args_element_value_8;
            PyObject *tmp_args_element_value_9;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_called_instance_5;
            PyObject *tmp_args_element_value_10;
            PyObject *tmp_args_element_value_11;
            PyObject *tmp_args_element_value_12;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_13;
            PyObject *tmp_args_element_value_14;
            PyObject *tmp_args_element_value_15;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_called_instance_7;
            PyObject *tmp_args_element_value_16;
            PyObject *tmp_args_element_value_17;
            PyObject *tmp_args_element_value_18;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_called_instance_8;
            PyObject *tmp_args_element_value_19;
            PyObject *tmp_args_element_value_20;
            PyObject *tmp_args_element_value_21;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_called_instance_9;
            PyObject *tmp_args_element_value_22;
            PyObject *tmp_args_element_value_23;
            PyObject *tmp_args_element_value_24;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_called_instance_10;
            PyObject *tmp_args_element_value_25;
            PyObject *tmp_args_element_value_26;
            PyObject *tmp_args_element_value_27;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_called_instance_11;
            PyObject *tmp_called_instance_12;
            PyObject *tmp_truediv_expr_left_1;
            PyObject *tmp_truediv_expr_right_1;
            PyObject *tmp_called_instance_13;
            PyObject *tmp_args_element_value_28;
            PyObject *tmp_truediv_expr_left_2;
            PyObject *tmp_truediv_expr_right_2;
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_called_instance_14;
            PyObject *tmp_args_element_value_29;
            PyObject *tmp_args_element_value_30;
            PyObject *tmp_args_element_value_31;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_called_instance_15;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_called_instance_16;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[0];
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_1 = mod_consts[3];
            tmp_args_element_value_2 = mod_consts[105];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_3 = par_num_bins;
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 409;
            {
                PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
                tmp_tuple_element_2 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_2,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_2);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_3 == NULL)) {
                tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 410;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_4 = mod_consts[3];
            tmp_args_element_value_5 = mod_consts[105];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_6 = par_num_bins;
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 410;
            {
                PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
                tmp_tuple_element_3 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_3,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 410;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_3);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[11];
            tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_4 == NULL)) {
                tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_7 = mod_consts[3];
            tmp_args_element_value_8 = mod_consts[106];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_9 = par_num_bins;
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 411;
            {
                PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
                tmp_tuple_element_4 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_4,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 411;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_4);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[13];
            tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_5 == NULL)) {
                tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_10 = mod_consts[3];
            tmp_args_element_value_11 = mod_consts[106];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_12 = par_num_bins;
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 412;
            {
                PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
                tmp_tuple_element_5 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_5,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_5);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[14];
            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_6 == NULL)) {
                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_13 = mod_consts[3];
            tmp_args_element_value_14 = mod_consts[107];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_15 = par_num_bins;
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 413;
            {
                PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
                tmp_tuple_element_6 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_6,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_6);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[17];
            tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_7 == NULL)) {
                tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_16 = mod_consts[3];
            tmp_args_element_value_17 = mod_consts[105];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_18 = par_num_bins;
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 414;
            {
                PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18};
                tmp_tuple_element_7 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_7,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 414;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_7);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_8 == NULL)) {
                tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 415;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_19 = mod_consts[3];
            tmp_args_element_value_20 = mod_consts[105];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_21 = par_num_bins;
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 415;
            {
                PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21};
                tmp_tuple_element_8 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_8,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 415;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_8);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[21];
            tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_9 == NULL)) {
                tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_22 = mod_consts[3];
            tmp_args_element_value_23 = mod_consts[105];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_24 = par_num_bins;
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 416;
            {
                PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24};
                tmp_tuple_element_9 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_9,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 416;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_9);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[23];
            tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_10 == NULL)) {
                tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_25 = mod_consts[3];
            tmp_args_element_value_26 = mod_consts[105];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_27 = par_num_bins;
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 417;
            {
                PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
                tmp_tuple_element_10 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_10,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 417;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = Py_True;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_10);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[25];
            tmp_sub_expr_left_1 = mod_consts[61];
            tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_13 == NULL)) {
                tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_28 = par_num_bins;
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 418;
            tmp_truediv_expr_left_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_13, mod_consts[62], tmp_args_element_value_28);
            if (tmp_truediv_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            CHECK_OBJECT(par_num_bins);
            tmp_sub_expr_left_2 = par_num_bins;
            tmp_sub_expr_right_2 = mod_consts[58];
            tmp_truediv_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            if (tmp_truediv_expr_left_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_1);

                exception_lineno = 418;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_truediv_expr_right_2 = mod_consts[108];
            tmp_truediv_expr_right_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
            Py_DECREF(tmp_truediv_expr_left_2);
            if (tmp_truediv_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_truediv_expr_left_1);

                exception_lineno = 418;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_called_instance_12 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
            Py_DECREF(tmp_truediv_expr_left_1);
            Py_DECREF(tmp_truediv_expr_right_1);
            if (tmp_called_instance_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 418;
            tmp_called_instance_11 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[64]);
            Py_DECREF(tmp_called_instance_12);
            if (tmp_called_instance_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 418;
            tmp_sub_expr_right_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[65]);
            Py_DECREF(tmp_called_instance_11);
            if (tmp_sub_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_tuple_element_11 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            Py_DECREF(tmp_sub_expr_right_1);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 418;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = Py_False;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_11);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[27];
            tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_14 == NULL)) {
                tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_args_element_value_29 = mod_consts[66];
            tmp_args_element_value_30 = mod_consts[3];
            CHECK_OBJECT(par_num_bins);
            tmp_args_element_value_31 = par_num_bins;
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 419;
            {
                PyObject *call_args[] = {tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31};
                tmp_tuple_element_12 = CALL_METHOD_WITH_ARGS3(
                    tmp_called_instance_14,
                    mod_consts[55],
                    call_args
                );
            }

            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 419;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = Py_False;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_12);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[29];
            tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_15 == NULL)) {
                tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 420;
            tmp_tuple_element_13 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_15,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[68], 0)
            );

            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = Py_False;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_13);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[31];
            tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_called_instance_16 == NULL)) {
                tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_called_instance_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            frame_942d356b514c4005186d2830f3544426->m_frame.f_lineno = 421;
            tmp_tuple_element_14 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_16,
                mod_consts[67],
                PyTuple_GET_ITEM(mod_consts[68], 0)
            );

            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 421;
                type_description_1 = "oo";
                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_dict_value_1, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = Py_False;
            PyTuple_SET_ITEM0(tmp_dict_value_1, 1, tmp_tuple_element_14);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_942d356b514c4005186d2830f3544426, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_942d356b514c4005186d2830f3544426->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_942d356b514c4005186d2830f3544426, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_942d356b514c4005186d2830f3544426,
        type_description_1,
        par_self,
        par_num_bins
    );


    // Release cached frame if used for exception.
    if (frame_942d356b514c4005186d2830f3544426 == cache_frame_942d356b514c4005186d2830f3544426) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_942d356b514c4005186d2830f3544426);
        cache_frame_942d356b514c4005186d2830f3544426 = NULL;
    }

    assertFrameObject(frame_942d356b514c4005186d2830f3544426);

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
    CHECK_OBJECT(par_num_bins);
    Py_DECREF(par_num_bins);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_num_bins);
    Py_DECREF(par_num_bins);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$transforms$autoaugment$$$function__14_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_img = python_pars[1];
    PyObject *var_fill = NULL;
    PyObject *var_op_meta = NULL;
    PyObject *var_op_index = NULL;
    PyObject *var_op_name = NULL;
    PyObject *var_magnitudes = NULL;
    PyObject *var_signed = NULL;
    PyObject *var_magnitude = NULL;
    PyObject *outline_0_var_f = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1139c67d626c45df5badcd720f643472;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1139c67d626c45df5badcd720f643472 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1139c67d626c45df5badcd720f643472)) {
        Py_XDECREF(cache_frame_1139c67d626c45df5badcd720f643472);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1139c67d626c45df5badcd720f643472 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1139c67d626c45df5badcd720f643472 = MAKE_FUNCTION_FRAME(codeobj_1139c67d626c45df5badcd720f643472, module_torchvision$transforms$autoaugment, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1139c67d626c45df5badcd720f643472->m_type_description == NULL);
    frame_1139c67d626c45df5badcd720f643472 = cache_frame_1139c67d626c45df5badcd720f643472;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1139c67d626c45df5badcd720f643472);
    assert(Py_REFCNT(frame_1139c67d626c45df5badcd720f643472) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[43]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_fill == NULL);
        var_fill = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_img);
        tmp_isinstance_inst_1 = par_img;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_fill);
        tmp_isinstance_inst_2 = var_fill;
        tmp_isinstance_cls_2 = mod_consts[77];
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_float_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_fill);
        tmp_float_arg_1 = var_fill;
        tmp_list_element_1 = TO_FLOAT(tmp_float_arg_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_mult_expr_left_1, 0, tmp_list_element_1);
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 434;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_img);
        tmp_args_element_value_1 = par_img;
        frame_1139c67d626c45df5badcd720f643472->m_frame.f_lineno = 434;
        tmp_mult_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[78], tmp_args_element_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 434;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_LIST_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_fill;
            assert(old != NULL);
            var_fill = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_fill);
        tmp_cmp_expr_left_1 = var_fill;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_3;
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_fill);
            tmp_iter_arg_1 = var_fill;
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_1 = "ooooooooo";
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
        if (isFrameUnusable(cache_frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2)) {
            Py_XDECREF(cache_frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2 = MAKE_FUNCTION_FRAME(codeobj_2b5c3c62b4d4b2f1a045f10bdf1379d2, module_torchvision$transforms$autoaugment, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2->m_type_description == NULL);
        frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2 = cache_frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2);
        assert(Py_REFCNT(frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2) == 2);

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
                    type_description_2 = "o";
                    exception_lineno = 436;
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
                PyObject *old = outline_0_var_f;
                outline_0_var_f = tmp_assign_source_7;
                Py_INCREF(outline_0_var_f);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_float_arg_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_f);
            tmp_float_arg_2 = outline_0_var_f;
            tmp_append_value_1 = TO_FLOAT(tmp_float_arg_2);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 436;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
            type_description_2 = "o";
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
            exception_tb = MAKE_TRACEBACK(frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2,
            type_description_2,
            outline_0_var_f
        );


        // Release cached frame if used for exception.
        if (frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2 == cache_frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2);
            cache_frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2 = NULL;
        }

        assertFrameObject(frame_2b5c3c62b4d4b2f1a045f10bdf1379d2_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_f);
        outline_0_var_f = NULL;
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

        Py_XDECREF(outline_0_var_f);
        outline_0_var_f = NULL;
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
        exception_lineno = 436;
        goto frame_exception_exit_1;
        outline_result_1:;
        {
            PyObject *old = var_fill;
            assert(old != NULL);
            var_fill = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    branch_end_2:;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[83]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[96]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 438;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1139c67d626c45df5badcd720f643472->m_frame.f_lineno = 438;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_op_meta == NULL);
        var_op_meta = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_args_element_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[69]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_op_meta);
        tmp_len_arg_1 = var_op_meta;
        tmp_args_element_value_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 439;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = mod_consts[70];
        frame_1139c67d626c45df5badcd720f643472->m_frame.f_lineno = 439;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_called_instance_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1139c67d626c45df5badcd720f643472->m_frame.f_lineno = 439;
        tmp_int_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[71]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_op_index == NULL);
        var_op_index = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_op_meta);
        tmp_expression_value_6 = var_op_meta;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[97]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1139c67d626c45df5badcd720f643472->m_frame.f_lineno = 440;
        tmp_list_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_op_index);
        tmp_subscript_value_1 = var_op_index;
        tmp_assign_source_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_op_name == NULL);
        var_op_name = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_op_meta);
        tmp_expression_value_7 = var_op_meta;
        CHECK_OBJECT(var_op_name);
        tmp_subscript_value_2 = var_op_name;
        tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_11 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 441;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooo";
            exception_lineno = 441;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_13;
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

                    type_description_1 = "ooooooooo";
                    exception_lineno = 441;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[81];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooo";
            exception_lineno = 441;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_1;
        assert(var_magnitudes == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_magnitudes = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_2;
        assert(var_signed == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_signed = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_16;
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_float_arg_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_magnitudes);
        tmp_expression_value_8 = var_magnitudes;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[98]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[4];
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 444;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_magnitudes);
        tmp_expression_value_9 = var_magnitudes;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[69]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_magnitudes);
        tmp_len_arg_2 = var_magnitudes;
        tmp_kw_call_arg_value_0_1 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 443;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_1_1 = mod_consts[70];
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 443;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[109]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 443;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1139c67d626c45df5badcd720f643472->m_frame.f_lineno = 443;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_subscript_value_3 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_4, args, kw_values, mod_consts[110]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1139c67d626c45df5badcd720f643472->m_frame.f_lineno = 443;
        tmp_float_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[71]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_float_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = TO_FLOAT(tmp_float_arg_3);
        Py_DECREF(tmp_float_arg_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_16 = mod_consts[3];
        Py_INCREF(tmp_assign_source_16);
        condexpr_end_1:;
        assert(var_magnitude == NULL);
        var_magnitude = tmp_assign_source_16;
    }
    {
        nuitka_bool tmp_condition_result_5;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_signed);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_signed);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1139c67d626c45df5badcd720f643472->m_frame.f_lineno = 447;
        tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_4,
            mod_consts[69],
            &PyTuple_GET_ITEM(mod_consts[99], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 447;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_call_result_1);
        tmp_condition_result_5 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_5 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_imult_expr_left_1;
        PyObject *tmp_imult_expr_right_1;
        CHECK_OBJECT(var_magnitude);
        tmp_imult_expr_left_1 = var_magnitude;
        tmp_imult_expr_right_1 = mod_consts[87];
        tmp_result = INPLACE_OPERATION_MULT_OBJECT_FLOAT(&tmp_imult_expr_left_1, tmp_imult_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 448;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_17 = tmp_imult_expr_left_1;
        var_magnitude = tmp_assign_source_17;

    }
    branch_no_4:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[88]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[88]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        if (par_img == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[86]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 450;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_2 = par_img;
        CHECK_OBJECT(var_op_name);
        tmp_kw_call_arg_value_1_2 = var_op_name;
        CHECK_OBJECT(var_magnitude);
        tmp_kw_call_arg_value_2_1 = var_magnitude;
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[42]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_fill);
        tmp_kw_call_dict_value_1_1 = var_fill;
        frame_1139c67d626c45df5badcd720f643472->m_frame.f_lineno = 450;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_2, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_1139c67d626c45df5badcd720f643472, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1139c67d626c45df5badcd720f643472->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1139c67d626c45df5badcd720f643472, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1139c67d626c45df5badcd720f643472,
        type_description_1,
        par_self,
        par_img,
        var_fill,
        var_op_meta,
        var_op_index,
        var_op_name,
        var_magnitudes,
        var_signed,
        var_magnitude
    );


    // Release cached frame if used for exception.
    if (frame_1139c67d626c45df5badcd720f643472 == cache_frame_1139c67d626c45df5badcd720f643472) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1139c67d626c45df5badcd720f643472);
        cache_frame_1139c67d626c45df5badcd720f643472 = NULL;
    }

    assertFrameObject(frame_1139c67d626c45df5badcd720f643472);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_fill);
    Py_DECREF(var_fill);
    var_fill = NULL;
    CHECK_OBJECT(var_op_meta);
    Py_DECREF(var_op_meta);
    var_op_meta = NULL;
    CHECK_OBJECT(var_op_index);
    Py_DECREF(var_op_index);
    var_op_index = NULL;
    CHECK_OBJECT(var_op_name);
    Py_DECREF(var_op_name);
    var_op_name = NULL;
    CHECK_OBJECT(var_magnitudes);
    Py_DECREF(var_magnitudes);
    var_magnitudes = NULL;
    CHECK_OBJECT(var_signed);
    Py_DECREF(var_signed);
    var_signed = NULL;
    CHECK_OBJECT(var_magnitude);
    Py_DECREF(var_magnitude);
    var_magnitude = NULL;
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

    Py_XDECREF(var_fill);
    var_fill = NULL;
    Py_XDECREF(var_op_meta);
    var_op_meta = NULL;
    Py_XDECREF(var_op_index);
    var_op_index = NULL;
    Py_XDECREF(var_op_name);
    var_op_name = NULL;
    Py_XDECREF(var_magnitudes);
    var_magnitudes = NULL;
    Py_XDECREF(var_signed);
    var_signed = NULL;
    Py_XDECREF(var_magnitude);
    var_magnitude = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_img);
    Py_DECREF(par_img);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_img);
    Py_DECREF(par_img);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$transforms$autoaugment$$$function__15___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_s = NULL;
    struct Nuitka_FrameObject *frame_223d1120cf1e550b93d9cd251d204f1e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_223d1120cf1e550b93d9cd251d204f1e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_223d1120cf1e550b93d9cd251d204f1e)) {
        Py_XDECREF(cache_frame_223d1120cf1e550b93d9cd251d204f1e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_223d1120cf1e550b93d9cd251d204f1e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_223d1120cf1e550b93d9cd251d204f1e = MAKE_FUNCTION_FRAME(codeobj_223d1120cf1e550b93d9cd251d204f1e, module_torchvision$transforms$autoaugment, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_223d1120cf1e550b93d9cd251d204f1e->m_type_description == NULL);
    frame_223d1120cf1e550b93d9cd251d204f1e = cache_frame_223d1120cf1e550b93d9cd251d204f1e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_223d1120cf1e550b93d9cd251d204f1e);
    assert(Py_REFCNT(frame_223d1120cf1e550b93d9cd251d204f1e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_format_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_format_spec_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_format_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[90]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_format_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_format_spec_1 = mod_consts[37];
        tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
        Py_DECREF(tmp_format_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(8);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_format_spec_3;
            PyObject *tmp_format_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_format_spec_4;
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[111];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[96]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_2 = mod_consts[37];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 2, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[104];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 3, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_4 = par_self;
            tmp_format_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[42]);
            if (tmp_format_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_3 = mod_consts[37];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            Py_DECREF(tmp_format_value_3);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 4, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[92];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 5, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_5 = par_self;
            tmp_format_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[43]);
            if (tmp_format_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_4 = mod_consts[37];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_4, tmp_format_spec_4);
            Py_DECREF(tmp_format_value_4);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 454;
                type_description_1 = "oo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 6, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[93];
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 7, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_1 = PyUnicode_Join(mod_consts[37], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 454;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_223d1120cf1e550b93d9cd251d204f1e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_223d1120cf1e550b93d9cd251d204f1e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_223d1120cf1e550b93d9cd251d204f1e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_223d1120cf1e550b93d9cd251d204f1e,
        type_description_1,
        par_self,
        var_s
    );


    // Release cached frame if used for exception.
    if (frame_223d1120cf1e550b93d9cd251d204f1e == cache_frame_223d1120cf1e550b93d9cd251d204f1e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_223d1120cf1e550b93d9cd251d204f1e);
        cache_frame_223d1120cf1e550b93d9cd251d204f1e = NULL;
    }

    assertFrameObject(frame_223d1120cf1e550b93d9cd251d204f1e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_s);
    tmp_return_value = var_s;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_s);
    Py_DECREF(var_s);
    var_s = NULL;
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



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__10_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__10_forward,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_b0032c46e5238e28ef34849b27595621,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
        mod_consts[100],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__11___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__11___repr__,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_4ee756858305195a77df8700f0465e3f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__12___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__12___init__,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[176],
#endif
        codeobj_b829629fcab49d5d41e9133a9183ab4d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__13__augmentation_space(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__13__augmentation_space,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[177],
#endif
        codeobj_942d356b514c4005186d2830f3544426,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__14_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__14_forward,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[178],
#endif
        codeobj_1139c67d626c45df5badcd720f643472,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
        mod_consts[100],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__15___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__15___repr__,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[179],
#endif
        codeobj_223d1120cf1e550b93d9cd251d204f1e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__1__apply_op(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__1__apply_op,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d0b03dbfa9ba2586af0f1b9062579614,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__2___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__2___init__,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_bc768d3db5e1fb005880d58e8f74369e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__3__get_policies(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__3__get_policies,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        mod_consts[153],
#endif
        codeobj_2cfea675fcf1fc2ac84ce8ef5655b27f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__4__augmentation_space(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__4__augmentation_space,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[157],
#endif
        codeobj_7f0298f0ecb4d5ff1c8b525e530b277f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__5_get_params(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__5_get_params,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[160],
#endif
        codeobj_97e98bd3b0f6a954ec9dcf0643fad233,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
        mod_consts[75],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__6_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__6_forward,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_4daa29c3e5a4d05a6814684ba59d4ada,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
        mod_consts[89],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__7___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__7___repr__,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_a74df2dee79e283dbcf1330406c54292,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__8___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__8___init__,
        mod_consts[40],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_9d0edb75d569cd59f3ba2328ed817086,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__9__augmentation_space(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$transforms$autoaugment$$$function__9__augmentation_space,
        mod_consts[83],
#if PYTHON_VERSION >= 0x300
        mod_consts[171],
#endif
        codeobj_ba3cafdb6201ce2e8b3e6418ffba2537,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$transforms$autoaugment,
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

function_impl_code functable_torchvision$transforms$autoaugment[] = {
    impl_torchvision$transforms$autoaugment$$$function__1__apply_op,
    impl_torchvision$transforms$autoaugment$$$function__2___init__,
    impl_torchvision$transforms$autoaugment$$$function__3__get_policies,
    impl_torchvision$transforms$autoaugment$$$function__4__augmentation_space,
    impl_torchvision$transforms$autoaugment$$$function__5_get_params,
    impl_torchvision$transforms$autoaugment$$$function__6_forward,
    impl_torchvision$transforms$autoaugment$$$function__7___repr__,
    impl_torchvision$transforms$autoaugment$$$function__8___init__,
    impl_torchvision$transforms$autoaugment$$$function__9__augmentation_space,
    impl_torchvision$transforms$autoaugment$$$function__10_forward,
    impl_torchvision$transforms$autoaugment$$$function__11___repr__,
    impl_torchvision$transforms$autoaugment$$$function__12___init__,
    impl_torchvision$transforms$autoaugment$$$function__13__augmentation_space,
    impl_torchvision$transforms$autoaugment$$$function__14_forward,
    impl_torchvision$transforms$autoaugment$$$function__15___repr__,
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

    function_impl_code *current = functable_torchvision$transforms$autoaugment;
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

    if (offset > sizeof(functable_torchvision$transforms$autoaugment) || offset < 0) {
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
        functable_torchvision$transforms$autoaugment[offset],
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
        module_torchvision$transforms$autoaugment,
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
PyObject *modulecode_torchvision$transforms$autoaugment(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torchvision.transforms.autoaugment");

    // Store the module for future use.
    module_torchvision$transforms$autoaugment = module;

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
        PRINT_STRING("torchvision.transforms.autoaugment: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.transforms.autoaugment: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.transforms.autoaugment: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorchvision$transforms$autoaugment\n");

    moduledict_torchvision$transforms$autoaugment = MODULE_DICT(module_torchvision$transforms$autoaugment);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torchvision$transforms$autoaugment,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torchvision$transforms$autoaugment,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[37]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torchvision$transforms$autoaugment,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$transforms$autoaugment,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$transforms$autoaugment,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torchvision$transforms$autoaugment);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torchvision$transforms$autoaugment);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    struct Nuitka_CellObject *outline_1_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_2_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_3_var___class__ = Nuitka_Cell_Empty();
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
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__bases_orig = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_fd129339e8ab215579c774d6e3da57da;
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
    PyObject *locals_torchvision$transforms$autoaugment$$$class__1_AutoAugmentPolicy_93 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_294d4b49991cc258f2fb6225b0d2d78c_2;
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
    PyObject *locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104 = NULL;
    struct Nuitka_FrameObject *frame_aa1be9a4cb1dd3079f4db6300567142a_3;
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
    PyObject *locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286 = NULL;
    struct Nuitka_FrameObject *frame_95535ae25141f4f0912ee1431e3b9ac8_4;
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
    PyObject *locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378 = NULL;
    struct Nuitka_FrameObject *frame_4a363daefc9bf36d56ceb4bfca241f3a_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_2);
    }
    frame_fd129339e8ab215579c774d6e3da57da = MAKE_MODULE_FRAME(codeobj_fd129339e8ab215579c774d6e3da57da, module_torchvision$transforms$autoaugment);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fd129339e8ab215579c774d6e3da57da);
    assert(Py_REFCNT(frame_fd129339e8ab215579c774d6e3da57da) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[115], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[116], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[117], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[6];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$transforms$autoaugment;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[4];
        frame_fd129339e8ab215579c774d6e3da57da->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[118];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torchvision$transforms$autoaugment;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[119];
        tmp_level_value_2 = mod_consts[4];
        frame_fd129339e8ab215579c774d6e3da57da->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torchvision$transforms$autoaugment,
                mod_consts[120],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[120]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torchvision$transforms$autoaugment,
                mod_consts[121],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[121]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torchvision$transforms$autoaugment,
                mod_consts[122],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[122]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torchvision$transforms$autoaugment,
                mod_consts[123],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[123]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torchvision$transforms$autoaugment,
                mod_consts[124],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[124]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_10);
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
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[54];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torchvision$transforms$autoaugment;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[4];
        frame_fd129339e8ab215579c774d6e3da57da->m_frame.f_lineno = 5;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[54];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torchvision$transforms$autoaugment;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[125];
        tmp_level_value_4 = mod_consts[4];
        frame_fd129339e8ab215579c774d6e3da57da->m_frame.f_lineno = 6;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torchvision$transforms$autoaugment,
                mod_consts[76],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[76]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[37];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torchvision$transforms$autoaugment;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[126];
        tmp_level_value_5 = mod_consts[58];
        frame_fd129339e8ab215579c774d6e3da57da->m_frame.f_lineno = 8;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_13;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torchvision$transforms$autoaugment,
                mod_consts[127],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[127]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torchvision$transforms$autoaugment,
                mod_consts[128],
                mod_consts[4]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[128]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_15);
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
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_LIST4(mod_consts[129]);
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[86];
        tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_dict_value_1 == NULL)) {
            tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[131];
            tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[95];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[42];
            tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[128]);

            if (unlikely(tmp_dict_value_1 == NULL)) {
                tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
            }

            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[43];
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[123]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto dict_build_exception_1;
            }
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto dict_build_exception_1;
            }
            tmp_subscript_value_2 = (PyObject *)&PyFloat_Type;
            tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_subscript_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
            Py_DECREF(tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 14;

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


        tmp_assign_source_17 = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__1__apply_op(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_17);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_3;
        }
        tmp_assign_source_18 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_18, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_19 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

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
        tmp_expression_value_3 = tmp_class_creation_1__bases;
        tmp_subscript_value_3 = mod_consts[4];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_3, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_21 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_21;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[132]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[132]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = mod_consts[46];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_fd129339e8ab215579c774d6e3da57da->m_frame.f_lineno = 93;
        tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_22;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_6 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[133]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

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
        tmp_mod_expr_left_1 = mod_consts[134];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[90];
        tmp_getattr_default_1 = mod_consts[135];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[90]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

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


            exception_lineno = 93;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 93;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_23;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_24;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torchvision$transforms$autoaugment$$$class__1_AutoAugmentPolicy_93 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__1_AutoAugmentPolicy_93, mod_consts[137], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[138];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__1_AutoAugmentPolicy_93, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[46];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__1_AutoAugmentPolicy_93, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_5;
        }
        frame_294d4b49991cc258f2fb6225b0d2d78c_2 = MAKE_CLASS_FRAME(codeobj_294d4b49991cc258f2fb6225b0d2d78c, module_torchvision$transforms$autoaugment, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_294d4b49991cc258f2fb6225b0d2d78c_2);
        assert(Py_REFCNT(frame_294d4b49991cc258f2fb6225b0d2d78c_2) == 2);

        // Framed code:
        tmp_dictset_value = mod_consts[140];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__1_AutoAugmentPolicy_93, mod_consts[47], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[141];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__1_AutoAugmentPolicy_93, mod_consts[49], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        tmp_dictset_value = mod_consts[142];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__1_AutoAugmentPolicy_93, mod_consts[51], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_294d4b49991cc258f2fb6225b0d2d78c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_294d4b49991cc258f2fb6225b0d2d78c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_294d4b49991cc258f2fb6225b0d2d78c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_294d4b49991cc258f2fb6225b0d2d78c_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_294d4b49991cc258f2fb6225b0d2d78c_2);

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


                exception_lineno = 93;

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
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__1_AutoAugmentPolicy_93, mod_consts[143], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[46];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_torchvision$transforms$autoaugment$$$class__1_AutoAugmentPolicy_93;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_fd129339e8ab215579c774d6e3da57da->m_frame.f_lineno = 93;
            tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_25;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_24 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_torchvision$transforms$autoaugment$$$class__1_AutoAugmentPolicy_93);
        locals_torchvision$transforms$autoaugment$$$class__1_AutoAugmentPolicy_93 = NULL;
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

        Py_DECREF(locals_torchvision$transforms$autoaugment$$$class__1_AutoAugmentPolicy_93);
        locals_torchvision$transforms$autoaugment$$$class__1_AutoAugmentPolicy_93 = NULL;
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
        exception_lineno = 93;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_24);
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
        PyObject *tmp_assign_source_26;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[144]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        tmp_tuple_element_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[145]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        tmp_assign_source_26 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_26, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_27 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

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
        tmp_expression_value_10 = tmp_class_creation_2__bases;
        tmp_subscript_value_4 = mod_consts[4];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_4, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_29 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_29;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[132]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[132]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        tmp_tuple_element_6 = mod_consts[146];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_fd129339e8ab215579c774d6e3da57da->m_frame.f_lineno = 104;
        tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_30;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_13 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_13, mod_consts[133]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

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
        tmp_mod_expr_left_2 = mod_consts[134];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[90];
        tmp_getattr_default_2 = mod_consts[135];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_14 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[90]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

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


            exception_lineno = 104;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 104;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_31;
        tmp_assign_source_31 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_31;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_32;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[137], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[147];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[146];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_8;
        }
        frame_aa1be9a4cb1dd3079f4db6300567142a_3 = MAKE_CLASS_FRAME(codeobj_aa1be9a4cb1dd3079f4db6300567142a, module_torchvision$transforms$autoaugment, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_aa1be9a4cb1dd3079f4db6300567142a_3);
        assert(Py_REFCNT(frame_aa1be9a4cb1dd3079f4db6300567142a_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_expression_value_15 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[46]);

            if (tmp_expression_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[46]);

                    if (unlikely(tmp_expression_value_15 == NULL)) {
                        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
                    }

                    if (tmp_expression_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 123;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[47]);
            Py_DECREF(tmp_expression_value_15);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 123;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_16;
                PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_8);
                tmp_expression_value_16 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[128]);

                if (tmp_expression_value_16 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[128]);

                        if (unlikely(tmp_expression_value_16 == NULL)) {
                            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                        }

                        if (tmp_expression_value_16 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 124;
                            type_description_2 = "c";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_16);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[148]);
                Py_DECREF(tmp_expression_value_16);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 124;
                    type_description_2 = "c";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_8);
                tmp_tuple_element_8 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_1, 2, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_defaults_1);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            tmp_dict_key_2 = mod_consts[41];
            tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[46]);

            if (tmp_dict_value_2 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[46]);

                    if (unlikely(tmp_dict_value_2 == NULL)) {
                        tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
                    }

                    if (tmp_dict_value_2 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_defaults_1);

                        exception_lineno = 123;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_2);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_2 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_17;
                PyObject *tmp_subscript_value_5;
                PyObject *tmp_expression_value_18;
                PyObject *tmp_subscript_value_6;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[42];
                tmp_dict_value_2 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[128]);

                if (tmp_dict_value_2 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[128]);

                        if (unlikely(tmp_dict_value_2 == NULL)) {
                            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                        }

                        if (tmp_dict_value_2 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 124;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_dict_value_2);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[43];
                tmp_expression_value_17 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[123]);

                if (tmp_expression_value_17 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[123]);

                        if (unlikely(tmp_expression_value_17 == NULL)) {
                            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                        }

                        if (tmp_expression_value_17 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 125;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_17);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_18 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[121]);

                if (tmp_expression_value_18 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[121]);

                        if (unlikely(tmp_expression_value_18 == NULL)) {
                            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
                        }

                        if (tmp_expression_value_18 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_17);

                            exception_lineno = 125;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_18);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_6 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[149]);

                if (tmp_subscript_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_6 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_6);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_subscript_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_6);
                Py_DECREF(tmp_expression_value_18);
                Py_DECREF(tmp_subscript_value_6);
                if (tmp_subscript_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_17);

                    exception_lineno = 125;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_5);
                Py_DECREF(tmp_expression_value_17);
                Py_DECREF(tmp_subscript_value_5);
                if (tmp_dict_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 125;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                Py_DECREF(tmp_dict_value_2);
                assert(!(tmp_res != 0));
                tmp_dict_key_2 = mod_consts[150];
                tmp_dict_value_2 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_defaults_1);
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;

            tmp_closure_1[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__2___init__(tmp_defaults_1, tmp_annotations_2, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            tmp_dict_key_3 = mod_consts[41];
            tmp_dict_value_3 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[46]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[46]);

                    if (unlikely(tmp_dict_value_3 == NULL)) {
                        tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
                    }

                    if (tmp_dict_value_3 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 134;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_19;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_tuple_element_9;
                PyObject *tmp_expression_value_21;
                PyObject *tmp_subscript_value_9;
                PyObject *tmp_tuple_element_10;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[150];
                tmp_expression_value_19 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[121]);

                if (tmp_expression_value_19 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[121]);

                        if (unlikely(tmp_expression_value_19 == NULL)) {
                            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
                        }

                        if (tmp_expression_value_19 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 135;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_19);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_expression_value_20 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[122]);

                if (tmp_expression_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[122]);

                        if (unlikely(tmp_expression_value_20 == NULL)) {
                            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                        }

                        if (tmp_expression_value_20 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_19);

                            exception_lineno = 135;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_20);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_expression_value_21 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[122]);

                if (tmp_expression_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[122]);

                        if (unlikely(tmp_expression_value_21 == NULL)) {
                            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                        }

                        if (tmp_expression_value_21 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_19);
                            Py_DECREF(tmp_expression_value_20);

                            exception_lineno = 135;
                            type_description_2 = "c";
                            goto dict_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_21);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_tuple_element_10 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[152]);

                if (tmp_tuple_element_10 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_10 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_10);
                    } else {
                        goto dict_build_exception_3;
                    }
                }

                tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(3);
                {
                    PyObject *tmp_expression_value_22;
                    PyObject *tmp_subscript_value_10;
                    PyTuple_SET_ITEM(tmp_subscript_value_9, 0, tmp_tuple_element_10);
                    tmp_tuple_element_10 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[149]);

                    if (tmp_tuple_element_10 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_10 = (PyObject *)&PyFloat_Type;
                            Py_INCREF(tmp_tuple_element_10);
                        } else {
                            goto tuple_build_exception_4;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_9, 1, tmp_tuple_element_10);
                    tmp_expression_value_22 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[123]);

                    if (tmp_expression_value_22 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[123]);

                            if (unlikely(tmp_expression_value_22 == NULL)) {
                                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                            }

                            if (tmp_expression_value_22 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 135;
                                type_description_2 = "c";
                                goto tuple_build_exception_4;
                            }
                            Py_INCREF(tmp_expression_value_22);
                        } else {
                            goto tuple_build_exception_4;
                        }
                    }

                    tmp_subscript_value_10 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[65]);

                    if (tmp_subscript_value_10 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_subscript_value_10 = (PyObject *)&PyLong_Type;
                            Py_INCREF(tmp_subscript_value_10);
                        } else {
                            goto tuple_build_exception_4;
                        }
                    }

                    tmp_tuple_element_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_10);
                    Py_DECREF(tmp_expression_value_22);
                    Py_DECREF(tmp_subscript_value_10);
                    if (tmp_tuple_element_10 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 135;
                        type_description_2 = "c";
                        goto tuple_build_exception_4;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_9, 2, tmp_tuple_element_10);
                }
                goto tuple_build_noexception_4;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_4:;
                Py_DECREF(tmp_expression_value_19);
                Py_DECREF(tmp_expression_value_20);
                Py_DECREF(tmp_expression_value_21);
                Py_DECREF(tmp_subscript_value_9);
                goto dict_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_4:;
                tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_9);
                Py_DECREF(tmp_expression_value_21);
                Py_DECREF(tmp_subscript_value_9);
                if (tmp_tuple_element_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_19);
                    Py_DECREF(tmp_expression_value_20);

                    exception_lineno = 135;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_23;
                    PyObject *tmp_subscript_value_11;
                    PyObject *tmp_tuple_element_11;
                    PyTuple_SET_ITEM(tmp_subscript_value_8, 0, tmp_tuple_element_9);
                    tmp_expression_value_23 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[122]);

                    if (tmp_expression_value_23 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[122]);

                            if (unlikely(tmp_expression_value_23 == NULL)) {
                                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                            }

                            if (tmp_expression_value_23 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 135;
                                type_description_2 = "c";
                                goto tuple_build_exception_5;
                            }
                            Py_INCREF(tmp_expression_value_23);
                        } else {
                            goto tuple_build_exception_5;
                        }
                    }

                    tmp_tuple_element_11 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[152]);

                    if (tmp_tuple_element_11 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_11 = (PyObject *)&PyUnicode_Type;
                            Py_INCREF(tmp_tuple_element_11);
                        } else {
                            goto tuple_build_exception_5;
                        }
                    }

                    tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(3);
                    {
                        PyObject *tmp_expression_value_24;
                        PyObject *tmp_subscript_value_12;
                        PyTuple_SET_ITEM(tmp_subscript_value_11, 0, tmp_tuple_element_11);
                        tmp_tuple_element_11 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[149]);

                        if (tmp_tuple_element_11 == NULL) {
                            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                                tmp_tuple_element_11 = (PyObject *)&PyFloat_Type;
                                Py_INCREF(tmp_tuple_element_11);
                            } else {
                                goto tuple_build_exception_6;
                            }
                        }

                        PyTuple_SET_ITEM(tmp_subscript_value_11, 1, tmp_tuple_element_11);
                        tmp_expression_value_24 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[123]);

                        if (tmp_expression_value_24 == NULL) {
                            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                                tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[123]);

                                if (unlikely(tmp_expression_value_24 == NULL)) {
                                    tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                                }

                                if (tmp_expression_value_24 == NULL) {
                                    assert(ERROR_OCCURRED());

                                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                    exception_lineno = 135;
                                    type_description_2 = "c";
                                    goto tuple_build_exception_6;
                                }
                                Py_INCREF(tmp_expression_value_24);
                            } else {
                                goto tuple_build_exception_6;
                            }
                        }

                        tmp_subscript_value_12 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[65]);

                        if (tmp_subscript_value_12 == NULL) {
                            if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                                tmp_subscript_value_12 = (PyObject *)&PyLong_Type;
                                Py_INCREF(tmp_subscript_value_12);
                            } else {
                                goto tuple_build_exception_6;
                            }
                        }

                        tmp_tuple_element_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_24, tmp_subscript_value_12);
                        Py_DECREF(tmp_expression_value_24);
                        Py_DECREF(tmp_subscript_value_12);
                        if (tmp_tuple_element_11 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 135;
                            type_description_2 = "c";
                            goto tuple_build_exception_6;
                        }
                        PyTuple_SET_ITEM(tmp_subscript_value_11, 2, tmp_tuple_element_11);
                    }
                    goto tuple_build_noexception_5;
                    // Exception handling pass through code for tuple_build:
                    tuple_build_exception_6:;
                    Py_DECREF(tmp_expression_value_23);
                    Py_DECREF(tmp_subscript_value_11);
                    goto tuple_build_exception_5;
                    // Finished with no exception for tuple_build:
                    tuple_build_noexception_5:;
                    tmp_tuple_element_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_11);
                    Py_DECREF(tmp_expression_value_23);
                    Py_DECREF(tmp_subscript_value_11);
                    if (tmp_tuple_element_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 135;
                        type_description_2 = "c";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_9);
                }
                goto tuple_build_noexception_6;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_expression_value_19);
                Py_DECREF(tmp_expression_value_20);
                Py_DECREF(tmp_subscript_value_8);
                goto dict_build_exception_3;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_6:;
                tmp_subscript_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_20);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_subscript_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_19);

                    exception_lineno = 135;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_19);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 135;
                    type_description_2 = "c";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__3__get_policies(tmp_annotations_3);

            tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[44], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 133;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[154];
            tmp_dict_value_4 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[65]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_expression_value_26;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_tuple_element_12;
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[155];
                tmp_expression_value_25 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[121]);

                if (tmp_expression_value_25 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[121]);

                        if (unlikely(tmp_expression_value_25 == NULL)) {
                            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
                        }

                        if (tmp_expression_value_25 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 223;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_25);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_13 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[65]);

                if (tmp_subscript_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_13 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_13);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_25);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 223;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[150];
                tmp_expression_value_26 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[124]);

                if (tmp_expression_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[124]);

                        if (unlikely(tmp_expression_value_26 == NULL)) {
                            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                        }

                        if (tmp_expression_value_26 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 223;
                            type_description_2 = "c";
                            goto dict_build_exception_4;
                        }
                        Py_INCREF(tmp_expression_value_26);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_tuple_element_12 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[152]);

                if (tmp_tuple_element_12 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_12 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_12);
                    } else {
                        goto dict_build_exception_4;
                    }
                }

                tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_27;
                    PyObject *tmp_subscript_value_15;
                    PyObject *tmp_tuple_element_13;
                    PyTuple_SET_ITEM(tmp_subscript_value_14, 0, tmp_tuple_element_12);
                    tmp_expression_value_27 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[122]);

                    if (tmp_expression_value_27 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[122]);

                            if (unlikely(tmp_expression_value_27 == NULL)) {
                                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                            }

                            if (tmp_expression_value_27 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 223;
                                type_description_2 = "c";
                                goto tuple_build_exception_7;
                            }
                            Py_INCREF(tmp_expression_value_27);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    tmp_tuple_element_13 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[76]);

                    if (tmp_tuple_element_13 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

                            if (unlikely(tmp_tuple_element_13 == NULL)) {
                                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                            }

                            if (tmp_tuple_element_13 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_expression_value_27);

                                exception_lineno = 223;
                                type_description_2 = "c";
                                goto tuple_build_exception_7;
                            }
                            Py_INCREF(tmp_tuple_element_13);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
                    PyTuple_SET_ITEM(tmp_subscript_value_15, 0, tmp_tuple_element_13);
                    tmp_tuple_element_13 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[156]);

                    if (tmp_tuple_element_13 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_13 = (PyObject *)&PyBool_Type;
                            Py_INCREF(tmp_tuple_element_13);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_15, 1, tmp_tuple_element_13);
                    tmp_tuple_element_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_15);
                    Py_DECREF(tmp_expression_value_27);
                    Py_DECREF(tmp_subscript_value_15);
                    if (tmp_tuple_element_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 223;
                        type_description_2 = "c";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_14, 1, tmp_tuple_element_12);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_14);
                goto dict_build_exception_4;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_26, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_26);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 223;
                    type_description_2 = "c";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_4);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__4__augmentation_space(tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 223;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_1;
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            PyObject *tmp_staticmethod_arg_1;
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_res = MAPPING_HAS_ITEM(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[158]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_condition_result_8 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_4 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[158]);

            if (unlikely(tmp_called_value_4 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[158]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_dict_key_5 = mod_consts[159];
            tmp_dict_value_5 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[65]);

            if (tmp_dict_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_5 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_28;
                PyObject *tmp_subscript_value_16;
                PyObject *tmp_tuple_element_14;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[150];
                tmp_expression_value_28 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[122]);

                if (tmp_expression_value_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[122]);

                        if (unlikely(tmp_expression_value_28 == NULL)) {
                            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                        }

                        if (tmp_expression_value_28 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 243;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_28);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_tuple_element_14 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[65]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_14 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_subscript_value_16, 0, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[76]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 243;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_16, 1, tmp_tuple_element_14);
                tmp_tuple_element_14 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[76]);

                if (tmp_tuple_element_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_tuple_element_14 == NULL)) {
                            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_tuple_element_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 243;
                            type_description_2 = "c";
                            goto tuple_build_exception_8;
                        }
                        Py_INCREF(tmp_tuple_element_14);
                    } else {
                        goto tuple_build_exception_8;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_16, 2, tmp_tuple_element_14);
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_expression_value_28);
                Py_DECREF(tmp_subscript_value_16);
                goto dict_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_28, tmp_subscript_value_16);
                Py_DECREF(tmp_expression_value_28);
                Py_DECREF(tmp_subscript_value_16);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_args_element_value_1 = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__5_get_params(tmp_annotations_5);

            frame_aa1be9a4cb1dd3079f4db6300567142a_3->m_frame.f_lineno = 242;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_dict_key_6 = mod_consts[159];
            tmp_dict_value_6 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[65]);

            if (tmp_dict_value_6 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_6 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_6);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_6 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_29;
                PyObject *tmp_subscript_value_17;
                PyObject *tmp_tuple_element_15;
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[150];
                tmp_expression_value_29 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[122]);

                if (tmp_expression_value_29 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[122]);

                        if (unlikely(tmp_expression_value_29 == NULL)) {
                            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                        }

                        if (tmp_expression_value_29 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 243;
                            type_description_2 = "c";
                            goto dict_build_exception_6;
                        }
                        Py_INCREF(tmp_expression_value_29);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_tuple_element_15 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[65]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_15 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto dict_build_exception_6;
                    }
                }

                tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(3);
                PyTuple_SET_ITEM(tmp_subscript_value_17, 0, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[76]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 243;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_17, 1, tmp_tuple_element_15);
                tmp_tuple_element_15 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[76]);

                if (tmp_tuple_element_15 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

                        if (unlikely(tmp_tuple_element_15 == NULL)) {
                            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                        }

                        if (tmp_tuple_element_15 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 243;
                            type_description_2 = "c";
                            goto tuple_build_exception_9;
                        }
                        Py_INCREF(tmp_tuple_element_15);
                    } else {
                        goto tuple_build_exception_9;
                    }
                }

                PyTuple_SET_ITEM(tmp_subscript_value_17, 2, tmp_tuple_element_15);
                goto tuple_build_noexception_9;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_9:;
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_17);
                goto dict_build_exception_6;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_9:;
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_29, tmp_subscript_value_17);
                Py_DECREF(tmp_expression_value_29);
                Py_DECREF(tmp_subscript_value_17);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 243;
                    type_description_2 = "c";
                    goto dict_build_exception_6;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;


            tmp_staticmethod_arg_1 = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__5_get_params(tmp_annotations_6);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_1);
            Py_DECREF(tmp_staticmethod_arg_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_dict_key_7 = mod_consts[86];
            tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[76]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 255;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_7 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[150];
            tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[76]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 255;
                        type_description_2 = "c";
                        goto dict_build_exception_7;
                    }
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto dict_build_exception_7;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__6_forward(tmp_annotations_7);

            tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[161], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 255;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[150];
            tmp_dict_value_8 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[152]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__7___repr__(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 282;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_aa1be9a4cb1dd3079f4db6300567142a_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_aa1be9a4cb1dd3079f4db6300567142a_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_aa1be9a4cb1dd3079f4db6300567142a_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_aa1be9a4cb1dd3079f4db6300567142a_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_aa1be9a4cb1dd3079f4db6300567142a_3);

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
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104, mod_consts[143], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto try_except_handler_8;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_33;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_16 = mod_consts[146];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_16 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_16);
            tmp_tuple_element_16 = locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_16);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_fd129339e8ab215579c774d6e3da57da->m_frame.f_lineno = 104;
            tmp_assign_source_33 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto try_except_handler_8;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_33);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_32 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_32);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104);
        locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104 = NULL;
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

        Py_DECREF(locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104);
        locals_torchvision$transforms$autoaugment$$$class__2_AutoAugment_104 = NULL;
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
        exception_lineno = 104;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_32);
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
        PyObject *tmp_assign_source_34;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_9;
        }
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[144]);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_9;
        }
        tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[145]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_9;
        }
        tmp_assign_source_34 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_34, 0, tmp_tuple_element_17);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_35 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_36;
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_10;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_9;
        }
        tmp_condition_result_10 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_32 = tmp_class_creation_3__bases;
        tmp_subscript_value_18 = mod_consts[4];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_32, tmp_subscript_value_18, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_9;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_37 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_37;
    }
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_33 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_33, mod_consts[132]);
        tmp_condition_result_11 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_11 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_34 = tmp_class_creation_3__metaclass;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[132]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_9;
        }
        tmp_tuple_element_18 = mod_consts[165];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_18 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_18);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_fd129339e8ab215579c774d6e3da57da->m_frame.f_lineno = 286;
        tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_38;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_35 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_35, mod_consts[133]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_9;
        }
        tmp_condition_result_12 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_12 != false) {
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
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[134];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[90];
        tmp_getattr_default_3 = mod_consts[135];
        tmp_tuple_element_19 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_36;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_19);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_36 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_36 == NULL));
            tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[90]);
            Py_DECREF(tmp_expression_value_36);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 286;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_39;
        tmp_assign_source_39 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_39;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_40;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[137], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[166];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[165];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_11;
        }
        frame_95535ae25141f4f0912ee1431e3b9ac8_4 = MAKE_CLASS_FRAME(codeobj_95535ae25141f4f0912ee1431e3b9ac8, module_torchvision$transforms$autoaugment, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_95535ae25141f4f0912ee1431e3b9ac8_4);
        assert(Py_REFCNT(frame_95535ae25141f4f0912ee1431e3b9ac8_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_tuple_element_20;
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_tuple_element_20 = mod_consts[167];
            tmp_defaults_2 = MAKE_TUPLE_EMPTY(5);
            {
                PyObject *tmp_expression_value_37;
                PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_20);
                tmp_tuple_element_20 = mod_consts[168];
                PyTuple_SET_ITEM0(tmp_defaults_2, 1, tmp_tuple_element_20);
                tmp_tuple_element_20 = mod_consts[169];
                PyTuple_SET_ITEM0(tmp_defaults_2, 2, tmp_tuple_element_20);
                tmp_expression_value_37 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[128]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[128]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 310;
                            type_description_2 = "c";
                            goto tuple_build_exception_11;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto tuple_build_exception_11;
                    }
                }

                tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[148]);
                Py_DECREF(tmp_expression_value_37);
                if (tmp_tuple_element_20 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 310;
                    type_description_2 = "c";
                    goto tuple_build_exception_11;
                }
                PyTuple_SET_ITEM(tmp_defaults_2, 3, tmp_tuple_element_20);
                tmp_tuple_element_20 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_2, 4, tmp_tuple_element_20);
            }
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_defaults_2);
            goto frame_exception_exit_4;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            tmp_dict_key_9 = mod_consts[94];
            tmp_dict_value_9 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[65]);

            if (tmp_dict_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_9 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_9);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 6 );
            {
                PyObject *tmp_expression_value_38;
                PyObject *tmp_subscript_value_19;
                PyObject *tmp_expression_value_39;
                PyObject *tmp_subscript_value_20;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[95];
                tmp_dict_value_9 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[65]);

                if (tmp_dict_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_9 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_9);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[96];
                tmp_dict_value_9 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[65]);

                if (tmp_dict_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_9 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_9);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[42];
                tmp_dict_value_9 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[128]);

                if (tmp_dict_value_9 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[128]);

                        if (unlikely(tmp_dict_value_9 == NULL)) {
                            tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                        }

                        if (tmp_dict_value_9 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 310;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_dict_value_9);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[43];
                tmp_expression_value_38 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[123]);

                if (tmp_expression_value_38 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[123]);

                        if (unlikely(tmp_expression_value_38 == NULL)) {
                            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                        }

                        if (tmp_expression_value_38 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 311;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_38);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_expression_value_39 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[121]);

                if (tmp_expression_value_39 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[121]);

                        if (unlikely(tmp_expression_value_39 == NULL)) {
                            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
                        }

                        if (tmp_expression_value_39 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_38);

                            exception_lineno = 311;
                            type_description_2 = "c";
                            goto dict_build_exception_8;
                        }
                        Py_INCREF(tmp_expression_value_39);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_20 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[149]);

                if (tmp_subscript_value_20 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_20 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_20);
                    } else {
                        goto dict_build_exception_8;
                    }
                }

                tmp_subscript_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_20);
                Py_DECREF(tmp_expression_value_39);
                Py_DECREF(tmp_subscript_value_20);
                if (tmp_subscript_value_19 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_38);

                    exception_lineno = 311;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_19);
                Py_DECREF(tmp_expression_value_38);
                Py_DECREF(tmp_subscript_value_19);
                if (tmp_dict_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 311;
                    type_description_2 = "c";
                    goto dict_build_exception_8;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                Py_DECREF(tmp_dict_value_9);
                assert(!(tmp_res != 0));
                tmp_dict_key_9 = mod_consts[150];
                tmp_dict_value_9 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_9, tmp_dict_value_9);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_defaults_2);
            Py_DECREF(tmp_annotations_9);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;

            tmp_closure_2[0] = outline_2_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__8___init__(tmp_defaults_2, tmp_annotations_9, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_dict_key_10 = mod_consts[154];
            tmp_dict_value_10 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[65]);

            if (tmp_dict_value_10 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_10 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_10);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_10 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_40;
                PyObject *tmp_subscript_value_21;
                PyObject *tmp_expression_value_41;
                PyObject *tmp_subscript_value_22;
                PyObject *tmp_tuple_element_21;
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[155];
                tmp_expression_value_40 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[121]);

                if (tmp_expression_value_40 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[121]);

                        if (unlikely(tmp_expression_value_40 == NULL)) {
                            tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
                        }

                        if (tmp_expression_value_40 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 320;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_40);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_21 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[65]);

                if (tmp_subscript_value_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_21 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_subscript_value_21);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_40, tmp_subscript_value_21);
                Py_DECREF(tmp_expression_value_40);
                Py_DECREF(tmp_subscript_value_21);
                if (tmp_dict_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 320;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
                tmp_dict_key_10 = mod_consts[150];
                tmp_expression_value_41 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[124]);

                if (tmp_expression_value_41 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[124]);

                        if (unlikely(tmp_expression_value_41 == NULL)) {
                            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                        }

                        if (tmp_expression_value_41 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 320;
                            type_description_2 = "c";
                            goto dict_build_exception_9;
                        }
                        Py_INCREF(tmp_expression_value_41);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_tuple_element_21 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[152]);

                if (tmp_tuple_element_21 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_21 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_21);
                    } else {
                        goto dict_build_exception_9;
                    }
                }

                tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_42;
                    PyObject *tmp_subscript_value_23;
                    PyObject *tmp_tuple_element_22;
                    PyTuple_SET_ITEM(tmp_subscript_value_22, 0, tmp_tuple_element_21);
                    tmp_expression_value_42 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[122]);

                    if (tmp_expression_value_42 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[122]);

                            if (unlikely(tmp_expression_value_42 == NULL)) {
                                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                            }

                            if (tmp_expression_value_42 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 320;
                                type_description_2 = "c";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_expression_value_42);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    tmp_tuple_element_22 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[76]);

                    if (tmp_tuple_element_22 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_22 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

                            if (unlikely(tmp_tuple_element_22 == NULL)) {
                                tmp_tuple_element_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                            }

                            if (tmp_tuple_element_22 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_expression_value_42);

                                exception_lineno = 320;
                                type_description_2 = "c";
                                goto tuple_build_exception_12;
                            }
                            Py_INCREF(tmp_tuple_element_22);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    tmp_subscript_value_23 = MAKE_TUPLE_EMPTY(2);
                    PyTuple_SET_ITEM(tmp_subscript_value_23, 0, tmp_tuple_element_22);
                    tmp_tuple_element_22 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[156]);

                    if (tmp_tuple_element_22 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_22 = (PyObject *)&PyBool_Type;
                            Py_INCREF(tmp_tuple_element_22);
                        } else {
                            goto tuple_build_exception_12;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_23, 1, tmp_tuple_element_22);
                    tmp_tuple_element_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_23);
                    Py_DECREF(tmp_expression_value_42);
                    Py_DECREF(tmp_subscript_value_23);
                    if (tmp_tuple_element_21 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 320;
                        type_description_2 = "c";
                        goto tuple_build_exception_12;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_22, 1, tmp_tuple_element_21);
                }
                goto tuple_build_noexception_12;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_12:;
                Py_DECREF(tmp_expression_value_41);
                Py_DECREF(tmp_subscript_value_22);
                goto dict_build_exception_9;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_12:;
                tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_41, tmp_subscript_value_22);
                Py_DECREF(tmp_expression_value_41);
                Py_DECREF(tmp_subscript_value_22);
                if (tmp_dict_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 320;
                    type_description_2 = "c";
                    goto dict_build_exception_9;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_10, tmp_dict_value_10);
                Py_DECREF(tmp_dict_value_10);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__9__augmentation_space(tmp_annotations_10);

            tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 320;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_dict_key_11 = mod_consts[86];
            tmp_dict_value_11 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[76]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_11 == NULL)) {
                        tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 339;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_11 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[150];
            tmp_dict_value_11 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[76]);

            if (tmp_dict_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_11 == NULL)) {
                        tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 339;
                        type_description_2 = "c";
                        goto dict_build_exception_10;
                    }
                    Py_INCREF(tmp_dict_value_11);
                } else {
                    goto dict_build_exception_10;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_11, tmp_dict_value_11);
            Py_DECREF(tmp_dict_value_11);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_annotations_11);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__10_forward(tmp_annotations_11);

            tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[161], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 339;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_12;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            tmp_dict_key_12 = mod_consts[150];
            tmp_dict_value_12 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[152]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_12 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__11___repr__(tmp_annotations_12);

            tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 365;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_95535ae25141f4f0912ee1431e3b9ac8_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_95535ae25141f4f0912ee1431e3b9ac8_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_95535ae25141f4f0912ee1431e3b9ac8_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_95535ae25141f4f0912ee1431e3b9ac8_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_95535ae25141f4f0912ee1431e3b9ac8_4);

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
            nuitka_bool tmp_condition_result_13;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_13 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286, mod_consts[143], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_11;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_41;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_23;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_7 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_23 = mod_consts[165];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_23 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_23);
            tmp_tuple_element_23 = locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_23);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_fd129339e8ab215579c774d6e3da57da->m_frame.f_lineno = 286;
            tmp_assign_source_41 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;

                goto try_except_handler_11;
            }
            assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
            PyCell_SET(outline_2_var___class__, tmp_assign_source_41);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
        tmp_assign_source_40 = Nuitka_Cell_GET(outline_2_var___class__);
        Py_INCREF(tmp_assign_source_40);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286);
        locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286 = NULL;
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

        Py_DECREF(locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286);
        locals_torchvision$transforms$autoaugment$$$class__3_RandAugment_286 = NULL;
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
        exception_lineno = 286;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_40);
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
    // Tried code:
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_tuple_element_24;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_expression_value_44;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_expression_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_12;
        }
        tmp_expression_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[144]);
        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_12;
        }
        tmp_tuple_element_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[145]);
        Py_DECREF(tmp_expression_value_43);
        if (tmp_tuple_element_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_12;
        }
        tmp_assign_source_42 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_42, 0, tmp_tuple_element_24);
        assert(tmp_class_creation_4__bases_orig == NULL);
        tmp_class_creation_4__bases_orig = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_4__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_43 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_43;
    }
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_44;
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_24;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_12;
        }
        tmp_condition_result_14 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_5;
        } else {
            goto condexpr_false_5;
        }
        condexpr_true_5:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_45 = tmp_class_creation_4__bases;
        tmp_subscript_value_24 = mod_consts[4];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_45, tmp_subscript_value_24, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_12;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_12;
        }
        goto condexpr_end_5;
        condexpr_false_5:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_5:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_4 = tmp_class_creation_4__bases;
        tmp_assign_source_45 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_45;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_expression_value_46;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_46 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_46, mod_consts[132]);
        tmp_condition_result_15 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_25;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_47 = tmp_class_creation_4__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[132]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_12;
        }
        tmp_tuple_element_25 = mod_consts[174];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_25 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_25);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
        frame_fd129339e8ab215579c774d6e3da57da->m_frame.f_lineno = 378;
        tmp_assign_source_46 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_12;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_46;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_48;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_48 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_48, mod_consts[133]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_12;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_26;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[134];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_4 = mod_consts[90];
        tmp_getattr_default_4 = mod_consts[135];
        tmp_tuple_element_26 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_12;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_49;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_26);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_8 = tmp_class_creation_4__prepared;
            tmp_expression_value_49 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_49 == NULL));
            tmp_tuple_element_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[90]);
            Py_DECREF(tmp_expression_value_49);
            if (tmp_tuple_element_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_26);
        }
        goto tuple_build_noexception_13;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_13:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_12;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_13:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_12;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 378;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_12;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_47;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_48;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[136];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[137], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[175];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[112], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_14;
        }
        tmp_dictset_value = mod_consts[174];
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[139], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_14;
        }
        frame_4a363daefc9bf36d56ceb4bfca241f3a_5 = MAKE_CLASS_FRAME(codeobj_4a363daefc9bf36d56ceb4bfca241f3a, module_torchvision$transforms$autoaugment, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4a363daefc9bf36d56ceb4bfca241f3a_5);
        assert(Py_REFCNT(frame_4a363daefc9bf36d56ceb4bfca241f3a_5) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_tuple_element_27;
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            struct Nuitka_CellObject *tmp_closure_3[1];
            tmp_tuple_element_27 = mod_consts[169];
            tmp_defaults_3 = MAKE_TUPLE_EMPTY(3);
            {
                PyObject *tmp_expression_value_50;
                PyTuple_SET_ITEM0(tmp_defaults_3, 0, tmp_tuple_element_27);
                tmp_expression_value_50 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[128]);

                if (tmp_expression_value_50 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[128]);

                        if (unlikely(tmp_expression_value_50 == NULL)) {
                            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                        }

                        if (tmp_expression_value_50 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 397;
                            type_description_2 = "c";
                            goto tuple_build_exception_14;
                        }
                        Py_INCREF(tmp_expression_value_50);
                    } else {
                        goto tuple_build_exception_14;
                    }
                }

                tmp_tuple_element_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[148]);
                Py_DECREF(tmp_expression_value_50);
                if (tmp_tuple_element_27 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 397;
                    type_description_2 = "c";
                    goto tuple_build_exception_14;
                }
                PyTuple_SET_ITEM(tmp_defaults_3, 1, tmp_tuple_element_27);
                tmp_tuple_element_27 = Py_None;
                PyTuple_SET_ITEM0(tmp_defaults_3, 2, tmp_tuple_element_27);
            }
            goto tuple_build_noexception_14;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_14:;
            Py_DECREF(tmp_defaults_3);
            goto frame_exception_exit_5;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_14:;
            tmp_dict_key_13 = mod_consts[96];
            tmp_dict_value_13 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[65]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_13);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_13 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_51;
                PyObject *tmp_subscript_value_25;
                PyObject *tmp_expression_value_52;
                PyObject *tmp_subscript_value_26;
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[42];
                tmp_dict_value_13 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[128]);

                if (tmp_dict_value_13 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[128]);

                        if (unlikely(tmp_dict_value_13 == NULL)) {
                            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                        }

                        if (tmp_dict_value_13 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 397;
                            type_description_2 = "c";
                            goto dict_build_exception_11;
                        }
                        Py_INCREF(tmp_dict_value_13);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[43];
                tmp_expression_value_51 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[123]);

                if (tmp_expression_value_51 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[123]);

                        if (unlikely(tmp_expression_value_51 == NULL)) {
                            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                        }

                        if (tmp_expression_value_51 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 398;
                            type_description_2 = "c";
                            goto dict_build_exception_11;
                        }
                        Py_INCREF(tmp_expression_value_51);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_expression_value_52 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[121]);

                if (tmp_expression_value_52 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[121]);

                        if (unlikely(tmp_expression_value_52 == NULL)) {
                            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
                        }

                        if (tmp_expression_value_52 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_51);

                            exception_lineno = 398;
                            type_description_2 = "c";
                            goto dict_build_exception_11;
                        }
                        Py_INCREF(tmp_expression_value_52);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_subscript_value_26 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[149]);

                if (tmp_subscript_value_26 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_subscript_value_26 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_subscript_value_26);
                    } else {
                        goto dict_build_exception_11;
                    }
                }

                tmp_subscript_value_25 = LOOKUP_SUBSCRIPT(tmp_expression_value_52, tmp_subscript_value_26);
                Py_DECREF(tmp_expression_value_52);
                Py_DECREF(tmp_subscript_value_26);
                if (tmp_subscript_value_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_51);

                    exception_lineno = 398;
                    type_description_2 = "c";
                    goto dict_build_exception_11;
                }
                tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_51, tmp_subscript_value_25);
                Py_DECREF(tmp_expression_value_51);
                Py_DECREF(tmp_subscript_value_25);
                if (tmp_dict_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 398;
                    type_description_2 = "c";
                    goto dict_build_exception_11;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
                Py_DECREF(tmp_dict_value_13);
                assert(!(tmp_res != 0));
                tmp_dict_key_13 = mod_consts[150];
                tmp_dict_value_13 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_13, tmp_dict_value_13);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_11;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_defaults_3);
            Py_DECREF(tmp_annotations_13);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_11:;

            tmp_closure_3[0] = outline_3_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__12___init__(tmp_defaults_3, tmp_annotations_13, tmp_closure_3);

            tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[40], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 394;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_14;
            PyObject *tmp_dict_value_14;
            tmp_dict_key_14 = mod_consts[154];
            tmp_dict_value_14 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[65]);

            if (tmp_dict_value_14 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_14 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_dict_value_14);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_14 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_53;
                PyObject *tmp_subscript_value_27;
                PyObject *tmp_tuple_element_28;
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
                tmp_dict_key_14 = mod_consts[150];
                tmp_expression_value_53 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[124]);

                if (tmp_expression_value_53 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[124]);

                        if (unlikely(tmp_expression_value_53 == NULL)) {
                            tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                        }

                        if (tmp_expression_value_53 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 405;
                            type_description_2 = "c";
                            goto dict_build_exception_12;
                        }
                        Py_INCREF(tmp_expression_value_53);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_tuple_element_28 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[152]);

                if (tmp_tuple_element_28 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_28 = (PyObject *)&PyUnicode_Type;
                        Py_INCREF(tmp_tuple_element_28);
                    } else {
                        goto dict_build_exception_12;
                    }
                }

                tmp_subscript_value_27 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_54;
                    PyObject *tmp_subscript_value_28;
                    PyObject *tmp_tuple_element_29;
                    PyTuple_SET_ITEM(tmp_subscript_value_27, 0, tmp_tuple_element_28);
                    tmp_expression_value_54 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[122]);

                    if (tmp_expression_value_54 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[122]);

                            if (unlikely(tmp_expression_value_54 == NULL)) {
                                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                            }

                            if (tmp_expression_value_54 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 405;
                                type_description_2 = "c";
                                goto tuple_build_exception_15;
                            }
                            Py_INCREF(tmp_expression_value_54);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    tmp_tuple_element_29 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[76]);

                    if (tmp_tuple_element_29 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_29 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

                            if (unlikely(tmp_tuple_element_29 == NULL)) {
                                tmp_tuple_element_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                            }

                            if (tmp_tuple_element_29 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                                Py_DECREF(tmp_expression_value_54);

                                exception_lineno = 405;
                                type_description_2 = "c";
                                goto tuple_build_exception_15;
                            }
                            Py_INCREF(tmp_tuple_element_29);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    tmp_subscript_value_28 = MAKE_TUPLE_EMPTY(2);
                    PyTuple_SET_ITEM(tmp_subscript_value_28, 0, tmp_tuple_element_29);
                    tmp_tuple_element_29 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[156]);

                    if (tmp_tuple_element_29 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_tuple_element_29 = (PyObject *)&PyBool_Type;
                            Py_INCREF(tmp_tuple_element_29);
                        } else {
                            goto tuple_build_exception_15;
                        }
                    }

                    PyTuple_SET_ITEM(tmp_subscript_value_28, 1, tmp_tuple_element_29);
                    tmp_tuple_element_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_54, tmp_subscript_value_28);
                    Py_DECREF(tmp_expression_value_54);
                    Py_DECREF(tmp_subscript_value_28);
                    if (tmp_tuple_element_28 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 405;
                        type_description_2 = "c";
                        goto tuple_build_exception_15;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_27, 1, tmp_tuple_element_28);
                }
                goto tuple_build_noexception_15;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_15:;
                Py_DECREF(tmp_expression_value_53);
                Py_DECREF(tmp_subscript_value_27);
                goto dict_build_exception_12;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_15:;
                tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_53, tmp_subscript_value_27);
                Py_DECREF(tmp_expression_value_53);
                Py_DECREF(tmp_subscript_value_27);
                if (tmp_dict_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 405;
                    type_description_2 = "c";
                    goto dict_build_exception_12;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_14, tmp_dict_value_14);
                Py_DECREF(tmp_dict_value_14);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_12;
            // Exception handling pass through code for dict_build:
            dict_build_exception_12:;
            Py_DECREF(tmp_annotations_14);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_12:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__13__augmentation_space(tmp_annotations_14);

            tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[83], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 405;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_15;
            PyObject *tmp_dict_value_15;
            tmp_dict_key_15 = mod_consts[86];
            tmp_dict_value_15 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[76]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_15 == NULL)) {
                        tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 424;
                        type_description_2 = "c";
                        goto frame_exception_exit_5;
                    }
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_15 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[150];
            tmp_dict_value_15 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[76]);

            if (tmp_dict_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[76]);

                    if (unlikely(tmp_dict_value_15 == NULL)) {
                        tmp_dict_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
                    }

                    if (tmp_dict_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 424;
                        type_description_2 = "c";
                        goto dict_build_exception_13;
                    }
                    Py_INCREF(tmp_dict_value_15);
                } else {
                    goto dict_build_exception_13;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_13;
            // Exception handling pass through code for dict_build:
            dict_build_exception_13:;
            Py_DECREF(tmp_annotations_15);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_13:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__14_forward(tmp_annotations_15);

            tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[161], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 424;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_16;
            PyObject *tmp_dict_value_16;
            tmp_dict_key_16 = mod_consts[150];
            tmp_dict_value_16 = PyObject_GetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[152]);

            if (tmp_dict_value_16 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_16 = (PyObject *)&PyUnicode_Type;
                    Py_INCREF(tmp_dict_value_16);
                } else {
                    goto frame_exception_exit_5;
                }
            }

            tmp_annotations_16 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_16, tmp_dict_value_16);
            Py_DECREF(tmp_dict_value_16);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_torchvision$transforms$autoaugment$$$function__15___repr__(tmp_annotations_16);

            tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[163], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 452;
                type_description_2 = "c";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4a363daefc9bf36d56ceb4bfca241f3a_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4a363daefc9bf36d56ceb4bfca241f3a_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4a363daefc9bf36d56ceb4bfca241f3a_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4a363daefc9bf36d56ceb4bfca241f3a_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_4a363daefc9bf36d56ceb4bfca241f3a_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_14;
        skip_nested_handling_4:;
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_4__bases;
            CHECK_OBJECT(tmp_class_creation_4__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_4__bases_orig;
            tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto try_except_handler_14;
            }
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_4__bases_orig);
        tmp_dictset_value = tmp_class_creation_4__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378, mod_consts[143], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;

            goto try_except_handler_14;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_49;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_30;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_9 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_30 = mod_consts[174];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_30 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_30);
            tmp_tuple_element_30 = locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_30);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_4__class_decl_dict;
            frame_fd129339e8ab215579c774d6e3da57da->m_frame.f_lineno = 378;
            tmp_assign_source_49 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 378;

                goto try_except_handler_14;
            }
            assert(Nuitka_Cell_GET(outline_3_var___class__) == NULL);
            PyCell_SET(outline_3_var___class__, tmp_assign_source_49);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_3_var___class__));
        tmp_assign_source_48 = Nuitka_Cell_GET(outline_3_var___class__);
        Py_INCREF(tmp_assign_source_48);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378);
        locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378);
        locals_torchvision$transforms$autoaugment$$$class__4_TrivialAugmentWide_378 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 378;
        goto try_except_handler_12;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)mod_consts[174], tmp_assign_source_48);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fd129339e8ab215579c774d6e3da57da, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fd129339e8ab215579c774d6e3da57da->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fd129339e8ab215579c774d6e3da57da, exception_lineno);
    }



    assertFrameObject(frame_fd129339e8ab215579c774d6e3da57da);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_5:;
    CHECK_OBJECT(tmp_class_creation_4__bases_orig);
    Py_DECREF(tmp_class_creation_4__bases_orig);
    tmp_class_creation_4__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_4__bases);
    Py_DECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__metaclass);
    Py_DECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torchvision.transforms.autoaugment", false);

    Py_INCREF(module_torchvision$transforms$autoaugment);
    return module_torchvision$transforms$autoaugment;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$transforms$autoaugment, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torchvision$transforms$autoaugment", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
