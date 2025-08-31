/* Generated code for Python module 'torch.utils.data._utils.collate'
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

/* The "module_torch$utils$data$_utils$collate" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$utils$data$_utils$collate;
PyDictObject *moduledict_torch$utils$data$_utils$collate;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[79];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[79];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.utils.data._utils.collate"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 79; i++) {
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
void checkModuleConstants_torch$utils$data$_utils$collate(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 79; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_5ce86463330f02cdea83cb7edd58b5bf;
static PyCodeObject *codeobj_4cde1fbc48594ba77b0bea08cdaabdf6;
static PyCodeObject *codeobj_ee2d78689788ed9484c018f791844a33;
static PyCodeObject *codeobj_6d410ae7c0931f1412b26701d4f5481b;
static PyCodeObject *codeobj_b077daa18a77b401b1c6afceb9ab7309;
static PyCodeObject *codeobj_1ee96ba53d558e36362728785c99f675;
static PyCodeObject *codeobj_d0690a3e7c46fe615282a7059195b217;
static PyCodeObject *codeobj_dee30d9fa0b881189a059ac7414cb3f4;
static PyCodeObject *codeobj_67715e1220547abeb469d4200c670de4;
static PyCodeObject *codeobj_d8a17f6f239bf3d01254ef4d07e7dc13;
static PyCodeObject *codeobj_47cdde8897c3ff0f24ed5c5ec8c8c2b6;
static PyCodeObject *codeobj_ffa1ea32fbd026614208bf903c1b23cd;
static PyCodeObject *codeobj_824c2f4d9dad328cc566dbaa7fed7de3;
static PyCodeObject *codeobj_cc8981602f1c2a8737e274098a4f4446;
static PyCodeObject *codeobj_662f6a2d8c2f1a10a5c55d6fa599c2a3;
static PyCodeObject *codeobj_fe5e8183217301e8652148702757b59c;
static PyCodeObject *codeobj_f87d26fea5fb9a18858e4b5cec16349a;
static PyCodeObject *codeobj_4c90fec40d3123e3c109353ac298ca8d;
static PyCodeObject *codeobj_19b6a24256339087bfad158b4c22d9a1;
static PyCodeObject *codeobj_97d35536e7dd7ff11b6d1e73030cfb97;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[62]); CHECK_OBJECT(module_filename_obj);
    codeobj_5ce86463330f02cdea83cb7edd58b5bf = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[64], NULL, 1, 0, 0);
    codeobj_4cde1fbc48594ba77b0bea08cdaabdf6 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[64], NULL, 1, 0, 0);
    codeobj_ee2d78689788ed9484c018f791844a33 = MAKE_CODE_OBJECT(module_filename_obj, 61, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[65], NULL, 1, 0, 0);
    codeobj_6d410ae7c0931f1412b26701d4f5481b = MAKE_CODE_OBJECT(module_filename_obj, 64, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[65], NULL, 1, 0, 0);
    codeobj_b077daa18a77b401b1c6afceb9ab7309 = MAKE_CODE_OBJECT(module_filename_obj, 66, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[66], NULL, 1, 0, 0);
    codeobj_1ee96ba53d558e36362728785c99f675 = MAKE_CODE_OBJECT(module_filename_obj, 167, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[67], NULL, 1, 0, 0);
    codeobj_d0690a3e7c46fe615282a7059195b217 = MAKE_CODE_OBJECT(module_filename_obj, 162, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[68], NULL, 1, 0, 0);
    codeobj_dee30d9fa0b881189a059ac7414cb3f4 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[69], NULL, 1, 0, 0);
    codeobj_67715e1220547abeb469d4200c670de4 = MAKE_CODE_OBJECT(module_filename_obj, 146, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[71], NULL, 1, 0, 0);
    codeobj_d8a17f6f239bf3d01254ef4d07e7dc13 = MAKE_CODE_OBJECT(module_filename_obj, 68, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[72], NULL, 1, 0, 0);
    codeobj_47cdde8897c3ff0f24ed5c5ec8c8c2b6 = MAKE_CODE_OBJECT(module_filename_obj, 71, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[72], NULL, 1, 0, 0);
    codeobj_ffa1ea32fbd026614208bf903c1b23cd = MAKE_CODE_OBJECT(module_filename_obj, 74, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[72], NULL, 1, 0, 0);
    codeobj_824c2f4d9dad328cc566dbaa7fed7de3 = MAKE_CODE_OBJECT(module_filename_obj, 157, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[73], NULL, 1, 0, 0);
    codeobj_cc8981602f1c2a8737e274098a4f4446 = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[73], NULL, 1, 0, 0);
    codeobj_662f6a2d8c2f1a10a5c55d6fa599c2a3 = MAKE_CODE_OBJECT(module_filename_obj, 172, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[74], NULL, 1, 0, 0);
    codeobj_fe5e8183217301e8652148702757b59c = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[74], NULL, 1, 0, 0);
    codeobj_f87d26fea5fb9a18858e4b5cec16349a = MAKE_CODE_OBJECT(module_filename_obj, 178, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[74], NULL, 1, 0, 0);
    codeobj_4c90fec40d3123e3c109353ac298ca8d = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[75], mod_consts[75], NULL, NULL, 0, 0, 0);
    codeobj_19b6a24256339087bfad158b4c22d9a1 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[76], NULL, 1, 0, 0);
    codeobj_97d35536e7dd7ff11b6d1e73030cfb97 = MAKE_CODE_OBJECT(module_filename_obj, 18, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[77], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_torch$utils$data$_utils$collate$$$function__1_default_convert$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__3_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__2_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$utils$data$_utils$collate$$$function__1_default_convert();


static PyObject *MAKE_FUNCTION_torch$utils$data$_utils$collate$$$function__2_default_collate();


// The module function definitions.
static PyObject *impl_torch$utils$data$_utils$collate$$$function__1_default_convert(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_elem_type = NULL;
    PyObject *outline_0_var_key = NULL;
    PyObject *outline_1_var_key = NULL;
    PyObject *outline_2_var_d = NULL;
    PyObject *outline_3_var_d = NULL;
    PyObject *outline_4_var_d = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_dictcontraction_2__$0 = NULL;
    PyObject *tmp_dictcontraction_2__contraction = NULL;
    PyObject *tmp_dictcontraction_2__iter_value_0 = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_listcomp_2__$0 = NULL;
    PyObject *tmp_listcomp_2__contraction = NULL;
    PyObject *tmp_listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_listcomp_3__$0 = NULL;
    PyObject *tmp_listcomp_3__contraction = NULL;
    PyObject *tmp_listcomp_3__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_97d35536e7dd7ff11b6d1e73030cfb97;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_ee2d78689788ed9484c018f791844a33_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_ee2d78689788ed9484c018f791844a33_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    struct Nuitka_FrameObject *frame_6d410ae7c0931f1412b26701d4f5481b_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_6d410ae7c0931f1412b26701d4f5481b_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    bool tmp_result;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_FrameObject *frame_d8a17f6f239bf3d01254ef4d07e7dc13_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_d8a17f6f239bf3d01254ef4d07e7dc13_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    struct Nuitka_FrameObject *frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    static struct Nuitka_FrameObject *cache_frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    struct Nuitka_FrameObject *frame_ffa1ea32fbd026614208bf903c1b23cd_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_ffa1ea32fbd026614208bf903c1b23cd_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    static struct Nuitka_FrameObject *cache_frame_97d35536e7dd7ff11b6d1e73030cfb97 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_data);
        tmp_type_arg_1 = par_data;
        tmp_assign_source_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_elem_type == NULL);
        var_elem_type = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_97d35536e7dd7ff11b6d1e73030cfb97)) {
        Py_XDECREF(cache_frame_97d35536e7dd7ff11b6d1e73030cfb97);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97d35536e7dd7ff11b6d1e73030cfb97 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97d35536e7dd7ff11b6d1e73030cfb97 = MAKE_FUNCTION_FRAME(codeobj_97d35536e7dd7ff11b6d1e73030cfb97, module_torch$utils$data$_utils$collate, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_97d35536e7dd7ff11b6d1e73030cfb97->m_type_description == NULL);
    frame_97d35536e7dd7ff11b6d1e73030cfb97 = cache_frame_97d35536e7dd7ff11b6d1e73030cfb97;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_97d35536e7dd7ff11b6d1e73030cfb97);
    assert(Py_REFCNT(frame_97d35536e7dd7ff11b6d1e73030cfb97) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_data);
        tmp_isinstance_inst_1 = par_data;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oo";
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
    CHECK_OBJECT(par_data);
    tmp_return_value = par_data;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_elem_type);
        tmp_expression_value_2 = var_elem_type;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_cmp_expr_right_1 = mod_consts[3];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_elem_type);
        tmp_expression_value_3 = var_elem_type;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[4]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[5];
        tmp_and_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_elem_type);
        tmp_expression_value_4 = var_elem_type;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[4]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[6];
        tmp_and_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_elem_type);
        tmp_expression_value_5 = var_elem_type;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[4]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[7];
        tmp_and_left_value_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_and_left_value_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[9]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_expression_value_8 = par_data;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[10]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[11]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_97d35536e7dd7ff11b6d1e73030cfb97->m_frame.f_lineno = 56;
        tmp_cmp_expr_left_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = Py_None;
        tmp_and_right_value_3 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        Py_DECREF(tmp_cmp_expr_left_5);
        tmp_condition_result_3 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_3 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    if (par_data == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 57;
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_data;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[13]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (par_data == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[12]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = par_data;
        frame_97d35536e7dd7ff11b6d1e73030cfb97->m_frame.f_lineno = 58;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_data);
        tmp_isinstance_inst_2 = par_data;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[15]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[16]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    // Tried code:
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_elem_type);
        tmp_called_value_3 = var_elem_type;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_data);
            tmp_iter_arg_1 = par_data;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_1 = "oo";
                goto try_except_handler_3;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_ee2d78689788ed9484c018f791844a33_2)) {
            Py_XDECREF(cache_frame_ee2d78689788ed9484c018f791844a33_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_ee2d78689788ed9484c018f791844a33_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_ee2d78689788ed9484c018f791844a33_2 = MAKE_FUNCTION_FRAME(codeobj_ee2d78689788ed9484c018f791844a33, module_torch$utils$data$_utils$collate, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_ee2d78689788ed9484c018f791844a33_2->m_type_description == NULL);
        frame_ee2d78689788ed9484c018f791844a33_2 = cache_frame_ee2d78689788ed9484c018f791844a33_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_ee2d78689788ed9484c018f791844a33_2);
        assert(Py_REFCNT(frame_ee2d78689788ed9484c018f791844a33_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_1 = tmp_dictcontraction_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 61;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_assign_source_5 = tmp_dictcontraction_1__iter_value_0;
            {
                PyObject *old = outline_0_var_key;
                outline_0_var_key = tmp_assign_source_5;
                Py_INCREF(outline_0_var_key);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_element_value_4;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_subscript_value_1;
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT(par_data);
            tmp_expression_value_12 = par_data;
            CHECK_OBJECT(outline_0_var_key);
            tmp_subscript_value_1 = outline_0_var_key;
            tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_1);
            if (tmp_args_element_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            frame_ee2d78689788ed9484c018f791844a33_2->m_frame.f_lineno = 61;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset_dict = tmp_dictcontraction_1__contraction;
            CHECK_OBJECT(outline_0_var_key);
            tmp_dictset_key = outline_0_var_key;
            assert(PyDict_CheckExact(tmp_dictset_dict));
            tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_2 = "oo";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_args_element_value_3 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_args_element_value_3);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
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

        goto try_return_handler_3;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_ee2d78689788ed9484c018f791844a33_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_ee2d78689788ed9484c018f791844a33_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_ee2d78689788ed9484c018f791844a33_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_ee2d78689788ed9484c018f791844a33_2,
            type_description_2,
            outline_0_var_key,
            par_data
        );


        // Release cached frame if used for exception.
        if (frame_ee2d78689788ed9484c018f791844a33_2 == cache_frame_ee2d78689788ed9484c018f791844a33_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_ee2d78689788ed9484c018f791844a33_2);
            cache_frame_ee2d78689788ed9484c018f791844a33_2 = NULL;
        }

        assertFrameObject(frame_ee2d78689788ed9484c018f791844a33_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_key);
        outline_0_var_key = NULL;
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
        exception_lineno = 61;
        goto try_except_handler_2;
        outline_result_1:;
        frame_97d35536e7dd7ff11b6d1e73030cfb97->m_frame.f_lineno = 61;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_97d35536e7dd7ff11b6d1e73030cfb97, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_97d35536e7dd7ff11b6d1e73030cfb97, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_6 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(par_data);
        tmp_iter_arg_2 = par_data;
        tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oo";
            goto try_except_handler_6;
        }
        assert(tmp_dictcontraction_2__$0 == NULL);
        tmp_dictcontraction_2__$0 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_DICT_EMPTY();
        assert(tmp_dictcontraction_2__contraction == NULL);
        tmp_dictcontraction_2__contraction = tmp_assign_source_7;
    }
    if (isFrameUnusable(cache_frame_6d410ae7c0931f1412b26701d4f5481b_3)) {
        Py_XDECREF(cache_frame_6d410ae7c0931f1412b26701d4f5481b_3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6d410ae7c0931f1412b26701d4f5481b_3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6d410ae7c0931f1412b26701d4f5481b_3 = MAKE_FUNCTION_FRAME(codeobj_6d410ae7c0931f1412b26701d4f5481b, module_torch$utils$data$_utils$collate, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6d410ae7c0931f1412b26701d4f5481b_3->m_type_description == NULL);
    frame_6d410ae7c0931f1412b26701d4f5481b_3 = cache_frame_6d410ae7c0931f1412b26701d4f5481b_3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6d410ae7c0931f1412b26701d4f5481b_3);
    assert(Py_REFCNT(frame_6d410ae7c0931f1412b26701d4f5481b_3) == 2);

    // Framed code:
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_dictcontraction_2__$0);
        tmp_next_source_2 = tmp_dictcontraction_2__$0;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "oo";
                exception_lineno = 64;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_dictcontraction_2__iter_value_0;
            tmp_dictcontraction_2__iter_value_0 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_dictcontraction_2__iter_value_0);
        tmp_assign_source_9 = tmp_dictcontraction_2__iter_value_0;
        {
            PyObject *old = outline_1_var_key;
            outline_1_var_key = tmp_assign_source_9;
            Py_INCREF(outline_1_var_key);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_2;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(par_data);
        tmp_expression_value_13 = par_data;
        CHECK_OBJECT(outline_1_var_key);
        tmp_subscript_value_2 = outline_1_var_key;
        tmp_args_element_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_2);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        frame_6d410ae7c0931f1412b26701d4f5481b_3->m_frame.f_lineno = 64;
        tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        tmp_dictset_dict = tmp_dictcontraction_2__contraction;
        CHECK_OBJECT(outline_1_var_key);
        tmp_dictset_key = outline_1_var_key;
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 64;
        type_description_2 = "oo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
    CHECK_OBJECT(tmp_dictcontraction_2__contraction);
    tmp_return_value = tmp_dictcontraction_2__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_7;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_7:;
    CHECK_OBJECT(tmp_dictcontraction_2__$0);
    Py_DECREF(tmp_dictcontraction_2__$0);
    tmp_dictcontraction_2__$0 = NULL;
    CHECK_OBJECT(tmp_dictcontraction_2__contraction);
    Py_DECREF(tmp_dictcontraction_2__contraction);
    tmp_dictcontraction_2__contraction = NULL;
    Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
    tmp_dictcontraction_2__iter_value_0 = NULL;
    goto frame_return_exit_3;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_4 = exception_type;
    exception_keeper_value_4 = exception_value;
    exception_keeper_tb_4 = exception_tb;
    exception_keeper_lineno_4 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_dictcontraction_2__$0);
    Py_DECREF(tmp_dictcontraction_2__$0);
    tmp_dictcontraction_2__$0 = NULL;
    CHECK_OBJECT(tmp_dictcontraction_2__contraction);
    Py_DECREF(tmp_dictcontraction_2__contraction);
    tmp_dictcontraction_2__contraction = NULL;
    Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
    tmp_dictcontraction_2__iter_value_0 = NULL;
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

    goto try_return_handler_6;
    frame_exception_exit_3:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6d410ae7c0931f1412b26701d4f5481b_3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6d410ae7c0931f1412b26701d4f5481b_3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6d410ae7c0931f1412b26701d4f5481b_3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6d410ae7c0931f1412b26701d4f5481b_3,
        type_description_2,
        outline_1_var_key,
        par_data
    );


    // Release cached frame if used for exception.
    if (frame_6d410ae7c0931f1412b26701d4f5481b_3 == cache_frame_6d410ae7c0931f1412b26701d4f5481b_3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6d410ae7c0931f1412b26701d4f5481b_3);
        cache_frame_6d410ae7c0931f1412b26701d4f5481b_3 = NULL;
    }

    assertFrameObject(frame_6d410ae7c0931f1412b26701d4f5481b_3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_2;
    frame_no_exception_2:;
    goto skip_nested_handling_2;
    nested_frame_exit_2:;
    type_description_1 = "oo";
    goto try_except_handler_6;
    skip_nested_handling_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_6:;
    Py_XDECREF(outline_1_var_key);
    outline_1_var_key = NULL;
    goto outline_result_2;
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

    Py_XDECREF(outline_1_var_key);
    outline_1_var_key = NULL;
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
    exception_lineno = 64;
    goto try_except_handler_5;
    outline_result_2:;
    goto try_return_handler_5;
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 60;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_97d35536e7dd7ff11b6d1e73030cfb97->m_frame) frame_97d35536e7dd7ff11b6d1e73030cfb97->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_5;
    branch_end_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_and_left_truth_4;
        nuitka_bool tmp_and_left_value_4;
        nuitka_bool tmp_and_right_value_4;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_data);
        tmp_isinstance_inst_3 = par_data;
        tmp_isinstance_cls_3 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_4 = tmp_and_left_value_4 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_4 == 1) {
            goto and_right_4;
        } else {
            goto and_left_4;
        }
        and_right_4:;
        CHECK_OBJECT(par_data);
        tmp_expression_value_14 = par_data;
        tmp_attribute_value_1 = mod_consts[18];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_14, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_6 = tmp_and_right_value_4;
        goto and_end_4;
        and_left_4:;
        tmp_condition_result_6 = tmp_and_left_value_4;
        and_end_4:;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(var_elem_type);
        tmp_dircall_arg1_1 = var_elem_type;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(par_data);
            tmp_iter_arg_3 = par_data;
            tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;
                type_description_1 = "oo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_10;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_dircall_arg2_1 = MAKE_GENERATOR_torch$utils$data$_utils$collate$$$function__1_default_convert$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_8;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_3:;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        CHECK_OBJECT(par_data);
        tmp_isinstance_inst_4 = par_data;
        tmp_isinstance_cls_4 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iter_arg_4;
        CHECK_OBJECT(par_data);
        tmp_iter_arg_4 = par_data;
        tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "oo";
            goto try_except_handler_9;
        }
        assert(tmp_listcomp_1__$0 == NULL);
        tmp_listcomp_1__$0 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_1__contraction == NULL);
        tmp_listcomp_1__contraction = tmp_assign_source_12;
    }
    if (isFrameUnusable(cache_frame_d8a17f6f239bf3d01254ef4d07e7dc13_4)) {
        Py_XDECREF(cache_frame_d8a17f6f239bf3d01254ef4d07e7dc13_4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d8a17f6f239bf3d01254ef4d07e7dc13_4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d8a17f6f239bf3d01254ef4d07e7dc13_4 = MAKE_FUNCTION_FRAME(codeobj_d8a17f6f239bf3d01254ef4d07e7dc13, module_torch$utils$data$_utils$collate, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d8a17f6f239bf3d01254ef4d07e7dc13_4->m_type_description == NULL);
    frame_d8a17f6f239bf3d01254ef4d07e7dc13_4 = cache_frame_d8a17f6f239bf3d01254ef4d07e7dc13_4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d8a17f6f239bf3d01254ef4d07e7dc13_4);
    assert(Py_REFCNT(frame_d8a17f6f239bf3d01254ef4d07e7dc13_4) == 2);

    // Framed code:
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        tmp_next_source_3 = tmp_listcomp_1__$0;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 68;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_listcomp_1__iter_value_0;
            tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
        tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
        {
            PyObject *old = outline_2_var_d;
            outline_2_var_d = tmp_assign_source_14;
            Py_INCREF(outline_2_var_d);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_1;
        PyObject *tmp_append_value_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_append_list_1 = tmp_listcomp_1__contraction;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(outline_2_var_d);
        tmp_args_element_value_6 = outline_2_var_d;
        frame_d8a17f6f239bf3d01254ef4d07e7dc13_4->m_frame.f_lineno = 68;
        tmp_append_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
        if (tmp_append_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 68;
        type_description_2 = "o";
        goto try_except_handler_10;
    }
    goto loop_start_3;
    loop_end_3:;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    tmp_return_value = tmp_listcomp_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_10;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_10:;
    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    goto frame_return_exit_4;
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

    CHECK_OBJECT(tmp_listcomp_1__$0);
    Py_DECREF(tmp_listcomp_1__$0);
    tmp_listcomp_1__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_1__contraction);
    Py_DECREF(tmp_listcomp_1__contraction);
    tmp_listcomp_1__contraction = NULL;
    Py_XDECREF(tmp_listcomp_1__iter_value_0);
    tmp_listcomp_1__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_4;
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_return_exit_4:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_9;
    frame_exception_exit_4:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d8a17f6f239bf3d01254ef4d07e7dc13_4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d8a17f6f239bf3d01254ef4d07e7dc13_4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d8a17f6f239bf3d01254ef4d07e7dc13_4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d8a17f6f239bf3d01254ef4d07e7dc13_4,
        type_description_2,
        outline_2_var_d
    );


    // Release cached frame if used for exception.
    if (frame_d8a17f6f239bf3d01254ef4d07e7dc13_4 == cache_frame_d8a17f6f239bf3d01254ef4d07e7dc13_4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d8a17f6f239bf3d01254ef4d07e7dc13_4);
        cache_frame_d8a17f6f239bf3d01254ef4d07e7dc13_4 = NULL;
    }

    assertFrameObject(frame_d8a17f6f239bf3d01254ef4d07e7dc13_4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_3;
    frame_no_exception_3:;
    goto skip_nested_handling_3;
    nested_frame_exit_3:;
    type_description_1 = "oo";
    goto try_except_handler_9;
    skip_nested_handling_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_9:;
    Py_XDECREF(outline_2_var_d);
    outline_2_var_d = NULL;
    goto outline_result_4;
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

    Py_XDECREF(outline_2_var_d);
    outline_2_var_d = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto outline_exception_3;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_3:;
    exception_lineno = 68;
    goto frame_exception_exit_1;
    outline_result_4:;
    goto frame_return_exit_1;
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        int tmp_and_left_truth_5;
        nuitka_bool tmp_and_left_value_5;
        nuitka_bool tmp_and_right_value_5;
        PyObject *tmp_isinstance_inst_5;
        PyObject *tmp_isinstance_cls_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_6;
        PyObject *tmp_isinstance_cls_6;
        CHECK_OBJECT(par_data);
        tmp_isinstance_inst_5 = par_data;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[15]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[19]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_isinstance_cls_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
        Py_DECREF(tmp_isinstance_cls_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_5 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_5 = tmp_and_left_value_5 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_5 == 1) {
            goto and_right_5;
        } else {
            goto and_left_5;
        }
        and_right_5:;
        CHECK_OBJECT(par_data);
        tmp_isinstance_inst_6 = par_data;
        tmp_isinstance_cls_6 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_isinstance_cls_6 == NULL)) {
            tmp_isinstance_cls_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_isinstance_cls_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_5 = (tmp_res == 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_8 = tmp_and_right_value_5;
        goto and_end_5;
        and_left_5:;
        tmp_condition_result_8 = tmp_and_left_value_5;
        and_end_5:;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    // Tried code:
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_elem_type);
        tmp_called_value_7 = var_elem_type;
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(par_data);
            tmp_iter_arg_5 = par_data;
            tmp_assign_source_15 = MAKE_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_1 = "oo";
                goto try_except_handler_12;
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
        if (isFrameUnusable(cache_frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5)) {
            Py_XDECREF(cache_frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5 = MAKE_FUNCTION_FRAME(codeobj_47cdde8897c3ff0f24ed5c5ec8c8c2b6, module_torch$utils$data$_utils$collate, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5->m_type_description == NULL);
        frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5 = cache_frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5);
        assert(Py_REFCNT(frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5) == 2);

        // Framed code:
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_4 = tmp_listcomp_2__$0;
            tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_17 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 71;
                    goto try_except_handler_13;
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
                PyObject *old = outline_3_var_d;
                outline_3_var_d = tmp_assign_source_18;
                Py_INCREF(outline_3_var_d);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_element_value_8;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[17]);

            if (unlikely(tmp_called_value_8 == NULL)) {
                tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
            }

            if (tmp_called_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            CHECK_OBJECT(outline_3_var_d);
            tmp_args_element_value_8 = outline_3_var_d;
            frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5->m_frame.f_lineno = 71;
            tmp_append_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;
                type_description_2 = "o";
                goto try_except_handler_13;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_2 = "o";
            goto try_except_handler_13;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_args_element_value_7 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_args_element_value_7);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_5;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
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
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto frame_exception_exit_5;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_return_exit_5:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_12;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5,
            type_description_2,
            outline_3_var_d
        );


        // Release cached frame if used for exception.
        if (frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5 == cache_frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5);
            cache_frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5 = NULL;
        }

        assertFrameObject(frame_47cdde8897c3ff0f24ed5c5ec8c8c2b6_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;
        type_description_1 = "oo";
        goto try_except_handler_12;
        skip_nested_handling_4:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_XDECREF(outline_3_var_d);
        outline_3_var_d = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_3_var_d);
        outline_3_var_d = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 71;
        goto try_except_handler_11;
        outline_result_5:;
        frame_97d35536e7dd7ff11b6d1e73030cfb97->m_frame.f_lineno = 71;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oo";
            goto try_except_handler_11;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_11 == NULL) {
        exception_keeper_tb_11 = MAKE_TRACEBACK(frame_97d35536e7dd7ff11b6d1e73030cfb97, exception_keeper_lineno_11);
    } else if (exception_keeper_lineno_11 != 0) {
        exception_keeper_tb_11 = ADD_TRACEBACK(exception_keeper_tb_11, frame_97d35536e7dd7ff11b6d1e73030cfb97, exception_keeper_lineno_11);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_11, &exception_keeper_value_11, &exception_keeper_tb_11);
    // Tried code:
    {
        bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_9 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(par_data);
        tmp_iter_arg_6 = par_data;
        tmp_assign_source_19 = MAKE_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "oo";
            goto try_except_handler_15;
        }
        assert(tmp_listcomp_3__$0 == NULL);
        tmp_listcomp_3__$0 = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_3__contraction == NULL);
        tmp_listcomp_3__contraction = tmp_assign_source_20;
    }
    if (isFrameUnusable(cache_frame_ffa1ea32fbd026614208bf903c1b23cd_6)) {
        Py_XDECREF(cache_frame_ffa1ea32fbd026614208bf903c1b23cd_6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ffa1ea32fbd026614208bf903c1b23cd_6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ffa1ea32fbd026614208bf903c1b23cd_6 = MAKE_FUNCTION_FRAME(codeobj_ffa1ea32fbd026614208bf903c1b23cd, module_torch$utils$data$_utils$collate, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ffa1ea32fbd026614208bf903c1b23cd_6->m_type_description == NULL);
    frame_ffa1ea32fbd026614208bf903c1b23cd_6 = cache_frame_ffa1ea32fbd026614208bf903c1b23cd_6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ffa1ea32fbd026614208bf903c1b23cd_6);
    assert(Py_REFCNT(frame_ffa1ea32fbd026614208bf903c1b23cd_6) == 2);

    // Framed code:
    // Tried code:
    loop_start_5:;
    {
        PyObject *tmp_next_source_5;
        PyObject *tmp_assign_source_21;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        tmp_next_source_5 = tmp_listcomp_3__$0;
        tmp_assign_source_21 = ITERATOR_NEXT(tmp_next_source_5);
        if (tmp_assign_source_21 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_5;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 74;
                goto try_except_handler_16;
            }
        }

        {
            PyObject *old = tmp_listcomp_3__iter_value_0;
            tmp_listcomp_3__iter_value_0 = tmp_assign_source_21;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
        tmp_assign_source_22 = tmp_listcomp_3__iter_value_0;
        {
            PyObject *old = outline_4_var_d;
            outline_4_var_d = tmp_assign_source_22;
            Py_INCREF(outline_4_var_d);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_3;
        PyObject *tmp_append_value_3;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_append_list_3 = tmp_listcomp_3__contraction;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        CHECK_OBJECT(outline_4_var_d);
        tmp_args_element_value_9 = outline_4_var_d;
        frame_ffa1ea32fbd026614208bf903c1b23cd_6->m_frame.f_lineno = 74;
        tmp_append_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
        if (tmp_append_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 74;
        type_description_2 = "o";
        goto try_except_handler_16;
    }
    goto loop_start_5;
    loop_end_5:;
    CHECK_OBJECT(tmp_listcomp_3__contraction);
    tmp_return_value = tmp_listcomp_3__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_16;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_16:;
    CHECK_OBJECT(tmp_listcomp_3__$0);
    Py_DECREF(tmp_listcomp_3__$0);
    tmp_listcomp_3__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_3__contraction);
    Py_DECREF(tmp_listcomp_3__contraction);
    tmp_listcomp_3__contraction = NULL;
    Py_XDECREF(tmp_listcomp_3__iter_value_0);
    tmp_listcomp_3__iter_value_0 = NULL;
    goto frame_return_exit_6;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
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
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_6;
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_return_exit_6:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_15;
    frame_exception_exit_6:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ffa1ea32fbd026614208bf903c1b23cd_6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ffa1ea32fbd026614208bf903c1b23cd_6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ffa1ea32fbd026614208bf903c1b23cd_6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ffa1ea32fbd026614208bf903c1b23cd_6,
        type_description_2,
        outline_4_var_d
    );


    // Release cached frame if used for exception.
    if (frame_ffa1ea32fbd026614208bf903c1b23cd_6 == cache_frame_ffa1ea32fbd026614208bf903c1b23cd_6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ffa1ea32fbd026614208bf903c1b23cd_6);
        cache_frame_ffa1ea32fbd026614208bf903c1b23cd_6 = NULL;
    }

    assertFrameObject(frame_ffa1ea32fbd026614208bf903c1b23cd_6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_5;
    frame_no_exception_5:;
    goto skip_nested_handling_5;
    nested_frame_exit_5:;
    type_description_1 = "oo";
    goto try_except_handler_15;
    skip_nested_handling_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_15:;
    Py_XDECREF(outline_4_var_d);
    outline_4_var_d = NULL;
    goto outline_result_6;
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

    Py_XDECREF(outline_4_var_d);
    outline_4_var_d = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto outline_exception_5;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_5:;
    exception_lineno = 74;
    goto try_except_handler_14;
    outline_result_6:;
    goto try_return_handler_14;
    goto branch_end_9;
    branch_no_9:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 70;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_97d35536e7dd7ff11b6d1e73030cfb97->m_frame) frame_97d35536e7dd7ff11b6d1e73030cfb97->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oo";
    goto try_except_handler_14;
    branch_end_9:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_14:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto frame_return_exit_1;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    goto branch_end_8;
    branch_no_8:;
    CHECK_OBJECT(par_data);
    tmp_return_value = par_data;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_end_8:;
    branch_end_7:;
    branch_end_6:;
    branch_end_4:;
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_97d35536e7dd7ff11b6d1e73030cfb97, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97d35536e7dd7ff11b6d1e73030cfb97->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97d35536e7dd7ff11b6d1e73030cfb97, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97d35536e7dd7ff11b6d1e73030cfb97,
        type_description_1,
        par_data,
        var_elem_type
    );


    // Release cached frame if used for exception.
    if (frame_97d35536e7dd7ff11b6d1e73030cfb97 == cache_frame_97d35536e7dd7ff11b6d1e73030cfb97) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_97d35536e7dd7ff11b6d1e73030cfb97);
        cache_frame_97d35536e7dd7ff11b6d1e73030cfb97 = NULL;
    }

    assertFrameObject(frame_97d35536e7dd7ff11b6d1e73030cfb97);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_6:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_elem_type);
    Py_DECREF(var_elem_type);
    var_elem_type = NULL;
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

    CHECK_OBJECT(var_elem_type);
    Py_DECREF(var_elem_type);
    var_elem_type = NULL;
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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct torch$utils$data$_utils$collate$$$function__1_default_convert$$$genexpr__1_genexpr_locals {
    PyObject *var_d;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *torch$utils$data$_utils$collate$$$function__1_default_convert$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$utils$data$_utils$collate$$$function__1_default_convert$$$genexpr__1_genexpr_locals *generator_heap = (struct torch$utils$data$_utils$collate$$$function__1_default_convert$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_d = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_b077daa18a77b401b1c6afceb9ab7309, module_torch$utils$data$_utils$collate, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 66;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_d;
            generator_heap->var_d = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_d);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 66;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_d);
        tmp_args_element_value_1 = generator_heap->var_d;
        generator->m_frame->m_frame.f_lineno = 66;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 66;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 66;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 66;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_d
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_d);
    generator_heap->var_d = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_d);
    generator_heap->var_d = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$utils$data$_utils$collate$$$function__1_default_convert$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$utils$data$_utils$collate$$$function__1_default_convert$$$genexpr__1_genexpr_context,
        module_torch$utils$data$_utils$collate,
        mod_consts[22],
#if PYTHON_VERSION >= 0x350
        mod_consts[23],
#endif
        codeobj_b077daa18a77b401b1c6afceb9ab7309,
        closure,
        1,
        sizeof(struct torch$utils$data$_utils$collate$$$function__1_default_convert$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_torch$utils$data$_utils$collate$$$function__2_default_collate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_batch = python_pars[0];
    PyObject *var_elem = NULL;
    PyObject *var_elem_type = NULL;
    PyObject *var_out = NULL;
    PyObject *var_numel = NULL;
    PyObject *var_storage = NULL;
    PyObject *var_it = NULL;
    struct Nuitka_CellObject *var_elem_size = Nuitka_Cell_Empty();
    PyObject *var_transposed = NULL;
    PyObject *outline_0_var_b = NULL;
    PyObject *outline_1_var_key = NULL;
    PyObject *outline_2_var_d = NULL;
    PyObject *outline_3_var_key = NULL;
    PyObject *outline_4_var_d = NULL;
    PyObject *outline_5_var_samples = NULL;
    PyObject *outline_6_var_samples = NULL;
    PyObject *outline_7_var_samples = NULL;
    PyObject *tmp_dictcontraction$listcomp_1__$0 = NULL;
    PyObject *tmp_dictcontraction$listcomp_1__contraction = NULL;
    PyObject *tmp_dictcontraction$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_dictcontraction$listcomp_2__$0 = NULL;
    PyObject *tmp_dictcontraction$listcomp_2__contraction = NULL;
    PyObject *tmp_dictcontraction$listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_dictcontraction_2__$0 = NULL;
    PyObject *tmp_dictcontraction_2__contraction = NULL;
    PyObject *tmp_dictcontraction_2__iter_value_0 = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_genexpr_3__$0 = NULL;
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
    struct Nuitka_FrameObject *frame_19b6a24256339087bfad158b4c22d9a1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_67715e1220547abeb469d4200c670de4_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_67715e1220547abeb469d4200c670de4_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_5ce86463330f02cdea83cb7edd58b5bf_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_824c2f4d9dad328cc566dbaa7fed7de3_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_824c2f4d9dad328cc566dbaa7fed7de3_4 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    static struct Nuitka_FrameObject *cache_frame_5ce86463330f02cdea83cb7edd58b5bf_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    struct Nuitka_FrameObject *frame_4cde1fbc48594ba77b0bea08cdaabdf6_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    struct Nuitka_FrameObject *frame_cc8981602f1c2a8737e274098a4f4446_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_cc8981602f1c2a8737e274098a4f4446_6 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_4cde1fbc48594ba77b0bea08cdaabdf6_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    struct Nuitka_FrameObject *frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7;
    NUITKA_MAY_BE_UNUSED char const *type_description_7 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    static struct Nuitka_FrameObject *cache_frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    struct Nuitka_FrameObject *frame_fe5e8183217301e8652148702757b59c_8;
    NUITKA_MAY_BE_UNUSED char const *type_description_8 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    static struct Nuitka_FrameObject *cache_frame_fe5e8183217301e8652148702757b59c_8 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    struct Nuitka_FrameObject *frame_f87d26fea5fb9a18858e4b5cec16349a_9;
    NUITKA_MAY_BE_UNUSED char const *type_description_9 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    static struct Nuitka_FrameObject *cache_frame_f87d26fea5fb9a18858e4b5cec16349a_9 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    static struct Nuitka_FrameObject *cache_frame_19b6a24256339087bfad158b4c22d9a1 = NULL;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_19b6a24256339087bfad158b4c22d9a1)) {
        Py_XDECREF(cache_frame_19b6a24256339087bfad158b4c22d9a1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_19b6a24256339087bfad158b4c22d9a1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_19b6a24256339087bfad158b4c22d9a1 = MAKE_FUNCTION_FRAME(codeobj_19b6a24256339087bfad158b4c22d9a1, module_torch$utils$data$_utils$collate, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_19b6a24256339087bfad158b4c22d9a1->m_type_description == NULL);
    frame_19b6a24256339087bfad158b4c22d9a1 = cache_frame_19b6a24256339087bfad158b4c22d9a1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_19b6a24256339087bfad158b4c22d9a1);
    assert(Py_REFCNT(frame_19b6a24256339087bfad158b4c22d9a1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_batch);
        tmp_expression_value_1 = par_batch;
        tmp_subscript_value_1 = mod_consts[24];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        assert(var_elem == NULL);
        var_elem = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(var_elem);
        tmp_type_arg_1 = var_elem;
        tmp_assign_source_2 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_elem_type == NULL);
        var_elem_type = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_elem);
        tmp_isinstance_inst_1 = var_elem;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooco";
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
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = Py_None;
        assert(var_out == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_out = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[25]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[12]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 132;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[26]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_sum_sequence_1;
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_batch);
            tmp_iter_arg_1 = par_batch;
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;
                type_description_1 = "oooooooco";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_5;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_sum_sequence_1 = MAKE_GENERATOR_torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_assign_source_4 = BUILTIN_SUM1(tmp_sum_sequence_1);
        Py_DECREF(tmp_sum_sequence_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        assert(var_numel == NULL);
        var_numel = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_elem);
        tmp_called_instance_3 = var_elem;
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 136;
        tmp_called_instance_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[27]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_numel);
        tmp_args_element_value_1 = var_numel;
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 136;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[28], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        assert(var_storage == NULL);
        var_storage = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(var_elem);
        tmp_called_instance_4 = var_elem;
        CHECK_OBJECT(var_storage);
        tmp_args_element_value_2 = var_storage;
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 137;
        tmp_expression_value_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[29], tmp_args_element_value_2);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[30]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_batch);
        tmp_len_arg_1 = par_batch;
        tmp_tuple_element_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 137;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_elem);
        tmp_called_instance_5 = var_elem;
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 137;
        tmp_list_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[31]);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 137;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg3_1 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_dircall_arg3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);
            Py_DECREF(tmp_dircall_arg2_1);

            exception_lineno = 137;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_assign_source_7 = impl___main__$$$function__2_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_out;
            assert(old != NULL);
            var_out = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[32]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        if (par_batch == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 138;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_0_1 = par_batch;
        tmp_kw_call_arg_value_1_1 = mod_consts[24];
        CHECK_OBJECT(var_out);
        tmp_kw_call_dict_value_0_1 = var_out;
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 138;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[34]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_7;
        int tmp_and_left_truth_2;
        nuitka_bool tmp_and_left_value_2;
        nuitka_bool tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_elem_type);
        tmp_expression_value_7 = var_elem_type;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[2]);
        assert(!(tmp_cmp_expr_left_2 == NULL));
        tmp_cmp_expr_right_2 = mod_consts[3];
        tmp_and_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_and_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_elem_type);
        tmp_expression_value_8 = var_elem_type;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[4]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[5];
        tmp_and_left_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_and_left_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_2 = tmp_and_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_elem_type);
        tmp_expression_value_9 = var_elem_type;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[4]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[6];
        tmp_and_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_and_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
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
        nuitka_bool tmp_condition_result_4;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_elem_type);
        tmp_expression_value_10 = var_elem_type;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[4]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = mod_consts[7];
        tmp_or_left_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(var_elem_type);
        tmp_expression_value_11 = var_elem_type;
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[4]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = mod_consts[35];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_4 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[9]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_elem);
        tmp_expression_value_14 = var_elem;
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[10]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 143;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[11]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 143;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 143;
        tmp_cmp_expr_left_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_7 != tmp_cmp_expr_right_7) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_7);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[37]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_elem);
        tmp_expression_value_16 = var_elem;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[10]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 144;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 144;
        tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 144;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 144;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooco";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(par_batch);
            tmp_iter_arg_2 = par_batch;
            tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_1 = "oooooooco";
                goto try_except_handler_3;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_8;
        }
        {
            PyObject *tmp_assign_source_9;
            tmp_assign_source_9 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_9;
        }
        if (isFrameUnusable(cache_frame_67715e1220547abeb469d4200c670de4_2)) {
            Py_XDECREF(cache_frame_67715e1220547abeb469d4200c670de4_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_67715e1220547abeb469d4200c670de4_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_67715e1220547abeb469d4200c670de4_2 = MAKE_FUNCTION_FRAME(codeobj_67715e1220547abeb469d4200c670de4, module_torch$utils$data$_utils$collate, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_67715e1220547abeb469d4200c670de4_2->m_type_description == NULL);
        frame_67715e1220547abeb469d4200c670de4_2 = cache_frame_67715e1220547abeb469d4200c670de4_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_67715e1220547abeb469d4200c670de4_2);
        assert(Py_REFCNT(frame_67715e1220547abeb469d4200c670de4_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_10;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_10 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_10 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 146;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_10;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_11;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_11 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_b;
                outline_0_var_b = tmp_assign_source_11;
                Py_INCREF(outline_0_var_b);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_6;
            PyObject *tmp_args_element_value_6;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_called_instance_6 == NULL)) {
                tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_called_instance_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            CHECK_OBJECT(outline_0_var_b);
            tmp_args_element_value_6 = outline_0_var_b;
            frame_67715e1220547abeb469d4200c670de4_2->m_frame.f_lineno = 146;
            tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[13], tmp_args_element_value_6);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_5 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_5);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
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
        try_except_handler_4:;
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

        goto try_return_handler_3;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_67715e1220547abeb469d4200c670de4_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_67715e1220547abeb469d4200c670de4_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_67715e1220547abeb469d4200c670de4_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_67715e1220547abeb469d4200c670de4_2,
            type_description_2,
            outline_0_var_b
        );


        // Release cached frame if used for exception.
        if (frame_67715e1220547abeb469d4200c670de4_2 == cache_frame_67715e1220547abeb469d4200c670de4_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_67715e1220547abeb469d4200c670de4_2);
            cache_frame_67715e1220547abeb469d4200c670de4_2 = NULL;
        }

        assertFrameObject(frame_67715e1220547abeb469d4200c670de4_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooco";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_b);
        outline_0_var_b = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_0_var_b);
        outline_0_var_b = NULL;
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
        exception_lineno = 146;
        goto frame_exception_exit_1;
        outline_result_2:;
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 146;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_elem);
        tmp_expression_value_17 = var_elem;
        tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[39]);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = mod_consts[40];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooco";
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
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_7;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_batch);
        tmp_args_element_value_7 = par_batch;
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 148;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_7, mod_consts[13], tmp_args_element_value_7);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_6:;
    branch_end_4:;
    goto branch_end_3;
    branch_no_3:;
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_elem);
        tmp_isinstance_inst_2 = var_elem;
        tmp_isinstance_cls_2 = (PyObject *)&PyFloat_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[41]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_batch);
        tmp_kw_call_arg_value_0_2 = par_batch;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 150;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[42]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 150;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 150;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[43]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_8;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(var_elem);
        tmp_isinstance_inst_3 = var_elem;
        tmp_isinstance_cls_3 = (PyObject *)&PyLong_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_batch);
        tmp_args_element_value_8 = par_batch;
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 152;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_8, mod_consts[41], tmp_args_element_value_8);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_8;
    branch_no_8:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        CHECK_OBJECT(var_elem);
        tmp_isinstance_inst_4 = var_elem;
        tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_isinstance_cls_4 == NULL)) {
            tmp_isinstance_cls_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_isinstance_cls_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    CHECK_OBJECT(par_batch);
    tmp_return_value = par_batch;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_isinstance_inst_5;
        PyObject *tmp_isinstance_cls_5;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(var_elem);
        tmp_isinstance_inst_5 = var_elem;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[15]);
        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[16]);
        Py_DECREF(tmp_expression_value_20);
        if (tmp_isinstance_cls_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
        Py_DECREF(tmp_isinstance_cls_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    // Tried code:
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(var_elem_type);
        tmp_called_value_6 = var_elem_type;
        // Tried code:
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            CHECK_OBJECT(var_elem);
            tmp_iter_arg_3 = var_elem;
            tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_1 = "oooooooco";
                goto try_except_handler_6;
            }
            assert(tmp_dictcontraction_1__$0 == NULL);
            tmp_dictcontraction_1__$0 = tmp_assign_source_12;
        }
        {
            PyObject *tmp_assign_source_13;
            tmp_assign_source_13 = MAKE_DICT_EMPTY();
            assert(tmp_dictcontraction_1__contraction == NULL);
            tmp_dictcontraction_1__contraction = tmp_assign_source_13;
        }
        if (isFrameUnusable(cache_frame_5ce86463330f02cdea83cb7edd58b5bf_3)) {
            Py_XDECREF(cache_frame_5ce86463330f02cdea83cb7edd58b5bf_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_5ce86463330f02cdea83cb7edd58b5bf_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_5ce86463330f02cdea83cb7edd58b5bf_3 = MAKE_FUNCTION_FRAME(codeobj_5ce86463330f02cdea83cb7edd58b5bf, module_torch$utils$data$_utils$collate, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_5ce86463330f02cdea83cb7edd58b5bf_3->m_type_description == NULL);
        frame_5ce86463330f02cdea83cb7edd58b5bf_3 = cache_frame_5ce86463330f02cdea83cb7edd58b5bf_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_5ce86463330f02cdea83cb7edd58b5bf_3);
        assert(Py_REFCNT(frame_5ce86463330f02cdea83cb7edd58b5bf_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_dictcontraction_1__$0);
            tmp_next_source_2 = tmp_dictcontraction_1__$0;
            tmp_assign_source_14 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_14 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 157;
                    goto try_except_handler_7;
                }
            }

            {
                PyObject *old = tmp_dictcontraction_1__iter_value_0;
                tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_14;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_15;
            CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
            tmp_assign_source_15 = tmp_dictcontraction_1__iter_value_0;
            {
                PyObject *old = outline_1_var_key;
                outline_1_var_key = tmp_assign_source_15;
                Py_INCREF(outline_1_var_key);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_element_value_10;
            tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_called_value_7 == NULL)) {
                tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_called_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            // Tried code:
            {
                PyObject *tmp_assign_source_16;
                PyObject *tmp_iter_arg_4;
                if (par_batch == NULL) {

                    FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[33]);
                    exception_tb = NULL;
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 157;
                    type_description_2 = "oo";
                    goto try_except_handler_8;
                }

                tmp_iter_arg_4 = par_batch;
                tmp_assign_source_16 = MAKE_ITERATOR(tmp_iter_arg_4);
                if (tmp_assign_source_16 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_2 = "oo";
                    goto try_except_handler_8;
                }
                {
                    PyObject *old = tmp_dictcontraction$listcomp_1__$0;
                    tmp_dictcontraction$listcomp_1__$0 = tmp_assign_source_16;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_17;
                tmp_assign_source_17 = MAKE_LIST_EMPTY(0);
                {
                    PyObject *old = tmp_dictcontraction$listcomp_1__contraction;
                    tmp_dictcontraction$listcomp_1__contraction = tmp_assign_source_17;
                    Py_XDECREF(old);
                }

            }
            if (isFrameUnusable(cache_frame_824c2f4d9dad328cc566dbaa7fed7de3_4)) {
                Py_XDECREF(cache_frame_824c2f4d9dad328cc566dbaa7fed7de3_4);

#if _DEBUG_REFCOUNTS
                if (cache_frame_824c2f4d9dad328cc566dbaa7fed7de3_4 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_824c2f4d9dad328cc566dbaa7fed7de3_4 = MAKE_FUNCTION_FRAME(codeobj_824c2f4d9dad328cc566dbaa7fed7de3, module_torch$utils$data$_utils$collate, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }

            assert(cache_frame_824c2f4d9dad328cc566dbaa7fed7de3_4->m_type_description == NULL);
            frame_824c2f4d9dad328cc566dbaa7fed7de3_4 = cache_frame_824c2f4d9dad328cc566dbaa7fed7de3_4;

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_824c2f4d9dad328cc566dbaa7fed7de3_4);
            assert(Py_REFCNT(frame_824c2f4d9dad328cc566dbaa7fed7de3_4) == 2);

            // Framed code:
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_18;
                CHECK_OBJECT(tmp_dictcontraction$listcomp_1__$0);
                tmp_next_source_3 = tmp_dictcontraction$listcomp_1__$0;
                tmp_assign_source_18 = ITERATOR_NEXT(tmp_next_source_3);
                if (tmp_assign_source_18 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_3;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_3 = "oo";
                        exception_lineno = 157;
                        goto try_except_handler_9;
                    }
                }

                {
                    PyObject *old = tmp_dictcontraction$listcomp_1__iter_value_0;
                    tmp_dictcontraction$listcomp_1__iter_value_0 = tmp_assign_source_18;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_19;
                CHECK_OBJECT(tmp_dictcontraction$listcomp_1__iter_value_0);
                tmp_assign_source_19 = tmp_dictcontraction$listcomp_1__iter_value_0;
                {
                    PyObject *old = outline_2_var_d;
                    outline_2_var_d = tmp_assign_source_19;
                    Py_INCREF(outline_2_var_d);
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_2;
                CHECK_OBJECT(tmp_dictcontraction$listcomp_1__contraction);
                tmp_append_list_2 = tmp_dictcontraction$listcomp_1__contraction;
                CHECK_OBJECT(outline_2_var_d);
                tmp_expression_value_22 = outline_2_var_d;
                CHECK_OBJECT(outline_1_var_key);
                tmp_subscript_value_2 = outline_1_var_key;
                tmp_append_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_2);
                if (tmp_append_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_3 = "oo";
                    goto try_except_handler_9;
                }
                tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 157;
                    type_description_3 = "oo";
                    goto try_except_handler_9;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_3 = "oo";
                goto try_except_handler_9;
            }
            goto loop_start_3;
            loop_end_3:;
            CHECK_OBJECT(tmp_dictcontraction$listcomp_1__contraction);
            tmp_args_element_value_10 = tmp_dictcontraction$listcomp_1__contraction;
            Py_INCREF(tmp_args_element_value_10);
            goto try_return_handler_9;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_9:;
            CHECK_OBJECT(tmp_dictcontraction$listcomp_1__$0);
            Py_DECREF(tmp_dictcontraction$listcomp_1__$0);
            tmp_dictcontraction$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_dictcontraction$listcomp_1__contraction);
            Py_DECREF(tmp_dictcontraction$listcomp_1__contraction);
            tmp_dictcontraction$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_dictcontraction$listcomp_1__iter_value_0);
            tmp_dictcontraction$listcomp_1__iter_value_0 = NULL;
            goto frame_return_exit_4;
            // Exception handler code:
            try_except_handler_9:;
            exception_keeper_type_3 = exception_type;
            exception_keeper_value_3 = exception_value;
            exception_keeper_tb_3 = exception_tb;
            exception_keeper_lineno_3 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_dictcontraction$listcomp_1__$0);
            Py_DECREF(tmp_dictcontraction$listcomp_1__$0);
            tmp_dictcontraction$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_dictcontraction$listcomp_1__contraction);
            Py_DECREF(tmp_dictcontraction$listcomp_1__contraction);
            tmp_dictcontraction$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_dictcontraction$listcomp_1__iter_value_0);
            tmp_dictcontraction$listcomp_1__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_3;
            exception_value = exception_keeper_value_3;
            exception_tb = exception_keeper_tb_3;
            exception_lineno = exception_keeper_lineno_3;

            goto frame_exception_exit_4;
            // End of try:


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_2;
            frame_return_exit_4:

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_8;
            frame_exception_exit_4:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_824c2f4d9dad328cc566dbaa7fed7de3_4, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_824c2f4d9dad328cc566dbaa7fed7de3_4->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_824c2f4d9dad328cc566dbaa7fed7de3_4, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_824c2f4d9dad328cc566dbaa7fed7de3_4,
                type_description_3,
                outline_2_var_d,
                outline_1_var_key
            );


            // Release cached frame if used for exception.
            if (frame_824c2f4d9dad328cc566dbaa7fed7de3_4 == cache_frame_824c2f4d9dad328cc566dbaa7fed7de3_4) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif
                Py_DECREF(cache_frame_824c2f4d9dad328cc566dbaa7fed7de3_4);
                cache_frame_824c2f4d9dad328cc566dbaa7fed7de3_4 = NULL;
            }

            assertFrameObject(frame_824c2f4d9dad328cc566dbaa7fed7de3_4);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_3;
            frame_no_exception_2:;
            goto skip_nested_handling_2;
            nested_frame_exit_3:;
            type_description_2 = "oo";
            goto try_except_handler_8;
            skip_nested_handling_2:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_8:;
            Py_XDECREF(outline_2_var_d);
            outline_2_var_d = NULL;
            goto outline_result_4;
            // Exception handler code:
            try_except_handler_8:;
            exception_keeper_type_4 = exception_type;
            exception_keeper_value_4 = exception_value;
            exception_keeper_tb_4 = exception_tb;
            exception_keeper_lineno_4 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(outline_2_var_d);
            outline_2_var_d = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_4;
            exception_value = exception_keeper_value_4;
            exception_tb = exception_keeper_tb_4;
            exception_lineno = exception_keeper_lineno_4;

            goto outline_exception_3;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_3:;
            exception_lineno = 157;
            goto try_except_handler_7;
            outline_result_4:;
            frame_5ce86463330f02cdea83cb7edd58b5bf_3->m_frame.f_lineno = 157;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_10);
            Py_DECREF(tmp_args_element_value_10);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
            CHECK_OBJECT(tmp_dictcontraction_1__contraction);
            tmp_dictset_dict = tmp_dictcontraction_1__contraction;
            CHECK_OBJECT(outline_1_var_key);
            tmp_dictset_key = outline_1_var_key;
            assert(PyDict_CheckExact(tmp_dictset_dict));
            tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 157;
                type_description_2 = "oo";
                goto try_except_handler_7;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_2 = "oo";
            goto try_except_handler_7;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_args_element_value_9 = tmp_dictcontraction_1__contraction;
        Py_INCREF(tmp_args_element_value_9);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_3;
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

        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        Py_DECREF(tmp_dictcontraction_1__$0);
        tmp_dictcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        Py_DECREF(tmp_dictcontraction_1__contraction);
        tmp_dictcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
        tmp_dictcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_6;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_5ce86463330f02cdea83cb7edd58b5bf_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_5ce86463330f02cdea83cb7edd58b5bf_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_5ce86463330f02cdea83cb7edd58b5bf_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_5ce86463330f02cdea83cb7edd58b5bf_3,
            type_description_2,
            outline_1_var_key,
            par_batch
        );


        // Release cached frame if used for exception.
        if (frame_5ce86463330f02cdea83cb7edd58b5bf_3 == cache_frame_5ce86463330f02cdea83cb7edd58b5bf_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_5ce86463330f02cdea83cb7edd58b5bf_3);
            cache_frame_5ce86463330f02cdea83cb7edd58b5bf_3 = NULL;
        }

        assertFrameObject(frame_5ce86463330f02cdea83cb7edd58b5bf_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_2:;
        type_description_1 = "oooooooco";
        goto try_except_handler_6;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_XDECREF(outline_1_var_key);
        outline_1_var_key = NULL;
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

        Py_XDECREF(outline_1_var_key);
        outline_1_var_key = NULL;
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
        exception_lineno = 157;
        goto try_except_handler_5;
        outline_result_3:;
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 157;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "oooooooco";
            goto try_except_handler_5;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_7 == NULL) {
        exception_keeper_tb_7 = MAKE_TRACEBACK(frame_19b6a24256339087bfad158b4c22d9a1, exception_keeper_lineno_7);
    } else if (exception_keeper_lineno_7 != 0) {
        exception_keeper_tb_7 = ADD_TRACEBACK(exception_keeper_tb_7, frame_19b6a24256339087bfad158b4c22d9a1, exception_keeper_lineno_7);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_7, &exception_keeper_value_7, &exception_keeper_tb_7);
    // Tried code:
    {
        bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_9 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_11 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    // Tried code:
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(var_elem);
        tmp_iter_arg_5 = var_elem;
        tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "oooooooco";
            goto try_except_handler_11;
        }
        assert(tmp_dictcontraction_2__$0 == NULL);
        tmp_dictcontraction_2__$0 = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_dictcontraction_2__contraction == NULL);
        tmp_dictcontraction_2__contraction = tmp_assign_source_21;
    }
    if (isFrameUnusable(cache_frame_4cde1fbc48594ba77b0bea08cdaabdf6_5)) {
        Py_XDECREF(cache_frame_4cde1fbc48594ba77b0bea08cdaabdf6_5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4cde1fbc48594ba77b0bea08cdaabdf6_5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4cde1fbc48594ba77b0bea08cdaabdf6_5 = MAKE_FUNCTION_FRAME(codeobj_4cde1fbc48594ba77b0bea08cdaabdf6, module_torch$utils$data$_utils$collate, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4cde1fbc48594ba77b0bea08cdaabdf6_5->m_type_description == NULL);
    frame_4cde1fbc48594ba77b0bea08cdaabdf6_5 = cache_frame_4cde1fbc48594ba77b0bea08cdaabdf6_5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4cde1fbc48594ba77b0bea08cdaabdf6_5);
    assert(Py_REFCNT(frame_4cde1fbc48594ba77b0bea08cdaabdf6_5) == 2);

    // Framed code:
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_dictcontraction_2__$0);
        tmp_next_source_4 = tmp_dictcontraction_2__$0;
        tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_22 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "oo";
                exception_lineno = 160;
                goto try_except_handler_12;
            }
        }

        {
            PyObject *old = tmp_dictcontraction_2__iter_value_0;
            tmp_dictcontraction_2__iter_value_0 = tmp_assign_source_22;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_dictcontraction_2__iter_value_0);
        tmp_assign_source_23 = tmp_dictcontraction_2__iter_value_0;
        {
            PyObject *old = outline_3_var_key;
            outline_3_var_key = tmp_assign_source_23;
            Py_INCREF(outline_3_var_key);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_2 = "oo";
            goto try_except_handler_12;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_iter_arg_6;
            if (par_batch == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[33]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 160;
                type_description_2 = "oo";
                goto try_except_handler_13;
            }

            tmp_iter_arg_6 = par_batch;
            tmp_assign_source_24 = MAKE_ITERATOR(tmp_iter_arg_6);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_2 = "oo";
                goto try_except_handler_13;
            }
            {
                PyObject *old = tmp_dictcontraction$listcomp_2__$0;
                tmp_dictcontraction$listcomp_2__$0 = tmp_assign_source_24;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_25;
            tmp_assign_source_25 = MAKE_LIST_EMPTY(0);
            {
                PyObject *old = tmp_dictcontraction$listcomp_2__contraction;
                tmp_dictcontraction$listcomp_2__contraction = tmp_assign_source_25;
                Py_XDECREF(old);
            }

        }
        if (isFrameUnusable(cache_frame_cc8981602f1c2a8737e274098a4f4446_6)) {
            Py_XDECREF(cache_frame_cc8981602f1c2a8737e274098a4f4446_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_cc8981602f1c2a8737e274098a4f4446_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_cc8981602f1c2a8737e274098a4f4446_6 = MAKE_FUNCTION_FRAME(codeobj_cc8981602f1c2a8737e274098a4f4446, module_torch$utils$data$_utils$collate, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_cc8981602f1c2a8737e274098a4f4446_6->m_type_description == NULL);
        frame_cc8981602f1c2a8737e274098a4f4446_6 = cache_frame_cc8981602f1c2a8737e274098a4f4446_6;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_cc8981602f1c2a8737e274098a4f4446_6);
        assert(Py_REFCNT(frame_cc8981602f1c2a8737e274098a4f4446_6) == 2);

        // Framed code:
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_26;
            CHECK_OBJECT(tmp_dictcontraction$listcomp_2__$0);
            tmp_next_source_5 = tmp_dictcontraction$listcomp_2__$0;
            tmp_assign_source_26 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_26 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_3 = "oo";
                    exception_lineno = 160;
                    goto try_except_handler_14;
                }
            }

            {
                PyObject *old = tmp_dictcontraction$listcomp_2__iter_value_0;
                tmp_dictcontraction$listcomp_2__iter_value_0 = tmp_assign_source_26;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT(tmp_dictcontraction$listcomp_2__iter_value_0);
            tmp_assign_source_27 = tmp_dictcontraction$listcomp_2__iter_value_0;
            {
                PyObject *old = outline_4_var_d;
                outline_4_var_d = tmp_assign_source_27;
                Py_INCREF(outline_4_var_d);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_subscript_value_3;
            CHECK_OBJECT(tmp_dictcontraction$listcomp_2__contraction);
            tmp_append_list_3 = tmp_dictcontraction$listcomp_2__contraction;
            CHECK_OBJECT(outline_4_var_d);
            tmp_expression_value_23 = outline_4_var_d;
            CHECK_OBJECT(outline_3_var_key);
            tmp_subscript_value_3 = outline_3_var_key;
            tmp_append_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_3);
            if (tmp_append_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_3 = "oo";
                goto try_except_handler_14;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 160;
                type_description_3 = "oo";
                goto try_except_handler_14;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_3 = "oo";
            goto try_except_handler_14;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT(tmp_dictcontraction$listcomp_2__contraction);
        tmp_args_element_value_11 = tmp_dictcontraction$listcomp_2__contraction;
        Py_INCREF(tmp_args_element_value_11);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(tmp_dictcontraction$listcomp_2__$0);
        Py_DECREF(tmp_dictcontraction$listcomp_2__$0);
        tmp_dictcontraction$listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction$listcomp_2__contraction);
        Py_DECREF(tmp_dictcontraction$listcomp_2__contraction);
        tmp_dictcontraction$listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction$listcomp_2__iter_value_0);
        tmp_dictcontraction$listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_6;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        CHECK_OBJECT(tmp_dictcontraction$listcomp_2__$0);
        Py_DECREF(tmp_dictcontraction$listcomp_2__$0);
        tmp_dictcontraction$listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_dictcontraction$listcomp_2__contraction);
        Py_DECREF(tmp_dictcontraction$listcomp_2__contraction);
        tmp_dictcontraction$listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_dictcontraction$listcomp_2__iter_value_0);
        tmp_dictcontraction$listcomp_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_6;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_return_exit_6:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_13;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_cc8981602f1c2a8737e274098a4f4446_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_cc8981602f1c2a8737e274098a4f4446_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_cc8981602f1c2a8737e274098a4f4446_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_cc8981602f1c2a8737e274098a4f4446_6,
            type_description_3,
            outline_4_var_d,
            outline_3_var_key
        );


        // Release cached frame if used for exception.
        if (frame_cc8981602f1c2a8737e274098a4f4446_6 == cache_frame_cc8981602f1c2a8737e274098a4f4446_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_cc8981602f1c2a8737e274098a4f4446_6);
            cache_frame_cc8981602f1c2a8737e274098a4f4446_6 = NULL;
        }

        assertFrameObject(frame_cc8981602f1c2a8737e274098a4f4446_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_5:;
        type_description_2 = "oo";
        goto try_except_handler_13;
        skip_nested_handling_4:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_XDECREF(outline_4_var_d);
        outline_4_var_d = NULL;
        goto outline_result_6;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_4_var_d);
        outline_4_var_d = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 160;
        goto try_except_handler_12;
        outline_result_6:;
        frame_4cde1fbc48594ba77b0bea08cdaabdf6_5->m_frame.f_lineno = 160;
        tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_11);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_2 = "oo";
            goto try_except_handler_12;
        }
        CHECK_OBJECT(tmp_dictcontraction_2__contraction);
        tmp_dictset_dict = tmp_dictcontraction_2__contraction;
        CHECK_OBJECT(outline_3_var_key);
        tmp_dictset_key = outline_3_var_key;
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_2 = "oo";
            goto try_except_handler_12;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 160;
        type_description_2 = "oo";
        goto try_except_handler_12;
    }
    goto loop_start_4;
    loop_end_4:;
    CHECK_OBJECT(tmp_dictcontraction_2__contraction);
    tmp_return_value = tmp_dictcontraction_2__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_12;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_12:;
    CHECK_OBJECT(tmp_dictcontraction_2__$0);
    Py_DECREF(tmp_dictcontraction_2__$0);
    tmp_dictcontraction_2__$0 = NULL;
    CHECK_OBJECT(tmp_dictcontraction_2__contraction);
    Py_DECREF(tmp_dictcontraction_2__contraction);
    tmp_dictcontraction_2__contraction = NULL;
    Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
    tmp_dictcontraction_2__iter_value_0 = NULL;
    goto frame_return_exit_5;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_dictcontraction_2__$0);
    Py_DECREF(tmp_dictcontraction_2__$0);
    tmp_dictcontraction_2__$0 = NULL;
    CHECK_OBJECT(tmp_dictcontraction_2__contraction);
    Py_DECREF(tmp_dictcontraction_2__contraction);
    tmp_dictcontraction_2__contraction = NULL;
    Py_XDECREF(tmp_dictcontraction_2__iter_value_0);
    tmp_dictcontraction_2__iter_value_0 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_5;
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_5;
    frame_return_exit_5:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_11;
    frame_exception_exit_5:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4cde1fbc48594ba77b0bea08cdaabdf6_5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4cde1fbc48594ba77b0bea08cdaabdf6_5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4cde1fbc48594ba77b0bea08cdaabdf6_5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4cde1fbc48594ba77b0bea08cdaabdf6_5,
        type_description_2,
        outline_3_var_key,
        par_batch
    );


    // Release cached frame if used for exception.
    if (frame_4cde1fbc48594ba77b0bea08cdaabdf6_5 == cache_frame_4cde1fbc48594ba77b0bea08cdaabdf6_5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4cde1fbc48594ba77b0bea08cdaabdf6_5);
        cache_frame_4cde1fbc48594ba77b0bea08cdaabdf6_5 = NULL;
    }

    assertFrameObject(frame_4cde1fbc48594ba77b0bea08cdaabdf6_5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_4;
    frame_no_exception_5:;
    goto skip_nested_handling_5;
    nested_frame_exit_4:;
    type_description_1 = "oooooooco";
    goto try_except_handler_11;
    skip_nested_handling_5:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_11:;
    Py_XDECREF(outline_3_var_key);
    outline_3_var_key = NULL;
    goto outline_result_5;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_3_var_key);
    outline_3_var_key = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto outline_exception_4;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_4:;
    exception_lineno = 160;
    goto try_except_handler_10;
    outline_result_5:;
    goto try_return_handler_10;
    goto branch_end_11;
    branch_no_11:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 156;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_19b6a24256339087bfad158b4c22d9a1->m_frame) frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooco";
    goto try_except_handler_10;
    branch_end_11:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_10:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_12;
        int tmp_and_left_truth_3;
        nuitka_bool tmp_and_left_value_3;
        nuitka_bool tmp_and_right_value_3;
        PyObject *tmp_isinstance_inst_6;
        PyObject *tmp_isinstance_cls_6;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(var_elem);
        tmp_isinstance_inst_6 = var_elem;
        tmp_isinstance_cls_6 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_3 = tmp_and_left_value_3 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_3 == 1) {
            goto and_right_3;
        } else {
            goto and_left_3;
        }
        and_right_3:;
        CHECK_OBJECT(var_elem);
        tmp_expression_value_24 = var_elem;
        tmp_attribute_value_1 = mod_consts[18];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_24, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_12 = tmp_and_right_value_3;
        goto and_end_3;
        and_left_3:;
        tmp_condition_result_12 = tmp_and_left_value_3;
        and_end_3:;
        if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        CHECK_OBJECT(var_elem_type);
        tmp_dircall_arg1_2 = var_elem_type;
        {
            PyObject *tmp_assign_source_28;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_dircall_arg1_3;
            PyObject *tmp_dircall_arg2_3;
            tmp_dircall_arg1_3 = (PyObject *)&PyZip_Type;
            CHECK_OBJECT(par_batch);
            tmp_dircall_arg2_3 = par_batch;
            Py_INCREF(tmp_dircall_arg1_3);
            Py_INCREF(tmp_dircall_arg2_3);

            {
                PyObject *dir_call_args[] = {tmp_dircall_arg1_3, tmp_dircall_arg2_3};
                tmp_iter_arg_7 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
            }
            if (tmp_iter_arg_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_1 = "oooooooco";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_28 = MAKE_ITERATOR(tmp_iter_arg_7);
            Py_DECREF(tmp_iter_arg_7);
            if (tmp_assign_source_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 162;
                type_description_1 = "oooooooco";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_2__$0 == NULL);
            tmp_genexpr_2__$0 = tmp_assign_source_28;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_2[1];

            tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);

            tmp_dircall_arg2_2 = MAKE_GENERATOR_torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__2_genexpr(tmp_closure_2);

            goto try_return_handler_15;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        CHECK_OBJECT(tmp_genexpr_2__$0);
        Py_DECREF(tmp_genexpr_2__$0);
        tmp_genexpr_2__$0 = NULL;
        goto outline_result_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_7:;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_12;
    branch_no_12:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_isinstance_inst_7;
        PyObject *tmp_isinstance_cls_7;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(var_elem);
        tmp_isinstance_inst_7 = var_elem;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[15]);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[19]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_isinstance_cls_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_7, tmp_isinstance_cls_7);
        Py_DECREF(tmp_isinstance_cls_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_iter_arg_8;
        CHECK_OBJECT(par_batch);
        tmp_iter_arg_8 = par_batch;
        tmp_assign_source_29 = MAKE_ITERATOR(tmp_iter_arg_8);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        assert(var_it == NULL);
        var_it = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_value_value_1;
        CHECK_OBJECT(var_it);
        tmp_value_value_1 = var_it;
        tmp_len_arg_2 = ITERATOR_NEXT(tmp_value_value_1);
        if (tmp_len_arg_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooco";
            exception_lineno = 166;
            goto frame_exception_exit_1;
        }
        tmp_assign_source_30 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var_elem_size) == NULL);
        PyCell_SET(var_elem_size, tmp_assign_source_30);

    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_all_arg_1;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_iter_arg_9;
            CHECK_OBJECT(var_it);
            tmp_iter_arg_9 = var_it;
            tmp_assign_source_31 = MAKE_ITERATOR(tmp_iter_arg_9);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 167;
                type_description_1 = "oooooooco";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_3__$0 == NULL);
            tmp_genexpr_3__$0 = tmp_assign_source_31;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_3[2];

            tmp_closure_3[0] = var_elem_size;
            Py_INCREF(tmp_closure_3[0]);
            tmp_closure_3[1] = Nuitka_Cell_New0(tmp_genexpr_3__$0);

            tmp_all_arg_1 = MAKE_GENERATOR_torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__3_genexpr(tmp_closure_3);

            goto try_return_handler_16;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(tmp_genexpr_3__$0);
        Py_DECREF(tmp_genexpr_3__$0);
        tmp_genexpr_3__$0 = NULL;
        goto outline_result_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_8:;
        tmp_operand_value_1 = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_14 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[44];
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 168;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 168;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooco";
        goto frame_exception_exit_1;
    }
    branch_no_14:;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_dircall_arg1_4;
        PyObject *tmp_dircall_arg2_4;
        tmp_dircall_arg1_4 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_batch);
        tmp_dircall_arg2_4 = par_batch;
        Py_INCREF(tmp_dircall_arg1_4);
        Py_INCREF(tmp_dircall_arg2_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4, tmp_dircall_arg2_4};
            tmp_list_arg_2 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_list_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = MAKE_LIST(tmp_list_arg_2);
        Py_DECREF(tmp_list_arg_2);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        assert(var_transposed == NULL);
        var_transposed = tmp_assign_source_32;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_isinstance_inst_8;
        PyObject *tmp_isinstance_cls_8;
        CHECK_OBJECT(var_elem);
        tmp_isinstance_inst_8 = var_elem;
        tmp_isinstance_cls_8 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_8, tmp_isinstance_cls_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_15 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_iter_arg_10;
        CHECK_OBJECT(var_transposed);
        tmp_iter_arg_10 = var_transposed;
        tmp_assign_source_33 = MAKE_ITERATOR(tmp_iter_arg_10);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooco";
            goto try_except_handler_17;
        }
        assert(tmp_listcomp_2__$0 == NULL);
        tmp_listcomp_2__$0 = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_2__contraction == NULL);
        tmp_listcomp_2__contraction = tmp_assign_source_34;
    }
    if (isFrameUnusable(cache_frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7)) {
        Py_XDECREF(cache_frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7 = MAKE_FUNCTION_FRAME(codeobj_662f6a2d8c2f1a10a5c55d6fa599c2a3, module_torch$utils$data$_utils$collate, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7->m_type_description == NULL);
    frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7 = cache_frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7);
    assert(Py_REFCNT(frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7) == 2);

    // Framed code:
    // Tried code:
    loop_start_6:;
    {
        PyObject *tmp_next_source_6;
        PyObject *tmp_assign_source_35;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        tmp_next_source_6 = tmp_listcomp_2__$0;
        tmp_assign_source_35 = ITERATOR_NEXT(tmp_next_source_6);
        if (tmp_assign_source_35 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_6;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 172;
                goto try_except_handler_18;
            }
        }

        {
            PyObject *old = tmp_listcomp_2__iter_value_0;
            tmp_listcomp_2__iter_value_0 = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
        tmp_assign_source_36 = tmp_listcomp_2__iter_value_0;
        {
            PyObject *old = outline_5_var_samples;
            outline_5_var_samples = tmp_assign_source_36;
            Py_INCREF(outline_5_var_samples);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_4;
        PyObject *tmp_append_value_4;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_append_list_4 = tmp_listcomp_2__contraction;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        CHECK_OBJECT(outline_5_var_samples);
        tmp_args_element_value_12 = outline_5_var_samples;
        frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7->m_frame.f_lineno = 172;
        tmp_append_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_12);
        if (tmp_append_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_2 = "o";
            goto try_except_handler_18;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 172;
        type_description_2 = "o";
        goto try_except_handler_18;
    }
    goto loop_start_6;
    loop_end_6:;
    CHECK_OBJECT(tmp_listcomp_2__contraction);
    tmp_return_value = tmp_listcomp_2__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_18;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_18:;
    CHECK_OBJECT(tmp_listcomp_2__$0);
    Py_DECREF(tmp_listcomp_2__$0);
    tmp_listcomp_2__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_2__contraction);
    Py_DECREF(tmp_listcomp_2__contraction);
    tmp_listcomp_2__contraction = NULL;
    Py_XDECREF(tmp_listcomp_2__iter_value_0);
    tmp_listcomp_2__iter_value_0 = NULL;
    goto frame_return_exit_7;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
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
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_7;
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_return_exit_7:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_17;
    frame_exception_exit_7:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7,
        type_description_2,
        outline_5_var_samples
    );


    // Release cached frame if used for exception.
    if (frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7 == cache_frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7);
        cache_frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7 = NULL;
    }

    assertFrameObject(frame_662f6a2d8c2f1a10a5c55d6fa599c2a3_7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_6;
    frame_no_exception_6:;
    goto skip_nested_handling_6;
    nested_frame_exit_6:;
    type_description_1 = "oooooooco";
    goto try_except_handler_17;
    skip_nested_handling_6:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_17:;
    Py_XDECREF(outline_5_var_samples);
    outline_5_var_samples = NULL;
    goto outline_result_9;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_5_var_samples);
    outline_5_var_samples = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto outline_exception_6;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_6:;
    exception_lineno = 172;
    goto frame_exception_exit_1;
    outline_result_9:;
    goto frame_return_exit_1;
    goto branch_end_15;
    branch_no_15:;
    // Tried code:
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_13;
        CHECK_OBJECT(var_elem_type);
        tmp_called_value_10 = var_elem_type;
        // Tried code:
        {
            PyObject *tmp_assign_source_37;
            PyObject *tmp_iter_arg_11;
            CHECK_OBJECT(var_transposed);
            tmp_iter_arg_11 = var_transposed;
            tmp_assign_source_37 = MAKE_ITERATOR(tmp_iter_arg_11);
            if (tmp_assign_source_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_1 = "oooooooco";
                goto try_except_handler_20;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_37;
        }
        {
            PyObject *tmp_assign_source_38;
            tmp_assign_source_38 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_38;
        }
        if (isFrameUnusable(cache_frame_fe5e8183217301e8652148702757b59c_8)) {
            Py_XDECREF(cache_frame_fe5e8183217301e8652148702757b59c_8);

#if _DEBUG_REFCOUNTS
            if (cache_frame_fe5e8183217301e8652148702757b59c_8 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_fe5e8183217301e8652148702757b59c_8 = MAKE_FUNCTION_FRAME(codeobj_fe5e8183217301e8652148702757b59c, module_torch$utils$data$_utils$collate, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_fe5e8183217301e8652148702757b59c_8->m_type_description == NULL);
        frame_fe5e8183217301e8652148702757b59c_8 = cache_frame_fe5e8183217301e8652148702757b59c_8;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_fe5e8183217301e8652148702757b59c_8);
        assert(Py_REFCNT(frame_fe5e8183217301e8652148702757b59c_8) == 2);

        // Framed code:
        // Tried code:
        loop_start_7:;
        {
            PyObject *tmp_next_source_7;
            PyObject *tmp_assign_source_39;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_7 = tmp_listcomp_3__$0;
            tmp_assign_source_39 = ITERATOR_NEXT(tmp_next_source_7);
            if (tmp_assign_source_39 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_7;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 175;
                    goto try_except_handler_21;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_39;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_40;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_40 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_6_var_samples;
                outline_6_var_samples = tmp_assign_source_40;
                Py_INCREF(outline_6_var_samples);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_14;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_5 = tmp_listcomp_3__contraction;
            tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_called_value_11 == NULL)) {
                tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_called_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "o";
                goto try_except_handler_21;
            }
            CHECK_OBJECT(outline_6_var_samples);
            tmp_args_element_value_14 = outline_6_var_samples;
            frame_fe5e8183217301e8652148702757b59c_8->m_frame.f_lineno = 175;
            tmp_append_value_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_14);
            if (tmp_append_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "o";
                goto try_except_handler_21;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_5, tmp_append_value_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 175;
                type_description_2 = "o";
                goto try_except_handler_21;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_2 = "o";
            goto try_except_handler_21;
        }
        goto loop_start_7;
        loop_end_7:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_args_element_value_13 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_args_element_value_13);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto frame_return_exit_8;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
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
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto frame_exception_exit_8;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_7;
        frame_return_exit_8:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_20;
        frame_exception_exit_8:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_fe5e8183217301e8652148702757b59c_8, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_fe5e8183217301e8652148702757b59c_8->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_fe5e8183217301e8652148702757b59c_8, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_fe5e8183217301e8652148702757b59c_8,
            type_description_2,
            outline_6_var_samples
        );


        // Release cached frame if used for exception.
        if (frame_fe5e8183217301e8652148702757b59c_8 == cache_frame_fe5e8183217301e8652148702757b59c_8) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_fe5e8183217301e8652148702757b59c_8);
            cache_frame_fe5e8183217301e8652148702757b59c_8 = NULL;
        }

        assertFrameObject(frame_fe5e8183217301e8652148702757b59c_8);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_7;
        frame_no_exception_7:;
        goto skip_nested_handling_7;
        nested_frame_exit_7:;
        type_description_1 = "oooooooco";
        goto try_except_handler_20;
        skip_nested_handling_7:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        Py_XDECREF(outline_6_var_samples);
        outline_6_var_samples = NULL;
        goto outline_result_10;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_6_var_samples);
        outline_6_var_samples = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_7:;
        exception_lineno = 175;
        goto try_except_handler_19;
        outline_result_10:;
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 175;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooco";
            goto try_except_handler_19;
        }
        goto frame_return_exit_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_17 == NULL) {
        exception_keeper_tb_17 = MAKE_TRACEBACK(frame_19b6a24256339087bfad158b4c22d9a1, exception_keeper_lineno_17);
    } else if (exception_keeper_lineno_17 != 0) {
        exception_keeper_tb_17 = ADD_TRACEBACK(exception_keeper_tb_17, frame_19b6a24256339087bfad158b4c22d9a1, exception_keeper_lineno_17);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_17, &exception_keeper_value_17, &exception_keeper_tb_17);
    // Tried code:
    {
        bool tmp_condition_result_16;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        tmp_cmp_expr_left_10 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_10 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_16 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_iter_arg_12;
        CHECK_OBJECT(var_transposed);
        tmp_iter_arg_12 = var_transposed;
        tmp_assign_source_41 = MAKE_ITERATOR(tmp_iter_arg_12);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "oooooooco";
            goto try_except_handler_23;
        }
        assert(tmp_listcomp_4__$0 == NULL);
        tmp_listcomp_4__$0 = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_LIST_EMPTY(0);
        assert(tmp_listcomp_4__contraction == NULL);
        tmp_listcomp_4__contraction = tmp_assign_source_42;
    }
    if (isFrameUnusable(cache_frame_f87d26fea5fb9a18858e4b5cec16349a_9)) {
        Py_XDECREF(cache_frame_f87d26fea5fb9a18858e4b5cec16349a_9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f87d26fea5fb9a18858e4b5cec16349a_9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f87d26fea5fb9a18858e4b5cec16349a_9 = MAKE_FUNCTION_FRAME(codeobj_f87d26fea5fb9a18858e4b5cec16349a, module_torch$utils$data$_utils$collate, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f87d26fea5fb9a18858e4b5cec16349a_9->m_type_description == NULL);
    frame_f87d26fea5fb9a18858e4b5cec16349a_9 = cache_frame_f87d26fea5fb9a18858e4b5cec16349a_9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f87d26fea5fb9a18858e4b5cec16349a_9);
    assert(Py_REFCNT(frame_f87d26fea5fb9a18858e4b5cec16349a_9) == 2);

    // Framed code:
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_43;
        CHECK_OBJECT(tmp_listcomp_4__$0);
        tmp_next_source_8 = tmp_listcomp_4__$0;
        tmp_assign_source_43 = ITERATOR_NEXT(tmp_next_source_8);
        if (tmp_assign_source_43 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "o";
                exception_lineno = 178;
                goto try_except_handler_24;
            }
        }

        {
            PyObject *old = tmp_listcomp_4__iter_value_0;
            tmp_listcomp_4__iter_value_0 = tmp_assign_source_43;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
        tmp_assign_source_44 = tmp_listcomp_4__iter_value_0;
        {
            PyObject *old = outline_7_var_samples;
            outline_7_var_samples = tmp_assign_source_44;
            Py_INCREF(outline_7_var_samples);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_append_list_6;
        PyObject *tmp_append_value_6;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_append_list_6 = tmp_listcomp_4__contraction;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_2 = "o";
            goto try_except_handler_24;
        }
        CHECK_OBJECT(outline_7_var_samples);
        tmp_args_element_value_15 = outline_7_var_samples;
        frame_f87d26fea5fb9a18858e4b5cec16349a_9->m_frame.f_lineno = 178;
        tmp_append_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_15);
        if (tmp_append_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_2 = "o";
            goto try_except_handler_24;
        }
        tmp_result = LIST_APPEND1(tmp_append_list_6, tmp_append_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_2 = "o";
            goto try_except_handler_24;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 178;
        type_description_2 = "o";
        goto try_except_handler_24;
    }
    goto loop_start_8;
    loop_end_8:;
    CHECK_OBJECT(tmp_listcomp_4__contraction);
    tmp_return_value = tmp_listcomp_4__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_24;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_24:;
    CHECK_OBJECT(tmp_listcomp_4__$0);
    Py_DECREF(tmp_listcomp_4__$0);
    tmp_listcomp_4__$0 = NULL;
    CHECK_OBJECT(tmp_listcomp_4__contraction);
    Py_DECREF(tmp_listcomp_4__contraction);
    tmp_listcomp_4__contraction = NULL;
    Py_XDECREF(tmp_listcomp_4__iter_value_0);
    tmp_listcomp_4__iter_value_0 = NULL;
    goto frame_return_exit_9;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
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
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_9;
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_8;
    frame_return_exit_9:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_23;
    frame_exception_exit_9:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f87d26fea5fb9a18858e4b5cec16349a_9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f87d26fea5fb9a18858e4b5cec16349a_9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f87d26fea5fb9a18858e4b5cec16349a_9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f87d26fea5fb9a18858e4b5cec16349a_9,
        type_description_2,
        outline_7_var_samples
    );


    // Release cached frame if used for exception.
    if (frame_f87d26fea5fb9a18858e4b5cec16349a_9 == cache_frame_f87d26fea5fb9a18858e4b5cec16349a_9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f87d26fea5fb9a18858e4b5cec16349a_9);
        cache_frame_f87d26fea5fb9a18858e4b5cec16349a_9 = NULL;
    }

    assertFrameObject(frame_f87d26fea5fb9a18858e4b5cec16349a_9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto nested_frame_exit_8;
    frame_no_exception_8:;
    goto skip_nested_handling_8;
    nested_frame_exit_8:;
    type_description_1 = "oooooooco";
    goto try_except_handler_23;
    skip_nested_handling_8:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_23:;
    Py_XDECREF(outline_7_var_samples);
    outline_7_var_samples = NULL;
    goto outline_result_11;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(outline_7_var_samples);
    outline_7_var_samples = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto outline_exception_8;
    // End of try:
    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;
    outline_exception_8:;
    exception_lineno = 178;
    goto try_except_handler_22;
    outline_result_11:;
    goto try_return_handler_22;
    goto branch_end_16;
    branch_no_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 174;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_19b6a24256339087bfad158b4c22d9a1->m_frame) frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooco";
    goto try_except_handler_22;
    branch_end_16:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_22:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto frame_return_exit_1;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    branch_end_15:;
    branch_no_13:;
    branch_end_12:;
    branch_end_10:;
    branch_end_9:;
    branch_end_8:;
    branch_end_7:;
    branch_end_3:;
    branch_end_1:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_args_element_value_16;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[37]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_elem_type);
        tmp_args_element_value_16 = var_elem_type;
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 180;
        tmp_make_exception_arg_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_13);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oooooooco";
            goto frame_exception_exit_1;
        }
        frame_19b6a24256339087bfad158b4c22d9a1->m_frame.f_lineno = 180;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 180;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooco";
        goto frame_exception_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_9;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_19b6a24256339087bfad158b4c22d9a1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_19b6a24256339087bfad158b4c22d9a1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_19b6a24256339087bfad158b4c22d9a1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_19b6a24256339087bfad158b4c22d9a1,
        type_description_1,
        par_batch,
        var_elem,
        var_elem_type,
        var_out,
        var_numel,
        var_storage,
        var_it,
        var_elem_size,
        var_transposed
    );


    // Release cached frame if used for exception.
    if (frame_19b6a24256339087bfad158b4c22d9a1 == cache_frame_19b6a24256339087bfad158b4c22d9a1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_19b6a24256339087bfad158b4c22d9a1);
        cache_frame_19b6a24256339087bfad158b4c22d9a1 = NULL;
    }

    assertFrameObject(frame_19b6a24256339087bfad158b4c22d9a1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_9:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_elem);
    var_elem = NULL;
    CHECK_OBJECT(var_elem_type);
    Py_DECREF(var_elem_type);
    var_elem_type = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_numel);
    var_numel = NULL;
    Py_XDECREF(var_storage);
    var_storage = NULL;
    Py_XDECREF(var_it);
    var_it = NULL;
    CHECK_OBJECT(var_elem_size);
    Py_DECREF(var_elem_size);
    var_elem_size = NULL;
    Py_XDECREF(var_transposed);
    var_transposed = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_elem);
    var_elem = NULL;
    Py_XDECREF(var_elem_type);
    var_elem_type = NULL;
    Py_XDECREF(var_out);
    var_out = NULL;
    Py_XDECREF(var_numel);
    var_numel = NULL;
    Py_XDECREF(var_storage);
    var_storage = NULL;
    Py_XDECREF(var_it);
    var_it = NULL;
    CHECK_OBJECT(var_elem_size);
    Py_DECREF(var_elem_size);
    var_elem_size = NULL;
    Py_XDECREF(var_transposed);
    var_transposed = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_batch);
    Py_DECREF(par_batch);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_batch);
    Py_DECREF(par_batch);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__1_genexpr_locals *generator_heap = (struct torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_dee30d9fa0b881189a059ac7414cb3f4, module_torch$utils$data$_utils$collate, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 135;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_called_instance_1 = generator_heap->var_x;
        generator->m_frame->m_frame.f_lineno = 135;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[46]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 135;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 135;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 135;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_x
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__1_genexpr_context,
        module_torch$utils$data$_utils$collate,
        mod_consts[22],
#if PYTHON_VERSION >= 0x350
        mod_consts[47],
#endif
        codeobj_dee30d9fa0b881189a059ac7414cb3f4,
        closure,
        1,
        sizeof(struct torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__1_genexpr_locals)
    );
}



struct torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__2_genexpr_locals {
    PyObject *var_samples;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__2_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__2_genexpr_locals *generator_heap = (struct torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_samples = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_d0690a3e7c46fe615282a7059195b217, module_torch$utils$data$_utils$collate, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[0]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "No";
                generator_heap->exception_lineno = 162;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_samples;
            generator_heap->var_samples = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_samples);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_samples);
        tmp_args_element_value_1 = generator_heap->var_samples;
        generator->m_frame->m_frame.f_lineno = 162;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_value_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 162;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 162;
        generator_heap->type_description_1 = "No";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_samples
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_samples);
    generator_heap->var_samples = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_samples);
    generator_heap->var_samples = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__2_genexpr_context,
        module_torch$utils$data$_utils$collate,
        mod_consts[22],
#if PYTHON_VERSION >= 0x350
        mod_consts[47],
#endif
        codeobj_d0690a3e7c46fe615282a7059195b217,
        closure,
        1,
        sizeof(struct torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__2_genexpr_locals)
    );
}



struct torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__3_genexpr_locals {
    PyObject *var_elem;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    char yield_tmps[1024];
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__3_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__3_genexpr_locals *generator_heap = (struct torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__3_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_elem = NULL;
    generator_heap->tmp_iter_value_0 = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
    // Tried code:
    if (isFrameUnusable(cache_m_frame)) {
        Py_XDECREF(cache_m_frame);

#if _DEBUG_REFCOUNTS
        if (cache_m_frame == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_1ee96ba53d558e36362728785c99f675, module_torch$utils$data$_utils$collate, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_m_frame->m_type_description == NULL);
    generator->m_frame = cache_m_frame;
    // Mark the frame object as in use, ref count 1 will be up for reuse.
    Py_INCREF(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2); // Frame stack

    Nuitka_SetFrameGenerator(generator->m_frame, (PyObject *)generator);

    assert(generator->m_frame->m_frame.f_back == NULL);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackGeneratorCompiledFrame(generator->m_frame);
    assert(Py_REFCNT(generator->m_frame) == 2);

    // Store currently existing exception as the one to publish again when we
    // yield or yield from.
    STORE_GENERATOR_EXCEPTION(generator);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(Nuitka_Cell_GET(generator->m_closure[1]));
        tmp_next_source_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_1 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "Noc";
                generator_heap->exception_lineno = 167;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_iter_value_0;
            generator_heap->tmp_iter_value_0 = tmp_assign_source_1;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_iter_value_0);
        tmp_assign_source_2 = generator_heap->tmp_iter_value_0;
        {
            PyObject *old = generator_heap->var_elem;
            generator_heap->var_elem = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_elem);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_elem);
        tmp_len_arg_1 = generator_heap->var_elem;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 167;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[48]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 167;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_expression_value_1 = RICH_COMPARE_EQ_OBJECT_LONG_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 167;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_len_arg_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_len_arg_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 167;
            generator_heap->type_description_1 = "Noc";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 167;
        generator_heap->type_description_1 = "Noc";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;

    // Release exception attached to the frame
    DROP_GENERATOR_EXCEPTION(generator);



    goto frame_no_exception_1;
    frame_exception_exit_1:;

    // If it's not an exit exception, consider and create a traceback for it.
    if (!EXCEPTION_MATCH_GENERATOR(generator_heap->exception_type)) {
        if (generator_heap->exception_tb == NULL) {
            generator_heap->exception_tb = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_lineno);
        } else if (generator_heap->exception_tb->tb_frame != &generator->m_frame->m_frame) {
            generator_heap->exception_tb = ADD_TRACEBACK(generator_heap->exception_tb, generator->m_frame, generator_heap->exception_lineno);
        }

        Nuitka_Frame_AttachLocals(
            generator->m_frame,
            generator_heap->type_description_1,
            NULL,
            generator_heap->var_elem,
            generator->m_closure[0]
        );


        // Release cached frame if used for exception.
        if (generator->m_frame == cache_m_frame) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif

            Py_DECREF(cache_m_frame);
            cache_m_frame = NULL;
        }

        assertFrameObject(generator->m_frame);
    }

#if PYTHON_VERSION >= 0x300
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TYPE_F(generator));
#endif
    Py_CLEAR(EXC_VALUE_F(generator));
#if PYTHON_VERSION < 0x3b0
    Py_CLEAR(EXC_TRACEBACK_F(generator));
#endif
#endif

    // Return the error.
    goto try_except_handler_1;

    frame_no_exception_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_elem);
    generator_heap->var_elem = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto function_exception_exit;
    // End of try:
    try_end_2:;
    Py_XDECREF(generator_heap->tmp_iter_value_0);
    generator_heap->tmp_iter_value_0 = NULL;
    Py_XDECREF(generator_heap->var_elem);
    generator_heap->var_elem = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__3_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__3_genexpr_context,
        module_torch$utils$data$_utils$collate,
        mod_consts[22],
#if PYTHON_VERSION >= 0x350
        mod_consts[47],
#endif
        codeobj_1ee96ba53d558e36362728785c99f675,
        closure,
        2,
        sizeof(struct torch$utils$data$_utils$collate$$$function__2_default_collate$$$genexpr__3_genexpr_locals)
    );
}



static PyObject *MAKE_FUNCTION_torch$utils$data$_utils$collate$$$function__1_default_convert() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$_utils$collate$$$function__1_default_convert,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_97d35536e7dd7ff11b6d1e73030cfb97,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$_utils$collate,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$_utils$collate$$$function__2_default_collate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$_utils$collate$$$function__2_default_collate,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_19b6a24256339087bfad158b4c22d9a1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$_utils$collate,
        mod_consts[45],
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

function_impl_code functable_torch$utils$data$_utils$collate[] = {
    impl_torch$utils$data$_utils$collate$$$function__1_default_convert,
    impl_torch$utils$data$_utils$collate$$$function__2_default_collate,
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

    function_impl_code *current = functable_torch$utils$data$_utils$collate;
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

    if (offset > sizeof(functable_torch$utils$data$_utils$collate) || offset < 0) {
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
        functable_torch$utils$data$_utils$collate[offset],
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
        module_torch$utils$data$_utils$collate,
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
PyObject *modulecode_torch$utils$data$_utils$collate(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.utils.data._utils.collate");

    // Store the module for future use.
    module_torch$utils$data$_utils$collate = module;

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
        PRINT_STRING("torch.utils.data._utils.collate: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.utils.data._utils.collate: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.utils.data._utils.collate: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$utils$data$_utils$collate\n");

    moduledict_torch$utils$data$_utils$collate = MODULE_DICT(module_torch$utils$data$_utils$collate);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$utils$data$_utils$collate,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$utils$data$_utils$collate,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[78]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$utils$data$_utils$collate,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$utils$data$_utils$collate,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$utils$data$_utils$collate,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$utils$data$_utils$collate);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$utils$data$_utils$collate);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_4c90fec40d3123e3c109353ac298ca8d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[49];
        UPDATE_STRING_DICT0(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_2);
    }
    frame_4c90fec40d3123e3c109353ac298ca8d = MAKE_MODULE_FRAME(codeobj_4c90fec40d3123e3c109353ac298ca8d, module_torch$utils$data$_utils$collate);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4c90fec40d3123e3c109353ac298ca8d);
    assert(Py_REFCNT(frame_4c90fec40d3123e3c109353ac298ca8d) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[53], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[54], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$utils$data$_utils$collate;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[24];
        frame_4c90fec40d3123e3c109353ac298ca8d->m_frame.f_lineno = 10;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[56];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$utils$data$_utils$collate;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[24];
        frame_4c90fec40d3123e3c109353ac298ca8d->m_frame.f_lineno = 11;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[14];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$utils$data$_utils$collate;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[24];
        frame_4c90fec40d3123e3c109353ac298ca8d->m_frame.f_lineno = 12;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[57];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$utils$data$_utils$collate;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[58];
        tmp_level_value_4 = mod_consts[24];
        frame_4c90fec40d3123e3c109353ac298ca8d->m_frame.f_lineno = 13;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$utils$data$_utils$collate,
                mod_consts[20],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[20]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        frame_4c90fec40d3123e3c109353ac298ca8d->m_frame.f_lineno = 15;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[59],
            PyTuple_GET_ITEM(mod_consts[60], 0)
        );

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_8);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4c90fec40d3123e3c109353ac298ca8d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c90fec40d3123e3c109353ac298ca8d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c90fec40d3123e3c109353ac298ca8d, exception_lineno);
    }



    assertFrameObject(frame_4c90fec40d3123e3c109353ac298ca8d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_torch$utils$data$_utils$collate$$$function__1_default_convert();

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[61];
        UPDATE_STRING_DICT0(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_torch$utils$data$_utils$collate$$$function__2_default_collate();

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_11);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.utils.data._utils.collate", false);

    Py_INCREF(module_torch$utils$data$_utils$collate);
    return module_torch$utils$data$_utils$collate;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$_utils$collate, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$utils$data$_utils$collate", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
