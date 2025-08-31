/* Generated code for Python module 'torch.utils.data.datapipes.dataframe.dataframe_wrapper'
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

/* The "module_torch$utils$data$datapipes$dataframe$dataframe_wrapper" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$utils$data$datapipes$dataframe$dataframe_wrapper;
PyDictObject *moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[62];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[62];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.utils.data.datapipes.dataframe.dataframe_wrapper"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 62; i++) {
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
void checkModuleConstants_torch$utils$data$datapipes$dataframe$dataframe_wrapper(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 62; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_2ef5c6bfb8a4762a1f9583c52abb2756;
static PyCodeObject *codeobj_ca3d5fe4da2f3d618d7e035d10014669;
static PyCodeObject *codeobj_4e2b20d6b1a016b93da14a5f5c9f6b08;
static PyCodeObject *codeobj_e66cd3015dee0bc20b34c2947c40bc1c;
static PyCodeObject *codeobj_4354567c3b12e907f1058c58cc7270bb;
static PyCodeObject *codeobj_c765070a34a071e2194ed53afb2762ed;
static PyCodeObject *codeobj_ea8cfd30279ac0c201d8eb5dd20851a6;
static PyCodeObject *codeobj_7792561c95b607851791dff0762b49e5;
static PyCodeObject *codeobj_3116f66fb906d42ca2e5c7e2971620e9;
static PyCodeObject *codeobj_69fc453282653431f5c2824c94371d6e;
static PyCodeObject *codeobj_74d5959178b6ab86aa68e4ca7b1eef10;
static PyCodeObject *codeobj_f39781f25acf4e16cce5ec56df6d5b21;
static PyCodeObject *codeobj_c844e134e503daba37998431b9ef4f08;
static PyCodeObject *codeobj_7656c4ca9744c13a742aa520d9183b89;
static PyCodeObject *codeobj_5b60ef82593305a0b4705fad46e9ae8f;
static PyCodeObject *codeobj_84330ab2ad05519b5608caf8852851fd;
static PyCodeObject *codeobj_bbfffea9f4c38a6f940503bd9138062f;
static PyCodeObject *codeobj_b10c8cfb2a6da898d1be710c79d5ce07;
static PyCodeObject *codeobj_958c01e93259c100b76873a5d3498047;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[46]); CHECK_OBJECT(module_filename_obj);
    codeobj_2ef5c6bfb8a4762a1f9583c52abb2756 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[47], mod_consts[47], NULL, NULL, 0, 0, 0);
    codeobj_ca3d5fe4da2f3d618d7e035d10014669 = MAKE_CODE_OBJECT(module_filename_obj, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[48], NULL, 0, 0, 0);
    codeobj_4e2b20d6b1a016b93da14a5f5c9f6b08 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], NULL, NULL, 0, 0, 0);
    codeobj_e66cd3015dee0bc20b34c2947c40bc1c = MAKE_CODE_OBJECT(module_filename_obj, 93, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[49], NULL, 1, 0, 0);
    codeobj_4354567c3b12e907f1058c58cc7270bb = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[50], NULL, 2, 0, 0);
    codeobj_c765070a34a071e2194ed53afb2762ed = MAKE_CODE_OBJECT(module_filename_obj, 22, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[51], NULL, 3, 0, 0);
    codeobj_ea8cfd30279ac0c201d8eb5dd20851a6 = MAKE_CODE_OBJECT(module_filename_obj, 78, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[21], mod_consts[21], mod_consts[52], NULL, 2, 0, 0);
    codeobj_7792561c95b607851791dff0762b49e5 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], NULL, NULL, 0, 0, 0);
    codeobj_3116f66fb906d42ca2e5c7e2971620e9 = MAKE_CODE_OBJECT(module_filename_obj, 53, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[53], NULL, 3, 0, 0);
    codeobj_69fc453282653431f5c2824c94371d6e = MAKE_CODE_OBJECT(module_filename_obj, 103, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[54], NULL, 2, 0, 0);
    codeobj_74d5959178b6ab86aa68e4ca7b1eef10 = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[55], NULL, 2, 0, 0);
    codeobj_f39781f25acf4e16cce5ec56df6d5b21 = MAKE_CODE_OBJECT(module_filename_obj, 108, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[56], NULL, 1, 0, 0);
    codeobj_c844e134e503daba37998431b9ef4f08 = MAKE_CODE_OBJECT(module_filename_obj, 34, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[57], NULL, 2, 0, 0);
    codeobj_7656c4ca9744c13a742aa520d9183b89 = MAKE_CODE_OBJECT(module_filename_obj, 88, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[58], NULL, 1, 0, 0);
    codeobj_5b60ef82593305a0b4705fad46e9ae8f = MAKE_CODE_OBJECT(module_filename_obj, 28, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[57], NULL, 2, 0, 0);
    codeobj_84330ab2ad05519b5608caf8852851fd = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[58], NULL, 1, 0, 0);
    codeobj_bbfffea9f4c38a6f940503bd9138062f = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[58], NULL, 1, 0, 0);
    codeobj_b10c8cfb2a6da898d1be710c79d5ce07 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[59], NULL, 2, 0, 0);
    codeobj_958c01e93259c100b76873a5d3498047 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[60], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate$$$genobj__1_iterate(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__10_get_df_wrapper();


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__11_set_df_wrapper();


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__12_create_dataframe(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__13_is_dataframe();


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__14_is_column();


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__15_concat();


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__16_iterate();


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__17_get_item();


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__18_get_len();


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__1__try_import_pandas(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__2__with_pandas(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__3_create_dataframe();


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__4_is_dataframe();


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__5_is_column();


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate();


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__7_concat();


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__8_get_item();


static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__9_get_len();


// The module function definitions.
static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__1__try_import_pandas(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_pandas = NULL;
    struct Nuitka_FrameObject *frame_ca3d5fe4da2f3d618d7e035d10014669;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_ca3d5fe4da2f3d618d7e035d10014669 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ca3d5fe4da2f3d618d7e035d10014669)) {
        Py_XDECREF(cache_frame_ca3d5fe4da2f3d618d7e035d10014669);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ca3d5fe4da2f3d618d7e035d10014669 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ca3d5fe4da2f3d618d7e035d10014669 = MAKE_FUNCTION_FRAME(codeobj_ca3d5fe4da2f3d618d7e035d10014669, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ca3d5fe4da2f3d618d7e035d10014669->m_type_description == NULL);
    frame_ca3d5fe4da2f3d618d7e035d10014669 = cache_frame_ca3d5fe4da2f3d618d7e035d10014669;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ca3d5fe4da2f3d618d7e035d10014669);
    assert(Py_REFCNT(frame_ca3d5fe4da2f3d618d7e035d10014669) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[1];
        frame_ca3d5fe4da2f3d618d7e035d10014669->m_frame.f_lineno = 6;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;
            type_description_1 = "o";
            goto try_except_handler_2;
        }
        assert(var_pandas == NULL);
        var_pandas = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_ca3d5fe4da2f3d618d7e035d10014669, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_ca3d5fe4da2f3d618d7e035d10014669, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ImportError;
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
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 5;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_ca3d5fe4da2f3d618d7e035d10014669->m_frame) frame_ca3d5fe4da2f3d618d7e035d10014669->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "o";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_ca3d5fe4da2f3d618d7e035d10014669, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ca3d5fe4da2f3d618d7e035d10014669->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ca3d5fe4da2f3d618d7e035d10014669, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ca3d5fe4da2f3d618d7e035d10014669,
        type_description_1,
        var_pandas
    );


    // Release cached frame if used for exception.
    if (frame_ca3d5fe4da2f3d618d7e035d10014669 == cache_frame_ca3d5fe4da2f3d618d7e035d10014669) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ca3d5fe4da2f3d618d7e035d10014669);
        cache_frame_ca3d5fe4da2f3d618d7e035d10014669 = NULL;
    }

    assertFrameObject(frame_ca3d5fe4da2f3d618d7e035d10014669);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(var_pandas);
        tmp_assign_source_2 = var_pandas;
        UPDATE_STRING_DICT0(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_2);
    }
    tmp_return_value = Py_True;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_pandas);
    var_pandas = NULL;
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


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__2__with_pandas(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_4e2b20d6b1a016b93da14a5f5c9f6b08;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4e2b20d6b1a016b93da14a5f5c9f6b08 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4e2b20d6b1a016b93da14a5f5c9f6b08)) {
        Py_XDECREF(cache_frame_4e2b20d6b1a016b93da14a5f5c9f6b08);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4e2b20d6b1a016b93da14a5f5c9f6b08 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4e2b20d6b1a016b93da14a5f5c9f6b08 = MAKE_FUNCTION_FRAME(codeobj_4e2b20d6b1a016b93da14a5f5c9f6b08, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4e2b20d6b1a016b93da14a5f5c9f6b08->m_type_description == NULL);
    frame_4e2b20d6b1a016b93da14a5f5c9f6b08 = cache_frame_4e2b20d6b1a016b93da14a5f5c9f6b08;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4e2b20d6b1a016b93da14a5f5c9f6b08);
    assert(Py_REFCNT(frame_4e2b20d6b1a016b93da14a5f5c9f6b08) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
            tmp_cmp_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        frame_4e2b20d6b1a016b93da14a5f5c9f6b08->m_frame.f_lineno = 18;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_1);
    }
    branch_no_1:;
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[3]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 19;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4e2b20d6b1a016b93da14a5f5c9f6b08, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4e2b20d6b1a016b93da14a5f5c9f6b08->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4e2b20d6b1a016b93da14a5f5c9f6b08, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4e2b20d6b1a016b93da14a5f5c9f6b08,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_4e2b20d6b1a016b93da14a5f5c9f6b08 == cache_frame_4e2b20d6b1a016b93da14a5f5c9f6b08) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4e2b20d6b1a016b93da14a5f5c9f6b08);
        cache_frame_4e2b20d6b1a016b93da14a5f5c9f6b08 = NULL;
    }

    assertFrameObject(frame_4e2b20d6b1a016b93da14a5f5c9f6b08);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__3_create_dataframe(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *par_columns = python_pars[2];
    struct Nuitka_FrameObject *frame_c765070a34a071e2194ed53afb2762ed;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c765070a34a071e2194ed53afb2762ed = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c765070a34a071e2194ed53afb2762ed)) {
        Py_XDECREF(cache_frame_c765070a34a071e2194ed53afb2762ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c765070a34a071e2194ed53afb2762ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c765070a34a071e2194ed53afb2762ed = MAKE_FUNCTION_FRAME(codeobj_c765070a34a071e2194ed53afb2762ed, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c765070a34a071e2194ed53afb2762ed->m_type_description == NULL);
    frame_c765070a34a071e2194ed53afb2762ed = cache_frame_c765070a34a071e2194ed53afb2762ed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c765070a34a071e2194ed53afb2762ed);
    assert(Py_REFCNT(frame_c765070a34a071e2194ed53afb2762ed) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c765070a34a071e2194ed53afb2762ed->m_frame.f_lineno = 24;
        tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;
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
        tmp_make_exception_arg_1 = mod_consts[6];
        frame_c765070a34a071e2194ed53afb2762ed->m_frame.f_lineno = 25;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 25;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_data);
        tmp_kw_call_arg_value_0_1 = par_data;
        CHECK_OBJECT(par_columns);
        tmp_kw_call_dict_value_0_1 = par_columns;
        frame_c765070a34a071e2194ed53afb2762ed->m_frame.f_lineno = 26;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[8]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
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
        exception_tb = MAKE_TRACEBACK(frame_c765070a34a071e2194ed53afb2762ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c765070a34a071e2194ed53afb2762ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c765070a34a071e2194ed53afb2762ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c765070a34a071e2194ed53afb2762ed,
        type_description_1,
        par_cls,
        par_data,
        par_columns
    );


    // Release cached frame if used for exception.
    if (frame_c765070a34a071e2194ed53afb2762ed == cache_frame_c765070a34a071e2194ed53afb2762ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c765070a34a071e2194ed53afb2762ed);
        cache_frame_c765070a34a071e2194ed53afb2762ed = NULL;
    }

    assertFrameObject(frame_c765070a34a071e2194ed53afb2762ed);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_columns);
    Py_DECREF(par_columns);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_columns);
    Py_DECREF(par_columns);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__4_is_dataframe(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_data = python_pars[1];
    struct Nuitka_FrameObject *frame_5b60ef82593305a0b4705fad46e9ae8f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5b60ef82593305a0b4705fad46e9ae8f = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5b60ef82593305a0b4705fad46e9ae8f)) {
        Py_XDECREF(cache_frame_5b60ef82593305a0b4705fad46e9ae8f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5b60ef82593305a0b4705fad46e9ae8f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5b60ef82593305a0b4705fad46e9ae8f = MAKE_FUNCTION_FRAME(codeobj_5b60ef82593305a0b4705fad46e9ae8f, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5b60ef82593305a0b4705fad46e9ae8f->m_type_description == NULL);
    frame_5b60ef82593305a0b4705fad46e9ae8f = cache_frame_5b60ef82593305a0b4705fad46e9ae8f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5b60ef82593305a0b4705fad46e9ae8f);
    assert(Py_REFCNT(frame_5b60ef82593305a0b4705fad46e9ae8f) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_5b60ef82593305a0b4705fad46e9ae8f->m_frame.f_lineno = 30;
        tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
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
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_data);
        tmp_isinstance_inst_1 = par_data;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_5b60ef82593305a0b4705fad46e9ae8f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5b60ef82593305a0b4705fad46e9ae8f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5b60ef82593305a0b4705fad46e9ae8f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5b60ef82593305a0b4705fad46e9ae8f,
        type_description_1,
        par_cls,
        par_data
    );


    // Release cached frame if used for exception.
    if (frame_5b60ef82593305a0b4705fad46e9ae8f == cache_frame_5b60ef82593305a0b4705fad46e9ae8f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5b60ef82593305a0b4705fad46e9ae8f);
        cache_frame_5b60ef82593305a0b4705fad46e9ae8f = NULL;
    }

    assertFrameObject(frame_5b60ef82593305a0b4705fad46e9ae8f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__5_is_column(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_data = python_pars[1];
    struct Nuitka_FrameObject *frame_c844e134e503daba37998431b9ef4f08;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c844e134e503daba37998431b9ef4f08 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c844e134e503daba37998431b9ef4f08)) {
        Py_XDECREF(cache_frame_c844e134e503daba37998431b9ef4f08);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c844e134e503daba37998431b9ef4f08 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c844e134e503daba37998431b9ef4f08 = MAKE_FUNCTION_FRAME(codeobj_c844e134e503daba37998431b9ef4f08, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c844e134e503daba37998431b9ef4f08->m_type_description == NULL);
    frame_c844e134e503daba37998431b9ef4f08 = cache_frame_c844e134e503daba37998431b9ef4f08;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c844e134e503daba37998431b9ef4f08);
    assert(Py_REFCNT(frame_c844e134e503daba37998431b9ef4f08) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_c844e134e503daba37998431b9ef4f08->m_frame.f_lineno = 36;
        tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
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
    tmp_return_value = Py_False;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_data);
        tmp_isinstance_inst_1 = par_data;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[9]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = (tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_return_value);
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
        exception_tb = MAKE_TRACEBACK(frame_c844e134e503daba37998431b9ef4f08, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c844e134e503daba37998431b9ef4f08->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c844e134e503daba37998431b9ef4f08, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c844e134e503daba37998431b9ef4f08,
        type_description_1,
        par_cls,
        par_data
    );


    // Release cached frame if used for exception.
    if (frame_c844e134e503daba37998431b9ef4f08 == cache_frame_c844e134e503daba37998431b9ef4f08) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c844e134e503daba37998431b9ef4f08);
        cache_frame_c844e134e503daba37998431b9ef4f08 = NULL;
    }

    assertFrameObject(frame_c844e134e503daba37998431b9ef4f08);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_CellObject *par_data = Nuitka_Cell_New1(python_pars[1]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = Nuitka_Cell_New0(par_cls);
        tmp_closure_1[1] = par_data;
        Py_INCREF(tmp_closure_1[1]);

        tmp_return_value = MAKE_GENERATOR_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate$$$genobj__1_iterate(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate$$$genobj__1_iterate_locals {
    PyObject *var_d;
    PyObject *tmp_for_loop_1__for_iterator;
    PyObject *tmp_for_loop_1__iter_value;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate$$$genobj__1_iterate_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate$$$genobj__1_iterate_locals *generator_heap = (struct torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate$$$genobj__1_iterate_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_d = NULL;
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    generator_heap->tmp_for_loop_1__iter_value = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_b10c8cfb2a6da898d1be710c79d5ce07, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *)+sizeof(void *)+sizeof(void *));
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
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 42;
            generator_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 42;
        tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 42;
            generator_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        generator_heap->tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 42;
            generator_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = (generator_heap->tmp_res == 0) ? true : false;
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
        tmp_make_exception_arg_1 = mod_consts[6];
        generator->m_frame->m_frame.f_lineno = 43;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        generator_heap->exception_type = tmp_raise_type_1;
        generator_heap->exception_lineno = 43;
        RAISE_EXCEPTION_WITH_TYPE(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
        generator_heap->type_description_1 = "cco";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        if (Nuitka_Cell_GET(generator->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[13]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 44;
            generator_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_1 = Nuitka_Cell_GET(generator->m_closure[1]);
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 44;
            generator_heap->type_description_1 = "cco";
            goto frame_exception_exit_1;
        }
        assert(generator_heap->tmp_for_loop_1__for_iterator == NULL);
        generator_heap->tmp_for_loop_1__for_iterator = tmp_assign_source_1;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_2;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = generator_heap->tmp_for_loop_1__for_iterator;
        tmp_assign_source_2 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_2 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
                generator_heap->type_description_1 = "cco";
                generator_heap->exception_lineno = 44;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = generator_heap->tmp_for_loop_1__iter_value;
            generator_heap->tmp_for_loop_1__iter_value = tmp_assign_source_2;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(generator_heap->tmp_for_loop_1__iter_value);
        tmp_assign_source_3 = generator_heap->tmp_for_loop_1__iter_value;
        {
            PyObject *old = generator_heap->var_d;
            generator_heap->var_d = tmp_assign_source_3;
            Py_INCREF(generator_heap->var_d);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_d);
        tmp_expression_value_1 = generator_heap->var_d;
        Py_INCREF(tmp_expression_value_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 45;
            generator_heap->type_description_1 = "cco";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 44;
        generator_heap->type_description_1 = "cco";
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

    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
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
            generator->m_closure[0],
            generator->m_closure[1],
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
    Py_XDECREF(generator_heap->tmp_for_loop_1__iter_value);
    generator_heap->tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(generator_heap->tmp_for_loop_1__for_iterator);
    Py_DECREF(generator_heap->tmp_for_loop_1__for_iterator);
    generator_heap->tmp_for_loop_1__for_iterator = NULL;
    Py_XDECREF(generator_heap->var_d);
    generator_heap->var_d = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate$$$genobj__1_iterate(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate$$$genobj__1_iterate_context,
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        mod_consts[14],
#if PYTHON_VERSION >= 0x350
        mod_consts[15],
#endif
        codeobj_b10c8cfb2a6da898d1be710c79d5ce07,
        closure,
        2,
        sizeof(struct torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate$$$genobj__1_iterate_locals)
    );
}


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__7_concat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_buffer = python_pars[1];
    struct Nuitka_FrameObject *frame_4354567c3b12e907f1058c58cc7270bb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4354567c3b12e907f1058c58cc7270bb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4354567c3b12e907f1058c58cc7270bb)) {
        Py_XDECREF(cache_frame_4354567c3b12e907f1058c58cc7270bb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4354567c3b12e907f1058c58cc7270bb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4354567c3b12e907f1058c58cc7270bb = MAKE_FUNCTION_FRAME(codeobj_4354567c3b12e907f1058c58cc7270bb, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4354567c3b12e907f1058c58cc7270bb->m_type_description == NULL);
    frame_4354567c3b12e907f1058c58cc7270bb = cache_frame_4354567c3b12e907f1058c58cc7270bb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4354567c3b12e907f1058c58cc7270bb);
    assert(Py_REFCNT(frame_4354567c3b12e907f1058c58cc7270bb) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4354567c3b12e907f1058c58cc7270bb->m_frame.f_lineno = 49;
        tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[6];
        frame_4354567c3b12e907f1058c58cc7270bb->m_frame.f_lineno = 50;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 50;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_buffer);
        tmp_args_element_value_1 = par_buffer;
        frame_4354567c3b12e907f1058c58cc7270bb->m_frame.f_lineno = 51;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[16], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
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
        exception_tb = MAKE_TRACEBACK(frame_4354567c3b12e907f1058c58cc7270bb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4354567c3b12e907f1058c58cc7270bb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4354567c3b12e907f1058c58cc7270bb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4354567c3b12e907f1058c58cc7270bb,
        type_description_1,
        par_cls,
        par_buffer
    );


    // Release cached frame if used for exception.
    if (frame_4354567c3b12e907f1058c58cc7270bb == cache_frame_4354567c3b12e907f1058c58cc7270bb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4354567c3b12e907f1058c58cc7270bb);
        cache_frame_4354567c3b12e907f1058c58cc7270bb = NULL;
    }

    assertFrameObject(frame_4354567c3b12e907f1058c58cc7270bb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_buffer);
    Py_DECREF(par_buffer);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_buffer);
    Py_DECREF(par_buffer);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__8_get_item(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_data = python_pars[1];
    PyObject *par_idx = python_pars[2];
    struct Nuitka_FrameObject *frame_3116f66fb906d42ca2e5c7e2971620e9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3116f66fb906d42ca2e5c7e2971620e9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3116f66fb906d42ca2e5c7e2971620e9)) {
        Py_XDECREF(cache_frame_3116f66fb906d42ca2e5c7e2971620e9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3116f66fb906d42ca2e5c7e2971620e9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3116f66fb906d42ca2e5c7e2971620e9 = MAKE_FUNCTION_FRAME(codeobj_3116f66fb906d42ca2e5c7e2971620e9, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3116f66fb906d42ca2e5c7e2971620e9->m_type_description == NULL);
    frame_3116f66fb906d42ca2e5c7e2971620e9 = cache_frame_3116f66fb906d42ca2e5c7e2971620e9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3116f66fb906d42ca2e5c7e2971620e9);
    assert(Py_REFCNT(frame_3116f66fb906d42ca2e5c7e2971620e9) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_3116f66fb906d42ca2e5c7e2971620e9->m_frame.f_lineno = 55;
        tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
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
        tmp_make_exception_arg_1 = mod_consts[6];
        frame_3116f66fb906d42ca2e5c7e2971620e9->m_frame.f_lineno = 56;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 56;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        CHECK_OBJECT(par_data);
        tmp_expression_value_1 = par_data;
        CHECK_OBJECT(par_idx);
        tmp_start_value_1 = par_idx;
        CHECK_OBJECT(par_idx);
        tmp_add_expr_left_1 = par_idx;
        tmp_add_expr_right_1 = mod_consts[17];
        tmp_stop_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_return_value = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
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
        exception_tb = MAKE_TRACEBACK(frame_3116f66fb906d42ca2e5c7e2971620e9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3116f66fb906d42ca2e5c7e2971620e9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3116f66fb906d42ca2e5c7e2971620e9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3116f66fb906d42ca2e5c7e2971620e9,
        type_description_1,
        par_cls,
        par_data,
        par_idx
    );


    // Release cached frame if used for exception.
    if (frame_3116f66fb906d42ca2e5c7e2971620e9 == cache_frame_3116f66fb906d42ca2e5c7e2971620e9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3116f66fb906d42ca2e5c7e2971620e9);
        cache_frame_3116f66fb906d42ca2e5c7e2971620e9 = NULL;
    }

    assertFrameObject(frame_3116f66fb906d42ca2e5c7e2971620e9);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__9_get_len(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_df = python_pars[1];
    struct Nuitka_FrameObject *frame_74d5959178b6ab86aa68e4ca7b1eef10;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_74d5959178b6ab86aa68e4ca7b1eef10 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_74d5959178b6ab86aa68e4ca7b1eef10)) {
        Py_XDECREF(cache_frame_74d5959178b6ab86aa68e4ca7b1eef10);

#if _DEBUG_REFCOUNTS
        if (cache_frame_74d5959178b6ab86aa68e4ca7b1eef10 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_74d5959178b6ab86aa68e4ca7b1eef10 = MAKE_FUNCTION_FRAME(codeobj_74d5959178b6ab86aa68e4ca7b1eef10, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_74d5959178b6ab86aa68e4ca7b1eef10->m_type_description == NULL);
    frame_74d5959178b6ab86aa68e4ca7b1eef10 = cache_frame_74d5959178b6ab86aa68e4ca7b1eef10;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_74d5959178b6ab86aa68e4ca7b1eef10);
    assert(Py_REFCNT(frame_74d5959178b6ab86aa68e4ca7b1eef10) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_74d5959178b6ab86aa68e4ca7b1eef10->m_frame.f_lineno = 61;
        tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[6];
        frame_74d5959178b6ab86aa68e4ca7b1eef10->m_frame.f_lineno = 62;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_Exception, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 62;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_df);
        tmp_expression_value_1 = par_df;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
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
        exception_tb = MAKE_TRACEBACK(frame_74d5959178b6ab86aa68e4ca7b1eef10, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_74d5959178b6ab86aa68e4ca7b1eef10->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_74d5959178b6ab86aa68e4ca7b1eef10, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_74d5959178b6ab86aa68e4ca7b1eef10,
        type_description_1,
        par_cls,
        par_df
    );


    // Release cached frame if used for exception.
    if (frame_74d5959178b6ab86aa68e4ca7b1eef10 == cache_frame_74d5959178b6ab86aa68e4ca7b1eef10) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_74d5959178b6ab86aa68e4ca7b1eef10);
        cache_frame_74d5959178b6ab86aa68e4ca7b1eef10 = NULL;
    }

    assertFrameObject(frame_74d5959178b6ab86aa68e4ca7b1eef10);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_df);
    Py_DECREF(par_df);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_df);
    Py_DECREF(par_df);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__10_get_df_wrapper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_7792561c95b607851791dff0762b49e5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7792561c95b607851791dff0762b49e5 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7792561c95b607851791dff0762b49e5)) {
        Py_XDECREF(cache_frame_7792561c95b607851791dff0762b49e5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7792561c95b607851791dff0762b49e5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7792561c95b607851791dff0762b49e5 = MAKE_FUNCTION_FRAME(codeobj_7792561c95b607851791dff0762b49e5, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7792561c95b607851791dff0762b49e5->m_type_description == NULL);
    frame_7792561c95b607851791dff0762b49e5 = cache_frame_7792561c95b607851791dff0762b49e5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7792561c95b607851791dff0762b49e5);
    assert(Py_REFCNT(frame_7792561c95b607851791dff0762b49e5) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[19]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 70;

        goto frame_exception_exit_1;
    }
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7792561c95b607851791dff0762b49e5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7792561c95b607851791dff0762b49e5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7792561c95b607851791dff0762b49e5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7792561c95b607851791dff0762b49e5,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_7792561c95b607851791dff0762b49e5 == cache_frame_7792561c95b607851791dff0762b49e5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7792561c95b607851791dff0762b49e5);
        cache_frame_7792561c95b607851791dff0762b49e5 = NULL;
    }

    assertFrameObject(frame_7792561c95b607851791dff0762b49e5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__11_set_df_wrapper(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_wrapper = python_pars[0];
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        CHECK_OBJECT(par_wrapper);
        tmp_assign_source_1 = par_wrapper;
        UPDATE_STRING_DICT0(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_1);
    }
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_wrapper);
    Py_DECREF(par_wrapper);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__12_create_dataframe(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par_columns = python_pars[1];
    PyObject *var_wrapper = NULL;
    struct Nuitka_FrameObject *frame_ea8cfd30279ac0c201d8eb5dd20851a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ea8cfd30279ac0c201d8eb5dd20851a6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ea8cfd30279ac0c201d8eb5dd20851a6)) {
        Py_XDECREF(cache_frame_ea8cfd30279ac0c201d8eb5dd20851a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ea8cfd30279ac0c201d8eb5dd20851a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ea8cfd30279ac0c201d8eb5dd20851a6 = MAKE_FUNCTION_FRAME(codeobj_ea8cfd30279ac0c201d8eb5dd20851a6, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ea8cfd30279ac0c201d8eb5dd20851a6->m_type_description == NULL);
    frame_ea8cfd30279ac0c201d8eb5dd20851a6 = cache_frame_ea8cfd30279ac0c201d8eb5dd20851a6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ea8cfd30279ac0c201d8eb5dd20851a6);
    assert(Py_REFCNT(frame_ea8cfd30279ac0c201d8eb5dd20851a6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_ea8cfd30279ac0c201d8eb5dd20851a6->m_frame.f_lineno = 79;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_wrapper == NULL);
        var_wrapper = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_wrapper);
        tmp_called_instance_1 = var_wrapper;
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        CHECK_OBJECT(par_columns);
        tmp_args_element_value_2 = par_columns;
        frame_ea8cfd30279ac0c201d8eb5dd20851a6->m_frame.f_lineno = 80;
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


            exception_lineno = 80;
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
        exception_tb = MAKE_TRACEBACK(frame_ea8cfd30279ac0c201d8eb5dd20851a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ea8cfd30279ac0c201d8eb5dd20851a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ea8cfd30279ac0c201d8eb5dd20851a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ea8cfd30279ac0c201d8eb5dd20851a6,
        type_description_1,
        par_data,
        par_columns,
        var_wrapper
    );


    // Release cached frame if used for exception.
    if (frame_ea8cfd30279ac0c201d8eb5dd20851a6 == cache_frame_ea8cfd30279ac0c201d8eb5dd20851a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ea8cfd30279ac0c201d8eb5dd20851a6);
        cache_frame_ea8cfd30279ac0c201d8eb5dd20851a6 = NULL;
    }

    assertFrameObject(frame_ea8cfd30279ac0c201d8eb5dd20851a6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_wrapper);
    Py_DECREF(var_wrapper);
    var_wrapper = NULL;
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

    Py_XDECREF(var_wrapper);
    var_wrapper = NULL;
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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_columns);
    Py_DECREF(par_columns);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_columns);
    Py_DECREF(par_columns);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__13_is_dataframe(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_wrapper = NULL;
    struct Nuitka_FrameObject *frame_84330ab2ad05519b5608caf8852851fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_84330ab2ad05519b5608caf8852851fd = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_84330ab2ad05519b5608caf8852851fd)) {
        Py_XDECREF(cache_frame_84330ab2ad05519b5608caf8852851fd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_84330ab2ad05519b5608caf8852851fd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_84330ab2ad05519b5608caf8852851fd = MAKE_FUNCTION_FRAME(codeobj_84330ab2ad05519b5608caf8852851fd, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_84330ab2ad05519b5608caf8852851fd->m_type_description == NULL);
    frame_84330ab2ad05519b5608caf8852851fd = cache_frame_84330ab2ad05519b5608caf8852851fd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_84330ab2ad05519b5608caf8852851fd);
    assert(Py_REFCNT(frame_84330ab2ad05519b5608caf8852851fd) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_84330ab2ad05519b5608caf8852851fd->m_frame.f_lineno = 84;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_wrapper == NULL);
        var_wrapper = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_wrapper);
        tmp_called_instance_1 = var_wrapper;
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        frame_84330ab2ad05519b5608caf8852851fd->m_frame.f_lineno = 85;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[22], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_84330ab2ad05519b5608caf8852851fd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_84330ab2ad05519b5608caf8852851fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_84330ab2ad05519b5608caf8852851fd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_84330ab2ad05519b5608caf8852851fd,
        type_description_1,
        par_data,
        var_wrapper
    );


    // Release cached frame if used for exception.
    if (frame_84330ab2ad05519b5608caf8852851fd == cache_frame_84330ab2ad05519b5608caf8852851fd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_84330ab2ad05519b5608caf8852851fd);
        cache_frame_84330ab2ad05519b5608caf8852851fd = NULL;
    }

    assertFrameObject(frame_84330ab2ad05519b5608caf8852851fd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_wrapper);
    Py_DECREF(var_wrapper);
    var_wrapper = NULL;
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

    Py_XDECREF(var_wrapper);
    var_wrapper = NULL;
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


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__14_is_column(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_wrapper = NULL;
    struct Nuitka_FrameObject *frame_7656c4ca9744c13a742aa520d9183b89;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7656c4ca9744c13a742aa520d9183b89 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7656c4ca9744c13a742aa520d9183b89)) {
        Py_XDECREF(cache_frame_7656c4ca9744c13a742aa520d9183b89);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7656c4ca9744c13a742aa520d9183b89 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7656c4ca9744c13a742aa520d9183b89 = MAKE_FUNCTION_FRAME(codeobj_7656c4ca9744c13a742aa520d9183b89, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7656c4ca9744c13a742aa520d9183b89->m_type_description == NULL);
    frame_7656c4ca9744c13a742aa520d9183b89 = cache_frame_7656c4ca9744c13a742aa520d9183b89;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7656c4ca9744c13a742aa520d9183b89);
    assert(Py_REFCNT(frame_7656c4ca9744c13a742aa520d9183b89) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_7656c4ca9744c13a742aa520d9183b89->m_frame.f_lineno = 89;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_wrapper == NULL);
        var_wrapper = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_wrapper);
        tmp_called_instance_1 = var_wrapper;
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        frame_7656c4ca9744c13a742aa520d9183b89->m_frame.f_lineno = 90;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[23], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 90;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7656c4ca9744c13a742aa520d9183b89, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7656c4ca9744c13a742aa520d9183b89->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7656c4ca9744c13a742aa520d9183b89, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7656c4ca9744c13a742aa520d9183b89,
        type_description_1,
        par_data,
        var_wrapper
    );


    // Release cached frame if used for exception.
    if (frame_7656c4ca9744c13a742aa520d9183b89 == cache_frame_7656c4ca9744c13a742aa520d9183b89) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7656c4ca9744c13a742aa520d9183b89);
        cache_frame_7656c4ca9744c13a742aa520d9183b89 = NULL;
    }

    assertFrameObject(frame_7656c4ca9744c13a742aa520d9183b89);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_wrapper);
    Py_DECREF(var_wrapper);
    var_wrapper = NULL;
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

    Py_XDECREF(var_wrapper);
    var_wrapper = NULL;
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


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__15_concat(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_buffer = python_pars[0];
    PyObject *var_wrapper = NULL;
    struct Nuitka_FrameObject *frame_e66cd3015dee0bc20b34c2947c40bc1c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e66cd3015dee0bc20b34c2947c40bc1c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e66cd3015dee0bc20b34c2947c40bc1c)) {
        Py_XDECREF(cache_frame_e66cd3015dee0bc20b34c2947c40bc1c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e66cd3015dee0bc20b34c2947c40bc1c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e66cd3015dee0bc20b34c2947c40bc1c = MAKE_FUNCTION_FRAME(codeobj_e66cd3015dee0bc20b34c2947c40bc1c, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e66cd3015dee0bc20b34c2947c40bc1c->m_type_description == NULL);
    frame_e66cd3015dee0bc20b34c2947c40bc1c = cache_frame_e66cd3015dee0bc20b34c2947c40bc1c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e66cd3015dee0bc20b34c2947c40bc1c);
    assert(Py_REFCNT(frame_e66cd3015dee0bc20b34c2947c40bc1c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_e66cd3015dee0bc20b34c2947c40bc1c->m_frame.f_lineno = 94;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_wrapper == NULL);
        var_wrapper = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_wrapper);
        tmp_called_instance_1 = var_wrapper;
        CHECK_OBJECT(par_buffer);
        tmp_args_element_value_1 = par_buffer;
        frame_e66cd3015dee0bc20b34c2947c40bc1c->m_frame.f_lineno = 95;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[16], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e66cd3015dee0bc20b34c2947c40bc1c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e66cd3015dee0bc20b34c2947c40bc1c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e66cd3015dee0bc20b34c2947c40bc1c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e66cd3015dee0bc20b34c2947c40bc1c,
        type_description_1,
        par_buffer,
        var_wrapper
    );


    // Release cached frame if used for exception.
    if (frame_e66cd3015dee0bc20b34c2947c40bc1c == cache_frame_e66cd3015dee0bc20b34c2947c40bc1c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e66cd3015dee0bc20b34c2947c40bc1c);
        cache_frame_e66cd3015dee0bc20b34c2947c40bc1c = NULL;
    }

    assertFrameObject(frame_e66cd3015dee0bc20b34c2947c40bc1c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_wrapper);
    Py_DECREF(var_wrapper);
    var_wrapper = NULL;
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

    Py_XDECREF(var_wrapper);
    var_wrapper = NULL;
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
    CHECK_OBJECT(par_buffer);
    Py_DECREF(par_buffer);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_buffer);
    Py_DECREF(par_buffer);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__16_iterate(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *var_wrapper = NULL;
    struct Nuitka_FrameObject *frame_bbfffea9f4c38a6f940503bd9138062f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bbfffea9f4c38a6f940503bd9138062f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bbfffea9f4c38a6f940503bd9138062f)) {
        Py_XDECREF(cache_frame_bbfffea9f4c38a6f940503bd9138062f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bbfffea9f4c38a6f940503bd9138062f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bbfffea9f4c38a6f940503bd9138062f = MAKE_FUNCTION_FRAME(codeobj_bbfffea9f4c38a6f940503bd9138062f, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bbfffea9f4c38a6f940503bd9138062f->m_type_description == NULL);
    frame_bbfffea9f4c38a6f940503bd9138062f = cache_frame_bbfffea9f4c38a6f940503bd9138062f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bbfffea9f4c38a6f940503bd9138062f);
    assert(Py_REFCNT(frame_bbfffea9f4c38a6f940503bd9138062f) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_bbfffea9f4c38a6f940503bd9138062f->m_frame.f_lineno = 99;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_wrapper == NULL);
        var_wrapper = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_wrapper);
        tmp_called_instance_1 = var_wrapper;
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        frame_bbfffea9f4c38a6f940503bd9138062f->m_frame.f_lineno = 100;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[14], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bbfffea9f4c38a6f940503bd9138062f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bbfffea9f4c38a6f940503bd9138062f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bbfffea9f4c38a6f940503bd9138062f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bbfffea9f4c38a6f940503bd9138062f,
        type_description_1,
        par_data,
        var_wrapper
    );


    // Release cached frame if used for exception.
    if (frame_bbfffea9f4c38a6f940503bd9138062f == cache_frame_bbfffea9f4c38a6f940503bd9138062f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bbfffea9f4c38a6f940503bd9138062f);
        cache_frame_bbfffea9f4c38a6f940503bd9138062f = NULL;
    }

    assertFrameObject(frame_bbfffea9f4c38a6f940503bd9138062f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_wrapper);
    Py_DECREF(var_wrapper);
    var_wrapper = NULL;
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

    Py_XDECREF(var_wrapper);
    var_wrapper = NULL;
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


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__17_get_item(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_data = python_pars[0];
    PyObject *par_idx = python_pars[1];
    PyObject *var_wrapper = NULL;
    struct Nuitka_FrameObject *frame_69fc453282653431f5c2824c94371d6e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_69fc453282653431f5c2824c94371d6e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_69fc453282653431f5c2824c94371d6e)) {
        Py_XDECREF(cache_frame_69fc453282653431f5c2824c94371d6e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69fc453282653431f5c2824c94371d6e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69fc453282653431f5c2824c94371d6e = MAKE_FUNCTION_FRAME(codeobj_69fc453282653431f5c2824c94371d6e, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_69fc453282653431f5c2824c94371d6e->m_type_description == NULL);
    frame_69fc453282653431f5c2824c94371d6e = cache_frame_69fc453282653431f5c2824c94371d6e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_69fc453282653431f5c2824c94371d6e);
    assert(Py_REFCNT(frame_69fc453282653431f5c2824c94371d6e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_69fc453282653431f5c2824c94371d6e->m_frame.f_lineno = 104;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_wrapper == NULL);
        var_wrapper = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_wrapper);
        tmp_called_instance_1 = var_wrapper;
        CHECK_OBJECT(par_data);
        tmp_args_element_value_1 = par_data;
        CHECK_OBJECT(par_idx);
        tmp_args_element_value_2 = par_idx;
        frame_69fc453282653431f5c2824c94371d6e->m_frame.f_lineno = 105;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
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
        exception_tb = MAKE_TRACEBACK(frame_69fc453282653431f5c2824c94371d6e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69fc453282653431f5c2824c94371d6e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69fc453282653431f5c2824c94371d6e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69fc453282653431f5c2824c94371d6e,
        type_description_1,
        par_data,
        par_idx,
        var_wrapper
    );


    // Release cached frame if used for exception.
    if (frame_69fc453282653431f5c2824c94371d6e == cache_frame_69fc453282653431f5c2824c94371d6e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_69fc453282653431f5c2824c94371d6e);
        cache_frame_69fc453282653431f5c2824c94371d6e = NULL;
    }

    assertFrameObject(frame_69fc453282653431f5c2824c94371d6e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_wrapper);
    Py_DECREF(var_wrapper);
    var_wrapper = NULL;
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

    Py_XDECREF(var_wrapper);
    var_wrapper = NULL;
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
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_data);
    Py_DECREF(par_data);
    CHECK_OBJECT(par_idx);
    Py_DECREF(par_idx);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__18_get_len(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_df = python_pars[0];
    PyObject *var_wrapper = NULL;
    struct Nuitka_FrameObject *frame_f39781f25acf4e16cce5ec56df6d5b21;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f39781f25acf4e16cce5ec56df6d5b21 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f39781f25acf4e16cce5ec56df6d5b21)) {
        Py_XDECREF(cache_frame_f39781f25acf4e16cce5ec56df6d5b21);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f39781f25acf4e16cce5ec56df6d5b21 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f39781f25acf4e16cce5ec56df6d5b21 = MAKE_FUNCTION_FRAME(codeobj_f39781f25acf4e16cce5ec56df6d5b21, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f39781f25acf4e16cce5ec56df6d5b21->m_type_description == NULL);
    frame_f39781f25acf4e16cce5ec56df6d5b21 = cache_frame_f39781f25acf4e16cce5ec56df6d5b21;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f39781f25acf4e16cce5ec56df6d5b21);
    assert(Py_REFCNT(frame_f39781f25acf4e16cce5ec56df6d5b21) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_f39781f25acf4e16cce5ec56df6d5b21->m_frame.f_lineno = 109;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_wrapper == NULL);
        var_wrapper = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_wrapper);
        tmp_called_instance_1 = var_wrapper;
        CHECK_OBJECT(par_df);
        tmp_args_element_value_1 = par_df;
        frame_f39781f25acf4e16cce5ec56df6d5b21->m_frame.f_lineno = 110;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[25], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f39781f25acf4e16cce5ec56df6d5b21, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f39781f25acf4e16cce5ec56df6d5b21->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f39781f25acf4e16cce5ec56df6d5b21, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f39781f25acf4e16cce5ec56df6d5b21,
        type_description_1,
        par_df,
        var_wrapper
    );


    // Release cached frame if used for exception.
    if (frame_f39781f25acf4e16cce5ec56df6d5b21 == cache_frame_f39781f25acf4e16cce5ec56df6d5b21) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f39781f25acf4e16cce5ec56df6d5b21);
        cache_frame_f39781f25acf4e16cce5ec56df6d5b21 = NULL;
    }

    assertFrameObject(frame_f39781f25acf4e16cce5ec56df6d5b21);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_wrapper);
    Py_DECREF(var_wrapper);
    var_wrapper = NULL;
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

    Py_XDECREF(var_wrapper);
    var_wrapper = NULL;
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
    CHECK_OBJECT(par_df);
    Py_DECREF(par_df);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_df);
    Py_DECREF(par_df);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__10_get_df_wrapper() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__10_get_df_wrapper,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7792561c95b607851791dff0762b49e5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__11_set_df_wrapper() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__11_set_df_wrapper,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_958c01e93259c100b76873a5d3498047,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__12_create_dataframe(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__12_create_dataframe,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ea8cfd30279ac0c201d8eb5dd20851a6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__13_is_dataframe() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__13_is_dataframe,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_84330ab2ad05519b5608caf8852851fd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__14_is_column() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__14_is_column,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7656c4ca9744c13a742aa520d9183b89,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__15_concat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__15_concat,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e66cd3015dee0bc20b34c2947c40bc1c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__16_iterate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__16_iterate,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bbfffea9f4c38a6f940503bd9138062f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__17_get_item() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__17_get_item,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_69fc453282653431f5c2824c94371d6e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__18_get_len() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__18_get_len,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f39781f25acf4e16cce5ec56df6d5b21,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__1__try_import_pandas(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__1__try_import_pandas,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ca3d5fe4da2f3d618d7e035d10014669,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__2__with_pandas(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__2__with_pandas,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4e2b20d6b1a016b93da14a5f5c9f6b08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__3_create_dataframe() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__3_create_dataframe,
        mod_consts[21],
#if PYTHON_VERSION >= 0x300
        mod_consts[37],
#endif
        codeobj_c765070a34a071e2194ed53afb2762ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__4_is_dataframe() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__4_is_dataframe,
        mod_consts[22],
#if PYTHON_VERSION >= 0x300
        mod_consts[38],
#endif
        codeobj_5b60ef82593305a0b4705fad46e9ae8f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__5_is_column() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__5_is_column,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        mod_consts[39],
#endif
        codeobj_c844e134e503daba37998431b9ef4f08,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        mod_consts[15],
#endif
        codeobj_b10c8cfb2a6da898d1be710c79d5ce07,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__7_concat() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__7_concat,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[40],
#endif
        codeobj_4354567c3b12e907f1058c58cc7270bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__8_get_item() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__8_get_item,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        mod_consts[41],
#endif
        codeobj_3116f66fb906d42ca2e5c7e2971620e9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__9_get_len() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__9_get_len,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        mod_consts[42],
#endif
        codeobj_74d5959178b6ab86aa68e4ca7b1eef10,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
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

function_impl_code functable_torch$utils$data$datapipes$dataframe$dataframe_wrapper[] = {
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__1__try_import_pandas,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__2__with_pandas,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__3_create_dataframe,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__4_is_dataframe,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__5_is_column,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__7_concat,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__8_get_item,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__9_get_len,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__10_get_df_wrapper,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__11_set_df_wrapper,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__12_create_dataframe,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__13_is_dataframe,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__14_is_column,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__15_concat,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__16_iterate,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__17_get_item,
    impl_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__18_get_len,
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

    function_impl_code *current = functable_torch$utils$data$datapipes$dataframe$dataframe_wrapper;
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

    if (offset > sizeof(functable_torch$utils$data$datapipes$dataframe$dataframe_wrapper) || offset < 0) {
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
        functable_torch$utils$data$datapipes$dataframe$dataframe_wrapper[offset],
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
        module_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
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
PyObject *modulecode_torch$utils$data$datapipes$dataframe$dataframe_wrapper(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.utils.data.datapipes.dataframe.dataframe_wrapper");

    // Store the module for future use.
    module_torch$utils$data$datapipes$dataframe$dataframe_wrapper = module;

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
        PRINT_STRING("torch.utils.data.datapipes.dataframe.dataframe_wrapper: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.utils.data.datapipes.dataframe.dataframe_wrapper: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.utils.data.datapipes.dataframe.dataframe_wrapper: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$utils$data$datapipes$dataframe$dataframe_wrapper\n");

    moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper = MODULE_DICT(module_torch$utils$data$datapipes$dataframe$dataframe_wrapper);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[61]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$utils$data$datapipes$dataframe$dataframe_wrapper);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_2ef5c6bfb8a4762a1f9583c52abb2756;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
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
        UPDATE_STRING_DICT0(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_2);
    }
    frame_2ef5c6bfb8a4762a1f9583c52abb2756 = MAKE_MODULE_FRAME(codeobj_2ef5c6bfb8a4762a1f9583c52abb2756, module_torch$utils$data$datapipes$dataframe$dataframe_wrapper);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2ef5c6bfb8a4762a1f9583c52abb2756);
    assert(Py_REFCNT(frame_2ef5c6bfb8a4762a1f9583c52abb2756) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[29], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[30], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_annotations_1;
        tmp_annotations_1 = DICT_COPY(mod_consts[32]);


        tmp_assign_source_6 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__1__try_import_pandas(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_annotations_2;
        tmp_annotations_2 = DICT_COPY(mod_consts[32]);


        tmp_assign_source_7 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__2__with_pandas(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        tmp_assign_source_9 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_9;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[33];
        tmp_res = PyDict_SetItem(locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21, mod_consts[34], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[35];
        tmp_res = PyDict_SetItem(locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21, mod_consts[36], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_classmethod_arg_1;


            tmp_classmethod_arg_1 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__3_create_dataframe();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21, mod_consts[21], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_classmethod_arg_2;


            tmp_classmethod_arg_2 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__4_is_dataframe();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21, mod_consts[22], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_classmethod_arg_3;


            tmp_classmethod_arg_3 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__5_is_column();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_3);
            Py_DECREF(tmp_classmethod_arg_3);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21, mod_consts[23], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_classmethod_arg_4;


            tmp_classmethod_arg_4 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__6_iterate();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_4);
            Py_DECREF(tmp_classmethod_arg_4);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21, mod_consts[14], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_classmethod_arg_5;


            tmp_classmethod_arg_5 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__7_concat();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_5);
            Py_DECREF(tmp_classmethod_arg_5);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21, mod_consts[16], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_classmethod_arg_6;


            tmp_classmethod_arg_6 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__8_get_item();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_6);
            Py_DECREF(tmp_classmethod_arg_6);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21, mod_consts[24], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_classmethod_arg_7;


            tmp_classmethod_arg_7 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__9_get_len();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_7);
            Py_DECREF(tmp_classmethod_arg_7);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21, mod_consts[25], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[35];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[43];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_2ef5c6bfb8a4762a1f9583c52abb2756->m_frame.f_lineno = 21;
            tmp_assign_source_11 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_11;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_10 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21);
        locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21 = NULL;
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

        Py_DECREF(locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21);
        locals_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$class__1_PandasWrapper_21 = NULL;
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
        exception_lineno = 21;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_10);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2ef5c6bfb8a4762a1f9583c52abb2756, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2ef5c6bfb8a4762a1f9583c52abb2756->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2ef5c6bfb8a4762a1f9583c52abb2756, exception_lineno);
    }



    assertFrameObject(frame_2ef5c6bfb8a4762a1f9583c52abb2756);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_assign_source_12 == NULL)) {
            tmp_assign_source_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        assert(!(tmp_assign_source_12 == NULL));
        UPDATE_STRING_DICT0(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__10_get_df_wrapper();

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__11_set_df_wrapper();

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[45];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_15 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__12_create_dataframe(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__13_is_dataframe();

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__14_is_column();

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__15_concat();

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;


        tmp_assign_source_19 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__16_iterate();

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__17_get_item();

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;


        tmp_assign_source_21 = MAKE_FUNCTION_torch$utils$data$datapipes$dataframe$dataframe_wrapper$$$function__18_get_len();

        UPDATE_STRING_DICT1(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_21);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.utils.data.datapipes.dataframe.dataframe_wrapper", false);

    Py_INCREF(module_torch$utils$data$datapipes$dataframe$dataframe_wrapper);
    return module_torch$utils$data$datapipes$dataframe$dataframe_wrapper;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$utils$data$datapipes$dataframe$dataframe_wrapper, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$utils$data$datapipes$dataframe$dataframe_wrapper", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
