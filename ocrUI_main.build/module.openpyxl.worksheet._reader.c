/* Generated code for Python module 'openpyxl.worksheet._reader'
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

/* The "module_openpyxl$worksheet$_reader" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_openpyxl$worksheet$_reader;
PyDictObject *moduledict_openpyxl$worksheet$_reader;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[371];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[371];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("openpyxl.worksheet._reader"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 371; i++) {
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
void checkModuleConstants_openpyxl$worksheet$_reader(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 371; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c89a5f37092db349a052f8afee4ef13b;
static PyCodeObject *codeobj_731db25bb608c33a120c430e97d5122a;
static PyCodeObject *codeobj_64eb5b7631c25c1f6c882da2ec342228;
static PyCodeObject *codeobj_9ce82793c5ac80b47f0bc2d573956ca9;
static PyCodeObject *codeobj_b76c8c14415fd0a843751c531025fb94;
static PyCodeObject *codeobj_ced219dafe59236375de8896103bb57e;
static PyCodeObject *codeobj_21d46606e9923c7faff4319b16db6f19;
static PyCodeObject *codeobj_7554d00d3654ea9fecdeee53d01ff11c;
static PyCodeObject *codeobj_afcb5659257a51dc5a7d5dc2984455f4;
static PyCodeObject *codeobj_21f9e203c1578c1def81cd4e90339462;
static PyCodeObject *codeobj_df7d4fcbfc4839a117f7f9cc9ce148e9;
static PyCodeObject *codeobj_b856ad47c839e56a864bb5ef958f9362;
static PyCodeObject *codeobj_b6730f58e75f7e8807acbdb4bacf8dca;
static PyCodeObject *codeobj_42fa219b2f0cdee8038b485db8a51f55;
static PyCodeObject *codeobj_9ea38299721c36c8b31d927190a2bada;
static PyCodeObject *codeobj_0aaed92ad7c39765d57a05c055868deb;
static PyCodeObject *codeobj_d56cf156fcfc9f42d26b5e4aed636dc5;
static PyCodeObject *codeobj_4e40378873335b7af2165a2a40867aff;
static PyCodeObject *codeobj_3be607e62977958c2107e962499fab5c;
static PyCodeObject *codeobj_051b2bdeb43ed5ae7712ce88c9cf0289;
static PyCodeObject *codeobj_e1e49d2654618fd5732b416140a82965;
static PyCodeObject *codeobj_f0249c4c168a9ff14ecd7b487080c732;
static PyCodeObject *codeobj_fdd8d1fdb448e1883c65b18309d422b8;
static PyCodeObject *codeobj_1e579ef3d7fc968c11970391a8aacc04;
static PyCodeObject *codeobj_c5637788f60422219a3dfaa143ed0c8f;
static PyCodeObject *codeobj_1353de2535534bc030dda262a1b4dd0e;
static PyCodeObject *codeobj_452c2a6db88e56a02518c09a15b81fee;
static PyCodeObject *codeobj_8bcbaffa276bbce10fa8865df7ce846e;
static PyCodeObject *codeobj_50f6e83091610217cda3dac496b94fe8;
static PyCodeObject *codeobj_b283c7e861b6de85de09be1cb42eaae3;
static PyCodeObject *codeobj_ef89bebbfb5e3d1ce5ec958bcee42864;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[339]); CHECK_OBJECT(module_filename_obj);
    codeobj_c89a5f37092db349a052f8afee4ef13b = MAKE_CODE_OBJECT(module_filename_obj, 274, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[340], mod_consts[340], mod_consts[341], NULL, 1, 0, 0);
    codeobj_731db25bb608c33a120c430e97d5122a = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[342], mod_consts[342], NULL, NULL, 0, 0, 0);
    codeobj_64eb5b7631c25c1f6c882da2ec342228 = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[343], mod_consts[343], mod_consts[344], NULL, 1, 0, 0);
    codeobj_9ce82793c5ac80b47f0bc2d573956ca9 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[345], NULL, 0, 0, 0);
    codeobj_b76c8c14415fd0a843751c531025fb94 = MAKE_CODE_OBJECT(module_filename_obj, 325, CO_NOFREE, mod_consts[325], mod_consts[325], mod_consts[345], NULL, 0, 0, 0);
    codeobj_ced219dafe59236375de8896103bb57e = MAKE_CODE_OBJECT(module_filename_obj, 87, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[309], mod_consts[309], mod_consts[346], NULL, 6, 0, 0);
    codeobj_21d46606e9923c7faff4319b16db6f19 = MAKE_CODE_OBJECT(module_filename_obj, 330, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[309], mod_consts[309], mod_consts[347], NULL, 5, 0, 0);
    codeobj_7554d00d3654ea9fecdeee53d01ff11c = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[109], mod_consts[109], mod_consts[348], NULL, 1, 0, 0);
    codeobj_afcb5659257a51dc5a7d5dc2984455f4 = MAKE_CODE_OBJECT(module_filename_obj, 425, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[337], mod_consts[337], mod_consts[349], NULL, 1, 0, 0);
    codeobj_21f9e203c1578c1def81cd4e90339462 = MAKE_CODE_OBJECT(module_filename_obj, 336, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[206], mod_consts[206], mod_consts[350], NULL, 1, 0, 0);
    codeobj_df7d4fcbfc4839a117f7f9cc9ce148e9 = MAKE_CODE_OBJECT(module_filename_obj, 399, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[210], mod_consts[210], mod_consts[351], NULL, 1, 0, 0);
    codeobj_b856ad47c839e56a864bb5ef958f9362 = MAKE_CODE_OBJECT(module_filename_obj, 349, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[209], mod_consts[209], mod_consts[352], NULL, 1, 0, 0);
    codeobj_b6730f58e75f7e8807acbdb4bacf8dca = MAKE_CODE_OBJECT(module_filename_obj, 371, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[208], mod_consts[208], mod_consts[353], NULL, 1, 0, 0);
    codeobj_42fa219b2f0cdee8038b485db8a51f55 = MAKE_CODE_OBJECT(module_filename_obj, 363, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[207], mod_consts[207], mod_consts[354], NULL, 1, 0, 0);
    codeobj_9ea38299721c36c8b31d927190a2bada = MAKE_CODE_OBJECT(module_filename_obj, 415, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[213], mod_consts[213], mod_consts[355], NULL, 1, 0, 0);
    codeobj_0aaed92ad7c39765d57a05c055868deb = MAKE_CODE_OBJECT(module_filename_obj, 407, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[211], mod_consts[211], mod_consts[356], NULL, 1, 0, 0);
    codeobj_d56cf156fcfc9f42d26b5e4aed636dc5 = MAKE_CODE_OBJECT(module_filename_obj, 357, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[212], mod_consts[212], mod_consts[357], NULL, 1, 0, 0);
    codeobj_4e40378873335b7af2165a2a40867aff = MAKE_CODE_OBJECT(module_filename_obj, 390, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[194], mod_consts[194], mod_consts[358], NULL, 2, 0, 0);
    codeobj_3be607e62977958c2107e962499fab5c = MAKE_CODE_OBJECT(module_filename_obj, 111, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[89], mod_consts[89], mod_consts[359], NULL, 1, 0, 0);
    codeobj_051b2bdeb43ed5ae7712ce88c9cf0289 = MAKE_CODE_OBJECT(module_filename_obj, 175, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[144], mod_consts[144], mod_consts[360], NULL, 2, 0, 0);
    codeobj_e1e49d2654618fd5732b416140a82965 = MAKE_CODE_OBJECT(module_filename_obj, 313, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[45], mod_consts[361], NULL, 2, 0, 0);
    codeobj_f0249c4c168a9ff14ecd7b487080c732 = MAKE_CODE_OBJECT(module_filename_obj, 253, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[362], NULL, 2, 0, 0);
    codeobj_fdd8d1fdb448e1883c65b18309d422b8 = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[47], mod_consts[47], mod_consts[363], NULL, 2, 0, 0);
    codeobj_1e579ef3d7fc968c11970391a8aacc04 = MAKE_CODE_OBJECT(module_filename_obj, 158, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[311], mod_consts[311], mod_consts[364], NULL, 1, 0, 0);
    codeobj_c5637788f60422219a3dfaa143ed0c8f = MAKE_CODE_OBJECT(module_filename_obj, 295, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[365], NULL, 2, 0, 0);
    codeobj_1353de2535534bc030dda262a1b4dd0e = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[39], mod_consts[39], mod_consts[366], NULL, 2, 0, 0);
    codeobj_452c2a6db88e56a02518c09a15b81fee = MAKE_CODE_OBJECT(module_filename_obj, 228, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[107], mod_consts[107], mod_consts[367], NULL, 2, 0, 0);
    codeobj_8bcbaffa276bbce10fa8865df7ce846e = MAKE_CODE_OBJECT(module_filename_obj, 303, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], mod_consts[368], NULL, 2, 0, 0);
    codeobj_50f6e83091610217cda3dac496b94fe8 = MAKE_CODE_OBJECT(module_filename_obj, 260, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[369], NULL, 2, 0, 0);
    codeobj_b283c7e861b6de85de09be1cb42eaae3 = MAKE_CODE_OBJECT(module_filename_obj, 308, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[43], mod_consts[43], mod_consts[361], NULL, 2, 0, 0);
    codeobj_ef89bebbfb5e3d1ce5ec958bcee42864 = MAKE_CODE_OBJECT(module_filename_obj, 287, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[370], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_openpyxl$worksheet$_reader$$$function__3_parse$$$genobj__1_parse(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__10_parse_sheet_protection();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__11_parse_extensions();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__12_parse_legacy();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__13_parse_row_breaks();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__14_parse_col_breaks();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__15_parse_custom_views();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__16___init__();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__17_bind_cells();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__18_bind_formatting();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__19_bind_tables();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__1__cast_number();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__20_bind_merged_cells();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__21_bind_hyperlinks();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__22_normalize_merged_cell_link();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__23_bind_col_dimensions();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__24_bind_row_dimensions();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__25_bind_properties();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__26_bind_all();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__2___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__3_parse();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__4_parse_dimensions();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__5_parse_cell();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__6_parse_formula();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__7_parse_column_dimensions();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__8_parse_row();


static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__9_parse_formatting();


// The module function definitions.
static PyObject *impl_openpyxl$worksheet$_reader$$$function__1__cast_number(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    struct Nuitka_FrameObject *frame_7554d00d3654ea9fecdeee53d01ff11c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7554d00d3654ea9fecdeee53d01ff11c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7554d00d3654ea9fecdeee53d01ff11c)) {
        Py_XDECREF(cache_frame_7554d00d3654ea9fecdeee53d01ff11c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7554d00d3654ea9fecdeee53d01ff11c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7554d00d3654ea9fecdeee53d01ff11c = MAKE_FUNCTION_FRAME(codeobj_7554d00d3654ea9fecdeee53d01ff11c, module_openpyxl$worksheet$_reader, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7554d00d3654ea9fecdeee53d01ff11c->m_type_description == NULL);
    frame_7554d00d3654ea9fecdeee53d01ff11c = cache_frame_7554d00d3654ea9fecdeee53d01ff11c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7554d00d3654ea9fecdeee53d01ff11c);
    assert(Py_REFCNT(frame_7554d00d3654ea9fecdeee53d01ff11c) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_or_left_truth_2;
        bool tmp_or_left_value_2;
        bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_1 = mod_consts[0];
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_right_1 = par_value;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res == 1) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_cmp_expr_left_2 = mod_consts[1];
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_right_2 = par_value;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = (tmp_res == 1) ? true : false;
        tmp_or_left_truth_2 = tmp_or_left_value_2 != false ? 1 : 0;
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        tmp_cmp_expr_left_3 = mod_consts[2];
        CHECK_OBJECT(par_value);
        tmp_cmp_expr_right_3 = par_value;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = (tmp_res == 1) ? true : false;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
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
        PyObject *tmp_float_arg_1;
        CHECK_OBJECT(par_value);
        tmp_float_arg_1 = par_value;
        tmp_return_value = TO_FLOAT(tmp_float_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(par_value);
        tmp_int_arg_1 = par_value;
        tmp_return_value = PyNumber_Int(tmp_int_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;
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
        exception_tb = MAKE_TRACEBACK(frame_7554d00d3654ea9fecdeee53d01ff11c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7554d00d3654ea9fecdeee53d01ff11c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7554d00d3654ea9fecdeee53d01ff11c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7554d00d3654ea9fecdeee53d01ff11c,
        type_description_1,
        par_value
    );


    // Release cached frame if used for exception.
    if (frame_7554d00d3654ea9fecdeee53d01ff11c == cache_frame_7554d00d3654ea9fecdeee53d01ff11c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7554d00d3654ea9fecdeee53d01ff11c);
        cache_frame_7554d00d3654ea9fecdeee53d01ff11c = NULL;
    }

    assertFrameObject(frame_7554d00d3654ea9fecdeee53d01ff11c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_src = python_pars[1];
    PyObject *par_shared_strings = python_pars[2];
    PyObject *par_data_only = python_pars[3];
    PyObject *par_epoch = python_pars[4];
    PyObject *par_date_formats = python_pars[5];
    struct Nuitka_FrameObject *frame_ced219dafe59236375de8896103bb57e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ced219dafe59236375de8896103bb57e = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ced219dafe59236375de8896103bb57e)) {
        Py_XDECREF(cache_frame_ced219dafe59236375de8896103bb57e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ced219dafe59236375de8896103bb57e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ced219dafe59236375de8896103bb57e = MAKE_FUNCTION_FRAME(codeobj_ced219dafe59236375de8896103bb57e, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ced219dafe59236375de8896103bb57e->m_type_description == NULL);
    frame_ced219dafe59236375de8896103bb57e = cache_frame_ced219dafe59236375de8896103bb57e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ced219dafe59236375de8896103bb57e);
    assert(Py_REFCNT(frame_ced219dafe59236375de8896103bb57e) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[4], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[5], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_epoch);
        tmp_assattr_value_3 = par_epoch;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[6], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_src);
        tmp_assattr_value_4 = par_src;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[7], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_shared_strings);
        tmp_assattr_value_5 = par_shared_strings;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[8], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_data_only);
        tmp_assattr_value_6 = par_data_only;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[9], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        tmp_assattr_value_7 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[10], tmp_assattr_value_7);
        Py_DECREF(tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        tmp_assattr_value_8 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[11], tmp_assattr_value_8);
        Py_DECREF(tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        tmp_assattr_value_9 = mod_consts[12];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[13], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_assattr_target_10;
        tmp_assattr_value_10 = mod_consts[12];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[14], tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_11;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_ced219dafe59236375de8896103bb57e->m_frame.f_lineno = 97;
        tmp_assattr_value_11 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[16], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(par_date_formats);
        tmp_assattr_value_12 = par_date_formats;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[17], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        tmp_assattr_value_13 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[18], tmp_assattr_value_13);
        Py_DECREF(tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_assattr_target_14;
        tmp_assattr_value_14 = MAKE_DICT_EMPTY();
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[19], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        tmp_assattr_value_15 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[20], tmp_assattr_value_15);
        Py_DECREF(tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_assattr_target_16;
        tmp_assattr_value_16 = Py_False;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[21], tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_17;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_ced219dafe59236375de8896103bb57e->m_frame.f_lineno = 103;
        tmp_assattr_value_17 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assattr_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[23], tmp_assattr_value_17);
        Py_DECREF(tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_assattr_target_18;
        tmp_assattr_value_18 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[24], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        tmp_assattr_value_19 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_19 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[25], tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        tmp_assattr_value_20 = Py_None;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_20 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[26], tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_called_value_3;
        PyObject *tmp_assattr_target_21;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_ced219dafe59236375de8896103bb57e->m_frame.f_lineno = 107;
        tmp_assattr_value_21 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_assattr_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_21 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[28], tmp_assattr_value_21);
        Py_DECREF(tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_called_value_4;
        PyObject *tmp_assattr_target_22;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_ced219dafe59236375de8896103bb57e->m_frame.f_lineno = 108;
        tmp_assattr_value_22 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_assattr_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_22 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[30], tmp_assattr_value_22);
        Py_DECREF(tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ced219dafe59236375de8896103bb57e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ced219dafe59236375de8896103bb57e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ced219dafe59236375de8896103bb57e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ced219dafe59236375de8896103bb57e,
        type_description_1,
        par_self,
        par_src,
        par_shared_strings,
        par_data_only,
        par_epoch,
        par_date_formats
    );


    // Release cached frame if used for exception.
    if (frame_ced219dafe59236375de8896103bb57e == cache_frame_ced219dafe59236375de8896103bb57e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ced219dafe59236375de8896103bb57e);
        cache_frame_ced219dafe59236375de8896103bb57e = NULL;
    }

    assertFrameObject(frame_ced219dafe59236375de8896103bb57e);

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
    CHECK_OBJECT(par_src);
    Py_DECREF(par_src);
    CHECK_OBJECT(par_shared_strings);
    Py_DECREF(par_shared_strings);
    CHECK_OBJECT(par_data_only);
    Py_DECREF(par_data_only);
    CHECK_OBJECT(par_epoch);
    Py_DECREF(par_epoch);
    CHECK_OBJECT(par_date_formats);
    Py_DECREF(par_date_formats);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_src);
    Py_DECREF(par_src);
    CHECK_OBJECT(par_shared_strings);
    Py_DECREF(par_shared_strings);
    CHECK_OBJECT(par_data_only);
    Py_DECREF(par_data_only);
    CHECK_OBJECT(par_epoch);
    Py_DECREF(par_epoch);
    CHECK_OBJECT(par_date_formats);
    Py_DECREF(par_date_formats);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__3_parse(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_self = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_self;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_openpyxl$worksheet$_reader$$$function__3_parse$$$genobj__1_parse(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
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



struct openpyxl$worksheet$_reader$$$function__3_parse$$$genobj__1_parse_locals {
    PyObject *var_dispatcher;
    PyObject *var_properties;
    PyObject *var_it;
    PyObject *var__;
    PyObject *var_element;
    PyObject *var_tag_name;
    PyObject *var_prop;
    PyObject *var_obj;
    PyObject *var_row;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    PyObject *tmp_tuple_unpack_1__element_1;
    PyObject *tmp_tuple_unpack_1__element_2;
    PyObject *tmp_tuple_unpack_1__source_iter;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    int exception_keeper_lineno_4;
};

static PyObject *openpyxl$worksheet$_reader$$$function__3_parse$$$genobj__1_parse_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct openpyxl$worksheet$_reader$$$function__3_parse$$$genobj__1_parse_locals *generator_heap = (struct openpyxl$worksheet$_reader$$$function__3_parse$$$genobj__1_parse_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_dispatcher = NULL;
    generator_heap->var_properties = NULL;
    generator_heap->var_it = NULL;
    generator_heap->var__ = NULL;
    generator_heap->var_element = NULL;
    generator_heap->var_tag_name = NULL;
    generator_heap->var_prop = NULL;
    generator_heap->var_obj = NULL;
    generator_heap->var_row = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_3be607e62977958c2107e962499fab5c, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
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
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_dict_key_1 == NULL)) {
            tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 113;
            generator_heap->type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = _PyDict_NewPresized( 8 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 113;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[34]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 114;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 114;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_2 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[35]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 114;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 114;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[36]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 115;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 115;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_3 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[37]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 115;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 115;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 116;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 116;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_4 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[39]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 116;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 116;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[40]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 117;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 117;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_5 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[41]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 117;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 117;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[42]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 118;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 118;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_6 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[43]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 118;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 118;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 119;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 119;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_7 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[45]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 119;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 119;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[46]);

            if (unlikely(tmp_dict_key_1 == NULL)) {
                tmp_dict_key_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
            }

            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 120;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
                generator_heap->exception_tb = NULL;
                NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                CHAIN_EXCEPTION(generator_heap->exception_value);

                generator_heap->exception_lineno = 120;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }

            tmp_expression_value_8 = Nuitka_Cell_GET(generator->m_closure[0]);
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[47]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 120;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_1;
            }
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 120;
                generator_heap->type_description_1 = "cooooooooo";
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
        assert(generator_heap->var_dispatcher == NULL);
        generator_heap->var_dispatcher = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_tuple_element_1;
        tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_dict_key_2 == NULL)) {
            tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_dict_key_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 124;
            generator_heap->type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[49];
        tmp_dict_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 124;
            generator_heap->type_description_1 = "cooooooooo";
            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_dict_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_2 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_tuple_element_13;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 124;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[51]);

            if (unlikely(tmp_dict_key_2 == NULL)) {
                tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
            }

            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 125;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_tuple_element_2 = mod_consts[52];
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_tuple_element_2 == NULL)) {
                tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 125;
                generator_heap->type_description_1 = "cooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_2);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 125;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[54]);

            if (unlikely(tmp_dict_key_2 == NULL)) {
                tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
            }

            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 126;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_tuple_element_3 = mod_consts[55];
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_tuple_element_3 == NULL)) {
                tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 126;
                generator_heap->type_description_1 = "cooooooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_3);
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 126;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[57]);

            if (unlikely(tmp_dict_key_2 == NULL)) {
                tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
            }

            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 127;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_tuple_element_4 = mod_consts[58];
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[58]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 127;
                generator_heap->type_description_1 = "cooooooooo";
                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_4);
            goto tuple_build_noexception_4;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_4:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_4:;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 127;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_dict_key_2 == NULL)) {
                tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 128;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_tuple_element_5 = mod_consts[60];
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[61]);

            if (unlikely(tmp_tuple_element_5 == NULL)) {
                tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
            }

            if (tmp_tuple_element_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 128;
                generator_heap->type_description_1 = "cooooooooo";
                goto tuple_build_exception_5;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_5);
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 128;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_dict_key_2 == NULL)) {
                tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 129;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_tuple_element_6 = mod_consts[63];
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[64]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 129;
                generator_heap->type_description_1 = "cooooooooo";
                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_6);
            goto tuple_build_noexception_6;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_6:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_6:;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 129;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_dict_key_2 == NULL)) {
                tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 130;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_tuple_element_7 = mod_consts[66];
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[67]);

            if (unlikely(tmp_tuple_element_7 == NULL)) {
                tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
            }

            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 130;
                generator_heap->type_description_1 = "cooooooooo";
                goto tuple_build_exception_7;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_7);
            goto tuple_build_noexception_7;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_7:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_7:;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 130;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_dict_key_2 == NULL)) {
                tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
            }

            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 131;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_tuple_element_8 = mod_consts[69];
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[70]);

            if (unlikely(tmp_tuple_element_8 == NULL)) {
                tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[70]);
            }

            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 131;
                generator_heap->type_description_1 = "cooooooooo";
                goto tuple_build_exception_8;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_8);
            goto tuple_build_noexception_8;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_8:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_8:;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 131;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_dict_key_2 == NULL)) {
                tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 132;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_tuple_element_9 = mod_consts[72];
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[73]);

            if (unlikely(tmp_tuple_element_9 == NULL)) {
                tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
            }

            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 132;
                generator_heap->type_description_1 = "cooooooooo";
                goto tuple_build_exception_9;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_9);
            goto tuple_build_noexception_9;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_9:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_9:;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 132;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_dict_key_2 == NULL)) {
                tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 133;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_tuple_element_10 = mod_consts[75];
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_10);
            tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[76]);

            if (unlikely(tmp_tuple_element_10 == NULL)) {
                tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
            }

            if (tmp_tuple_element_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 133;
                generator_heap->type_description_1 = "cooooooooo";
                goto tuple_build_exception_10;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_10);
            goto tuple_build_noexception_10;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_10:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_10:;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 133;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[77]);

            if (unlikely(tmp_dict_key_2 == NULL)) {
                tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
            }

            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 134;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_tuple_element_11 = mod_consts[16];
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_11);
            tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[15]);

            if (unlikely(tmp_tuple_element_11 == NULL)) {
                tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
            }

            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 134;
                generator_heap->type_description_1 = "cooooooooo";
                goto tuple_build_exception_11;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_11);
            goto tuple_build_noexception_11;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_11:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_11:;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 134;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[78]);

            if (unlikely(tmp_dict_key_2 == NULL)) {
                tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
            }

            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 135;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_tuple_element_12 = mod_consts[23];
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[22]);

            if (unlikely(tmp_tuple_element_12 == NULL)) {
                tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
            }

            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 135;
                generator_heap->type_description_1 = "cooooooooo";
                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_12);
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 135;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[79]);

            if (unlikely(tmp_dict_key_2 == NULL)) {
                tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
            }

            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 136;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
            tmp_tuple_element_13 = mod_consts[26];
            tmp_dict_value_2 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_dict_value_2, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 136;
                generator_heap->type_description_1 = "cooooooooo";
                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM0(tmp_dict_value_2, 1, tmp_tuple_element_13);
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_dict_value_2);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            generator_heap->tmp_res = PyDict_SetItem(tmp_assign_source_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (generator_heap->tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


                generator_heap->exception_lineno = 136;
                generator_heap->type_description_1 = "cooooooooo";
                goto dict_build_exception_2;
            }
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        assert(generator_heap->var_properties == NULL);
        generator_heap->var_properties = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_9;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = Nuitka_Cell_GET(generator->m_closure[0]);
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[7]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 140;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 140;
            generator_heap->type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->var_it == NULL);
        generator_heap->var_it = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(generator_heap->var_it);
        tmp_iter_arg_1 = generator_heap->var_it;
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 142;
            generator_heap->type_description_1 = "cooooooooo";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cooooooooo";
                generator_heap->exception_lineno = 142;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = generator_heap->tmp_for_loop_1__iter_value;
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 142;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__source_iter;
            generator_heap->tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cooooooooo";
            generator_heap->exception_lineno = 142;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_1;
            generator_heap->tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = generator_heap->tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                generator_heap->exception_type = PyExc_StopIteration;
                Py_INCREF(generator_heap->exception_type);
                generator_heap->exception_value = NULL;
                generator_heap->exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            }


            generator_heap->type_description_1 = "cooooooooo";
            generator_heap->exception_lineno = 142;
            goto try_except_handler_4;
        }
        {
            PyObject *old = generator_heap->tmp_tuple_unpack_1__element_2;
            generator_heap->tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = generator_heap->tmp_tuple_unpack_1__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_1); assert(HAS_ITERNEXT(tmp_iterator_name_1));

        generator_heap->tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_1)->tp_iternext)(tmp_iterator_name_1);

        if (likely(generator_heap->tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);

                    generator_heap->type_description_1 = "cooooooooo";
                    generator_heap->exception_lineno = 142;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(generator_heap->tmp_iterator_attempt);

            generator_heap->exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            generator_heap->exception_value = mod_consts[82];
            Py_INCREF(generator_heap->exception_value);
            generator_heap->exception_tb = NULL;

            generator_heap->type_description_1 = "cooooooooo";
            generator_heap->exception_lineno = 142;
            goto try_except_handler_4;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_4:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_1;
    generator_heap->exception_value = generator_heap->exception_keeper_value_1;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_1;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_1;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_3:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__source_iter);
    Py_DECREF(generator_heap->tmp_tuple_unpack_1__source_iter);
    generator_heap->tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_1);
        tmp_assign_source_9 = generator_heap->tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = generator_heap->var__;
            generator_heap->var__ = tmp_assign_source_9;
            Py_INCREF(generator_heap->var__);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_1);
    generator_heap->tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(generator_heap->tmp_tuple_unpack_1__element_2);
        tmp_assign_source_10 = generator_heap->tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = generator_heap->var_element;
            generator_heap->var_element = tmp_assign_source_10;
            Py_INCREF(generator_heap->var_element);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(generator_heap->tmp_tuple_unpack_1__element_2);
    generator_heap->tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(generator_heap->var_element);
        tmp_expression_value_10 = generator_heap->var_element;
        tmp_assign_source_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[83]);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 143;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_tag_name;
            generator_heap->var_tag_name = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        CHECK_OBJECT(generator_heap->var_tag_name);
        tmp_key_value_1 = generator_heap->var_tag_name;
        CHECK_OBJECT(generator_heap->var_dispatcher);
        tmp_dict_arg_value_1 = generator_heap->var_dispatcher;
        generator_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 144;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(generator_heap->var_dispatcher);
        tmp_dict_arg_value_2 = generator_heap->var_dispatcher;
        CHECK_OBJECT(generator_heap->var_tag_name);
        tmp_key_value_2 = generator_heap->var_tag_name;
        tmp_called_value_2 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 145;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_element);
        tmp_args_element_value_2 = generator_heap->var_element;
        generator->m_frame->m_frame.f_lineno = 145;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 145;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(generator_heap->var_element);
        tmp_expression_value_11 = generator_heap->var_element;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[84]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 146;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 146;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 146;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_key_value_3;
        PyObject *tmp_dict_arg_value_3;
        CHECK_OBJECT(generator_heap->var_tag_name);
        tmp_key_value_3 = generator_heap->var_tag_name;
        CHECK_OBJECT(generator_heap->var_properties);
        tmp_dict_arg_value_3 = generator_heap->var_properties;
        generator_heap->tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_3, tmp_key_value_3);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 147;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = (generator_heap->tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dict_arg_value_4;
        PyObject *tmp_key_value_4;
        CHECK_OBJECT(generator_heap->var_properties);
        tmp_dict_arg_value_4 = generator_heap->var_properties;
        CHECK_OBJECT(generator_heap->var_tag_name);
        tmp_key_value_4 = generator_heap->var_tag_name;
        tmp_assign_source_12 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_4, tmp_key_value_4);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 148;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_prop;
            generator_heap->var_prop = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(generator_heap->var_prop);
        tmp_expression_value_12 = generator_heap->var_prop;
        tmp_subscript_value_1 = mod_consts[85];
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_1, 1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 149;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_element);
        tmp_args_element_value_3 = generator_heap->var_element;
        generator->m_frame->m_frame.f_lineno = 149;
        tmp_assign_source_13 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[86], tmp_args_element_value_3);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 149;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_obj;
            generator_heap->var_obj = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 150;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }

        tmp_setattr_target_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        CHECK_OBJECT(generator_heap->var_prop);
        tmp_expression_value_13 = generator_heap->var_prop;
        tmp_subscript_value_2 = mod_consts[12];
        tmp_setattr_attr_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_13, tmp_subscript_value_2, 0);
        if (tmp_setattr_attr_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 150;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_obj);
        tmp_setattr_value_1 = generator_heap->var_obj;
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        Py_DECREF(tmp_setattr_attr_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 150;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(generator_heap->var_element);
        tmp_expression_value_14 = generator_heap->var_element;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[84]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 151;
        tmp_call_result_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 151;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(generator_heap->var_tag_name);
        tmp_cmp_expr_left_1 = generator_heap->var_tag_name;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 152;
            generator_heap->type_description_1 = "cooooooooo";
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[32]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 153;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }

        tmp_called_instance_2 = Nuitka_Cell_GET(generator->m_closure[0]);
        CHECK_OBJECT(generator_heap->var_element);
        tmp_args_element_value_4 = generator_heap->var_element;
        generator->m_frame->m_frame.f_lineno = 153;
        tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[88], tmp_args_element_value_4);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 153;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = generator_heap->var_row;
            generator_heap->var_row = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(generator_heap->var_element);
        tmp_expression_value_15 = generator_heap->var_element;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[84]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 154;
        tmp_call_result_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 154;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_expression_value_16;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_row);
        tmp_expression_value_16 = generator_heap->var_row;
        Py_INCREF(tmp_expression_value_16);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_16;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 155;
            generator_heap->type_description_1 = "cooooooooo";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_3:;
    branch_end_2:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 142;
        generator_heap->type_description_1 = "cooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_3 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_3 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_3 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_3 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_3;
    generator_heap->exception_value = generator_heap->exception_keeper_value_3;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_3;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;

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
            generator->m_closure[0],
            generator_heap->var_dispatcher,
            generator_heap->var_properties,
            generator_heap->var_it,
            generator_heap->var__,
            generator_heap->var_element,
            generator_heap->var_tag_name,
            generator_heap->var_prop,
            generator_heap->var_obj,
            generator_heap->var_row
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
    goto try_end_4;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_4 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_4 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_4 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_4 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    Py_XDECREF(generator_heap->var_dispatcher);
    generator_heap->var_dispatcher = NULL;
    Py_XDECREF(generator_heap->var_properties);
    generator_heap->var_properties = NULL;
    Py_XDECREF(generator_heap->var_it);
    generator_heap->var_it = NULL;
    Py_XDECREF(generator_heap->var__);
    generator_heap->var__ = NULL;
    Py_XDECREF(generator_heap->var_element);
    generator_heap->var_element = NULL;
    Py_XDECREF(generator_heap->var_tag_name);
    generator_heap->var_tag_name = NULL;
    Py_XDECREF(generator_heap->var_prop);
    generator_heap->var_prop = NULL;
    Py_XDECREF(generator_heap->var_obj);
    generator_heap->var_obj = NULL;
    Py_XDECREF(generator_heap->var_row);
    generator_heap->var_row = NULL;
    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_4;
    generator_heap->exception_value = generator_heap->exception_keeper_value_4;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_4;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_4;

    goto function_exception_exit;
    // End of try:
    try_end_4:;
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    CHECK_OBJECT(generator_heap->var_dispatcher);
    Py_DECREF(generator_heap->var_dispatcher);
    generator_heap->var_dispatcher = NULL;
    CHECK_OBJECT(generator_heap->var_properties);
    Py_DECREF(generator_heap->var_properties);
    generator_heap->var_properties = NULL;
    CHECK_OBJECT(generator_heap->var_it);
    Py_DECREF(generator_heap->var_it);
    generator_heap->var_it = NULL;
    Py_XDECREF(generator_heap->var__);
    generator_heap->var__ = NULL;
    Py_XDECREF(generator_heap->var_element);
    generator_heap->var_element = NULL;
    Py_XDECREF(generator_heap->var_tag_name);
    generator_heap->var_tag_name = NULL;
    Py_XDECREF(generator_heap->var_prop);
    generator_heap->var_prop = NULL;
    Py_XDECREF(generator_heap->var_obj);
    generator_heap->var_obj = NULL;
    Py_XDECREF(generator_heap->var_row);
    generator_heap->var_row = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_openpyxl$worksheet$_reader$$$function__3_parse$$$genobj__1_parse(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        openpyxl$worksheet$_reader$$$function__3_parse$$$genobj__1_parse_context,
        module_openpyxl$worksheet$_reader,
        mod_consts[89],
#if PYTHON_VERSION >= 0x350
        mod_consts[90],
#endif
        codeobj_3be607e62977958c2107e962499fab5c,
        closure,
        1,
        sizeof(struct openpyxl$worksheet$_reader$$$function__3_parse$$$genobj__1_parse_locals)
    );
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__4_parse_dimensions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_it = NULL;
    PyObject *var__event = NULL;
    PyObject *var_element = NULL;
    PyObject *var_dim = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_1e579ef3d7fc968c11970391a8aacc04;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_1e579ef3d7fc968c11970391a8aacc04 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1e579ef3d7fc968c11970391a8aacc04)) {
        Py_XDECREF(cache_frame_1e579ef3d7fc968c11970391a8aacc04);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1e579ef3d7fc968c11970391a8aacc04 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1e579ef3d7fc968c11970391a8aacc04 = MAKE_FUNCTION_FRAME(codeobj_1e579ef3d7fc968c11970391a8aacc04, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1e579ef3d7fc968c11970391a8aacc04->m_type_description == NULL);
    frame_1e579ef3d7fc968c11970391a8aacc04 = cache_frame_1e579ef3d7fc968c11970391a8aacc04;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1e579ef3d7fc968c11970391a8aacc04);
    assert(Py_REFCNT(frame_1e579ef3d7fc968c11970391a8aacc04) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_1e579ef3d7fc968c11970391a8aacc04->m_frame.f_lineno = 162;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_it == NULL);
        var_it = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_it);
        tmp_iter_arg_1 = var_it;
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 164;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 164;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_6 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_6 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooo";
            exception_lineno = 164;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                    type_description_1 = "ooooo";
                    exception_lineno = 164;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[82];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooo";
            exception_lineno = 164;
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
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var__event;
            var__event = tmp_assign_source_7;
            Py_INCREF(var__event);
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
            PyObject *old = var_element;
            var_element = tmp_assign_source_8;
            Py_INCREF(var_element);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_element);
        tmp_expression_value_2 = var_element;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[83]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 165;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_element);
        tmp_args_element_value_2 = var_element;
        frame_1e579ef3d7fc968c11970391a8aacc04->m_frame.f_lineno = 166;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[86], tmp_args_element_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_dim == NULL);
        var_dim = tmp_assign_source_9;
    }
    {
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_dim);
        tmp_expression_value_3 = var_dim;
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[93]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        goto try_return_handler_2;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_element);
        tmp_expression_value_4 = var_element;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[83]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[94]);

        if (unlikely(tmp_cmp_expr_right_2 == NULL)) {
            tmp_cmp_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[94]);
        }

        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    goto loop_end_1;
    branch_no_2:;
    branch_end_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_element);
        tmp_expression_value_5 = var_element;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[84]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_1e579ef3d7fc968c11970391a8aacc04->m_frame.f_lineno = 172;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 164;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
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
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1e579ef3d7fc968c11970391a8aacc04, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1e579ef3d7fc968c11970391a8aacc04->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1e579ef3d7fc968c11970391a8aacc04, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1e579ef3d7fc968c11970391a8aacc04,
        type_description_1,
        par_self,
        var_it,
        var__event,
        var_element,
        var_dim
    );


    // Release cached frame if used for exception.
    if (frame_1e579ef3d7fc968c11970391a8aacc04 == cache_frame_1e579ef3d7fc968c11970391a8aacc04) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1e579ef3d7fc968c11970391a8aacc04);
        cache_frame_1e579ef3d7fc968c11970391a8aacc04 = NULL;
    }

    assertFrameObject(frame_1e579ef3d7fc968c11970391a8aacc04);

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
    CHECK_OBJECT(var_it);
    Py_DECREF(var_it);
    var_it = NULL;
    Py_XDECREF(var__event);
    var__event = NULL;
    Py_XDECREF(var_element);
    var_element = NULL;
    Py_XDECREF(var_dim);
    var_dim = NULL;
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

    Py_XDECREF(var_it);
    var_it = NULL;
    Py_XDECREF(var__event);
    var__event = NULL;
    Py_XDECREF(var_element);
    var_element = NULL;
    Py_XDECREF(var_dim);
    var_dim = NULL;
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


static PyObject *impl_openpyxl$worksheet$_reader$$$function__5_parse_cell(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_element = python_pars[1];
    PyObject *var_data_type = NULL;
    PyObject *var_coordinate = NULL;
    PyObject *var_style_id = NULL;
    PyObject *var_value = NULL;
    PyObject *var_row = NULL;
    PyObject *var_column = NULL;
    PyObject *var_msg = NULL;
    PyObject *var_child = NULL;
    PyObject *var_richtext = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_051b2bdeb43ed5ae7712ce88c9cf0289;
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
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    int tmp_res;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    static struct Nuitka_FrameObject *cache_frame_051b2bdeb43ed5ae7712ce88c9cf0289 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_051b2bdeb43ed5ae7712ce88c9cf0289)) {
        Py_XDECREF(cache_frame_051b2bdeb43ed5ae7712ce88c9cf0289);

#if _DEBUG_REFCOUNTS
        if (cache_frame_051b2bdeb43ed5ae7712ce88c9cf0289 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_051b2bdeb43ed5ae7712ce88c9cf0289 = MAKE_FUNCTION_FRAME(codeobj_051b2bdeb43ed5ae7712ce88c9cf0289, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_type_description == NULL);
    frame_051b2bdeb43ed5ae7712ce88c9cf0289 = cache_frame_051b2bdeb43ed5ae7712ce88c9cf0289;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_051b2bdeb43ed5ae7712ce88c9cf0289);
    assert(Py_REFCNT(frame_051b2bdeb43ed5ae7712ce88c9cf0289) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_element);
        tmp_expression_value_1 = par_element;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[96]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = 176;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[97]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_data_type == NULL);
        var_data_type = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_element);
        tmp_expression_value_2 = par_element;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[96]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = 177;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[98]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_coordinate == NULL);
        var_coordinate = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[14]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_3;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[85];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_4;

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_1 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[14], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_element);
        tmp_expression_value_4 = par_element;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[96]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = 179;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_3, mod_consts[99]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_style_id == NULL);
        var_style_id = tmp_assign_source_5;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_style_id);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_style_id);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(var_style_id);
        tmp_int_arg_1 = var_style_id;
        tmp_assign_source_6 = PyNumber_Int(tmp_int_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_style_id;
            assert(old != NULL);
            var_style_id = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_data_type);
        tmp_cmp_expr_left_1 = var_data_type;
        tmp_cmp_expr_right_1 = mod_consts[100];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        assert(var_value == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_value = tmp_assign_source_7;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_8;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_element);
        tmp_expression_value_5 = par_element;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[101]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = Py_None;
        frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = 186;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_or_left_value_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 186;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        tmp_or_right_value_1 = Py_None;
        Py_INCREF(tmp_or_right_value_1);
        tmp_assign_source_8 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_8 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_value == NULL);
        var_value = tmp_assign_source_8;
    }
    branch_end_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_truth_name_2;
        CHECK_OBJECT(var_coordinate);
        tmp_truth_name_2 = CHECK_IF_TRUE(var_coordinate);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_coordinate);
        tmp_args_element_value_3 = var_coordinate;
        frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = 189;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
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


            type_description_1 = "ooooooooooo";
            exception_lineno = 189;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
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


            type_description_1 = "ooooooooooo";
            exception_lineno = 189;
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
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

                    type_description_1 = "ooooooooooo";
                    exception_lineno = 189;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[82];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooo";
            exception_lineno = 189;
            goto try_except_handler_4;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_1;
        assert(var_row == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_row = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_2;
        assert(var_column == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_column = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    goto branch_end_3;
    branch_no_3:;
    // Tried code:
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[13]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_5;
        }
        tmp_iter_arg_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyTuple_SET_ITEM(tmp_iter_arg_2, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_7 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[14]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;
                type_description_1 = "ooooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_iter_arg_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_iter_arg_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_14 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        assert(!(tmp_assign_source_14 == NULL));
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_15 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
        if (tmp_assign_source_15 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 191;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_16 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
        if (tmp_assign_source_16 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooo";
            exception_lineno = 191;
            goto try_except_handler_6;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_16;
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

                    type_description_1 = "ooooooooooo";
                    exception_lineno = 191;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[82];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooo";
            exception_lineno = 191;
            goto try_except_handler_6;
        }
    }
    goto try_end_4;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto try_except_handler_5;
    // End of try:
    try_end_4:;
    goto try_end_5;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_1;
        assert(var_row == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_row = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_2;
        assert(var_column == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_column = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    branch_end_3:;
    {
        bool tmp_condition_result_4;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[9]);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
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
        CHECK_OBJECT(par_element);
        tmp_expression_value_9 = par_element;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[104]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = 193;
        tmp_cmp_expr_left_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_6);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        tmp_condition_result_4 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_4 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = mod_consts[106];
        {
            PyObject *old = var_data_type;
            assert(old != NULL);
            var_data_type = tmp_assign_source_19;
            Py_INCREF(var_data_type);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_element);
        tmp_args_element_value_5 = par_element;
        frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = 195;
        tmp_assign_source_20 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[107], tmp_args_element_value_5);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_3 = var_value;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_data_type);
        tmp_cmp_expr_left_4 = var_data_type;
        tmp_cmp_expr_right_4 = mod_consts[108];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_value);
        tmp_args_element_value_6 = var_value;
        frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = 199;
        tmp_assign_source_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_21;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(var_style_id);
        tmp_cmp_expr_left_5 = var_style_id;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[17]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = mod_consts[110];
        {
            PyObject *old = var_data_type;
            assert(old != NULL);
            var_data_type = tmp_assign_source_22;
            Py_INCREF(var_data_type);
            Py_DECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_11;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_value);
        tmp_args_element_value_7 = var_value;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[6]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_7;
        }
        frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_23 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_23;
            Py_DECREF(old);
        }

    }
    goto try_end_6;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_6 == NULL) {
        exception_keeper_tb_6 = MAKE_TRACEBACK(frame_051b2bdeb43ed5ae7712ce88c9cf0289, exception_keeper_lineno_6);
    } else if (exception_keeper_lineno_6 != 0) {
        exception_keeper_tb_6 = ADD_TRACEBACK(exception_keeper_tb_6, frame_051b2bdeb43ed5ae7712ce88c9cf0289, exception_keeper_lineno_6);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_6, &exception_keeper_value_6, &exception_keeper_tb_6);
    // Tried code:
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        tmp_cmp_expr_left_6 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_6 = PyExc_ValueError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[112];
        CHECK_OBJECT(var_coordinate);
        tmp_kw_call_arg_value_1_1 = var_coordinate;
        CHECK_OBJECT(var_value);
        tmp_kw_call_arg_value_2_1 = var_value;
        frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = 205;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_assign_source_24 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_8;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_24;
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_8;
        }
        CHECK_OBJECT(var_msg);
        tmp_args_element_value_9 = var_msg;
        frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = 206;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooo";
            goto try_except_handler_8;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_25;
        tmp_assign_source_25 = mod_consts[2];
        {
            PyObject *old = var_data_type;
            assert(old != NULL);
            var_data_type = tmp_assign_source_25;
            Py_INCREF(var_data_type);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = mod_consts[114];
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_26;
            Py_INCREF(var_value);
            Py_DECREF(old);
        }

    }
    goto branch_end_8;
    branch_no_8:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 202;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame) frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooooo";
    goto try_except_handler_8;
    branch_end_8:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_6;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_6:;
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        CHECK_OBJECT(var_data_type);
        tmp_cmp_expr_left_7 = var_data_type;
        tmp_cmp_expr_right_7 = mod_consts[115];
        tmp_condition_result_9 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_int_arg_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[8]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_value);
        tmp_int_arg_2 = var_value;
        tmp_subscript_value_1 = PyNumber_Int(tmp_int_arg_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_12);

            exception_lineno = 210;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_12);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_27;
            Py_DECREF(old);
        }

    }
    goto branch_end_9;
    branch_no_9:;
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        CHECK_OBJECT(var_data_type);
        tmp_cmp_expr_left_8 = var_data_type;
        tmp_cmp_expr_right_8 = mod_consts[116];
        tmp_condition_result_10 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        if (tmp_condition_result_10 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_28;
        PyObject *tmp_value_value_1;
        PyObject *tmp_int_arg_3;
        CHECK_OBJECT(var_value);
        tmp_int_arg_3 = var_value;
        tmp_value_value_1 = PyNumber_Int(tmp_int_arg_3);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_28 = (tmp_res != 0) ? Py_True : Py_False;
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_28;
            Py_INCREF(var_value);
            Py_DECREF(old);
        }

    }
    goto branch_end_10;
    branch_no_10:;
    {
        nuitka_bool tmp_condition_result_11;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(var_data_type);
        tmp_cmp_expr_left_9 = var_data_type;
        tmp_cmp_expr_right_9 = mod_consts[117];
        tmp_condition_result_11 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_condition_result_11 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = mod_consts[115];
        {
            PyObject *old = var_data_type;
            assert(old != NULL);
            var_data_type = tmp_assign_source_29;
            Py_INCREF(var_data_type);
            Py_DECREF(old);
        }

    }
    goto branch_end_11;
    branch_no_11:;
    {
        nuitka_bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        CHECK_OBJECT(var_data_type);
        tmp_cmp_expr_left_10 = var_data_type;
        tmp_cmp_expr_right_10 = mod_consts[110];
        tmp_condition_result_12 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[118]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[118]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_value);
        tmp_args_element_value_10 = var_value;
        frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = 216;
        tmp_assign_source_30 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_30;
            Py_DECREF(old);
        }

    }
    branch_no_12:;
    branch_end_11:;
    branch_end_10:;
    branch_end_9:;
    branch_end_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(var_data_type);
        tmp_cmp_expr_left_11 = var_data_type;
        tmp_cmp_expr_right_11 = mod_consts[100];
        tmp_condition_result_13 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_condition_result_13 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;
            type_description_1 = "ooooooooooo";
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
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(par_element);
        tmp_expression_value_14 = par_element;
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[104]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[119]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[119]);
        }

        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 219;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = 219;
        tmp_assign_source_31 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_11);
        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_child == NULL);
        var_child = tmp_assign_source_31;
    }
    {
        bool tmp_condition_result_14;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        CHECK_OBJECT(var_child);
        tmp_cmp_expr_left_12 = var_child;
        tmp_cmp_expr_right_12 = Py_None;
        tmp_condition_result_14 = (tmp_cmp_expr_left_12 != tmp_cmp_expr_right_12) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_assign_source_32;
        tmp_assign_source_32 = mod_consts[115];
        {
            PyObject *old = var_data_type;
            assert(old != NULL);
            var_data_type = tmp_assign_source_32;
            Py_INCREF(var_data_type);
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_12;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[120]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[120]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_child);
        tmp_args_element_value_12 = var_child;
        frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame.f_lineno = 222;
        tmp_assign_source_33 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[86], tmp_args_element_value_12);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_richtext == NULL);
        var_richtext = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_richtext);
        tmp_expression_value_15 = var_richtext;
        tmp_assign_source_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[121]);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;
            type_description_1 = "ooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_34;
            Py_DECREF(old);
        }

    }
    branch_no_14:;
    branch_no_13:;
    branch_end_5:;
    branch_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_051b2bdeb43ed5ae7712ce88c9cf0289, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_051b2bdeb43ed5ae7712ce88c9cf0289->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_051b2bdeb43ed5ae7712ce88c9cf0289, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_051b2bdeb43ed5ae7712ce88c9cf0289,
        type_description_1,
        par_self,
        par_element,
        var_data_type,
        var_coordinate,
        var_style_id,
        var_value,
        var_row,
        var_column,
        var_msg,
        var_child,
        var_richtext
    );


    // Release cached frame if used for exception.
    if (frame_051b2bdeb43ed5ae7712ce88c9cf0289 == cache_frame_051b2bdeb43ed5ae7712ce88c9cf0289) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_051b2bdeb43ed5ae7712ce88c9cf0289);
        cache_frame_051b2bdeb43ed5ae7712ce88c9cf0289 = NULL;
    }

    assertFrameObject(frame_051b2bdeb43ed5ae7712ce88c9cf0289);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[122];
        CHECK_OBJECT(var_row);
        tmp_dict_value_1 = var_row;
        tmp_return_value = _PyDict_NewPresized( 5 );
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[123];
        CHECK_OBJECT(var_column);
        tmp_dict_value_1 = var_column;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[124];
        CHECK_OBJECT(var_value);
        tmp_dict_value_1 = var_value;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[125];
        CHECK_OBJECT(var_data_type);
        tmp_dict_value_1 = var_data_type;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[126];
        CHECK_OBJECT(var_style_id);
        tmp_dict_value_1 = var_style_id;
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_data_type);
    Py_DECREF(var_data_type);
    var_data_type = NULL;
    CHECK_OBJECT(var_coordinate);
    Py_DECREF(var_coordinate);
    var_coordinate = NULL;
    CHECK_OBJECT(var_style_id);
    Py_DECREF(var_style_id);
    var_style_id = NULL;
    CHECK_OBJECT(var_value);
    Py_DECREF(var_value);
    var_value = NULL;
    CHECK_OBJECT(var_row);
    Py_DECREF(var_row);
    var_row = NULL;
    CHECK_OBJECT(var_column);
    Py_DECREF(var_column);
    var_column = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    Py_XDECREF(var_child);
    var_child = NULL;
    Py_XDECREF(var_richtext);
    var_richtext = NULL;
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

    Py_XDECREF(var_data_type);
    var_data_type = NULL;
    Py_XDECREF(var_coordinate);
    var_coordinate = NULL;
    Py_XDECREF(var_style_id);
    var_style_id = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_column);
    var_column = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
    Py_XDECREF(var_child);
    var_child = NULL;
    Py_XDECREF(var_richtext);
    var_richtext = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__6_parse_formula(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_element = python_pars[1];
    PyObject *var_formula = NULL;
    PyObject *var_formula_type = NULL;
    PyObject *var_coordinate = NULL;
    PyObject *var_value = NULL;
    PyObject *var_idx = NULL;
    PyObject *var_trans = NULL;
    struct Nuitka_FrameObject *frame_452c2a6db88e56a02518c09a15b81fee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_452c2a6db88e56a02518c09a15b81fee = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_452c2a6db88e56a02518c09a15b81fee)) {
        Py_XDECREF(cache_frame_452c2a6db88e56a02518c09a15b81fee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_452c2a6db88e56a02518c09a15b81fee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_452c2a6db88e56a02518c09a15b81fee = MAKE_FUNCTION_FRAME(codeobj_452c2a6db88e56a02518c09a15b81fee, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_452c2a6db88e56a02518c09a15b81fee->m_type_description == NULL);
    frame_452c2a6db88e56a02518c09a15b81fee = cache_frame_452c2a6db88e56a02518c09a15b81fee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_452c2a6db88e56a02518c09a15b81fee);
    assert(Py_REFCNT(frame_452c2a6db88e56a02518c09a15b81fee) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_element);
        tmp_expression_value_1 = par_element;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[104]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 232;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_452c2a6db88e56a02518c09a15b81fee->m_frame.f_lineno = 232;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_formula == NULL);
        var_formula = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_formula);
        tmp_expression_value_2 = var_formula;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[96]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_452c2a6db88e56a02518c09a15b81fee->m_frame.f_lineno = 233;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[127]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_formula_type == NULL);
        var_formula_type = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_element);
        tmp_expression_value_3 = par_element;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[96]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_452c2a6db88e56a02518c09a15b81fee->m_frame.f_lineno = 234;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[98]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_coordinate == NULL);
        var_coordinate = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = mod_consts[128];
        assert(var_value == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_value = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_formula);
        tmp_expression_value_4 = var_formula;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[129]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_value);
        tmp_iadd_expr_left_1 = var_value;
        CHECK_OBJECT(var_formula);
        tmp_expression_value_5 = var_formula;
        tmp_iadd_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[129]);
        if (tmp_iadd_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = INPLACE_OPERATION_ADD_UNICODE_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        Py_DECREF(tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_iadd_expr_left_1;
        var_value = tmp_assign_source_5;

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_formula_type);
        tmp_cmp_expr_left_2 = var_formula_type;
        tmp_cmp_expr_right_2 = mod_consts[130];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_formula);
        tmp_expression_value_6 = var_formula;
        tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[131]);
        if (tmp_dict_seq_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[11]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 240;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_coordinate);
        tmp_ass_subscript_1 = var_coordinate;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_formula_type);
        tmp_cmp_expr_left_3 = var_formula_type;
        tmp_cmp_expr_right_3 = mod_consts[132];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_formula);
        tmp_expression_value_8 = var_formula;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[96]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_452c2a6db88e56a02518c09a15b81fee->m_frame.f_lineno = 243;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[133]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_idx == NULL);
        var_idx = tmp_assign_source_6;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_idx);
        tmp_cmp_expr_left_4 = var_idx;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[10]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_4, tmp_cmp_expr_left_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[10]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_idx);
        tmp_subscript_value_1 = var_idx;
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_trans == NULL);
        var_trans = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_trans);
        tmp_called_instance_1 = var_trans;
        CHECK_OBJECT(var_coordinate);
        tmp_args_element_value_2 = var_coordinate;
        frame_452c2a6db88e56a02518c09a15b81fee->m_frame.f_lineno = 246;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[134], tmp_args_element_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_value;
            assert(old != NULL);
            var_value = tmp_assign_source_8;
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(var_value);
        tmp_cmp_expr_left_5 = var_value;
        tmp_cmp_expr_right_5 = mod_consts[128];
        tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_ass_subscript_2;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_value);
        tmp_args_element_value_3 = var_value;
        CHECK_OBJECT(var_coordinate);
        tmp_args_element_value_4 = var_coordinate;
        frame_452c2a6db88e56a02518c09a15b81fee->m_frame.f_lineno = 248;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_12 = par_self;
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[10]);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 248;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_idx);
        tmp_ass_subscript_2 = var_idx;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_5:;
    branch_end_4:;
    branch_no_3:;
    branch_end_2:;
    if (var_value == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[124]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 250;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_value;
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
        exception_tb = MAKE_TRACEBACK(frame_452c2a6db88e56a02518c09a15b81fee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_452c2a6db88e56a02518c09a15b81fee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_452c2a6db88e56a02518c09a15b81fee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_452c2a6db88e56a02518c09a15b81fee,
        type_description_1,
        par_self,
        par_element,
        var_formula,
        var_formula_type,
        var_coordinate,
        var_value,
        var_idx,
        var_trans
    );


    // Release cached frame if used for exception.
    if (frame_452c2a6db88e56a02518c09a15b81fee == cache_frame_452c2a6db88e56a02518c09a15b81fee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_452c2a6db88e56a02518c09a15b81fee);
        cache_frame_452c2a6db88e56a02518c09a15b81fee = NULL;
    }

    assertFrameObject(frame_452c2a6db88e56a02518c09a15b81fee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_formula);
    Py_DECREF(var_formula);
    var_formula = NULL;
    CHECK_OBJECT(var_formula_type);
    Py_DECREF(var_formula_type);
    var_formula_type = NULL;
    Py_XDECREF(var_coordinate);
    var_coordinate = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_trans);
    var_trans = NULL;
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

    Py_XDECREF(var_formula);
    var_formula = NULL;
    Py_XDECREF(var_formula_type);
    var_formula_type = NULL;
    Py_XDECREF(var_coordinate);
    var_coordinate = NULL;
    Py_XDECREF(var_value);
    var_value = NULL;
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_trans);
    var_trans = NULL;
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
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__7_parse_column_dimensions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_col = python_pars[1];
    PyObject *var_attrs = NULL;
    PyObject *var_column = NULL;
    struct Nuitka_FrameObject *frame_f0249c4c168a9ff14ecd7b487080c732;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_f0249c4c168a9ff14ecd7b487080c732 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f0249c4c168a9ff14ecd7b487080c732)) {
        Py_XDECREF(cache_frame_f0249c4c168a9ff14ecd7b487080c732);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0249c4c168a9ff14ecd7b487080c732 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0249c4c168a9ff14ecd7b487080c732 = MAKE_FUNCTION_FRAME(codeobj_f0249c4c168a9ff14ecd7b487080c732, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0249c4c168a9ff14ecd7b487080c732->m_type_description == NULL);
    frame_f0249c4c168a9ff14ecd7b487080c732 = cache_frame_f0249c4c168a9ff14ecd7b487080c732;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f0249c4c168a9ff14ecd7b487080c732);
    assert(Py_REFCNT(frame_f0249c4c168a9ff14ecd7b487080c732) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_col);
        tmp_expression_value_1 = par_col;
        tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[131]);
        if (tmp_dict_seq_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_attrs == NULL);
        var_attrs = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_attrs);
        tmp_dict_arg_value_1 = var_attrs;
        tmp_key_value_1 = mod_consts[138];
        tmp_int_arg_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_1, tmp_key_value_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_f0249c4c168a9ff14ecd7b487080c732->m_frame.f_lineno = 255;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_column == NULL);
        var_column = tmp_assign_source_2;
    }
    CHECK_OBJECT(var_column);
    tmp_dictset_value = var_column;
    CHECK_OBJECT(var_attrs);
    tmp_dictset_dict = var_attrs;
    tmp_dictset_key = mod_consts[139];
    assert(PyDict_CheckExact(tmp_dictset_dict));
    tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

    assert(!(tmp_res != 0));
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_attrs);
        tmp_ass_subvalue_1 = var_attrs;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_column);
        tmp_ass_subscript_1 = var_column;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f0249c4c168a9ff14ecd7b487080c732, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0249c4c168a9ff14ecd7b487080c732->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0249c4c168a9ff14ecd7b487080c732, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0249c4c168a9ff14ecd7b487080c732,
        type_description_1,
        par_self,
        par_col,
        var_attrs,
        var_column
    );


    // Release cached frame if used for exception.
    if (frame_f0249c4c168a9ff14ecd7b487080c732 == cache_frame_f0249c4c168a9ff14ecd7b487080c732) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0249c4c168a9ff14ecd7b487080c732);
        cache_frame_f0249c4c168a9ff14ecd7b487080c732 = NULL;
    }

    assertFrameObject(frame_f0249c4c168a9ff14ecd7b487080c732);

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
    CHECK_OBJECT(var_attrs);
    Py_DECREF(var_attrs);
    var_attrs = NULL;
    CHECK_OBJECT(var_column);
    Py_DECREF(var_column);
    var_column = NULL;
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

    Py_XDECREF(var_attrs);
    var_attrs = NULL;
    Py_XDECREF(var_column);
    var_column = NULL;
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
    CHECK_OBJECT(par_col);
    Py_DECREF(par_col);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_col);
    Py_DECREF(par_col);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__8_parse_row(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_row = python_pars[1];
    PyObject *var_attrs = NULL;
    PyObject *var_keys = NULL;
    PyObject *var_cells = NULL;
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_1_var_el = NULL;
    PyObject *tmp_inplace_assign_1__value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_setcontraction_1__$0 = NULL;
    PyObject *tmp_setcontraction_1__contraction = NULL;
    PyObject *tmp_setcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_50f6e83091610217cda3dac496b94fe8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_FrameObject *frame_64eb5b7631c25c1f6c882da2ec342228_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_64eb5b7631c25c1f6c882da2ec342228_2 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_FrameObject *frame_c89a5f37092db349a052f8afee4ef13b_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_c89a5f37092db349a052f8afee4ef13b_3 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_50f6e83091610217cda3dac496b94fe8 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_50f6e83091610217cda3dac496b94fe8)) {
        Py_XDECREF(cache_frame_50f6e83091610217cda3dac496b94fe8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50f6e83091610217cda3dac496b94fe8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50f6e83091610217cda3dac496b94fe8 = MAKE_FUNCTION_FRAME(codeobj_50f6e83091610217cda3dac496b94fe8, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50f6e83091610217cda3dac496b94fe8->m_type_description == NULL);
    frame_50f6e83091610217cda3dac496b94fe8 = cache_frame_50f6e83091610217cda3dac496b94fe8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_50f6e83091610217cda3dac496b94fe8);
    assert(Py_REFCNT(frame_50f6e83091610217cda3dac496b94fe8) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dict_seq_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_row);
        tmp_expression_value_1 = par_row;
        tmp_dict_seq_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[131]);
        if (tmp_dict_seq_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = TO_DICT(tmp_dict_seq_1, NULL);
        Py_DECREF(tmp_dict_seq_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_attrs == NULL);
        var_attrs = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_dict_arg_value_1;
        tmp_key_value_1 = mod_consts[140];
        CHECK_OBJECT(var_attrs);
        tmp_dict_arg_value_1 = var_attrs;
        tmp_res = DICT_HAS_ITEM(tmp_dict_arg_value_1, tmp_key_value_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_dict_arg_value_2;
        PyObject *tmp_key_value_2;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_attrs);
        tmp_dict_arg_value_2 = var_attrs;
        tmp_key_value_2 = mod_consts[140];
        tmp_int_arg_1 = DICT_GET_ITEM_WITH_ERROR(tmp_dict_arg_value_2, tmp_key_value_2);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_1 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[13], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[13]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_inplace_assign_1__value == NULL);
        tmp_inplace_assign_1__value = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_iadd_expr_left_1 = tmp_inplace_assign_1__value;
        tmp_iadd_expr_right_1 = mod_consts[85];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_1;
        tmp_inplace_assign_1__value = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(tmp_inplace_assign_1__value);
        tmp_assattr_value_2 = tmp_inplace_assign_1__value;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[13], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooo";
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
    branch_end_1:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = mod_consts[12];
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 267;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[14], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(var_attrs);
            tmp_iter_arg_1 = var_attrs;
            tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_1 = "ooooo";
                goto try_except_handler_3;
            }
            assert(tmp_setcontraction_1__$0 == NULL);
            tmp_setcontraction_1__$0 = tmp_assign_source_5;
        }
        {
            PyObject *tmp_assign_source_6;
            tmp_assign_source_6 = PySet_New(NULL);
            assert(tmp_setcontraction_1__contraction == NULL);
            tmp_setcontraction_1__contraction = tmp_assign_source_6;
        }
        if (isFrameUnusable(cache_frame_64eb5b7631c25c1f6c882da2ec342228_2)) {
            Py_XDECREF(cache_frame_64eb5b7631c25c1f6c882da2ec342228_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_64eb5b7631c25c1f6c882da2ec342228_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_64eb5b7631c25c1f6c882da2ec342228_2 = MAKE_FUNCTION_FRAME(codeobj_64eb5b7631c25c1f6c882da2ec342228, module_openpyxl$worksheet$_reader, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_64eb5b7631c25c1f6c882da2ec342228_2->m_type_description == NULL);
        frame_64eb5b7631c25c1f6c882da2ec342228_2 = cache_frame_64eb5b7631c25c1f6c882da2ec342228_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_64eb5b7631c25c1f6c882da2ec342228_2);
        assert(Py_REFCNT(frame_64eb5b7631c25c1f6c882da2ec342228_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_setcontraction_1__$0);
            tmp_next_source_1 = tmp_setcontraction_1__$0;
            tmp_assign_source_7 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_7 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 269;
                    goto try_except_handler_4;
                }
            }

            {
                PyObject *old = tmp_setcontraction_1__iter_value_0;
                tmp_setcontraction_1__iter_value_0 = tmp_assign_source_7;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_setcontraction_1__iter_value_0);
            tmp_assign_source_8 = tmp_setcontraction_1__iter_value_0;
            {
                PyObject *old = outline_0_var_k;
                outline_0_var_k = tmp_assign_source_8;
                Py_INCREF(outline_0_var_k);
                Py_XDECREF(old);
            }

        }
        {
            bool tmp_condition_result_2;
            PyObject *tmp_operand_value_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(outline_0_var_k);
            tmp_expression_value_3 = outline_0_var_k;
            tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[141]);
            if (tmp_called_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            frame_64eb5b7631c25c1f6c882da2ec342228_2->m_frame.f_lineno = 269;
            tmp_operand_value_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[142]);

            Py_DECREF(tmp_called_value_1);
            if (tmp_operand_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
            tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
            Py_DECREF(tmp_operand_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_2 = "o";
                goto try_except_handler_4;
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
            PyObject *tmp_add_set_1;
            PyObject *tmp_add_value_1;
            CHECK_OBJECT(tmp_setcontraction_1__contraction);
            tmp_add_set_1 = tmp_setcontraction_1__contraction;
            CHECK_OBJECT(outline_0_var_k);
            tmp_add_value_1 = outline_0_var_k;
            assert(PySet_Check(tmp_add_set_1));
            tmp_res = PySet_Add(tmp_add_set_1, tmp_add_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 269;
                type_description_2 = "o";
                goto try_except_handler_4;
            }
        }
        branch_no_2:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_2 = "o";
            goto try_except_handler_4;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_setcontraction_1__contraction);
        tmp_assign_source_4 = tmp_setcontraction_1__contraction;
        Py_INCREF(tmp_assign_source_4);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_setcontraction_1__$0);
        Py_DECREF(tmp_setcontraction_1__$0);
        tmp_setcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_setcontraction_1__contraction);
        Py_DECREF(tmp_setcontraction_1__contraction);
        tmp_setcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_setcontraction_1__iter_value_0);
        tmp_setcontraction_1__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_setcontraction_1__$0);
        Py_DECREF(tmp_setcontraction_1__$0);
        tmp_setcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_setcontraction_1__contraction);
        Py_DECREF(tmp_setcontraction_1__contraction);
        tmp_setcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_setcontraction_1__iter_value_0);
        tmp_setcontraction_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

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
            exception_tb = MAKE_TRACEBACK(frame_64eb5b7631c25c1f6c882da2ec342228_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_64eb5b7631c25c1f6c882da2ec342228_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_64eb5b7631c25c1f6c882da2ec342228_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_64eb5b7631c25c1f6c882da2ec342228_2,
            type_description_2,
            outline_0_var_k
        );


        // Release cached frame if used for exception.
        if (frame_64eb5b7631c25c1f6c882da2ec342228_2 == cache_frame_64eb5b7631c25c1f6c882da2ec342228_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_64eb5b7631c25c1f6c882da2ec342228_2);
            cache_frame_64eb5b7631c25c1f6c882da2ec342228_2 = NULL;
        }

        assertFrameObject(frame_64eb5b7631c25c1f6c882da2ec342228_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooo";
        goto try_except_handler_3;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_k);
        outline_0_var_k = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 269;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_keys == NULL);
        var_keys = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_tmp_condition_result_3_object_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_keys);
        tmp_sub_expr_left_1 = var_keys;
        tmp_sub_expr_right_1 = PySet_New(mod_consts[143]);
        tmp_tmp_condition_result_3_object_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_tmp_condition_result_3_object_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_tmp_condition_result_3_object_1);
        assert(!(tmp_truth_name_1 == -1));
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_tmp_condition_result_3_object_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_attrs);
        tmp_ass_subvalue_1 = var_attrs;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_4 = par_self;
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[18]);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_5 = par_self;
        tmp_unicode_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[13]);
        if (tmp_unicode_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_9;
        // Tried code:
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(par_row);
            tmp_iter_arg_2 = par_row;
            tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_1 = "ooooo";
                goto try_except_handler_5;
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
        if (isFrameUnusable(cache_frame_c89a5f37092db349a052f8afee4ef13b_3)) {
            Py_XDECREF(cache_frame_c89a5f37092db349a052f8afee4ef13b_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c89a5f37092db349a052f8afee4ef13b_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c89a5f37092db349a052f8afee4ef13b_3 = MAKE_FUNCTION_FRAME(codeobj_c89a5f37092db349a052f8afee4ef13b, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_c89a5f37092db349a052f8afee4ef13b_3->m_type_description == NULL);
        frame_c89a5f37092db349a052f8afee4ef13b_3 = cache_frame_c89a5f37092db349a052f8afee4ef13b_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c89a5f37092db349a052f8afee4ef13b_3);
        assert(Py_REFCNT(frame_c89a5f37092db349a052f8afee4ef13b_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_12;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_12 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_12 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 274;
                    goto try_except_handler_6;
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
                PyObject *old = outline_1_var_el;
                outline_1_var_el = tmp_assign_source_13;
                Py_INCREF(outline_1_var_el);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_args_element_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            if (par_self == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[32]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 274;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }

            tmp_called_instance_1 = par_self;
            CHECK_OBJECT(outline_1_var_el);
            tmp_args_element_value_1 = outline_1_var_el;
            frame_c89a5f37092db349a052f8afee4ef13b_3->m_frame.f_lineno = 274;
            tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[144], tmp_args_element_value_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 274;
                type_description_2 = "oo";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;
            type_description_2 = "oo";
            goto try_except_handler_6;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_9 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_9);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
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
            exception_tb = MAKE_TRACEBACK(frame_c89a5f37092db349a052f8afee4ef13b_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c89a5f37092db349a052f8afee4ef13b_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c89a5f37092db349a052f8afee4ef13b_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c89a5f37092db349a052f8afee4ef13b_3,
            type_description_2,
            outline_1_var_el,
            par_self
        );


        // Release cached frame if used for exception.
        if (frame_c89a5f37092db349a052f8afee4ef13b_3 == cache_frame_c89a5f37092db349a052f8afee4ef13b_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_c89a5f37092db349a052f8afee4ef13b_3);
            cache_frame_c89a5f37092db349a052f8afee4ef13b_3 = NULL;
        }

        assertFrameObject(frame_c89a5f37092db349a052f8afee4ef13b_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooooo";
        goto try_except_handler_5;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_1_var_el);
        outline_1_var_el = NULL;
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

        Py_XDECREF(outline_1_var_el);
        outline_1_var_el = NULL;
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
        exception_lineno = 274;
        goto frame_exception_exit_1;
        outline_result_2:;
        assert(var_cells == NULL);
        var_cells = tmp_assign_source_9;
    }
    {
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 275;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[13]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_cells);
        tmp_tuple_element_1 = var_cells;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
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
        exception_tb = MAKE_TRACEBACK(frame_50f6e83091610217cda3dac496b94fe8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50f6e83091610217cda3dac496b94fe8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50f6e83091610217cda3dac496b94fe8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50f6e83091610217cda3dac496b94fe8,
        type_description_1,
        par_self,
        par_row,
        var_attrs,
        var_keys,
        var_cells
    );


    // Release cached frame if used for exception.
    if (frame_50f6e83091610217cda3dac496b94fe8 == cache_frame_50f6e83091610217cda3dac496b94fe8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50f6e83091610217cda3dac496b94fe8);
        cache_frame_50f6e83091610217cda3dac496b94fe8 = NULL;
    }

    assertFrameObject(frame_50f6e83091610217cda3dac496b94fe8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_attrs);
    Py_DECREF(var_attrs);
    var_attrs = NULL;
    CHECK_OBJECT(var_keys);
    Py_DECREF(var_keys);
    var_keys = NULL;
    CHECK_OBJECT(var_cells);
    Py_DECREF(var_cells);
    var_cells = NULL;
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

    Py_XDECREF(var_attrs);
    var_attrs = NULL;
    Py_XDECREF(var_keys);
    var_keys = NULL;
    Py_XDECREF(var_cells);
    var_cells = NULL;
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
    CHECK_OBJECT(par_row);
    Py_DECREF(par_row);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_row);
    Py_DECREF(par_row);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__9_parse_formatting(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_element = python_pars[1];
    PyObject *var_cf = NULL;
    PyObject *var_msg = NULL;
    struct Nuitka_FrameObject *frame_1353de2535534bc030dda262a1b4dd0e;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_1353de2535534bc030dda262a1b4dd0e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1353de2535534bc030dda262a1b4dd0e)) {
        Py_XDECREF(cache_frame_1353de2535534bc030dda262a1b4dd0e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1353de2535534bc030dda262a1b4dd0e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1353de2535534bc030dda262a1b4dd0e = MAKE_FUNCTION_FRAME(codeobj_1353de2535534bc030dda262a1b4dd0e, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1353de2535534bc030dda262a1b4dd0e->m_type_description == NULL);
    frame_1353de2535534bc030dda262a1b4dd0e = cache_frame_1353de2535534bc030dda262a1b4dd0e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1353de2535534bc030dda262a1b4dd0e);
    assert(Py_REFCNT(frame_1353de2535534bc030dda262a1b4dd0e) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[145]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[145]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_element);
        tmp_args_element_value_1 = par_element;
        frame_1353de2535534bc030dda262a1b4dd0e->m_frame.f_lineno = 280;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[86], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        assert(var_cf == NULL);
        var_cf = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[24]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[146]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_cf);
        tmp_args_element_value_2 = var_cf;
        frame_1353de2535534bc030dda262a1b4dd0e->m_frame.f_lineno = 281;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_1353de2535534bc030dda262a1b4dd0e, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_1353de2535534bc030dda262a1b4dd0e, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_1 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = mod_consts[147];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_1);
            tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[148]);

            if (unlikely(tmp_called_instance_2 == NULL)) {
                tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[148]);
            }

            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            frame_1353de2535534bc030dda262a1b4dd0e->m_frame.f_lineno = 283;
            tmp_format_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[149]);
            if (tmp_format_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            tmp_format_spec_1 = mod_consts[150];
            tmp_tuple_element_1 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            Py_DECREF(tmp_format_value_1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 283;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_2 = PyUnicode_Join(mod_consts[150], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        assert(var_msg == NULL);
        var_msg = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_msg);
        tmp_args_element_value_3 = var_msg;
        frame_1353de2535534bc030dda262a1b4dd0e->m_frame.f_lineno = 284;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 279;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1353de2535534bc030dda262a1b4dd0e->m_frame) frame_1353de2535534bc030dda262a1b4dd0e->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_3;
    branch_end_1:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1353de2535534bc030dda262a1b4dd0e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1353de2535534bc030dda262a1b4dd0e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1353de2535534bc030dda262a1b4dd0e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1353de2535534bc030dda262a1b4dd0e,
        type_description_1,
        par_self,
        par_element,
        var_cf,
        var_msg
    );


    // Release cached frame if used for exception.
    if (frame_1353de2535534bc030dda262a1b4dd0e == cache_frame_1353de2535534bc030dda262a1b4dd0e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1353de2535534bc030dda262a1b4dd0e);
        cache_frame_1353de2535534bc030dda262a1b4dd0e = NULL;
    }

    assertFrameObject(frame_1353de2535534bc030dda262a1b4dd0e);

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
    Py_XDECREF(var_cf);
    var_cf = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
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

    Py_XDECREF(var_cf);
    var_cf = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
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
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__10_parse_sheet_protection(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_element = python_pars[1];
    PyObject *var_protection = NULL;
    PyObject *var_password = NULL;
    struct Nuitka_FrameObject *frame_ef89bebbfb5e3d1ce5ec958bcee42864;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_ef89bebbfb5e3d1ce5ec958bcee42864 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ef89bebbfb5e3d1ce5ec958bcee42864)) {
        Py_XDECREF(cache_frame_ef89bebbfb5e3d1ce5ec958bcee42864);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef89bebbfb5e3d1ce5ec958bcee42864 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef89bebbfb5e3d1ce5ec958bcee42864 = MAKE_FUNCTION_FRAME(codeobj_ef89bebbfb5e3d1ce5ec958bcee42864, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ef89bebbfb5e3d1ce5ec958bcee42864->m_type_description == NULL);
    frame_ef89bebbfb5e3d1ce5ec958bcee42864 = cache_frame_ef89bebbfb5e3d1ce5ec958bcee42864;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ef89bebbfb5e3d1ce5ec958bcee42864);
    assert(Py_REFCNT(frame_ef89bebbfb5e3d1ce5ec958bcee42864) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[151]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[151]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_element);
        tmp_args_element_value_1 = par_element;
        frame_ef89bebbfb5e3d1ce5ec958bcee42864->m_frame.f_lineno = 288;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[86], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_protection == NULL);
        var_protection = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_element);
        tmp_expression_value_1 = par_element;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[96]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ef89bebbfb5e3d1ce5ec958bcee42864->m_frame.f_lineno = 289;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[152]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_password == NULL);
        var_password = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_password);
        tmp_cmp_expr_left_1 = var_password;
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_protection);
        tmp_called_instance_2 = var_protection;
        CHECK_OBJECT(var_password);
        tmp_args_element_value_2 = var_password;
        tmp_args_element_value_3 = Py_True;
        frame_ef89bebbfb5e3d1ce5ec958bcee42864->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[153],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        if (var_protection == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[154]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_1 = var_protection;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[154], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef89bebbfb5e3d1ce5ec958bcee42864, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef89bebbfb5e3d1ce5ec958bcee42864->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef89bebbfb5e3d1ce5ec958bcee42864, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef89bebbfb5e3d1ce5ec958bcee42864,
        type_description_1,
        par_self,
        par_element,
        var_protection,
        var_password
    );


    // Release cached frame if used for exception.
    if (frame_ef89bebbfb5e3d1ce5ec958bcee42864 == cache_frame_ef89bebbfb5e3d1ce5ec958bcee42864) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ef89bebbfb5e3d1ce5ec958bcee42864);
        cache_frame_ef89bebbfb5e3d1ce5ec958bcee42864 = NULL;
    }

    assertFrameObject(frame_ef89bebbfb5e3d1ce5ec958bcee42864);

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
    Py_XDECREF(var_protection);
    var_protection = NULL;
    Py_XDECREF(var_password);
    var_password = NULL;
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

    Py_XDECREF(var_protection);
    var_protection = NULL;
    Py_XDECREF(var_password);
    var_password = NULL;
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
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__11_parse_extensions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_element = python_pars[1];
    PyObject *var_extLst = NULL;
    PyObject *var_e = NULL;
    PyObject *var_ext_type = NULL;
    PyObject *var_msg = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_c5637788f60422219a3dfaa143ed0c8f;
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
    static struct Nuitka_FrameObject *cache_frame_c5637788f60422219a3dfaa143ed0c8f = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c5637788f60422219a3dfaa143ed0c8f)) {
        Py_XDECREF(cache_frame_c5637788f60422219a3dfaa143ed0c8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c5637788f60422219a3dfaa143ed0c8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c5637788f60422219a3dfaa143ed0c8f = MAKE_FUNCTION_FRAME(codeobj_c5637788f60422219a3dfaa143ed0c8f, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c5637788f60422219a3dfaa143ed0c8f->m_type_description == NULL);
    frame_c5637788f60422219a3dfaa143ed0c8f = cache_frame_c5637788f60422219a3dfaa143ed0c8f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c5637788f60422219a3dfaa143ed0c8f);
    assert(Py_REFCNT(frame_c5637788f60422219a3dfaa143ed0c8f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[155]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[155]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_element);
        tmp_args_element_value_1 = par_element;
        frame_c5637788f60422219a3dfaa143ed0c8f->m_frame.f_lineno = 296;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[86], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_extLst == NULL);
        var_extLst = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_extLst);
        tmp_expression_value_1 = var_extLst;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[156]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
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
                exception_lineno = 297;
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
            PyObject *old = var_e;
            var_e = tmp_assign_source_4;
            Py_INCREF(var_e);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[157]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[157]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[96]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_e);
        tmp_expression_value_4 = var_e;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[158]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 298;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[159]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 298;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_c5637788f60422219a3dfaa143ed0c8f->m_frame.f_lineno = 298;
        tmp_args_element_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 298;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_3 = mod_consts[160];
        frame_c5637788f60422219a3dfaa143ed0c8f->m_frame.f_lineno = 298;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_ext_type;
            var_ext_type = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[161];
        CHECK_OBJECT(var_ext_type);
        tmp_kw_call_arg_value_1_1 = var_ext_type;
        frame_c5637788f60422219a3dfaa143ed0c8f->m_frame.f_lineno = 299;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_msg;
            var_msg = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_msg);
        tmp_args_element_value_4 = var_msg;
        frame_c5637788f60422219a3dfaa143ed0c8f->m_frame.f_lineno = 300;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_4);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 297;
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
        exception_tb = MAKE_TRACEBACK(frame_c5637788f60422219a3dfaa143ed0c8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c5637788f60422219a3dfaa143ed0c8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c5637788f60422219a3dfaa143ed0c8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c5637788f60422219a3dfaa143ed0c8f,
        type_description_1,
        par_self,
        par_element,
        var_extLst,
        var_e,
        var_ext_type,
        var_msg
    );


    // Release cached frame if used for exception.
    if (frame_c5637788f60422219a3dfaa143ed0c8f == cache_frame_c5637788f60422219a3dfaa143ed0c8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c5637788f60422219a3dfaa143ed0c8f);
        cache_frame_c5637788f60422219a3dfaa143ed0c8f = NULL;
    }

    assertFrameObject(frame_c5637788f60422219a3dfaa143ed0c8f);

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
    CHECK_OBJECT(var_extLst);
    Py_DECREF(var_extLst);
    var_extLst = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_ext_type);
    var_ext_type = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
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

    Py_XDECREF(var_extLst);
    var_extLst = NULL;
    Py_XDECREF(var_e);
    var_e = NULL;
    Py_XDECREF(var_ext_type);
    var_ext_type = NULL;
    Py_XDECREF(var_msg);
    var_msg = NULL;
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
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__12_parse_legacy(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_element = python_pars[1];
    PyObject *var_obj = NULL;
    struct Nuitka_FrameObject *frame_8bcbaffa276bbce10fa8865df7ce846e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_8bcbaffa276bbce10fa8865df7ce846e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8bcbaffa276bbce10fa8865df7ce846e)) {
        Py_XDECREF(cache_frame_8bcbaffa276bbce10fa8865df7ce846e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8bcbaffa276bbce10fa8865df7ce846e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8bcbaffa276bbce10fa8865df7ce846e = MAKE_FUNCTION_FRAME(codeobj_8bcbaffa276bbce10fa8865df7ce846e, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8bcbaffa276bbce10fa8865df7ce846e->m_type_description == NULL);
    frame_8bcbaffa276bbce10fa8865df7ce846e = cache_frame_8bcbaffa276bbce10fa8865df7ce846e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8bcbaffa276bbce10fa8865df7ce846e);
    assert(Py_REFCNT(frame_8bcbaffa276bbce10fa8865df7ce846e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_element);
        tmp_args_element_value_1 = par_element;
        frame_8bcbaffa276bbce10fa8865df7ce846e->m_frame.f_lineno = 304;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[86], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_obj == NULL);
        var_obj = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_obj);
        tmp_expression_value_1 = var_obj;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[163]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[25], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 305;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8bcbaffa276bbce10fa8865df7ce846e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8bcbaffa276bbce10fa8865df7ce846e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8bcbaffa276bbce10fa8865df7ce846e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8bcbaffa276bbce10fa8865df7ce846e,
        type_description_1,
        par_self,
        par_element,
        var_obj
    );


    // Release cached frame if used for exception.
    if (frame_8bcbaffa276bbce10fa8865df7ce846e == cache_frame_8bcbaffa276bbce10fa8865df7ce846e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8bcbaffa276bbce10fa8865df7ce846e);
        cache_frame_8bcbaffa276bbce10fa8865df7ce846e = NULL;
    }

    assertFrameObject(frame_8bcbaffa276bbce10fa8865df7ce846e);

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
    CHECK_OBJECT(var_obj);
    Py_DECREF(var_obj);
    var_obj = NULL;
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

    Py_XDECREF(var_obj);
    var_obj = NULL;
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
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__13_parse_row_breaks(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_element = python_pars[1];
    PyObject *var_brk = NULL;
    struct Nuitka_FrameObject *frame_b283c7e861b6de85de09be1cb42eaae3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b283c7e861b6de85de09be1cb42eaae3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b283c7e861b6de85de09be1cb42eaae3)) {
        Py_XDECREF(cache_frame_b283c7e861b6de85de09be1cb42eaae3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b283c7e861b6de85de09be1cb42eaae3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b283c7e861b6de85de09be1cb42eaae3 = MAKE_FUNCTION_FRAME(codeobj_b283c7e861b6de85de09be1cb42eaae3, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b283c7e861b6de85de09be1cb42eaae3->m_type_description == NULL);
    frame_b283c7e861b6de85de09be1cb42eaae3 = cache_frame_b283c7e861b6de85de09be1cb42eaae3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b283c7e861b6de85de09be1cb42eaae3);
    assert(Py_REFCNT(frame_b283c7e861b6de85de09be1cb42eaae3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_element);
        tmp_args_element_value_1 = par_element;
        frame_b283c7e861b6de85de09be1cb42eaae3->m_frame.f_lineno = 309;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[86], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_brk == NULL);
        var_brk = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_brk);
        tmp_assattr_value_1 = var_brk;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[28], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b283c7e861b6de85de09be1cb42eaae3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b283c7e861b6de85de09be1cb42eaae3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b283c7e861b6de85de09be1cb42eaae3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b283c7e861b6de85de09be1cb42eaae3,
        type_description_1,
        par_self,
        par_element,
        var_brk
    );


    // Release cached frame if used for exception.
    if (frame_b283c7e861b6de85de09be1cb42eaae3 == cache_frame_b283c7e861b6de85de09be1cb42eaae3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b283c7e861b6de85de09be1cb42eaae3);
        cache_frame_b283c7e861b6de85de09be1cb42eaae3 = NULL;
    }

    assertFrameObject(frame_b283c7e861b6de85de09be1cb42eaae3);

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
    CHECK_OBJECT(var_brk);
    Py_DECREF(var_brk);
    var_brk = NULL;
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

    Py_XDECREF(var_brk);
    var_brk = NULL;
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
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__14_parse_col_breaks(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_element = python_pars[1];
    PyObject *var_brk = NULL;
    struct Nuitka_FrameObject *frame_e1e49d2654618fd5732b416140a82965;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e1e49d2654618fd5732b416140a82965 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e1e49d2654618fd5732b416140a82965)) {
        Py_XDECREF(cache_frame_e1e49d2654618fd5732b416140a82965);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e1e49d2654618fd5732b416140a82965 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e1e49d2654618fd5732b416140a82965 = MAKE_FUNCTION_FRAME(codeobj_e1e49d2654618fd5732b416140a82965, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e1e49d2654618fd5732b416140a82965->m_type_description == NULL);
    frame_e1e49d2654618fd5732b416140a82965 = cache_frame_e1e49d2654618fd5732b416140a82965;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e1e49d2654618fd5732b416140a82965);
    assert(Py_REFCNT(frame_e1e49d2654618fd5732b416140a82965) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_element);
        tmp_args_element_value_1 = par_element;
        frame_e1e49d2654618fd5732b416140a82965->m_frame.f_lineno = 314;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[86], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_brk == NULL);
        var_brk = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_brk);
        tmp_assattr_value_1 = var_brk;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[30], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e1e49d2654618fd5732b416140a82965, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e1e49d2654618fd5732b416140a82965->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e1e49d2654618fd5732b416140a82965, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e1e49d2654618fd5732b416140a82965,
        type_description_1,
        par_self,
        par_element,
        var_brk
    );


    // Release cached frame if used for exception.
    if (frame_e1e49d2654618fd5732b416140a82965 == cache_frame_e1e49d2654618fd5732b416140a82965) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e1e49d2654618fd5732b416140a82965);
        cache_frame_e1e49d2654618fd5732b416140a82965 = NULL;
    }

    assertFrameObject(frame_e1e49d2654618fd5732b416140a82965);

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
    CHECK_OBJECT(var_brk);
    Py_DECREF(var_brk);
    var_brk = NULL;
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

    Py_XDECREF(var_brk);
    var_brk = NULL;
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
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__15_parse_custom_views(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_element = python_pars[1];
    struct Nuitka_FrameObject *frame_fdd8d1fdb448e1883c65b18309d422b8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_fdd8d1fdb448e1883c65b18309d422b8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fdd8d1fdb448e1883c65b18309d422b8)) {
        Py_XDECREF(cache_frame_fdd8d1fdb448e1883c65b18309d422b8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fdd8d1fdb448e1883c65b18309d422b8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fdd8d1fdb448e1883c65b18309d422b8 = MAKE_FUNCTION_FRAME(codeobj_fdd8d1fdb448e1883c65b18309d422b8, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fdd8d1fdb448e1883c65b18309d422b8->m_type_description == NULL);
    frame_fdd8d1fdb448e1883c65b18309d422b8 = cache_frame_fdd8d1fdb448e1883c65b18309d422b8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fdd8d1fdb448e1883c65b18309d422b8);
    assert(Py_REFCNT(frame_fdd8d1fdb448e1883c65b18309d422b8) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fdd8d1fdb448e1883c65b18309d422b8->m_frame.f_lineno = 321;
        tmp_assattr_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[28], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fdd8d1fdb448e1883c65b18309d422b8->m_frame.f_lineno = 322;
        tmp_assattr_value_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[30], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fdd8d1fdb448e1883c65b18309d422b8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fdd8d1fdb448e1883c65b18309d422b8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fdd8d1fdb448e1883c65b18309d422b8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fdd8d1fdb448e1883c65b18309d422b8,
        type_description_1,
        par_self,
        par_element
    );


    // Release cached frame if used for exception.
    if (frame_fdd8d1fdb448e1883c65b18309d422b8 == cache_frame_fdd8d1fdb448e1883c65b18309d422b8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fdd8d1fdb448e1883c65b18309d422b8);
        cache_frame_fdd8d1fdb448e1883c65b18309d422b8 = NULL;
    }

    assertFrameObject(frame_fdd8d1fdb448e1883c65b18309d422b8);

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
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_element);
    Py_DECREF(par_element);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__16___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_ws = python_pars[1];
    PyObject *par_xml_source = python_pars[2];
    PyObject *par_shared_strings = python_pars[3];
    PyObject *par_data_only = python_pars[4];
    struct Nuitka_FrameObject *frame_21d46606e9923c7faff4319b16db6f19;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_21d46606e9923c7faff4319b16db6f19 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_21d46606e9923c7faff4319b16db6f19)) {
        Py_XDECREF(cache_frame_21d46606e9923c7faff4319b16db6f19);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21d46606e9923c7faff4319b16db6f19 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21d46606e9923c7faff4319b16db6f19 = MAKE_FUNCTION_FRAME(codeobj_21d46606e9923c7faff4319b16db6f19, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21d46606e9923c7faff4319b16db6f19->m_type_description == NULL);
    frame_21d46606e9923c7faff4319b16db6f19 = cache_frame_21d46606e9923c7faff4319b16db6f19;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_21d46606e9923c7faff4319b16db6f19);
    assert(Py_REFCNT(frame_21d46606e9923c7faff4319b16db6f19) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_ws);
        tmp_assattr_value_1 = par_ws;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[164], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_assattr_target_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[165]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_xml_source);
        tmp_args_element_value_1 = par_xml_source;
        CHECK_OBJECT(par_shared_strings);
        tmp_args_element_value_2 = par_shared_strings;
        CHECK_OBJECT(par_data_only);
        tmp_args_element_value_3 = par_data_only;
        CHECK_OBJECT(par_ws);
        tmp_expression_value_2 = par_ws;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[166]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ws);
        tmp_expression_value_4 = par_ws;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[166]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 332;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[167]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 332;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_21d46606e9923c7faff4319b16db6f19->m_frame.f_lineno = 332;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assattr_value_2 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[168], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(0);
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[16], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21d46606e9923c7faff4319b16db6f19, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21d46606e9923c7faff4319b16db6f19->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21d46606e9923c7faff4319b16db6f19, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21d46606e9923c7faff4319b16db6f19,
        type_description_1,
        par_self,
        par_ws,
        par_xml_source,
        par_shared_strings,
        par_data_only
    );


    // Release cached frame if used for exception.
    if (frame_21d46606e9923c7faff4319b16db6f19 == cache_frame_21d46606e9923c7faff4319b16db6f19) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21d46606e9923c7faff4319b16db6f19);
        cache_frame_21d46606e9923c7faff4319b16db6f19 = NULL;
    }

    assertFrameObject(frame_21d46606e9923c7faff4319b16db6f19);

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
    CHECK_OBJECT(par_ws);
    Py_DECREF(par_ws);
    CHECK_OBJECT(par_xml_source);
    Py_DECREF(par_xml_source);
    CHECK_OBJECT(par_shared_strings);
    Py_DECREF(par_shared_strings);
    CHECK_OBJECT(par_data_only);
    Py_DECREF(par_data_only);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_ws);
    Py_DECREF(par_ws);
    CHECK_OBJECT(par_xml_source);
    Py_DECREF(par_xml_source);
    CHECK_OBJECT(par_shared_strings);
    Py_DECREF(par_shared_strings);
    CHECK_OBJECT(par_data_only);
    Py_DECREF(par_data_only);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__17_bind_cells(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_idx = NULL;
    PyObject *var_row = NULL;
    PyObject *var_cell = NULL;
    PyObject *var_style = NULL;
    PyObject *var_c = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_21f9e203c1578c1def81cd4e90339462;
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
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_21f9e203c1578c1def81cd4e90339462 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_21f9e203c1578c1def81cd4e90339462)) {
        Py_XDECREF(cache_frame_21f9e203c1578c1def81cd4e90339462);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21f9e203c1578c1def81cd4e90339462 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21f9e203c1578c1def81cd4e90339462 = MAKE_FUNCTION_FRAME(codeobj_21f9e203c1578c1def81cd4e90339462, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21f9e203c1578c1def81cd4e90339462->m_type_description == NULL);
    frame_21f9e203c1578c1def81cd4e90339462 = cache_frame_21f9e203c1578c1def81cd4e90339462;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_21f9e203c1578c1def81cd4e90339462);
    assert(Py_REFCNT(frame_21f9e203c1578c1def81cd4e90339462) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[168]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_21f9e203c1578c1def81cd4e90339462->m_frame.f_lineno = 337;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[89]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooooo";
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
                type_description_1 = "oooooo";
                exception_lineno = 337;
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


            exception_lineno = 337;
            type_description_1 = "oooooo";
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


            type_description_1 = "oooooo";
            exception_lineno = 337;
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


            type_description_1 = "oooooo";
            exception_lineno = 337;
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

                    type_description_1 = "oooooo";
                    exception_lineno = 337;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[82];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooo";
            exception_lineno = 337;
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
            PyObject *old = var_idx;
            var_idx = tmp_assign_source_6;
            Py_INCREF(var_idx);
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
            PyObject *old = var_row;
            var_row = tmp_assign_source_7;
            Py_INCREF(var_row);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_row);
        tmp_iter_arg_3 = var_row;
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooo";
                exception_lineno = 338;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_10 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_cell;
            var_cell = tmp_assign_source_10;
            Py_INCREF(var_cell);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 339;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[164]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[166]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[169]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_cell);
        tmp_expression_value_6 = var_cell;
        tmp_subscript_value_2 = mod_consts[126];
        tmp_subscript_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_2);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_2);

            exception_lineno = 339;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_2);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_style;
            var_style = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_kw_call_dict_value_2_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[170]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[170]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 340;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_7 = par_self;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[164]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_cell);
        tmp_expression_value_8 = var_cell;
        tmp_subscript_value_3 = mod_consts[122];
        tmp_kw_call_dict_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 340;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_cell);
        tmp_expression_value_9 = var_cell;
        tmp_subscript_value_4 = mod_consts[123];
        tmp_kw_call_dict_value_1_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_4);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 340;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_style);
        tmp_kw_call_dict_value_2_1 = var_style;
        frame_21f9e203c1578c1def81cd4e90339462->m_frame.f_lineno = 340;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[171]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_cell);
        tmp_expression_value_10 = var_cell;
        tmp_subscript_value_5 = mod_consts[124];
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_5);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_c);
        tmp_assattr_target_1 = var_c;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[172], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(var_cell);
        tmp_expression_value_11 = var_cell;
        tmp_subscript_value_6 = mod_consts[125];
        tmp_assattr_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_6);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_c);
        tmp_assattr_target_2 = var_c;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[125], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_c);
        tmp_ass_subvalue_1 = var_c;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 343;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }

        tmp_expression_value_13 = par_self;
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[164]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[173]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        CHECK_OBJECT(var_cell);
        tmp_expression_value_14 = var_cell;
        tmp_subscript_value_7 = mod_consts[122];
        tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_7);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subscribed_1);

            exception_lineno = 343;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
        tmp_ass_subscript_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_8;
            PyTuple_SET_ITEM(tmp_ass_subscript_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(var_cell);
            tmp_expression_value_15 = var_cell;
            tmp_subscript_value_8 = mod_consts[123];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_8);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 343;
                type_description_1 = "oooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_ass_subscript_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;
            type_description_1 = "oooooo";
            goto try_except_handler_5;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 338;
        type_description_1 = "oooooo";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 337;
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_4;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_assattr_target_3;
        PyObject *tmp_expression_value_18;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_17 = par_self;
        tmp_expression_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[168]);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[11]);
        Py_DECREF(tmp_expression_value_16);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_18 = par_self;
        tmp_assattr_target_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[164]);
        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 344;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[174], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_target_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 345;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_20 = par_self;
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[164]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[173]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 345;
            type_description_1 = "oooooo";
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
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_assattr_target_4;
        PyObject *tmp_expression_value_23;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_22 = par_self;
        tmp_expression_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[164]);
        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[175]);
        Py_DECREF(tmp_expression_value_21);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_assattr_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_23 = par_self;
        tmp_assattr_target_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[164]);
        if (tmp_assattr_target_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_4);

            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[176], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_target_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21f9e203c1578c1def81cd4e90339462, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21f9e203c1578c1def81cd4e90339462->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21f9e203c1578c1def81cd4e90339462, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21f9e203c1578c1def81cd4e90339462,
        type_description_1,
        par_self,
        var_idx,
        var_row,
        var_cell,
        var_style,
        var_c
    );


    // Release cached frame if used for exception.
    if (frame_21f9e203c1578c1def81cd4e90339462 == cache_frame_21f9e203c1578c1def81cd4e90339462) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21f9e203c1578c1def81cd4e90339462);
        cache_frame_21f9e203c1578c1def81cd4e90339462 = NULL;
    }

    assertFrameObject(frame_21f9e203c1578c1def81cd4e90339462);

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
    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_cell);
    var_cell = NULL;
    Py_XDECREF(var_style);
    var_style = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
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

    Py_XDECREF(var_idx);
    var_idx = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_cell);
    var_cell = NULL;
    Py_XDECREF(var_style);
    var_style = NULL;
    Py_XDECREF(var_c);
    var_c = NULL;
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


static PyObject *impl_openpyxl$worksheet$_reader$$$function__18_bind_formatting(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_cf = NULL;
    PyObject *var_rule = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    struct Nuitka_FrameObject *frame_b856ad47c839e56a864bb5ef958f9362;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_b856ad47c839e56a864bb5ef958f9362 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b856ad47c839e56a864bb5ef958f9362)) {
        Py_XDECREF(cache_frame_b856ad47c839e56a864bb5ef958f9362);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b856ad47c839e56a864bb5ef958f9362 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b856ad47c839e56a864bb5ef958f9362 = MAKE_FUNCTION_FRAME(codeobj_b856ad47c839e56a864bb5ef958f9362, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b856ad47c839e56a864bb5ef958f9362->m_type_description == NULL);
    frame_b856ad47c839e56a864bb5ef958f9362 = cache_frame_b856ad47c839e56a864bb5ef958f9362;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b856ad47c839e56a864bb5ef958f9362);
    assert(Py_REFCNT(frame_b856ad47c839e56a864bb5ef958f9362) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[168]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[24]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 350;
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
            PyObject *old = var_cf;
            var_cf = tmp_assign_source_3;
            Py_INCREF(var_cf);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_cf);
        tmp_expression_value_3 = var_cf;
        tmp_iter_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[177]);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_4;
            Py_XDECREF(old);
        }

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
                type_description_1 = "ooo";
                exception_lineno = 351;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_6 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_rule;
            var_rule = tmp_assign_source_6;
            Py_INCREF(var_rule);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_rule);
        tmp_expression_value_4 = var_rule;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[178]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
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
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_assattr_target_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 353;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[164]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[166]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[179]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_rule);
        tmp_expression_value_9 = var_rule;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[178]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_5);

            exception_lineno = 353;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_assattr_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_5);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        CHECK_OBJECT(var_rule);
        tmp_assattr_target_1 = var_rule;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[180], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 353;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_rule);
        tmp_ass_subvalue_1 = var_rule;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 354;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }

        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[164]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[181]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
        if (var_cf == NULL) {
            Py_DECREF(tmp_ass_subscribed_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[182]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 354;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }

        tmp_ass_subscript_1 = var_cf;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooo";
            goto try_except_handler_3;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 351;
        type_description_1 = "ooo";
        goto try_except_handler_3;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_1;
    exception_value = exception_keeper_value_1;
    exception_tb = exception_keeper_tb_1;
    exception_lineno = exception_keeper_lineno_1;

    goto try_except_handler_2;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 350;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
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

    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
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
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b856ad47c839e56a864bb5ef958f9362, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b856ad47c839e56a864bb5ef958f9362->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b856ad47c839e56a864bb5ef958f9362, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b856ad47c839e56a864bb5ef958f9362,
        type_description_1,
        par_self,
        var_cf,
        var_rule
    );


    // Release cached frame if used for exception.
    if (frame_b856ad47c839e56a864bb5ef958f9362 == cache_frame_b856ad47c839e56a864bb5ef958f9362) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b856ad47c839e56a864bb5ef958f9362);
        cache_frame_b856ad47c839e56a864bb5ef958f9362 = NULL;
    }

    assertFrameObject(frame_b856ad47c839e56a864bb5ef958f9362);

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
    Py_XDECREF(var_cf);
    var_cf = NULL;
    Py_XDECREF(var_rule);
    var_rule = NULL;
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

    Py_XDECREF(var_cf);
    var_cf = NULL;
    Py_XDECREF(var_rule);
    var_rule = NULL;
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


static PyObject *impl_openpyxl$worksheet$_reader$$$function__19_bind_tables(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_t = NULL;
    PyObject *var_rel = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_d56cf156fcfc9f42d26b5e4aed636dc5;
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
    static struct Nuitka_FrameObject *cache_frame_d56cf156fcfc9f42d26b5e4aed636dc5 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d56cf156fcfc9f42d26b5e4aed636dc5)) {
        Py_XDECREF(cache_frame_d56cf156fcfc9f42d26b5e4aed636dc5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d56cf156fcfc9f42d26b5e4aed636dc5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d56cf156fcfc9f42d26b5e4aed636dc5 = MAKE_FUNCTION_FRAME(codeobj_d56cf156fcfc9f42d26b5e4aed636dc5, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d56cf156fcfc9f42d26b5e4aed636dc5->m_type_description == NULL);
    frame_d56cf156fcfc9f42d26b5e4aed636dc5 = cache_frame_d56cf156fcfc9f42d26b5e4aed636dc5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d56cf156fcfc9f42d26b5e4aed636dc5);
    assert(Py_REFCNT(frame_d56cf156fcfc9f42d26b5e4aed636dc5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[168]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[16]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[183]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 358;
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
            PyObject *old = var_t;
            var_t = tmp_assign_source_3;
            Py_INCREF(var_t);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 359;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[164]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[184]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_t);
        tmp_expression_value_7 = var_t;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[163]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_4);

            exception_lineno = 359;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_4);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_rel;
            var_rel = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_10;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 360;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = par_self;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[16]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[146]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_rel);
        tmp_expression_value_10 = var_rel;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[185]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 360;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_d56cf156fcfc9f42d26b5e4aed636dc5->m_frame.f_lineno = 360;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 358;
        type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_d56cf156fcfc9f42d26b5e4aed636dc5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d56cf156fcfc9f42d26b5e4aed636dc5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d56cf156fcfc9f42d26b5e4aed636dc5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d56cf156fcfc9f42d26b5e4aed636dc5,
        type_description_1,
        par_self,
        var_t,
        var_rel
    );


    // Release cached frame if used for exception.
    if (frame_d56cf156fcfc9f42d26b5e4aed636dc5 == cache_frame_d56cf156fcfc9f42d26b5e4aed636dc5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d56cf156fcfc9f42d26b5e4aed636dc5);
        cache_frame_d56cf156fcfc9f42d26b5e4aed636dc5 = NULL;
    }

    assertFrameObject(frame_d56cf156fcfc9f42d26b5e4aed636dc5);

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
    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_rel);
    var_rel = NULL;
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

    Py_XDECREF(var_t);
    var_t = NULL;
    Py_XDECREF(var_rel);
    var_rel = NULL;
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


static PyObject *impl_openpyxl$worksheet$_reader$$$function__20_bind_merged_cells(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_cr = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_42fa219b2f0cdee8038b485db8a51f55;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_42fa219b2f0cdee8038b485db8a51f55 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_42fa219b2f0cdee8038b485db8a51f55)) {
        Py_XDECREF(cache_frame_42fa219b2f0cdee8038b485db8a51f55);

#if _DEBUG_REFCOUNTS
        if (cache_frame_42fa219b2f0cdee8038b485db8a51f55 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_42fa219b2f0cdee8038b485db8a51f55 = MAKE_FUNCTION_FRAME(codeobj_42fa219b2f0cdee8038b485db8a51f55, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_42fa219b2f0cdee8038b485db8a51f55->m_type_description == NULL);
    frame_42fa219b2f0cdee8038b485db8a51f55 = cache_frame_42fa219b2f0cdee8038b485db8a51f55;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_42fa219b2f0cdee8038b485db8a51f55);
    assert(Py_REFCNT(frame_42fa219b2f0cdee8038b485db8a51f55) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[168]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 364;
            type_description_1 = "oo";
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
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[168]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[26]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[186]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "oo";
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
                type_description_1 = "oo";
                exception_lineno = 367;
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
            PyObject *old = var_cr;
            var_cr = tmp_assign_source_3;
            Py_INCREF(var_cr);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 368;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[164]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[187]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_cr);
        tmp_expression_value_8 = var_cr;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[188]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 368;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        frame_42fa219b2f0cdee8038b485db8a51f55->m_frame.f_lineno = 368;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "oo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 367;
        type_description_1 = "oo";
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
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_42fa219b2f0cdee8038b485db8a51f55, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_42fa219b2f0cdee8038b485db8a51f55->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_42fa219b2f0cdee8038b485db8a51f55, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_42fa219b2f0cdee8038b485db8a51f55,
        type_description_1,
        par_self,
        var_cr
    );


    // Release cached frame if used for exception.
    if (frame_42fa219b2f0cdee8038b485db8a51f55 == cache_frame_42fa219b2f0cdee8038b485db8a51f55) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_42fa219b2f0cdee8038b485db8a51f55);
        cache_frame_42fa219b2f0cdee8038b485db8a51f55 = NULL;
    }

    assertFrameObject(frame_42fa219b2f0cdee8038b485db8a51f55);

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
    Py_XDECREF(var_cr);
    var_cr = NULL;
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

    Py_XDECREF(var_cr);
    var_cr = NULL;
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


static PyObject *impl_openpyxl$worksheet$_reader$$$function__21_bind_hyperlinks(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_link = NULL;
    PyObject *var_rel = NULL;
    PyObject *var_row = NULL;
    PyObject *var_cell = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    struct Nuitka_FrameObject *frame_b6730f58e75f7e8807acbdb4bacf8dca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
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
    static struct Nuitka_FrameObject *cache_frame_b6730f58e75f7e8807acbdb4bacf8dca = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b6730f58e75f7e8807acbdb4bacf8dca)) {
        Py_XDECREF(cache_frame_b6730f58e75f7e8807acbdb4bacf8dca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b6730f58e75f7e8807acbdb4bacf8dca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b6730f58e75f7e8807acbdb4bacf8dca = MAKE_FUNCTION_FRAME(codeobj_b6730f58e75f7e8807acbdb4bacf8dca, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b6730f58e75f7e8807acbdb4bacf8dca->m_type_description == NULL);
    frame_b6730f58e75f7e8807acbdb4bacf8dca = cache_frame_b6730f58e75f7e8807acbdb4bacf8dca;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b6730f58e75f7e8807acbdb4bacf8dca);
    assert(Py_REFCNT(frame_b6730f58e75f7e8807acbdb4bacf8dca) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[168]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[23]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[189]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooooo";
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
                type_description_1 = "ooooo";
                exception_lineno = 372;
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
            PyObject *old = var_link;
            var_link = tmp_assign_source_3;
            Py_INCREF(var_link);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_link);
        tmp_expression_value_4 = var_link;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[163]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 373;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_8;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = par_self;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[164]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[184]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_link);
        tmp_expression_value_8 = var_link;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[163]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_5);

            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_5);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_rel;
            var_rel = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_rel);
        tmp_expression_value_9 = var_rel;
        tmp_assattr_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[185]);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_link);
        tmp_assattr_target_1 = var_link;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[190], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_10;
        tmp_cmp_expr_left_1 = mod_consts[191];
        CHECK_OBJECT(var_link);
        tmp_expression_value_10 = var_link;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[188]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooooo";
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
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_13;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 378;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_12 = par_self;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[164]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_link);
        tmp_expression_value_13 = var_link;
        tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[188]);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_11);

            exception_lineno = 378;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_iter_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_11);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 378;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 378;
                goto try_except_handler_3;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_7 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var_row;
            var_row = tmp_assign_source_7;
            Py_INCREF(var_row);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_row);
        tmp_iter_arg_3 = var_row;
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 379;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_10 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_cell;
            var_cell = tmp_assign_source_10;
            Py_INCREF(var_cell);
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        if (var_link == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[192]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 381;
            type_description_1 = "ooooo";
            goto try_except_handler_5;
        }

        tmp_assattr_value_2 = var_link;
        CHECK_OBJECT(var_cell);
        tmp_assattr_target_2 = var_cell;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[189], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;
            type_description_1 = "ooooo";
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_b6730f58e75f7e8807acbdb4bacf8dca, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_b6730f58e75f7e8807acbdb4bacf8dca, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
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
        exception_lineno = 380;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_b6730f58e75f7e8807acbdb4bacf8dca->m_frame) frame_b6730f58e75f7e8807acbdb4bacf8dca->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_6;
    branch_no_3:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_6:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 379;
        type_description_1 = "ooooo";
        goto try_except_handler_4;
    }
    goto loop_start_3;
    loop_end_3:;
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

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_3:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 378;
        type_description_1 = "ooooo";
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

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_16;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 385;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_15 = par_self;
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[164]);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_link);
        tmp_expression_value_16 = var_link;
        tmp_subscript_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[188]);
        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_14);

            exception_lineno = 385;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_14);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_cell;
            var_cell = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_cell);
        tmp_isinstance_inst_1 = var_cell;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[193]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[193]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_18;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_17 = par_self;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[194]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_cell);
        tmp_expression_value_18 = var_cell;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[195]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_b6730f58e75f7e8807acbdb4bacf8dca->m_frame.f_lineno = 387;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_cell;
            assert(old != NULL);
            var_cell = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(var_link);
        tmp_assattr_value_3 = var_link;
        CHECK_OBJECT(var_cell);
        tmp_assattr_target_3 = var_cell;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[189], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
    }
    branch_end_2:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 372;
        type_description_1 = "ooooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b6730f58e75f7e8807acbdb4bacf8dca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b6730f58e75f7e8807acbdb4bacf8dca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b6730f58e75f7e8807acbdb4bacf8dca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b6730f58e75f7e8807acbdb4bacf8dca,
        type_description_1,
        par_self,
        var_link,
        var_rel,
        var_row,
        var_cell
    );


    // Release cached frame if used for exception.
    if (frame_b6730f58e75f7e8807acbdb4bacf8dca == cache_frame_b6730f58e75f7e8807acbdb4bacf8dca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b6730f58e75f7e8807acbdb4bacf8dca);
        cache_frame_b6730f58e75f7e8807acbdb4bacf8dca = NULL;
    }

    assertFrameObject(frame_b6730f58e75f7e8807acbdb4bacf8dca);

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
    Py_XDECREF(var_link);
    var_link = NULL;
    Py_XDECREF(var_rel);
    var_rel = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_cell);
    var_cell = NULL;
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

    Py_XDECREF(var_link);
    var_link = NULL;
    Py_XDECREF(var_rel);
    var_rel = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_cell);
    var_cell = NULL;
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


static PyObject *impl_openpyxl$worksheet$_reader$$$function__22_normalize_merged_cell_link(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_coord = python_pars[1];
    PyObject *var_rng = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_4e40378873335b7af2165a2a40867aff;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_4e40378873335b7af2165a2a40867aff = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4e40378873335b7af2165a2a40867aff)) {
        Py_XDECREF(cache_frame_4e40378873335b7af2165a2a40867aff);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e40378873335b7af2165a2a40867aff == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e40378873335b7af2165a2a40867aff = MAKE_FUNCTION_FRAME(codeobj_4e40378873335b7af2165a2a40867aff, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e40378873335b7af2165a2a40867aff->m_type_description == NULL);
    frame_4e40378873335b7af2165a2a40867aff = cache_frame_4e40378873335b7af2165a2a40867aff;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4e40378873335b7af2165a2a40867aff);
    assert(Py_REFCNT(frame_4e40378873335b7af2165a2a40867aff) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[164]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 395;
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
            PyObject *old = var_rng;
            var_rng = tmp_assign_source_3;
            Py_INCREF(var_rng);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_coord);
        tmp_cmp_expr_left_1 = par_coord;
        CHECK_OBJECT(var_rng);
        tmp_cmp_expr_right_1 = var_rng;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[164]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[196]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_rng);
        tmp_expression_value_6 = var_rng;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[197]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 397;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[12];
        tmp_dircall_arg2_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_5, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 397;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        goto try_return_handler_2;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 395;
        type_description_1 = "ooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_1;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_for_loop_1__iter_value);
    Py_DECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto frame_return_exit_1;
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
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4e40378873335b7af2165a2a40867aff, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e40378873335b7af2165a2a40867aff->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e40378873335b7af2165a2a40867aff, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e40378873335b7af2165a2a40867aff,
        type_description_1,
        par_self,
        par_coord,
        var_rng
    );


    // Release cached frame if used for exception.
    if (frame_4e40378873335b7af2165a2a40867aff == cache_frame_4e40378873335b7af2165a2a40867aff) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e40378873335b7af2165a2a40867aff);
        cache_frame_4e40378873335b7af2165a2a40867aff = NULL;
    }

    assertFrameObject(frame_4e40378873335b7af2165a2a40867aff);

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
    Py_XDECREF(var_rng);
    var_rng = NULL;
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

    Py_XDECREF(var_rng);
    var_rng = NULL;
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
    CHECK_OBJECT(par_coord);
    Py_DECREF(par_coord);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_coord);
    Py_DECREF(par_coord);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_openpyxl$worksheet$_reader$$$function__23_bind_col_dimensions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_col = NULL;
    PyObject *var_cd = NULL;
    PyObject *var_key = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_df7d4fcbfc4839a117f7f9cc9ce148e9;
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
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_df7d4fcbfc4839a117f7f9cc9ce148e9 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_df7d4fcbfc4839a117f7f9cc9ce148e9)) {
        Py_XDECREF(cache_frame_df7d4fcbfc4839a117f7f9cc9ce148e9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_df7d4fcbfc4839a117f7f9cc9ce148e9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_df7d4fcbfc4839a117f7f9cc9ce148e9 = MAKE_FUNCTION_FRAME(codeobj_df7d4fcbfc4839a117f7f9cc9ce148e9, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_df7d4fcbfc4839a117f7f9cc9ce148e9->m_type_description == NULL);
    frame_df7d4fcbfc4839a117f7f9cc9ce148e9 = cache_frame_df7d4fcbfc4839a117f7f9cc9ce148e9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_df7d4fcbfc4839a117f7f9cc9ce148e9);
    assert(Py_REFCNT(frame_df7d4fcbfc4839a117f7f9cc9ce148e9) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[168]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[19]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[199]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_df7d4fcbfc4839a117f7f9cc9ce148e9->m_frame.f_lineno = 400;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
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
                exception_lineno = 400;
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


            exception_lineno = 400;
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
            exception_lineno = 400;
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
            exception_lineno = 400;
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
                    exception_lineno = 400;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[82];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 400;
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
            PyObject *old = var_col;
            var_col = tmp_assign_source_6;
            Py_INCREF(var_col);
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
            PyObject *old = var_cd;
            var_cd = tmp_assign_source_7;
            Py_INCREF(var_cd);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = mod_consts[200];
        CHECK_OBJECT(var_cd);
        tmp_cmp_expr_right_1 = var_cd;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_cd);
        tmp_expression_value_4 = var_cd;
        tmp_subscript_value_1 = mod_consts[200];
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[164]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[166]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[169]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_key);
        tmp_subscript_value_2 = var_key;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_cd);
        tmp_ass_subscribed_1 = var_cd;
        tmp_ass_subscript_1 = mod_consts[200];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_ass_subscript_2;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[201]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[201]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[164]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (var_cd == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[202]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_dircall_arg3_1 = var_cd;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_ass_subvalue_2 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 404;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[164]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 404;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[19]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 404;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_col);
        tmp_ass_subscript_2 = var_col;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 404;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 400;
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
        exception_tb = MAKE_TRACEBACK(frame_df7d4fcbfc4839a117f7f9cc9ce148e9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_df7d4fcbfc4839a117f7f9cc9ce148e9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_df7d4fcbfc4839a117f7f9cc9ce148e9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_df7d4fcbfc4839a117f7f9cc9ce148e9,
        type_description_1,
        par_self,
        var_col,
        var_cd,
        var_key
    );


    // Release cached frame if used for exception.
    if (frame_df7d4fcbfc4839a117f7f9cc9ce148e9 == cache_frame_df7d4fcbfc4839a117f7f9cc9ce148e9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_df7d4fcbfc4839a117f7f9cc9ce148e9);
        cache_frame_df7d4fcbfc4839a117f7f9cc9ce148e9 = NULL;
    }

    assertFrameObject(frame_df7d4fcbfc4839a117f7f9cc9ce148e9);

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
    Py_XDECREF(var_col);
    var_col = NULL;
    Py_XDECREF(var_cd);
    var_cd = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
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

    Py_XDECREF(var_col);
    var_col = NULL;
    Py_XDECREF(var_cd);
    var_cd = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
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


static PyObject *impl_openpyxl$worksheet$_reader$$$function__24_bind_row_dimensions(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_row = NULL;
    PyObject *var_rd = NULL;
    PyObject *var_key = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_0aaed92ad7c39765d57a05c055868deb;
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
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_0aaed92ad7c39765d57a05c055868deb = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0aaed92ad7c39765d57a05c055868deb)) {
        Py_XDECREF(cache_frame_0aaed92ad7c39765d57a05c055868deb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0aaed92ad7c39765d57a05c055868deb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0aaed92ad7c39765d57a05c055868deb = MAKE_FUNCTION_FRAME(codeobj_0aaed92ad7c39765d57a05c055868deb, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0aaed92ad7c39765d57a05c055868deb->m_type_description == NULL);
    frame_0aaed92ad7c39765d57a05c055868deb = cache_frame_0aaed92ad7c39765d57a05c055868deb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0aaed92ad7c39765d57a05c055868deb);
    assert(Py_REFCNT(frame_0aaed92ad7c39765d57a05c055868deb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[168]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[199]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_0aaed92ad7c39765d57a05c055868deb->m_frame.f_lineno = 408;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
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
                exception_lineno = 408;
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


            exception_lineno = 408;
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
            exception_lineno = 408;
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
            exception_lineno = 408;
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
                    exception_lineno = 408;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[82];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooo";
            exception_lineno = 408;
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
            PyObject *old = var_row;
            var_row = tmp_assign_source_6;
            Py_INCREF(var_row);
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
            PyObject *old = var_rd;
            var_rd = tmp_assign_source_7;
            Py_INCREF(var_rd);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = mod_consts[115];
        CHECK_OBJECT(var_rd);
        tmp_cmp_expr_right_1 = var_rd;
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_rd);
        tmp_expression_value_4 = var_rd;
        tmp_subscript_value_1 = mod_consts[115];
        tmp_int_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_key;
            var_key = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[164]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[166]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[169]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_key);
        tmp_subscript_value_2 = var_key;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_rd);
        tmp_ass_subscribed_1 = var_rd;
        tmp_ass_subscript_1 = mod_consts[115];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_int_arg_2;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_9 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[164]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        if (var_rd == NULL) {
            Py_DECREF(tmp_dircall_arg2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[204]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_dircall_arg3_1 = var_rd;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_ass_subvalue_2 = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_ass_subvalue_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 412;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[164]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 412;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[18]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 412;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_row);
        tmp_int_arg_2 = var_row;
        tmp_ass_subscript_2 = PyNumber_Int(tmp_int_arg_2);
        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);
            Py_DECREF(tmp_ass_subscribed_2);

            exception_lineno = 412;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 412;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 408;
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
        exception_tb = MAKE_TRACEBACK(frame_0aaed92ad7c39765d57a05c055868deb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0aaed92ad7c39765d57a05c055868deb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0aaed92ad7c39765d57a05c055868deb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0aaed92ad7c39765d57a05c055868deb,
        type_description_1,
        par_self,
        var_row,
        var_rd,
        var_key
    );


    // Release cached frame if used for exception.
    if (frame_0aaed92ad7c39765d57a05c055868deb == cache_frame_0aaed92ad7c39765d57a05c055868deb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0aaed92ad7c39765d57a05c055868deb);
        cache_frame_0aaed92ad7c39765d57a05c055868deb = NULL;
    }

    assertFrameObject(frame_0aaed92ad7c39765d57a05c055868deb);

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
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_rd);
    var_rd = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
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

    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_rd);
    var_rd = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
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


static PyObject *impl_openpyxl$worksheet$_reader$$$function__25_bind_properties(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_9ea38299721c36c8b31d927190a2bada;
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
    static struct Nuitka_FrameObject *cache_frame_9ea38299721c36c8b31d927190a2bada = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        tmp_iter_arg_1 = mod_consts[205];
        tmp_assign_source_1 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_9ea38299721c36c8b31d927190a2bada)) {
        Py_XDECREF(cache_frame_9ea38299721c36c8b31d927190a2bada);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ea38299721c36c8b31d927190a2bada == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ea38299721c36c8b31d927190a2bada = MAKE_FUNCTION_FRAME(codeobj_9ea38299721c36c8b31d927190a2bada, module_openpyxl$worksheet$_reader, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ea38299721c36c8b31d927190a2bada->m_type_description == NULL);
    frame_9ea38299721c36c8b31d927190a2bada = cache_frame_9ea38299721c36c8b31d927190a2bada;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9ea38299721c36c8b31d927190a2bada);
    assert(Py_REFCNT(frame_9ea38299721c36c8b31d927190a2bada) == 2);

    // Framed code:
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
                type_description_1 = "ooo";
                exception_lineno = 416;
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
            PyObject *old = var_k;
            var_k = tmp_assign_source_3;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 420;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = par_self;
        tmp_getattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[168]);
        if (tmp_getattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_k);
        tmp_getattr_attr_1 = var_k;
        tmp_getattr_default_1 = Py_None;
        tmp_assign_source_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        Py_DECREF(tmp_getattr_target_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_v);
        tmp_cmp_expr_left_1 = var_v;
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
        PyObject *tmp_setattr_target_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_setattr_attr_1;
        PyObject *tmp_setattr_value_1;
        PyObject *tmp_capi_result_1;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 422;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_2 = par_self;
        tmp_setattr_target_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[164]);
        if (tmp_setattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_k);
        tmp_setattr_attr_1 = var_k;
        CHECK_OBJECT(var_v);
        tmp_setattr_value_1 = var_v;
        tmp_capi_result_1 = BUILTIN_SETATTR(tmp_setattr_target_1, tmp_setattr_attr_1, tmp_setattr_value_1);
        Py_DECREF(tmp_setattr_target_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 416;
        type_description_1 = "ooo";
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
        exception_tb = MAKE_TRACEBACK(frame_9ea38299721c36c8b31d927190a2bada, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ea38299721c36c8b31d927190a2bada->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ea38299721c36c8b31d927190a2bada, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ea38299721c36c8b31d927190a2bada,
        type_description_1,
        par_self,
        var_k,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_9ea38299721c36c8b31d927190a2bada == cache_frame_9ea38299721c36c8b31d927190a2bada) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ea38299721c36c8b31d927190a2bada);
        cache_frame_9ea38299721c36c8b31d927190a2bada = NULL;
    }

    assertFrameObject(frame_9ea38299721c36c8b31d927190a2bada);

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
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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

    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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


static PyObject *impl_openpyxl$worksheet$_reader$$$function__26_bind_all(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_afcb5659257a51dc5a7d5dc2984455f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_afcb5659257a51dc5a7d5dc2984455f4 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_afcb5659257a51dc5a7d5dc2984455f4)) {
        Py_XDECREF(cache_frame_afcb5659257a51dc5a7d5dc2984455f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_afcb5659257a51dc5a7d5dc2984455f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_afcb5659257a51dc5a7d5dc2984455f4 = MAKE_FUNCTION_FRAME(codeobj_afcb5659257a51dc5a7d5dc2984455f4, module_openpyxl$worksheet$_reader, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_afcb5659257a51dc5a7d5dc2984455f4->m_type_description == NULL);
    frame_afcb5659257a51dc5a7d5dc2984455f4 = cache_frame_afcb5659257a51dc5a7d5dc2984455f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_afcb5659257a51dc5a7d5dc2984455f4);
    assert(Py_REFCNT(frame_afcb5659257a51dc5a7d5dc2984455f4) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        frame_afcb5659257a51dc5a7d5dc2984455f4->m_frame.f_lineno = 426;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[206]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        frame_afcb5659257a51dc5a7d5dc2984455f4->m_frame.f_lineno = 427;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[207]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 427;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        frame_afcb5659257a51dc5a7d5dc2984455f4->m_frame.f_lineno = 428;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[208]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_4 = par_self;
        frame_afcb5659257a51dc5a7d5dc2984455f4->m_frame.f_lineno = 429;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[209]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_afcb5659257a51dc5a7d5dc2984455f4->m_frame.f_lineno = 430;
        tmp_call_result_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[210]);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(par_self);
        tmp_called_instance_6 = par_self;
        frame_afcb5659257a51dc5a7d5dc2984455f4->m_frame.f_lineno = 431;
        tmp_call_result_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[211]);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 431;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_call_result_7;
        CHECK_OBJECT(par_self);
        tmp_called_instance_7 = par_self;
        frame_afcb5659257a51dc5a7d5dc2984455f4->m_frame.f_lineno = 432;
        tmp_call_result_7 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[212]);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_called_instance_8;
        PyObject *tmp_call_result_8;
        CHECK_OBJECT(par_self);
        tmp_called_instance_8 = par_self;
        frame_afcb5659257a51dc5a7d5dc2984455f4->m_frame.f_lineno = 433;
        tmp_call_result_8 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[213]);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 433;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_8);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_afcb5659257a51dc5a7d5dc2984455f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_afcb5659257a51dc5a7d5dc2984455f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_afcb5659257a51dc5a7d5dc2984455f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_afcb5659257a51dc5a7d5dc2984455f4,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_afcb5659257a51dc5a7d5dc2984455f4 == cache_frame_afcb5659257a51dc5a7d5dc2984455f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_afcb5659257a51dc5a7d5dc2984455f4);
        cache_frame_afcb5659257a51dc5a7d5dc2984455f4 = NULL;
    }

    assertFrameObject(frame_afcb5659257a51dc5a7d5dc2984455f4);

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



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__10_parse_sheet_protection() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__10_parse_sheet_protection,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[318],
#endif
        codeobj_ef89bebbfb5e3d1ce5ec958bcee42864,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__11_parse_extensions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__11_parse_extensions,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[319],
#endif
        codeobj_c5637788f60422219a3dfaa143ed0c8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__12_parse_legacy() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__12_parse_legacy,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        mod_consts[320],
#endif
        codeobj_8bcbaffa276bbce10fa8865df7ce846e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__13_parse_row_breaks() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__13_parse_row_breaks,
        mod_consts[43],
#if PYTHON_VERSION >= 0x300
        mod_consts[321],
#endif
        codeobj_b283c7e861b6de85de09be1cb42eaae3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__14_parse_col_breaks() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__14_parse_col_breaks,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        mod_consts[322],
#endif
        codeobj_e1e49d2654618fd5732b416140a82965,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__15_parse_custom_views() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__15_parse_custom_views,
        mod_consts[47],
#if PYTHON_VERSION >= 0x300
        mod_consts[323],
#endif
        codeobj_fdd8d1fdb448e1883c65b18309d422b8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__16___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__16___init__,
        mod_consts[309],
#if PYTHON_VERSION >= 0x300
        mod_consts[327],
#endif
        codeobj_21d46606e9923c7faff4319b16db6f19,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__17_bind_cells() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__17_bind_cells,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        mod_consts[328],
#endif
        codeobj_21f9e203c1578c1def81cd4e90339462,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__18_bind_formatting() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__18_bind_formatting,
        mod_consts[209],
#if PYTHON_VERSION >= 0x300
        mod_consts[329],
#endif
        codeobj_b856ad47c839e56a864bb5ef958f9362,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__19_bind_tables() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__19_bind_tables,
        mod_consts[212],
#if PYTHON_VERSION >= 0x300
        mod_consts[330],
#endif
        codeobj_d56cf156fcfc9f42d26b5e4aed636dc5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__1__cast_number() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__1__cast_number,
        mod_consts[109],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7554d00d3654ea9fecdeee53d01ff11c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__20_bind_merged_cells() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__20_bind_merged_cells,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        mod_consts[331],
#endif
        codeobj_42fa219b2f0cdee8038b485db8a51f55,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__21_bind_hyperlinks() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__21_bind_hyperlinks,
        mod_consts[208],
#if PYTHON_VERSION >= 0x300
        mod_consts[332],
#endif
        codeobj_b6730f58e75f7e8807acbdb4bacf8dca,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__22_normalize_merged_cell_link() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__22_normalize_merged_cell_link,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        mod_consts[333],
#endif
        codeobj_4e40378873335b7af2165a2a40867aff,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        mod_consts[198],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__23_bind_col_dimensions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__23_bind_col_dimensions,
        mod_consts[210],
#if PYTHON_VERSION >= 0x300
        mod_consts[334],
#endif
        codeobj_df7d4fcbfc4839a117f7f9cc9ce148e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__24_bind_row_dimensions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__24_bind_row_dimensions,
        mod_consts[211],
#if PYTHON_VERSION >= 0x300
        mod_consts[335],
#endif
        codeobj_0aaed92ad7c39765d57a05c055868deb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__25_bind_properties() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__25_bind_properties,
        mod_consts[213],
#if PYTHON_VERSION >= 0x300
        mod_consts[336],
#endif
        codeobj_9ea38299721c36c8b31d927190a2bada,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__26_bind_all() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__26_bind_all,
        mod_consts[337],
#if PYTHON_VERSION >= 0x300
        mod_consts[338],
#endif
        codeobj_afcb5659257a51dc5a7d5dc2984455f4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__2___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__2___init__,
        mod_consts[309],
#if PYTHON_VERSION >= 0x300
        mod_consts[310],
#endif
        codeobj_ced219dafe59236375de8896103bb57e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__3_parse() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__3_parse,
        mod_consts[89],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_3be607e62977958c2107e962499fab5c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__4_parse_dimensions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__4_parse_dimensions,
        mod_consts[311],
#if PYTHON_VERSION >= 0x300
        mod_consts[312],
#endif
        codeobj_1e579ef3d7fc968c11970391a8aacc04,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        mod_consts[95],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__5_parse_cell() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__5_parse_cell,
        mod_consts[144],
#if PYTHON_VERSION >= 0x300
        mod_consts[313],
#endif
        codeobj_051b2bdeb43ed5ae7712ce88c9cf0289,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__6_parse_formula() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__6_parse_formula,
        mod_consts[107],
#if PYTHON_VERSION >= 0x300
        mod_consts[314],
#endif
        codeobj_452c2a6db88e56a02518c09a15b81fee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        mod_consts[136],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__7_parse_column_dimensions() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__7_parse_column_dimensions,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        mod_consts[315],
#endif
        codeobj_f0249c4c168a9ff14ecd7b487080c732,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__8_parse_row() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__8_parse_row,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        mod_consts[316],
#endif
        codeobj_50f6e83091610217cda3dac496b94fe8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__9_parse_formatting() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_openpyxl$worksheet$_reader$$$function__9_parse_formatting,
        mod_consts[39],
#if PYTHON_VERSION >= 0x300
        mod_consts[317],
#endif
        codeobj_1353de2535534bc030dda262a1b4dd0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_openpyxl$worksheet$_reader,
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

function_impl_code functable_openpyxl$worksheet$_reader[] = {
    impl_openpyxl$worksheet$_reader$$$function__1__cast_number,
    impl_openpyxl$worksheet$_reader$$$function__2___init__,
    impl_openpyxl$worksheet$_reader$$$function__3_parse,
    impl_openpyxl$worksheet$_reader$$$function__4_parse_dimensions,
    impl_openpyxl$worksheet$_reader$$$function__5_parse_cell,
    impl_openpyxl$worksheet$_reader$$$function__6_parse_formula,
    impl_openpyxl$worksheet$_reader$$$function__7_parse_column_dimensions,
    impl_openpyxl$worksheet$_reader$$$function__8_parse_row,
    impl_openpyxl$worksheet$_reader$$$function__9_parse_formatting,
    impl_openpyxl$worksheet$_reader$$$function__10_parse_sheet_protection,
    impl_openpyxl$worksheet$_reader$$$function__11_parse_extensions,
    impl_openpyxl$worksheet$_reader$$$function__12_parse_legacy,
    impl_openpyxl$worksheet$_reader$$$function__13_parse_row_breaks,
    impl_openpyxl$worksheet$_reader$$$function__14_parse_col_breaks,
    impl_openpyxl$worksheet$_reader$$$function__15_parse_custom_views,
    impl_openpyxl$worksheet$_reader$$$function__16___init__,
    impl_openpyxl$worksheet$_reader$$$function__17_bind_cells,
    impl_openpyxl$worksheet$_reader$$$function__18_bind_formatting,
    impl_openpyxl$worksheet$_reader$$$function__19_bind_tables,
    impl_openpyxl$worksheet$_reader$$$function__20_bind_merged_cells,
    impl_openpyxl$worksheet$_reader$$$function__21_bind_hyperlinks,
    impl_openpyxl$worksheet$_reader$$$function__22_normalize_merged_cell_link,
    impl_openpyxl$worksheet$_reader$$$function__23_bind_col_dimensions,
    impl_openpyxl$worksheet$_reader$$$function__24_bind_row_dimensions,
    impl_openpyxl$worksheet$_reader$$$function__25_bind_properties,
    impl_openpyxl$worksheet$_reader$$$function__26_bind_all,
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

    function_impl_code *current = functable_openpyxl$worksheet$_reader;
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

    if (offset > sizeof(functable_openpyxl$worksheet$_reader) || offset < 0) {
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
        functable_openpyxl$worksheet$_reader[offset],
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
        module_openpyxl$worksheet$_reader,
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
PyObject *modulecode_openpyxl$worksheet$_reader(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("openpyxl.worksheet._reader");

    // Store the module for future use.
    module_openpyxl$worksheet$_reader = module;

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
        PRINT_STRING("openpyxl.worksheet._reader: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("openpyxl.worksheet._reader: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("openpyxl.worksheet._reader: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initopenpyxl$worksheet$_reader\n");

    moduledict_openpyxl$worksheet$_reader = MODULE_DICT(module_openpyxl$worksheet$_reader);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_openpyxl$worksheet$_reader,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_openpyxl$worksheet$_reader,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[150]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_openpyxl$worksheet$_reader,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_openpyxl$worksheet$_reader,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_openpyxl$worksheet$_reader,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_openpyxl$worksheet$_reader);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_openpyxl$worksheet$_reader);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    PyObject *tmp_import_from_5__module = NULL;
    PyObject *tmp_import_from_6__module = NULL;
    PyObject *tmp_import_from_7__module = NULL;
    struct Nuitka_FrameObject *frame_731db25bb608c33a120c430e97d5122a;
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
    int tmp_res;
    PyObject *locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_9ce82793c5ac80b47f0bc2d573956ca9_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325 = NULL;
    struct Nuitka_FrameObject *frame_b76c8c14415fd0a843751c531025fb94_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[214];
        UPDATE_STRING_DICT0(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[215], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[216], tmp_assign_source_2);
    }
    frame_731db25bb608c33a120c430e97d5122a = MAKE_MODULE_FRAME(codeobj_731db25bb608c33a120c430e97d5122a, module_openpyxl$worksheet$_reader);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_731db25bb608c33a120c430e97d5122a);
    assert(Py_REFCNT(frame_731db25bb608c33a120c430e97d5122a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[217]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[217]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[218], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[217]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[217]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[219], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[220], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[148];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[12];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 4;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[148], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[221];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[222];
        tmp_level_value_2 = mod_consts[12];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 5;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[113],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[113]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[223];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[224];
        tmp_level_value_3 = mod_consts[12];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 8;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[81],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[81]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[225];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[226];
        tmp_level_value_4 = mod_consts[12];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 11;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[170],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[170]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[170], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[193],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[193]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[193], tmp_assign_source_9);
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
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[227];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[228];
        tmp_level_value_5 = mod_consts[12];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 12;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[120],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[120]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[229];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[230];
        tmp_level_value_6 = mod_consts[12];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 13;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_11;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[201],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[201]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[203],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[203]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[73],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[73]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_14);
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
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[231];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[232];
        tmp_level_value_7 = mod_consts[12];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 19;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

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
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[233],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[233]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[157],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[157]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_17);
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
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[234];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[235];
        tmp_level_value_8 = mod_consts[12];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 23;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[145],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[145]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[236];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = mod_consts[237];
        tmp_level_value_9 = mod_consts[12];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 24;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[135],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[135]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[238];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = mod_consts[239];
        tmp_level_value_10 = mod_consts[12];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 25;
        tmp_assign_source_20 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_13 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[137],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[137]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_14 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[103],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[103]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_22);
    }
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

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[240];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = mod_consts[241];
        tmp_level_value_11 = mod_consts[12];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 29;
        tmp_assign_source_23 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_5__module == NULL);
        tmp_import_from_5__module = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_15 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[111],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[111]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_16 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[118],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[118]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[118], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_5__module);
        tmp_import_name_from_17 = tmp_import_from_5__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[242],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[242]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[242], tmp_assign_source_26);
    }
    goto try_end_5;
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

    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_5__module);
    Py_DECREF(tmp_import_from_5__module);
    tmp_import_from_5__module = NULL;
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[243];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = mod_consts[244];
        tmp_level_value_12 = mod_consts[12];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 30;
        tmp_import_name_from_18 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[155],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[155]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[245];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = mod_consts[246];
        tmp_level_value_13 = mod_consts[85];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 32;
        tmp_import_name_from_19 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[61],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[247];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = mod_consts[248];
        tmp_level_value_14 = mod_consts[85];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 33;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[58],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[189];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[249];
        tmp_level_value_15 = mod_consts[85];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 34;
        tmp_import_name_from_21 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[22],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[22]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[250];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[251];
        tmp_level_value_16 = mod_consts[85];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 35;
        tmp_import_name_from_22 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[80],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[80]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[252];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[253];
        tmp_level_value_17 = mod_consts[85];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 36;
        tmp_assign_source_32 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_6__module == NULL);
        tmp_import_from_6__module = tmp_assign_source_32;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_23 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[53],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[53]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_24 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[50],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[50]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_6__module);
        tmp_import_name_from_25 = tmp_import_from_6__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[56],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[56]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_35);
    }
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

    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_import_from_6__module);
    Py_DECREF(tmp_import_from_6__module);
    tmp_import_from_6__module = NULL;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[254];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = mod_consts[255];
        tmp_level_value_18 = mod_consts[85];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 37;
        tmp_assign_source_36 = IMPORT_MODULE5(tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_7__module == NULL);
        tmp_import_from_7__module = tmp_assign_source_36;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_26 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[27],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[27]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_7__module);
        tmp_import_name_from_27 = tmp_import_from_7__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_38 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[29],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_38 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[29]);
        }

        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto try_except_handler_7;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_38);
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

    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_import_from_7__module);
    Py_DECREF(tmp_import_from_7__module);
    tmp_import_from_7__module = NULL;
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[154];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = mod_consts[256];
        tmp_level_value_19 = mod_consts[85];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 38;
        tmp_import_name_from_28 = IMPORT_MODULE5(tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        if (tmp_import_name_from_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_39 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[151],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_39 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[151]);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_import_name_from_29;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[257];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = mod_consts[258];
        tmp_level_value_20 = mod_consts[85];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 39;
        tmp_import_name_from_29 = IMPORT_MODULE5(tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_import_name_from_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_40 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[76],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_40 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[76]);
        }

        Py_DECREF(tmp_import_name_from_29);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_40);
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_import_name_from_30;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[69];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = mod_consts[259];
        tmp_level_value_21 = mod_consts[85];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 40;
        tmp_import_name_from_30 = IMPORT_MODULE5(tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_import_name_from_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_41 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[70],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_41 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[70]);
        }

        Py_DECREF(tmp_import_name_from_30);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[70], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_import_name_from_31;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[260];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = mod_consts[261];
        tmp_level_value_22 = mod_consts[85];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 41;
        tmp_import_name_from_31 = IMPORT_MODULE5(tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_import_name_from_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_42 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[64],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_42 = IMPORT_NAME(tmp_import_name_from_31, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_31);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_32;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[262];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = mod_consts[263];
        tmp_level_value_23 = mod_consts[85];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 42;
        tmp_import_name_from_32 = IMPORT_MODULE5(tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_import_name_from_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[15],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_32, mod_consts[15]);
        }

        Py_DECREF(tmp_import_name_from_32);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_import_name_from_33;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[264];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = mod_consts[265];
        tmp_level_value_24 = mod_consts[85];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 43;
        tmp_import_name_from_33 = IMPORT_MODULE5(tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_import_name_from_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_44 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[67],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_44 = IMPORT_NAME(tmp_import_name_from_33, mod_consts[67]);
        }

        Py_DECREF(tmp_import_name_from_33);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_import_name_from_34;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[266];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = mod_consts[267];
        tmp_level_value_25 = mod_consts[85];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 44;
        tmp_import_name_from_34 = IMPORT_MODULE5(tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_import_name_from_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_45 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[92],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_45 = IMPORT_NAME(tmp_import_name_from_34, mod_consts[92]);
        }

        Py_DECREF(tmp_import_name_from_34);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[268];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_openpyxl$worksheet$_reader;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = mod_consts[269];
        tmp_level_value_26 = mod_consts[85];
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 45;
        tmp_import_name_from_35 = IMPORT_MODULE5(tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_import_name_from_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_46 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_openpyxl$worksheet$_reader,
                mod_consts[162],
                mod_consts[12]
            );
        } else {
            tmp_assign_source_46 = IMPORT_NAME(tmp_import_name_from_35, mod_consts[162]);
        }

        Py_DECREF(tmp_import_name_from_35);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[270];
        tmp_mod_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_1 == NULL)) {
            tmp_mod_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_47 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_assign_source_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[271], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_mod_expr_left_2 = mod_consts[272];
        tmp_mod_expr_right_2 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_2 == NULL)) {
            tmp_mod_expr_right_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_48 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        tmp_mod_expr_left_3 = mod_consts[273];
        tmp_mod_expr_right_3 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_3 == NULL)) {
            tmp_mod_expr_right_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_49 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        if (tmp_assign_source_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        tmp_mod_expr_left_4 = mod_consts[274];
        tmp_mod_expr_right_4 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_4 == NULL)) {
            tmp_mod_expr_right_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_50 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        tmp_mod_expr_left_5 = mod_consts[275];
        tmp_mod_expr_right_5 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_5 == NULL)) {
            tmp_mod_expr_right_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_51 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[119], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        tmp_mod_expr_left_6 = mod_consts[276];
        tmp_mod_expr_right_6 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_6 == NULL)) {
            tmp_mod_expr_right_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_52 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        tmp_mod_expr_left_7 = mod_consts[277];
        tmp_mod_expr_right_7 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_7 == NULL)) {
            tmp_mod_expr_right_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_53 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        tmp_mod_expr_left_8 = mod_consts[278];
        tmp_mod_expr_right_8 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_8 == NULL)) {
            tmp_mod_expr_right_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_54 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_mod_expr_left_9;
        PyObject *tmp_mod_expr_right_9;
        tmp_mod_expr_left_9 = mod_consts[279];
        tmp_mod_expr_right_9 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_9 == NULL)) {
            tmp_mod_expr_right_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_55 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_9, tmp_mod_expr_right_9);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_mod_expr_left_10;
        PyObject *tmp_mod_expr_right_10;
        tmp_mod_expr_left_10 = mod_consts[280];
        tmp_mod_expr_right_10 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_10 == NULL)) {
            tmp_mod_expr_right_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_56 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_10, tmp_mod_expr_right_10);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_mod_expr_left_11;
        PyObject *tmp_mod_expr_right_11;
        tmp_mod_expr_left_11 = mod_consts[281];
        tmp_mod_expr_right_11 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_11 == NULL)) {
            tmp_mod_expr_right_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_57 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_11, tmp_mod_expr_right_11);
        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_mod_expr_left_12;
        PyObject *tmp_mod_expr_right_12;
        tmp_mod_expr_left_12 = mod_consts[282];
        tmp_mod_expr_right_12 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_12 == NULL)) {
            tmp_mod_expr_right_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_58 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_12, tmp_mod_expr_right_12);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_mod_expr_left_13;
        PyObject *tmp_mod_expr_right_13;
        tmp_mod_expr_left_13 = mod_consts[283];
        tmp_mod_expr_right_13 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_13 == NULL)) {
            tmp_mod_expr_right_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_59 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_13, tmp_mod_expr_right_13);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_mod_expr_left_14;
        PyObject *tmp_mod_expr_right_14;
        tmp_mod_expr_left_14 = mod_consts[284];
        tmp_mod_expr_right_14 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_14 == NULL)) {
            tmp_mod_expr_right_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_60 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_14, tmp_mod_expr_right_14);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_mod_expr_left_15;
        PyObject *tmp_mod_expr_right_15;
        tmp_mod_expr_left_15 = mod_consts[285];
        tmp_mod_expr_right_15 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_15 == NULL)) {
            tmp_mod_expr_right_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_61 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_15, tmp_mod_expr_right_15);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_mod_expr_left_16;
        PyObject *tmp_mod_expr_right_16;
        tmp_mod_expr_left_16 = mod_consts[286];
        tmp_mod_expr_right_16 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_16 == NULL)) {
            tmp_mod_expr_right_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_62 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_16, tmp_mod_expr_right_16);
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_mod_expr_left_17;
        PyObject *tmp_mod_expr_right_17;
        tmp_mod_expr_left_17 = mod_consts[287];
        tmp_mod_expr_right_17 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_17 == NULL)) {
            tmp_mod_expr_right_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_63 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_17, tmp_mod_expr_right_17);
        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_mod_expr_left_18;
        PyObject *tmp_mod_expr_right_18;
        tmp_mod_expr_left_18 = mod_consts[288];
        tmp_mod_expr_right_18 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_18 == NULL)) {
            tmp_mod_expr_right_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_64 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_18, tmp_mod_expr_right_18);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_mod_expr_left_19;
        PyObject *tmp_mod_expr_right_19;
        tmp_mod_expr_left_19 = mod_consts[289];
        tmp_mod_expr_right_19 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_19 == NULL)) {
            tmp_mod_expr_right_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_65 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_19, tmp_mod_expr_right_19);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_mod_expr_left_20;
        PyObject *tmp_mod_expr_right_20;
        tmp_mod_expr_left_20 = mod_consts[290];
        tmp_mod_expr_right_20 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_20 == NULL)) {
            tmp_mod_expr_right_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_66 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_20, tmp_mod_expr_right_20);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_mod_expr_left_21;
        PyObject *tmp_mod_expr_right_21;
        tmp_mod_expr_left_21 = mod_consts[291];
        tmp_mod_expr_right_21 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_21 == NULL)) {
            tmp_mod_expr_right_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_67 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_21, tmp_mod_expr_right_21);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_mod_expr_left_22;
        PyObject *tmp_mod_expr_right_22;
        tmp_mod_expr_left_22 = mod_consts[292];
        tmp_mod_expr_right_22 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_22 == NULL)) {
            tmp_mod_expr_right_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_68 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_22, tmp_mod_expr_right_22);
        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_mod_expr_left_23;
        PyObject *tmp_mod_expr_right_23;
        tmp_mod_expr_left_23 = mod_consts[293];
        tmp_mod_expr_right_23 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_23 == NULL)) {
            tmp_mod_expr_right_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_69 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_23, tmp_mod_expr_right_23);
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_mod_expr_left_24;
        PyObject *tmp_mod_expr_right_24;
        tmp_mod_expr_left_24 = mod_consts[294];
        tmp_mod_expr_right_24 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_24 == NULL)) {
            tmp_mod_expr_right_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_70 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_24, tmp_mod_expr_right_24);
        if (tmp_assign_source_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_mod_expr_left_25;
        PyObject *tmp_mod_expr_right_25;
        tmp_mod_expr_left_25 = mod_consts[295];
        tmp_mod_expr_right_25 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_25 == NULL)) {
            tmp_mod_expr_right_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_71 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_25, tmp_mod_expr_right_25);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_mod_expr_left_26;
        PyObject *tmp_mod_expr_right_26;
        tmp_mod_expr_left_26 = mod_consts[296];
        tmp_mod_expr_right_26 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_26 == NULL)) {
            tmp_mod_expr_right_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_72 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_26, tmp_mod_expr_right_26);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[94], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_mod_expr_left_27;
        PyObject *tmp_mod_expr_right_27;
        tmp_mod_expr_left_27 = mod_consts[297];
        tmp_mod_expr_right_27 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_27 == NULL)) {
            tmp_mod_expr_right_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_73 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_27, tmp_mod_expr_right_27);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_mod_expr_left_28;
        PyObject *tmp_mod_expr_right_28;
        tmp_mod_expr_left_28 = mod_consts[298];
        tmp_mod_expr_right_28 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[233]);

        if (unlikely(tmp_mod_expr_right_28 == NULL)) {
            tmp_mod_expr_right_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[233]);
        }

        if (tmp_mod_expr_right_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_74 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_28, tmp_mod_expr_right_28);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;


        tmp_assign_source_75 = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__1__cast_number();

        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_75);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[299];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_76 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_76;
    }
    {
        PyObject *tmp_assign_source_77;
        tmp_assign_source_77 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_77;
    }
    {
        PyObject *tmp_assign_source_78;
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


            exception_lineno = 85;

            goto try_except_handler_8;
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
        tmp_subscript_value_1 = mod_consts[12];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_8;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_8;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_78 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_78;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[300]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[300]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_8;
        }
        tmp_tuple_element_1 = mod_consts[165];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 85;
        tmp_assign_source_79 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_8;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_79;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[301]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_8;
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
        PyObject *tmp_mod_expr_left_29;
        PyObject *tmp_mod_expr_right_29;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_29 = mod_consts[302];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[303];
        tmp_getattr_default_1 = mod_consts[304];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_8;
        }
        tmp_mod_expr_right_29 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_29, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[303]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_29, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_29);
        goto try_except_handler_8;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_29, tmp_mod_expr_right_29);
        Py_DECREF(tmp_mod_expr_right_29);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_8;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 85;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_8;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_80;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_81;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[305];
        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[306], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_10;
        }
        tmp_dictset_value = mod_consts[165];
        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[307], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_10;
        }
        frame_9ce82793c5ac80b47f0bc2d573956ca9_2 = MAKE_CLASS_FRAME(codeobj_9ce82793c5ac80b47f0bc2d573956ca9, module_openpyxl$worksheet$_reader, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9ce82793c5ac80b47f0bc2d573956ca9_2);
        assert(Py_REFCNT(frame_9ce82793c5ac80b47f0bc2d573956ca9_2) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_3;
            tmp_tuple_element_3 = Py_False;
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(3);
            {
                nuitka_bool tmp_condition_result_4;
                PyObject *tmp_called_value_2;
                PyTuple_SET_ITEM0(tmp_defaults_1, 0, tmp_tuple_element_3);
                tmp_tuple_element_3 = PyObject_GetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[242]);

                if (tmp_tuple_element_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[242]);

                        if (unlikely(tmp_tuple_element_3 == NULL)) {
                            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[242]);
                        }

                        if (tmp_tuple_element_3 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 88;
                            type_description_2 = "o";
                            goto tuple_build_exception_2;
                        }
                        Py_INCREF(tmp_tuple_element_3);
                    } else {
                        goto tuple_build_exception_2;
                    }
                }

                PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_3);
                tmp_res = MAPPING_HAS_ITEM(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[308]);

                if (tmp_res == -1) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
                if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                    goto condexpr_true_2;
                } else {
                    goto condexpr_false_2;
                }
                condexpr_true_2:;
                tmp_called_value_2 = PyObject_GetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[308]);

                if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[308]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 88;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }

                if (tmp_called_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                frame_9ce82793c5ac80b47f0bc2d573956ca9_2->m_frame.f_lineno = 88;
                tmp_tuple_element_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
                Py_DECREF(tmp_called_value_2);
                if (tmp_tuple_element_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 88;
                    type_description_2 = "o";
                    goto tuple_build_exception_2;
                }
                goto condexpr_end_2;
                condexpr_false_2:;
                tmp_tuple_element_3 = PySet_New(NULL);
                condexpr_end_2:;
                PyTuple_SET_ITEM(tmp_defaults_1, 2, tmp_tuple_element_3);
            }
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_defaults_1);
            goto frame_exception_exit_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;


            tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__2___init__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[309], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 87;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__3_parse();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[89], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__4_parse_dimensions();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[311], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__5_parse_cell();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[144], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__6_parse_formula();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[107], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__7_parse_column_dimensions();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[33], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__8_parse_row();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[88], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__9_parse_formatting();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[39], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__10_parse_sheet_protection();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[35], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__11_parse_extensions();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[37], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__12_parse_legacy();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[41], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__13_parse_row_breaks();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[43], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__14_parse_col_breaks();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[45], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__15_parse_custom_views();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[47], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9ce82793c5ac80b47f0bc2d573956ca9_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9ce82793c5ac80b47f0bc2d573956ca9_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9ce82793c5ac80b47f0bc2d573956ca9_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9ce82793c5ac80b47f0bc2d573956ca9_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_9ce82793c5ac80b47f0bc2d573956ca9_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_10;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[299];
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto try_except_handler_10;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[299];
        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85, mod_consts[324], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;

            goto try_except_handler_10;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_82;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[165];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 85;
            tmp_assign_source_82 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 85;

                goto try_except_handler_10;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_82;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_81 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_81);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85);
        locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85);
        locals_openpyxl$worksheet$_reader$$$class__1_WorkSheetParser_85 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 85;
        goto try_except_handler_8;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_81);
    }
    goto try_end_8;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
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
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
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
        PyObject *tmp_assign_source_83;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[299];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_83 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_83;
    }
    {
        PyObject *tmp_assign_source_84;
        tmp_assign_source_84 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_84;
    }
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_11;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[12];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_11;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_11;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_85 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_85;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[300]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[300]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_11;
        }
        tmp_tuple_element_5 = mod_consts[325];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 325;
        tmp_assign_source_86 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_11;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_86;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[301]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_11;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_30;
        PyObject *tmp_mod_expr_right_30;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_30 = mod_consts[302];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[303];
        tmp_getattr_default_2 = mod_consts[304];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_11;
        }
        tmp_mod_expr_right_30 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_30, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[303]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_30, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_30);
        goto try_except_handler_11;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_30, tmp_mod_expr_right_30);
        Py_DECREF(tmp_mod_expr_right_30);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_11;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 325;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_11;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_87;
        tmp_assign_source_87 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_87;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_88;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[305];
        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[306], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[326];
        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[215], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_13;
        }
        tmp_dictset_value = mod_consts[325];
        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[307], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_13;
        }
        frame_b76c8c14415fd0a843751c531025fb94_3 = MAKE_CLASS_FRAME(codeobj_b76c8c14415fd0a843751c531025fb94, module_openpyxl$worksheet$_reader, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b76c8c14415fd0a843751c531025fb94_3);
        assert(Py_REFCNT(frame_b76c8c14415fd0a843751c531025fb94_3) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__16___init__();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[309], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__17_bind_cells();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[206], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__18_bind_formatting();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[209], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__19_bind_tables();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[212], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__20_bind_merged_cells();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[207], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__21_bind_hyperlinks();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[208], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__22_normalize_merged_cell_link();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[194], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__23_bind_col_dimensions();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[210], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__24_bind_row_dimensions();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[211], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__25_bind_properties();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[213], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_openpyxl$worksheet$_reader$$$function__26_bind_all();

        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[337], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b76c8c14415fd0a843751c531025fb94_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b76c8c14415fd0a843751c531025fb94_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b76c8c14415fd0a843751c531025fb94_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b76c8c14415fd0a843751c531025fb94_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_b76c8c14415fd0a843751c531025fb94_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_13;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            tmp_cmp_expr_right_2 = mod_consts[299];
            tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;

                goto try_except_handler_13;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        tmp_dictset_value = mod_consts[299];
        tmp_res = PyObject_SetItem(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325, mod_consts[324], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto try_except_handler_13;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_89;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_5 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[325];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_731db25bb608c33a120c430e97d5122a->m_frame.f_lineno = 325;
            tmp_assign_source_89 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 325;

                goto try_except_handler_13;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_89;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_88 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_88);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325);
        locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325 = NULL;
        goto try_return_handler_12;
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

        Py_DECREF(locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325);
        locals_openpyxl$worksheet$_reader$$$class__2_WorksheetReader_325 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 325;
        goto try_except_handler_11;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)mod_consts[325], tmp_assign_source_88);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_731db25bb608c33a120c430e97d5122a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_731db25bb608c33a120c430e97d5122a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_731db25bb608c33a120c430e97d5122a, exception_lineno);
    }



    assertFrameObject(frame_731db25bb608c33a120c430e97d5122a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;
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
    PGO_onModuleExit("openpyxl.worksheet._reader", false);

    Py_INCREF(module_openpyxl$worksheet$_reader);
    return module_openpyxl$worksheet$_reader;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_openpyxl$worksheet$_reader, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("openpyxl$worksheet$_reader", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
