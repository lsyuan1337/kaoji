/* Generated code for Python module 'torchvision.ops._register_onnx_ops'
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

/* The "module_torchvision$ops$_register_onnx_ops" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torchvision$ops$_register_onnx_ops;
PyDictObject *moduledict_torchvision$ops$_register_onnx_ops;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[67];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[67];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torchvision.ops._register_onnx_ops"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 67; i++) {
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
void checkModuleConstants_torchvision$ops$_register_onnx_ops(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 67; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8464f7e49885b291ce93aba7a0208961;
static PyCodeObject *codeobj_9727024669fb2790fc6231e52d2463e6;
static PyCodeObject *codeobj_e85941c7954d9683e91b2ea6afb04e0c;
static PyCodeObject *codeobj_3ab78617eaa44a96b81b4792a4a6a284;
static PyCodeObject *codeobj_ad7462c5030cb1d5ca8bad7cbdf09edc;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[59]); CHECK_OBJECT(module_filename_obj);
    codeobj_8464f7e49885b291ce93aba7a0208961 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[60], mod_consts[60], NULL, NULL, 0, 0, 0);
    codeobj_9727024669fb2790fc6231e52d2463e6 = MAKE_CODE_OBJECT(module_filename_obj, 9, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[61], NULL, 0, 0, 0);
    codeobj_e85941c7954d9683e91b2ea6afb04e0c = MAKE_CODE_OBJECT(module_filename_obj, 23, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[16], mod_consts[16], mod_consts[62], mod_consts[63], 8, 0, 0);
    codeobj_3ab78617eaa44a96b81b4792a4a6a284 = MAKE_CODE_OBJECT(module_filename_obj, 55, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[64], NULL, 6, 0, 0);
    codeobj_ad7462c5030cb1d5ca8bad7cbdf09edc = MAKE_CODE_OBJECT(module_filename_obj, 14, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[13], mod_consts[13], mod_consts[65], mod_consts[5], 4, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op();


static PyObject *MAKE_FUNCTION_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__1_symbolic_multi_label_nms(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__2_roi_align(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__3_roi_pool();


// The module function definitions.
static PyObject *impl_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_parse_args = NULL;
    struct Nuitka_CellObject *var_select = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_squeeze = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var_unsqueeze = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var__cast_Long = Nuitka_Cell_Empty();
    PyObject *var_symbolic_multi_label_nms = NULL;
    PyObject *var_roi_align = NULL;
    PyObject *var_roi_pool = NULL;
    PyObject *var_register_custom_op_symbolic = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_9727024669fb2790fc6231e52d2463e6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_9727024669fb2790fc6231e52d2463e6 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9727024669fb2790fc6231e52d2463e6)) {
        Py_XDECREF(cache_frame_9727024669fb2790fc6231e52d2463e6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9727024669fb2790fc6231e52d2463e6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9727024669fb2790fc6231e52d2463e6 = MAKE_FUNCTION_FRAME(codeobj_9727024669fb2790fc6231e52d2463e6, module_torchvision$ops$_register_onnx_ops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9727024669fb2790fc6231e52d2463e6->m_type_description == NULL);
    frame_9727024669fb2790fc6231e52d2463e6 = cache_frame_9727024669fb2790fc6231e52d2463e6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9727024669fb2790fc6231e52d2463e6);
    assert(Py_REFCNT(frame_9727024669fb2790fc6231e52d2463e6) == 2);

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
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$ops$_register_onnx_ops;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[1];
        tmp_level_value_1 = mod_consts[2];
        frame_9727024669fb2790fc6231e52d2463e6->m_frame.f_lineno = 10;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torchvision$ops$_register_onnx_ops,
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


            exception_lineno = 10;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        assert(var_parse_args == NULL);
        var_parse_args = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[4];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torchvision$ops$_register_onnx_ops;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[5];
        tmp_level_value_2 = mod_consts[2];
        frame_9727024669fb2790fc6231e52d2463e6->m_frame.f_lineno = 11;
        tmp_assign_source_2 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_3 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torchvision$ops$_register_onnx_ops,
                mod_consts[6],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_3 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[6]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "occccoooo";
            goto try_except_handler_2;
        }
        assert(Nuitka_Cell_GET(var_select) == NULL);
        PyCell_SET(var_select, tmp_assign_source_3);

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torchvision$ops$_register_onnx_ops,
                mod_consts[7],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[7]);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "occccoooo";
            goto try_except_handler_2;
        }
        assert(Nuitka_Cell_GET(var_squeeze) == NULL);
        PyCell_SET(var_squeeze, tmp_assign_source_4);

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torchvision$ops$_register_onnx_ops,
                mod_consts[8],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[8]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "occccoooo";
            goto try_except_handler_2;
        }
        assert(Nuitka_Cell_GET(var_unsqueeze) == NULL);
        PyCell_SET(var_unsqueeze, tmp_assign_source_5);

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
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[9];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torchvision$ops$_register_onnx_ops;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[10];
        tmp_level_value_3 = mod_consts[2];
        frame_9727024669fb2790fc6231e52d2463e6->m_frame.f_lineno = 12;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torchvision$ops$_register_onnx_ops,
                mod_consts[11],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[11]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        assert(Nuitka_Cell_GET(var__cast_Long) == NULL);
        PyCell_SET(var__cast_Long, tmp_assign_source_6);

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        struct Nuitka_CellObject *tmp_closure_1[3];
        CHECK_OBJECT(var_parse_args);
        tmp_called_value_2 = var_parse_args;
        frame_9727024669fb2790fc6231e52d2463e6->m_frame.f_lineno = 14;
        tmp_called_value_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_2, mod_consts[12]);

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }

        tmp_closure_1[0] = var_select;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_squeeze;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = var_unsqueeze;
        Py_INCREF(tmp_closure_1[2]);

        tmp_args_element_value_1 = MAKE_FUNCTION_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__1_symbolic_multi_label_nms(tmp_closure_1);

        frame_9727024669fb2790fc6231e52d2463e6->m_frame.f_lineno = 14;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        assert(var_symbolic_multi_label_nms == NULL);
        var_symbolic_multi_label_nms = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        struct Nuitka_CellObject *tmp_closure_2[3];
        CHECK_OBJECT(var_parse_args);
        tmp_called_value_4 = var_parse_args;
        frame_9727024669fb2790fc6231e52d2463e6->m_frame.f_lineno = 23;
        tmp_called_value_3 = CALL_FUNCTION_WITH_POSARGS7(tmp_called_value_4, mod_consts[15]);

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }

        tmp_closure_2[0] = var__cast_Long;
        Py_INCREF(tmp_closure_2[0]);
        tmp_closure_2[1] = var_select;
        Py_INCREF(tmp_closure_2[1]);
        tmp_closure_2[2] = var_squeeze;
        Py_INCREF(tmp_closure_2[2]);

        tmp_args_element_value_2 = MAKE_FUNCTION_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__2_roi_align(tmp_closure_2);

        frame_9727024669fb2790fc6231e52d2463e6->m_frame.f_lineno = 23;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        assert(var_roi_align == NULL);
        var_roi_align = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_parse_args);
        tmp_called_value_6 = var_parse_args;
        frame_9727024669fb2790fc6231e52d2463e6->m_frame.f_lineno = 55;
        tmp_called_value_5 = CALL_FUNCTION_WITH_POSARGS5(tmp_called_value_6, mod_consts[18]);

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }


        tmp_args_element_value_3 = MAKE_FUNCTION_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__3_roi_pool();

        frame_9727024669fb2790fc6231e52d2463e6->m_frame.f_lineno = 55;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        assert(var_roi_pool == NULL);
        var_roi_pool = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[21];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torchvision$ops$_register_onnx_ops;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[22];
        tmp_level_value_4 = mod_consts[2];
        frame_9727024669fb2790fc6231e52d2463e6->m_frame.f_lineno = 62;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torchvision$ops$_register_onnx_ops,
                mod_consts[23],
                mod_consts[2]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        assert(var_register_custom_op_symbolic == NULL);
        var_register_custom_op_symbolic = tmp_assign_source_10;
    }
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(var_register_custom_op_symbolic);
        tmp_called_value_7 = var_register_custom_op_symbolic;
        tmp_args_element_value_4 = mod_consts[24];
        CHECK_OBJECT(var_symbolic_multi_label_nms);
        tmp_args_element_value_5 = var_symbolic_multi_label_nms;
        tmp_args_element_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_6 == NULL)) {
            tmp_args_element_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        frame_9727024669fb2790fc6231e52d2463e6->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(var_register_custom_op_symbolic);
        tmp_called_value_8 = var_register_custom_op_symbolic;
        tmp_args_element_value_7 = mod_consts[26];
        CHECK_OBJECT(var_roi_align);
        tmp_args_element_value_8 = var_roi_align;
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        frame_9727024669fb2790fc6231e52d2463e6->m_frame.f_lineno = 65;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        CHECK_OBJECT(var_register_custom_op_symbolic);
        tmp_called_value_9 = var_register_custom_op_symbolic;
        tmp_args_element_value_10 = mod_consts[27];
        CHECK_OBJECT(var_roi_pool);
        tmp_args_element_value_11 = var_roi_pool;
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        frame_9727024669fb2790fc6231e52d2463e6->m_frame.f_lineno = 66;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_9, call_args);
        }

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "occccoooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9727024669fb2790fc6231e52d2463e6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9727024669fb2790fc6231e52d2463e6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9727024669fb2790fc6231e52d2463e6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9727024669fb2790fc6231e52d2463e6,
        type_description_1,
        var_parse_args,
        var_select,
        var_squeeze,
        var_unsqueeze,
        var__cast_Long,
        var_symbolic_multi_label_nms,
        var_roi_align,
        var_roi_pool,
        var_register_custom_op_symbolic
    );


    // Release cached frame if used for exception.
    if (frame_9727024669fb2790fc6231e52d2463e6 == cache_frame_9727024669fb2790fc6231e52d2463e6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9727024669fb2790fc6231e52d2463e6);
        cache_frame_9727024669fb2790fc6231e52d2463e6 = NULL;
    }

    assertFrameObject(frame_9727024669fb2790fc6231e52d2463e6);

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
    CHECK_OBJECT(var_parse_args);
    Py_DECREF(var_parse_args);
    var_parse_args = NULL;
    CHECK_OBJECT(var_select);
    Py_DECREF(var_select);
    var_select = NULL;
    CHECK_OBJECT(var_squeeze);
    Py_DECREF(var_squeeze);
    var_squeeze = NULL;
    CHECK_OBJECT(var_unsqueeze);
    Py_DECREF(var_unsqueeze);
    var_unsqueeze = NULL;
    CHECK_OBJECT(var__cast_Long);
    Py_DECREF(var__cast_Long);
    var__cast_Long = NULL;
    CHECK_OBJECT(var_symbolic_multi_label_nms);
    Py_DECREF(var_symbolic_multi_label_nms);
    var_symbolic_multi_label_nms = NULL;
    CHECK_OBJECT(var_roi_align);
    Py_DECREF(var_roi_align);
    var_roi_align = NULL;
    CHECK_OBJECT(var_roi_pool);
    Py_DECREF(var_roi_pool);
    var_roi_pool = NULL;
    CHECK_OBJECT(var_register_custom_op_symbolic);
    Py_DECREF(var_register_custom_op_symbolic);
    var_register_custom_op_symbolic = NULL;
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

    Py_XDECREF(var_parse_args);
    var_parse_args = NULL;
    CHECK_OBJECT(var_select);
    Py_DECREF(var_select);
    var_select = NULL;
    CHECK_OBJECT(var_squeeze);
    Py_DECREF(var_squeeze);
    var_squeeze = NULL;
    CHECK_OBJECT(var_unsqueeze);
    Py_DECREF(var_unsqueeze);
    var_unsqueeze = NULL;
    CHECK_OBJECT(var__cast_Long);
    Py_DECREF(var__cast_Long);
    var__cast_Long = NULL;
    Py_XDECREF(var_symbolic_multi_label_nms);
    var_symbolic_multi_label_nms = NULL;
    Py_XDECREF(var_roi_align);
    var_roi_align = NULL;
    Py_XDECREF(var_roi_pool);
    var_roi_pool = NULL;
    Py_XDECREF(var_register_custom_op_symbolic);
    var_register_custom_op_symbolic = NULL;
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


static PyObject *impl_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__1_symbolic_multi_label_nms(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_boxes = python_pars[1];
    PyObject *par_scores = python_pars[2];
    PyObject *par_iou_threshold = python_pars[3];
    PyObject *var_max_output_per_class = NULL;
    PyObject *var_nms_out = NULL;
    struct Nuitka_FrameObject *frame_ad7462c5030cb1d5ca8bad7cbdf09edc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ad7462c5030cb1d5ca8bad7cbdf09edc = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ad7462c5030cb1d5ca8bad7cbdf09edc)) {
        Py_XDECREF(cache_frame_ad7462c5030cb1d5ca8bad7cbdf09edc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ad7462c5030cb1d5ca8bad7cbdf09edc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ad7462c5030cb1d5ca8bad7cbdf09edc = MAKE_FUNCTION_FRAME(codeobj_ad7462c5030cb1d5ca8bad7cbdf09edc, module_torchvision$ops$_register_onnx_ops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ad7462c5030cb1d5ca8bad7cbdf09edc->m_type_description == NULL);
    frame_ad7462c5030cb1d5ca8bad7cbdf09edc = cache_frame_ad7462c5030cb1d5ca8bad7cbdf09edc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ad7462c5030cb1d5ca8bad7cbdf09edc);
    assert(Py_REFCNT(frame_ad7462c5030cb1d5ca8bad7cbdf09edc) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 16;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        CHECK_OBJECT(par_boxes);
        tmp_args_element_value_2 = par_boxes;
        tmp_args_element_value_3 = mod_consts[2];
        frame_ad7462c5030cb1d5ca8bad7cbdf09edc->m_frame.f_lineno = 16;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_boxes;
            assert(old != NULL);
            par_boxes = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 17;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(par_g);
        tmp_args_element_value_4 = par_g;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[8]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 17;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(par_g);
        tmp_args_element_value_6 = par_g;
        CHECK_OBJECT(par_scores);
        tmp_args_element_value_7 = par_scores;
        tmp_args_element_value_8 = mod_consts[2];
        frame_ad7462c5030cb1d5ca8bad7cbdf09edc->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_args_element_value_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[2];
        frame_ad7462c5030cb1d5ca8bad7cbdf09edc->m_frame.f_lineno = 17;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_9};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_scores;
            assert(old != NULL);
            par_scores = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_posargs_values_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 18;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 18;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 18;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[31]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 18;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[32], "l");
        frame_ad7462c5030cb1d5ca8bad7cbdf09edc->m_frame.f_lineno = 18;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_5, tmp_call_posargs_values_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_call_posargs_values_1);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 18;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        frame_ad7462c5030cb1d5ca8bad7cbdf09edc->m_frame.f_lineno = 18;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_4, mod_consts[34], kw_values, mod_consts[35]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 18;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_max_output_per_class == NULL);
        var_max_output_per_class = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_g);
        tmp_expression_value_4 = par_g;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[28]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 19;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[30]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 19;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_iou_threshold);
        tmp_list_element_1 = par_iou_threshold;
        tmp_kw_call_arg_value_0_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM0(tmp_kw_call_arg_value_0_1, 0, tmp_list_element_1);
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 19;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[36]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 19;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        frame_ad7462c5030cb1d5ca8bad7cbdf09edc->m_frame.f_lineno = 19;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_kw_call_value_0_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 19;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        frame_ad7462c5030cb1d5ca8bad7cbdf09edc->m_frame.f_lineno = 19;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_6, mod_consts[34], kw_values, mod_consts[35]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_iou_threshold;
            assert(old != NULL);
            par_iou_threshold = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        CHECK_OBJECT(par_g);
        tmp_called_instance_1 = par_g;
        tmp_args_element_value_10 = mod_consts[37];
        CHECK_OBJECT(par_boxes);
        tmp_args_element_value_11 = par_boxes;
        CHECK_OBJECT(par_scores);
        tmp_args_element_value_12 = par_scores;
        CHECK_OBJECT(var_max_output_per_class);
        tmp_args_element_value_13 = var_max_output_per_class;
        CHECK_OBJECT(par_iou_threshold);
        tmp_args_element_value_14 = par_iou_threshold;
        frame_ad7462c5030cb1d5ca8bad7cbdf09edc->m_frame.f_lineno = 20;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_5 = CALL_METHOD_WITH_ARGS5(
                tmp_called_instance_1,
                mod_consts[28],
                call_args
            );
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_nms_out == NULL);
        var_nms_out = tmp_assign_source_5;
    }
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_posargs_values_2;
        PyObject *tmp_args_element_value_21;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_8 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_g);
        tmp_args_element_value_15 = par_g;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 21;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_9 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_g);
        tmp_args_element_value_17 = par_g;
        CHECK_OBJECT(var_nms_out);
        tmp_args_element_value_18 = var_nms_out;
        tmp_args_element_value_19 = mod_consts[38];
        CHECK_OBJECT(par_g);
        tmp_expression_value_7 = par_g;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[28]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 21;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[30]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 21;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 21;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[31]);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 21;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_2 = DEEP_COPY_TUPLE_GUIDED(mod_consts[39], "l");
        frame_ad7462c5030cb1d5ca8bad7cbdf09edc->m_frame.f_lineno = 21;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_5};
            tmp_kw_call_value_0_4 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_11, tmp_call_posargs_values_2, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_call_posargs_values_2);
        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 21;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        frame_ad7462c5030cb1d5ca8bad7cbdf09edc->m_frame.f_lineno = 21;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_args_element_value_20 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_10, mod_consts[34], kw_values, mod_consts[35]);
        }

        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        frame_ad7462c5030cb1d5ca8bad7cbdf09edc->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_args_element_value_16 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_9, call_args);
        }

        Py_DECREF(tmp_args_element_value_20);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = mod_consts[38];
        frame_ad7462c5030cb1d5ca8bad7cbdf09edc->m_frame.f_lineno = 21;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_21};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_args_element_value_16);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooooooccc";
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
        exception_tb = MAKE_TRACEBACK(frame_ad7462c5030cb1d5ca8bad7cbdf09edc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ad7462c5030cb1d5ca8bad7cbdf09edc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ad7462c5030cb1d5ca8bad7cbdf09edc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ad7462c5030cb1d5ca8bad7cbdf09edc,
        type_description_1,
        par_g,
        par_boxes,
        par_scores,
        par_iou_threshold,
        var_max_output_per_class,
        var_nms_out,
        self->m_closure[2],
        self->m_closure[1],
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_ad7462c5030cb1d5ca8bad7cbdf09edc == cache_frame_ad7462c5030cb1d5ca8bad7cbdf09edc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ad7462c5030cb1d5ca8bad7cbdf09edc);
        cache_frame_ad7462c5030cb1d5ca8bad7cbdf09edc = NULL;
    }

    assertFrameObject(frame_ad7462c5030cb1d5ca8bad7cbdf09edc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_boxes);
    Py_DECREF(par_boxes);
    par_boxes = NULL;
    CHECK_OBJECT(par_scores);
    Py_DECREF(par_scores);
    par_scores = NULL;
    CHECK_OBJECT(par_iou_threshold);
    Py_DECREF(par_iou_threshold);
    par_iou_threshold = NULL;
    CHECK_OBJECT(var_max_output_per_class);
    Py_DECREF(var_max_output_per_class);
    var_max_output_per_class = NULL;
    CHECK_OBJECT(var_nms_out);
    Py_DECREF(var_nms_out);
    var_nms_out = NULL;
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

    Py_XDECREF(par_boxes);
    par_boxes = NULL;
    Py_XDECREF(par_scores);
    par_scores = NULL;
    Py_XDECREF(par_iou_threshold);
    par_iou_threshold = NULL;
    Py_XDECREF(var_max_output_per_class);
    var_max_output_per_class = NULL;
    Py_XDECREF(var_nms_out);
    var_nms_out = NULL;
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


static PyObject *impl_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__2_roi_align(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_rois = python_pars[2];
    PyObject *par_spatial_scale = python_pars[3];
    PyObject *par_pooled_height = python_pars[4];
    PyObject *par_pooled_width = python_pars[5];
    PyObject *par_sampling_ratio = python_pars[6];
    PyObject *par_aligned = python_pars[7];
    PyObject *var_batch_indices = NULL;
    struct Nuitka_FrameObject *frame_e85941c7954d9683e91b2ea6afb04e0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e85941c7954d9683e91b2ea6afb04e0c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e85941c7954d9683e91b2ea6afb04e0c)) {
        Py_XDECREF(cache_frame_e85941c7954d9683e91b2ea6afb04e0c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e85941c7954d9683e91b2ea6afb04e0c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e85941c7954d9683e91b2ea6afb04e0c = MAKE_FUNCTION_FRAME(codeobj_e85941c7954d9683e91b2ea6afb04e0c, module_torchvision$ops$_register_onnx_ops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e85941c7954d9683e91b2ea6afb04e0c->m_type_description == NULL);
    frame_e85941c7954d9683e91b2ea6afb04e0c = cache_frame_e85941c7954d9683e91b2ea6afb04e0c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e85941c7954d9683e91b2ea6afb04e0c);
    assert(Py_REFCNT(frame_e85941c7954d9683e91b2ea6afb04e0c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_posargs_values_1;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[11]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 25;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_g);
        tmp_args_element_value_1 = par_g;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 26;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(par_g);
        tmp_args_element_value_3 = par_g;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 26;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_g);
        tmp_args_element_value_5 = par_g;
        CHECK_OBJECT(par_rois);
        tmp_args_element_value_6 = par_rois;
        tmp_args_element_value_7 = mod_consts[38];
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 26;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 26;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 26;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[31]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 26;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_1 = DEEP_COPY_TUPLE_GUIDED(mod_consts[40], "l");
        frame_e85941c7954d9683e91b2ea6afb04e0c->m_frame.f_lineno = 26;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_2};
            tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_5, tmp_call_posargs_values_1, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_call_posargs_values_1);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 26;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        frame_e85941c7954d9683e91b2ea6afb04e0c->m_frame.f_lineno = 26;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_args_element_value_8 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_4, mod_consts[34], kw_values, mod_consts[35]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        frame_e85941c7954d9683e91b2ea6afb04e0c->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_args_element_value_4 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_8);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_9 = mod_consts[38];
        frame_e85941c7954d9683e91b2ea6afb04e0c->m_frame.f_lineno = 26;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_9};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_10 = Py_False;
        frame_e85941c7954d9683e91b2ea6afb04e0c->m_frame.f_lineno = 25;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_10};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        assert(var_batch_indices == NULL);
        var_batch_indices = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_posargs_values_2;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[6]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 28;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_6 = Nuitka_Cell_GET(self->m_closure[1]);
        CHECK_OBJECT(par_g);
        tmp_args_element_value_11 = par_g;
        CHECK_OBJECT(par_rois);
        tmp_args_element_value_12 = par_rois;
        tmp_args_element_value_13 = mod_consts[38];
        CHECK_OBJECT(par_g);
        tmp_expression_value_4 = par_g;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[28]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 28;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[30]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 28;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 28;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[31]);
        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 28;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_call_posargs_values_2 = DEEP_COPY_TUPLE_GUIDED(mod_consts[41], "l");
        frame_e85941c7954d9683e91b2ea6afb04e0c->m_frame.f_lineno = 28;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_4};
            tmp_kw_call_value_0_3 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_8, tmp_call_posargs_values_2, kw_values, mod_consts[33]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_call_posargs_values_2);
        Py_DECREF(tmp_kw_call_value_0_4);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 28;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        frame_e85941c7954d9683e91b2ea6afb04e0c->m_frame.f_lineno = 28;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};
            tmp_args_element_value_14 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_7, mod_consts[34], kw_values, mod_consts[35]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        frame_e85941c7954d9683e91b2ea6afb04e0c->m_frame.f_lineno = 28;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_rois;
            assert(old != NULL);
            par_rois = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_aligned);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_aligned);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 30;
            type_description_1 = "oooooooooccc";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        frame_e85941c7954d9683e91b2ea6afb04e0c->m_frame.f_lineno = 31;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[43],
            PyTuple_GET_ITEM(mod_consts[44], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_sampling_ratio);
        tmp_cmp_expr_left_1 = par_sampling_ratio;
        tmp_cmp_expr_right_1 = mod_consts[2];
        tmp_condition_result_2 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "oooooooooccc";
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
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        frame_e85941c7954d9683e91b2ea6afb04e0c->m_frame.f_lineno = 40;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[43],
            PyTuple_GET_ITEM(mod_consts[45], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = mod_consts[2];
        {
            PyObject *old = par_sampling_ratio;
            assert(old != NULL);
            par_sampling_ratio = tmp_assign_source_3;
            Py_INCREF(par_sampling_ratio);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_7 = par_g;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[28]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooccc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[46];
        CHECK_OBJECT(par_input);
        tmp_kw_call_arg_value_1_1 = par_input;
        CHECK_OBJECT(par_rois);
        tmp_kw_call_arg_value_2_1 = par_rois;
        CHECK_OBJECT(var_batch_indices);
        tmp_kw_call_arg_value_3_1 = var_batch_indices;
        CHECK_OBJECT(par_spatial_scale);
        tmp_kw_call_dict_value_0_1 = par_spatial_scale;
        CHECK_OBJECT(par_pooled_height);
        tmp_kw_call_dict_value_1_1 = par_pooled_height;
        CHECK_OBJECT(par_pooled_width);
        tmp_kw_call_dict_value_2_1 = par_pooled_width;
        CHECK_OBJECT(par_sampling_ratio);
        tmp_kw_call_dict_value_3_1 = par_sampling_ratio;
        frame_e85941c7954d9683e91b2ea6afb04e0c->m_frame.f_lineno = 44;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS4_KWSPLIT(tmp_called_value_9, args, kw_values, mod_consts[47]);
        }

        Py_DECREF(tmp_called_value_9);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "oooooooooccc";
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
        exception_tb = MAKE_TRACEBACK(frame_e85941c7954d9683e91b2ea6afb04e0c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e85941c7954d9683e91b2ea6afb04e0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e85941c7954d9683e91b2ea6afb04e0c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e85941c7954d9683e91b2ea6afb04e0c,
        type_description_1,
        par_g,
        par_input,
        par_rois,
        par_spatial_scale,
        par_pooled_height,
        par_pooled_width,
        par_sampling_ratio,
        par_aligned,
        var_batch_indices,
        self->m_closure[0],
        self->m_closure[2],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_e85941c7954d9683e91b2ea6afb04e0c == cache_frame_e85941c7954d9683e91b2ea6afb04e0c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e85941c7954d9683e91b2ea6afb04e0c);
        cache_frame_e85941c7954d9683e91b2ea6afb04e0c = NULL;
    }

    assertFrameObject(frame_e85941c7954d9683e91b2ea6afb04e0c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_rois);
    Py_DECREF(par_rois);
    par_rois = NULL;
    CHECK_OBJECT(par_sampling_ratio);
    Py_DECREF(par_sampling_ratio);
    par_sampling_ratio = NULL;
    CHECK_OBJECT(var_batch_indices);
    Py_DECREF(var_batch_indices);
    var_batch_indices = NULL;
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

    Py_XDECREF(par_rois);
    par_rois = NULL;
    Py_XDECREF(par_sampling_ratio);
    par_sampling_ratio = NULL;
    Py_XDECREF(var_batch_indices);
    var_batch_indices = NULL;
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
    CHECK_OBJECT(par_spatial_scale);
    Py_DECREF(par_spatial_scale);
    CHECK_OBJECT(par_pooled_height);
    Py_DECREF(par_pooled_height);
    CHECK_OBJECT(par_pooled_width);
    Py_DECREF(par_pooled_width);
    CHECK_OBJECT(par_aligned);
    Py_DECREF(par_aligned);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_spatial_scale);
    Py_DECREF(par_spatial_scale);
    CHECK_OBJECT(par_pooled_height);
    Py_DECREF(par_pooled_height);
    CHECK_OBJECT(par_pooled_width);
    Py_DECREF(par_pooled_width);
    CHECK_OBJECT(par_aligned);
    Py_DECREF(par_aligned);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__3_roi_pool(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_g = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *par_rois = python_pars[2];
    PyObject *par_spatial_scale = python_pars[3];
    PyObject *par_pooled_height = python_pars[4];
    PyObject *par_pooled_width = python_pars[5];
    PyObject *var_roi_pool = NULL;
    struct Nuitka_FrameObject *frame_3ab78617eaa44a96b81b4792a4a6a284;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3ab78617eaa44a96b81b4792a4a6a284 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3ab78617eaa44a96b81b4792a4a6a284)) {
        Py_XDECREF(cache_frame_3ab78617eaa44a96b81b4792a4a6a284);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3ab78617eaa44a96b81b4792a4a6a284 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3ab78617eaa44a96b81b4792a4a6a284 = MAKE_FUNCTION_FRAME(codeobj_3ab78617eaa44a96b81b4792a4a6a284, module_torchvision$ops$_register_onnx_ops, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3ab78617eaa44a96b81b4792a4a6a284->m_type_description == NULL);
    frame_3ab78617eaa44a96b81b4792a4a6a284 = cache_frame_3ab78617eaa44a96b81b4792a4a6a284;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3ab78617eaa44a96b81b4792a4a6a284);
    assert(Py_REFCNT(frame_3ab78617eaa44a96b81b4792a4a6a284) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        CHECK_OBJECT(par_g);
        tmp_expression_value_1 = par_g;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[48];
        CHECK_OBJECT(par_input);
        tmp_kw_call_arg_value_1_1 = par_input;
        CHECK_OBJECT(par_rois);
        tmp_kw_call_arg_value_2_1 = par_rois;
        CHECK_OBJECT(par_pooled_height);
        tmp_tuple_element_1 = par_pooled_height;
        tmp_kw_call_dict_value_0_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_pooled_width);
        tmp_tuple_element_1 = par_pooled_width;
        PyTuple_SET_ITEM0(tmp_kw_call_dict_value_0_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(par_spatial_scale);
        tmp_kw_call_dict_value_1_1 = par_spatial_scale;
        frame_3ab78617eaa44a96b81b4792a4a6a284->m_frame.f_lineno = 57;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[49]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_roi_pool == NULL);
        var_roi_pool = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3ab78617eaa44a96b81b4792a4a6a284, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3ab78617eaa44a96b81b4792a4a6a284->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3ab78617eaa44a96b81b4792a4a6a284, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3ab78617eaa44a96b81b4792a4a6a284,
        type_description_1,
        par_g,
        par_input,
        par_rois,
        par_spatial_scale,
        par_pooled_height,
        par_pooled_width,
        var_roi_pool
    );


    // Release cached frame if used for exception.
    if (frame_3ab78617eaa44a96b81b4792a4a6a284 == cache_frame_3ab78617eaa44a96b81b4792a4a6a284) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3ab78617eaa44a96b81b4792a4a6a284);
        cache_frame_3ab78617eaa44a96b81b4792a4a6a284 = NULL;
    }

    assertFrameObject(frame_3ab78617eaa44a96b81b4792a4a6a284);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    {
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_roi_pool);
        tmp_tuple_element_2 = var_roi_pool;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = Py_None;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_2);
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_roi_pool);
    Py_DECREF(var_roi_pool);
    var_roi_pool = NULL;
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
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_rois);
    Py_DECREF(par_rois);
    CHECK_OBJECT(par_spatial_scale);
    Py_DECREF(par_spatial_scale);
    CHECK_OBJECT(par_pooled_height);
    Py_DECREF(par_pooled_height);
    CHECK_OBJECT(par_pooled_width);
    Py_DECREF(par_pooled_width);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_g);
    Py_DECREF(par_g);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    CHECK_OBJECT(par_rois);
    Py_DECREF(par_rois);
    CHECK_OBJECT(par_spatial_scale);
    Py_DECREF(par_spatial_scale);
    CHECK_OBJECT(par_pooled_height);
    Py_DECREF(par_pooled_height);
    CHECK_OBJECT(par_pooled_width);
    Py_DECREF(par_pooled_width);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9727024669fb2790fc6231e52d2463e6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$ops$_register_onnx_ops,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__1_symbolic_multi_label_nms(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__1_symbolic_multi_label_nms,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[14],
#endif
        codeobj_ad7462c5030cb1d5ca8bad7cbdf09edc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$ops$_register_onnx_ops,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__2_roi_align(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__2_roi_align,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        mod_consts[17],
#endif
        codeobj_e85941c7954d9683e91b2ea6afb04e0c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$ops$_register_onnx_ops,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__3_roi_pool() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__3_roi_pool,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        mod_consts[20],
#endif
        codeobj_3ab78617eaa44a96b81b4792a4a6a284,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$ops$_register_onnx_ops,
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

function_impl_code functable_torchvision$ops$_register_onnx_ops[] = {
    impl_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__1_symbolic_multi_label_nms,
    impl_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__2_roi_align,
    impl_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op$$$function__3_roi_pool,
    impl_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op,
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

    function_impl_code *current = functable_torchvision$ops$_register_onnx_ops;
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

    if (offset > sizeof(functable_torchvision$ops$_register_onnx_ops) || offset < 0) {
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
        functable_torchvision$ops$_register_onnx_ops[offset],
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
        module_torchvision$ops$_register_onnx_ops,
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
PyObject *modulecode_torchvision$ops$_register_onnx_ops(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torchvision.ops._register_onnx_ops");

    // Store the module for future use.
    module_torchvision$ops$_register_onnx_ops = module;

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
        PRINT_STRING("torchvision.ops._register_onnx_ops: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.ops._register_onnx_ops: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.ops._register_onnx_ops: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorchvision$ops$_register_onnx_ops\n");

    moduledict_torchvision$ops$_register_onnx_ops = MODULE_DICT(module_torchvision$ops$_register_onnx_ops);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torchvision$ops$_register_onnx_ops,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torchvision$ops$_register_onnx_ops,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[66]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torchvision$ops$_register_onnx_ops,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$ops$_register_onnx_ops,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$ops$_register_onnx_ops,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torchvision$ops$_register_onnx_ops);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torchvision$ops$_register_onnx_ops);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_8464f7e49885b291ce93aba7a0208961;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_2);
    }
    frame_8464f7e49885b291ce93aba7a0208961 = MAKE_MODULE_FRAME(codeobj_8464f7e49885b291ce93aba7a0208961, module_torchvision$ops$_register_onnx_ops);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8464f7e49885b291ce93aba7a0208961);
    assert(Py_REFCNT(frame_8464f7e49885b291ce93aba7a0208961) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[52]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[52]);

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
        UPDATE_STRING_DICT0(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT0(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[42];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$ops$_register_onnx_ops;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[2];
        frame_8464f7e49885b291ce93aba7a0208961->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[29];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torchvision$ops$_register_onnx_ops;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[2];
        frame_8464f7e49885b291ce93aba7a0208961->m_frame.f_lineno = 4;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_6);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8464f7e49885b291ce93aba7a0208961, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8464f7e49885b291ce93aba7a0208961->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8464f7e49885b291ce93aba7a0208961, exception_lineno);
    }



    assertFrameObject(frame_8464f7e49885b291ce93aba7a0208961);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[57];
        UPDATE_STRING_DICT0(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_torchvision$ops$_register_onnx_ops$$$function__1__register_custom_op();

        UPDATE_STRING_DICT1(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_8);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torchvision.ops._register_onnx_ops", false);

    Py_INCREF(module_torchvision$ops$_register_onnx_ops);
    return module_torchvision$ops$_register_onnx_ops;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$_register_onnx_ops, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torchvision$ops$_register_onnx_ops", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
