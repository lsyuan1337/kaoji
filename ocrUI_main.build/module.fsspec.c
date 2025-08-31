/* Generated code for Python module 'fsspec'
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

/* The "module_fsspec" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_fsspec;
PyDictObject *moduledict_fsspec;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[506];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[506];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("fsspec"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 506; i++) {
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
void checkModuleConstants_fsspec(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 506; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_cba2401575d747dec8745c3fa8fbb9fb;
static PyCodeObject *codeobj_7a5b36430a9d8dd9607a91f12219da76;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[503]); CHECK_OBJECT(module_filename_obj);
    codeobj_cba2401575d747dec8745c3fa8fbb9fb = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[504], mod_consts[504], NULL, NULL, 0, 0, 0);
    codeobj_7a5b36430a9d8dd9607a91f12219da76 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[502], mod_consts[502], mod_consts[505], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_fsspec$$$function__1_process_entries();


// The module function definitions.
static PyObject *impl_fsspec$$$function__1_process_entries(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_eps = NULL;
    PyObject *var_specs = NULL;
    PyObject *var_spec = NULL;
    PyObject *var_err_msg = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_7a5b36430a9d8dd9607a91f12219da76;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_backport_selectable_groups_class;
    PyObject *tmp_backport_entry_points_class;
    PyObject *tmp_backport_entry_point_class;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_7a5b36430a9d8dd9607a91f12219da76 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7a5b36430a9d8dd9607a91f12219da76)) {
        Py_XDECREF(cache_frame_7a5b36430a9d8dd9607a91f12219da76);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7a5b36430a9d8dd9607a91f12219da76 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7a5b36430a9d8dd9607a91f12219da76 = MAKE_FUNCTION_FRAME(codeobj_7a5b36430a9d8dd9607a91f12219da76, module_fsspec, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7a5b36430a9d8dd9607a91f12219da76->m_type_description == NULL);
    frame_7a5b36430a9d8dd9607a91f12219da76 = cache_frame_7a5b36430a9d8dd9607a91f12219da76;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7a5b36430a9d8dd9607a91f12219da76);
    assert(Py_REFCNT(frame_7a5b36430a9d8dd9607a91f12219da76) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = GET_STRING_DICT_VALUE(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_cmp_expr_left_1 == NULL)) {
            tmp_cmp_expr_left_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        assert(!(tmp_cmp_expr_left_1 == NULL));
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_selectable_group_dict_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_selectable_group_dict_2;
        PyObject *tmp_tuple_element_1;
        {
            PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
            tmp_backport_selectable_groups_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[1]);
        }
        assert(!(tmp_backport_selectable_groups_class == NULL));
        tmp_dict_key_1 = mod_consts[2];
        {
            PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
            tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
        }
        assert(!(tmp_backport_entry_points_class == NULL));
        {
            PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
            tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
        }
        assert(!(tmp_backport_entry_point_class == NULL));
        {
            PyObject *kw_values[3] = {mod_consts[5], mod_consts[6], mod_consts[2]};

            tmp_tuple_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_backport_entry_point_class);
        assert(!(tmp_tuple_element_1 == NULL));
        tmp_selectable_group_dict_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_selectable_group_dict_2, 0, tmp_tuple_element_1);
        {
            PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
            tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
        }
        assert(!(tmp_backport_entry_point_class == NULL));
        {
            PyObject *kw_values[3] = {mod_consts[8], mod_consts[9], mod_consts[2]};

            tmp_tuple_element_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
        }

        Py_DECREF(tmp_backport_entry_point_class);
        assert(!(tmp_tuple_element_1 == NULL));
        PyTuple_SET_ITEM(tmp_selectable_group_dict_2, 1, tmp_tuple_element_1);
        frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
        tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_2);
        Py_DECREF(tmp_backport_entry_points_class);
        Py_DECREF(tmp_selectable_group_dict_2);
        assert(!(tmp_dict_value_1 == NULL));
        tmp_selectable_group_dict_1 = _PyDict_NewPresized( 18 );
        {
            PyObject *tmp_selectable_group_dict_3;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_selectable_group_dict_4;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_selectable_group_dict_5;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_selectable_group_dict_6;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_selectable_group_dict_7;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_selectable_group_dict_8;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_selectable_group_dict_9;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_selectable_group_dict_10;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_selectable_group_dict_11;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_selectable_group_dict_12;
            PyObject *tmp_tuple_element_11;
            PyObject *tmp_selectable_group_dict_13;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_selectable_group_dict_14;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_selectable_group_dict_15;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_selectable_group_dict_16;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_selectable_group_dict_17;
            PyObject *tmp_tuple_element_16;
            PyObject *tmp_selectable_group_dict_18;
            PyObject *tmp_tuple_element_17;
            PyObject *tmp_selectable_group_dict_19;
            PyObject *tmp_tuple_element_18;
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[10];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[11], mod_consts[12], mod_consts[10]};

                tmp_tuple_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_2 == NULL));
            tmp_selectable_group_dict_3 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_3, 0, tmp_tuple_element_2);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[13], mod_consts[14], mod_consts[10]};

                tmp_tuple_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_2 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_3, 1, tmp_tuple_element_2);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[15], mod_consts[16], mod_consts[10]};

                tmp_tuple_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_2 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_3, 2, tmp_tuple_element_2);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[17], mod_consts[18], mod_consts[10]};

                tmp_tuple_element_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_2 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_3, 3, tmp_tuple_element_2);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_3);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_3);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[19];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[20], mod_consts[21], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            tmp_selectable_group_dict_4 = MAKE_TUPLE_EMPTY(115);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 0, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[22], mod_consts[23], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 1, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[24], mod_consts[25], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 2, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[26], mod_consts[27], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 3, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[28], mod_consts[29], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 4, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[30], mod_consts[31], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 5, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[32], mod_consts[33], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 6, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[34], mod_consts[35], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 7, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[36], mod_consts[37], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 8, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[38], mod_consts[39], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 9, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[40], mod_consts[41], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 10, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[42], mod_consts[43], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 11, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[44], mod_consts[45], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 12, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[46], mod_consts[47], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 13, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[48], mod_consts[49], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 14, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[50], mod_consts[51], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 15, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[52], mod_consts[53], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 16, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[54], mod_consts[55], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 17, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[56], mod_consts[57], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 18, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[58], mod_consts[59], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 19, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[60], mod_consts[61], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 20, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[62], mod_consts[63], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 21, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[64], mod_consts[65], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 22, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[66], mod_consts[67], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 23, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[68], mod_consts[69], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 24, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[70], mod_consts[71], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 25, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[72], mod_consts[73], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 26, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[74], mod_consts[75], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 27, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[76], mod_consts[77], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 28, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[78], mod_consts[79], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 29, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[80], mod_consts[81], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 30, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[82], mod_consts[81], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 31, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[83], mod_consts[84], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 32, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[85], mod_consts[84], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 33, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[86], mod_consts[87], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 34, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[88], mod_consts[87], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 35, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[89], mod_consts[90], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 36, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[91], mod_consts[92], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 37, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[93], mod_consts[94], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 38, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[95], mod_consts[96], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 39, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[97], mod_consts[98], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 40, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[99], mod_consts[100], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 41, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[101], mod_consts[102], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 42, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[103], mod_consts[104], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 43, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[105], mod_consts[106], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 44, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[107], mod_consts[108], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 45, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[109], mod_consts[110], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 46, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[111], mod_consts[112], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 47, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[113], mod_consts[114], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 48, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[115], mod_consts[116], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 49, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[117], mod_consts[118], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 50, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[119], mod_consts[120], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 51, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[121], mod_consts[122], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 52, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[123], mod_consts[124], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 53, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[125], mod_consts[126], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 54, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[127], mod_consts[128], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 55, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[129], mod_consts[130], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 56, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[129], mod_consts[131], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 57, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[132], mod_consts[133], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 58, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[134], mod_consts[135], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 59, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[136], mod_consts[137], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 60, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[138], mod_consts[137], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 61, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[139], mod_consts[137], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 62, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[140], mod_consts[141], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 63, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[142], mod_consts[143], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 64, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[144], mod_consts[145], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 65, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[146], mod_consts[147], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 66, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[148], mod_consts[149], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 67, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[150], mod_consts[151], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 68, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[152], mod_consts[153], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 69, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[154], mod_consts[155], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 70, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[156], mod_consts[157], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 71, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[158], mod_consts[159], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 72, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[160], mod_consts[161], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 73, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[162], mod_consts[163], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 74, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[164], mod_consts[165], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 75, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[166], mod_consts[167], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 76, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[168], mod_consts[169], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 77, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[170], mod_consts[171], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 78, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[172], mod_consts[173], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 79, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[174], mod_consts[175], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 80, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[176], mod_consts[177], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 81, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[178], mod_consts[179], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 82, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[180], mod_consts[181], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 83, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[182], mod_consts[183], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 84, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[184], mod_consts[185], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 85, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[186], mod_consts[187], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 86, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[188], mod_consts[189], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 87, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[190], mod_consts[191], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 88, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[192], mod_consts[193], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 89, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[194], mod_consts[195], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 90, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[196], mod_consts[197], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 91, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[198], mod_consts[199], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 92, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[200], mod_consts[201], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 93, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[194], mod_consts[195], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 94, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[202], mod_consts[203], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 95, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[204], mod_consts[205], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 96, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[206], mod_consts[205], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 97, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[207], mod_consts[208], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 98, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[209], mod_consts[210], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 99, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[211], mod_consts[212], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 100, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[213], mod_consts[214], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 101, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[215], mod_consts[216], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 102, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[217], mod_consts[218], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 103, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[219], mod_consts[220], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 104, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[221], mod_consts[222], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 105, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[223], mod_consts[224], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 106, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[225], mod_consts[226], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 107, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[227], mod_consts[228], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 108, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[229], mod_consts[230], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 109, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[231], mod_consts[232], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 110, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[233], mod_consts[234], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 111, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[235], mod_consts[236], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 112, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[237], mod_consts[238], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 113, tmp_tuple_element_3);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[239], mod_consts[240], mod_consts[19]};

                tmp_tuple_element_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_3 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_4, 114, tmp_tuple_element_3);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_4);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_4);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[241];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[242], mod_consts[243], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            tmp_selectable_group_dict_5 = MAKE_TUPLE_EMPTY(30);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 0, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[244], mod_consts[245], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 1, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[246], mod_consts[247], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 2, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[248], mod_consts[249], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 3, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[250], mod_consts[251], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 4, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[252], mod_consts[253], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 5, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[254], mod_consts[255], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 6, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[256], mod_consts[257], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 7, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[258], mod_consts[259], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 8, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[260], mod_consts[261], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 9, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[262], mod_consts[263], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 10, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[264], mod_consts[265], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 11, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[266], mod_consts[267], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 12, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[268], mod_consts[269], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 13, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[270], mod_consts[271], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 14, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[272], mod_consts[273], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 15, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[274], mod_consts[275], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 16, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[276], mod_consts[277], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 17, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[278], mod_consts[279], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 18, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[280], mod_consts[281], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 19, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[282], mod_consts[283], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 20, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[284], mod_consts[285], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 21, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[286], mod_consts[287], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 22, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[288], mod_consts[289], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 23, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[290], mod_consts[291], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 24, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[292], mod_consts[293], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 25, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[294], mod_consts[295], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 26, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[296], mod_consts[297], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 27, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[298], mod_consts[299], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 28, tmp_tuple_element_4);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[300], mod_consts[301], mod_consts[241]};

                tmp_tuple_element_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_4 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_5, 29, tmp_tuple_element_4);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_5);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_5);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[302];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[303], mod_consts[304], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            tmp_selectable_group_dict_6 = MAKE_TUPLE_EMPTY(21);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 0, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[305], mod_consts[306], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 1, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[307], mod_consts[308], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 2, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[309], mod_consts[310], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 3, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[311], mod_consts[310], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 4, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[0], mod_consts[312], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 5, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[313], mod_consts[314], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 6, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[315], mod_consts[316], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 7, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[317], mod_consts[318], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 8, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[319], mod_consts[320], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 9, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[321], mod_consts[322], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 10, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[323], mod_consts[314], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 11, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[324], mod_consts[325], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 12, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[326], mod_consts[327], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 13, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[328], mod_consts[320], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 14, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[329], mod_consts[330], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 15, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[331], mod_consts[330], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 16, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[332], mod_consts[333], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 17, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[334], mod_consts[320], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 18, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[335], mod_consts[336], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 19, tmp_tuple_element_5);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[337], mod_consts[318], mod_consts[302]};

                tmp_tuple_element_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_5 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_6, 20, tmp_tuple_element_5);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_6);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_6);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[338];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[339], mod_consts[340], mod_consts[338]};

                tmp_tuple_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_6 == NULL));
            tmp_selectable_group_dict_7 = MAKE_TUPLE_EMPTY(8);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_7, 0, tmp_tuple_element_6);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[341], mod_consts[342], mod_consts[338]};

                tmp_tuple_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_6 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_7, 1, tmp_tuple_element_6);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[343], mod_consts[344], mod_consts[338]};

                tmp_tuple_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_6 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_7, 2, tmp_tuple_element_6);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[345], mod_consts[342], mod_consts[338]};

                tmp_tuple_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_6 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_7, 3, tmp_tuple_element_6);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[346], mod_consts[347], mod_consts[338]};

                tmp_tuple_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_6 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_7, 4, tmp_tuple_element_6);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[348], mod_consts[342], mod_consts[338]};

                tmp_tuple_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_6 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_7, 5, tmp_tuple_element_6);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[349], mod_consts[350], mod_consts[338]};

                tmp_tuple_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_6 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_7, 6, tmp_tuple_element_6);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[351], mod_consts[352], mod_consts[338]};

                tmp_tuple_element_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_6 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_7, 7, tmp_tuple_element_6);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_7);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_7);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[353];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[354], mod_consts[355], mod_consts[353]};

                tmp_tuple_element_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_7 == NULL));
            tmp_selectable_group_dict_8 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_8, 0, tmp_tuple_element_7);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_8);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_8);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[356];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[357], mod_consts[358], mod_consts[356]};

                tmp_tuple_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_8 == NULL));
            tmp_selectable_group_dict_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_9, 0, tmp_tuple_element_8);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[359], mod_consts[360], mod_consts[356]};

                tmp_tuple_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_8 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_9, 1, tmp_tuple_element_8);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[361], mod_consts[212], mod_consts[356]};

                tmp_tuple_element_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_8 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_9, 2, tmp_tuple_element_8);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_9);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_9);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[362];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[363], mod_consts[364], mod_consts[362]};

                tmp_tuple_element_9 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_9 == NULL));
            tmp_selectable_group_dict_10 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_10, 0, tmp_tuple_element_9);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_10);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_10);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[365];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[366], mod_consts[367], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            tmp_selectable_group_dict_11 = MAKE_TUPLE_EMPTY(18);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 0, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[368], mod_consts[369], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 1, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[370], mod_consts[371], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 2, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[372], mod_consts[373], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 3, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[374], mod_consts[375], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 4, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[376], mod_consts[377], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 5, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[378], mod_consts[379], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 6, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[380], mod_consts[381], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 7, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[382], mod_consts[383], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 8, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[384], mod_consts[385], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 9, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[386], mod_consts[387], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 10, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[388], mod_consts[389], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 11, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[390], mod_consts[391], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 12, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[392], mod_consts[393], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 13, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[394], mod_consts[395], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 14, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[396], mod_consts[397], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 15, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[398], mod_consts[399], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 16, tmp_tuple_element_10);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[400], mod_consts[401], mod_consts[365]};

                tmp_tuple_element_10 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_10 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_11, 17, tmp_tuple_element_10);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_11);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_11);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[402];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[403], mod_consts[404], mod_consts[402]};

                tmp_tuple_element_11 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_11 == NULL));
            tmp_selectable_group_dict_12 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_12, 0, tmp_tuple_element_11);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_12);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_12);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[405];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[406], mod_consts[407], mod_consts[405]};

                tmp_tuple_element_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_12 == NULL));
            tmp_selectable_group_dict_13 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_13, 0, tmp_tuple_element_12);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[408], mod_consts[409], mod_consts[405]};

                tmp_tuple_element_12 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_12 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_13, 1, tmp_tuple_element_12);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_13);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_13);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[410];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[411], mod_consts[412], mod_consts[410]};

                tmp_tuple_element_13 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_13 == NULL));
            tmp_selectable_group_dict_14 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_14, 0, tmp_tuple_element_13);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_14);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_14);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[413];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[86], mod_consts[414], mod_consts[413]};

                tmp_tuple_element_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_14 == NULL));
            tmp_selectable_group_dict_15 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_15, 0, tmp_tuple_element_14);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[88], mod_consts[415], mod_consts[413]};

                tmp_tuple_element_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_14 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_15, 1, tmp_tuple_element_14);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[416], mod_consts[417], mod_consts[413]};

                tmp_tuple_element_14 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_14 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_15, 2, tmp_tuple_element_14);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_15);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_15);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[418];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[419], mod_consts[420], mod_consts[418]};

                tmp_tuple_element_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_15 == NULL));
            tmp_selectable_group_dict_16 = MAKE_TUPLE_EMPTY(4);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_16, 0, tmp_tuple_element_15);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[421], mod_consts[422], mod_consts[418]};

                tmp_tuple_element_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_15 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_16, 1, tmp_tuple_element_15);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[419], mod_consts[423], mod_consts[418]};

                tmp_tuple_element_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_15 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_16, 2, tmp_tuple_element_15);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[421], mod_consts[424], mod_consts[418]};

                tmp_tuple_element_15 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_15 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_16, 3, tmp_tuple_element_15);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_16);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_16);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[425];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[426], mod_consts[427], mod_consts[425]};

                tmp_tuple_element_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_16 == NULL));
            tmp_selectable_group_dict_17 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_17, 0, tmp_tuple_element_16);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[50], mod_consts[428], mod_consts[425]};

                tmp_tuple_element_16 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_16 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_17, 1, tmp_tuple_element_16);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_17);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_17);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[429];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[430], mod_consts[431], mod_consts[429]};

                tmp_tuple_element_17 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_17 == NULL));
            tmp_selectable_group_dict_18 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_18, 0, tmp_tuple_element_17);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[432], mod_consts[433], mod_consts[429]};

                tmp_tuple_element_17 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_17 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_18, 1, tmp_tuple_element_17);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_18);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_18);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[434];
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_points_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[3]);
            }
            assert(!(tmp_backport_entry_points_class == NULL));
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[435], mod_consts[436], mod_consts[434]};

                tmp_tuple_element_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_18 == NULL));
            tmp_selectable_group_dict_19 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM(tmp_selectable_group_dict_19, 0, tmp_tuple_element_18);
            {
                PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
                tmp_backport_entry_point_class = LOOKUP_ATTRIBUTE(hard_module, mod_consts[4]);
            }
            assert(!(tmp_backport_entry_point_class == NULL));
            {
                PyObject *kw_values[3] = {mod_consts[437], mod_consts[438], mod_consts[434]};

                tmp_tuple_element_18 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_backport_entry_point_class, kw_values, mod_consts[7]);
            }

            Py_DECREF(tmp_backport_entry_point_class);
            assert(!(tmp_tuple_element_18 == NULL));
            PyTuple_SET_ITEM(tmp_selectable_group_dict_19, 1, tmp_tuple_element_18);
            frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
            tmp_dict_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_entry_points_class, tmp_selectable_group_dict_19);
            Py_DECREF(tmp_backport_entry_points_class);
            Py_DECREF(tmp_selectable_group_dict_19);
            assert(!(tmp_dict_value_1 == NULL));
            tmp_res = PyDict_SetItem(tmp_selectable_group_dict_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 50;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_backport_selectable_groups_class, tmp_selectable_group_dict_1);
        Py_DECREF(tmp_backport_selectable_groups_class);
        Py_DECREF(tmp_selectable_group_dict_1);
        assert(!(tmp_assign_source_1 == NULL));
        assert(var_eps == NULL);
        var_eps = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(var_eps);
        tmp_expression_value_1 = var_eps;
        tmp_attribute_value_1 = mod_consts[439];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_eps);
        tmp_expression_value_2 = var_eps;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[439]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 55;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[440], 0), mod_consts[441]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_specs == NULL);
        var_specs = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        CHECK_OBJECT(var_eps);
        tmp_expression_value_3 = var_eps;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[442]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = mod_consts[443];
        tmp_call_arg_element_2 = MAKE_LIST_EMPTY(0);
        frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 57;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_specs == NULL);
        var_specs = tmp_assign_source_3;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_specs);
        tmp_iter_arg_1 = var_specs;
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_4;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_5 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_5 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooo";
                exception_lineno = 58;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_6 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_spec;
            var_spec = tmp_assign_source_6;
            Py_INCREF(var_spec);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_19;
        tmp_tuple_element_19 = mod_consts[444];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_19);
            CHECK_OBJECT(var_spec);
            tmp_format_value_1 = var_spec;
            tmp_format_spec_1 = mod_consts[445];
            tmp_tuple_element_19 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;
                type_description_1 = "oooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_19);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_assign_source_7 = PyUnicode_Join(mod_consts[445], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_err_msg;
            var_err_msg = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[446]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[446]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_spec);
        tmp_expression_value_4 = var_spec;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[447]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_spec);
        tmp_expression_value_6 = var_spec;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[448]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 61;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[449]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 61;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 61;
        tmp_kw_call_arg_value_1_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_4, mod_consts[450]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 61;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_err_msg);
        tmp_kw_call_dict_value_0_1 = var_err_msg;
        frame_7a5b36430a9d8dd9607a91f12219da76->m_frame.f_lineno = 60;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[451]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 58;
        type_description_1 = "oooo";
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
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_7a5b36430a9d8dd9607a91f12219da76, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7a5b36430a9d8dd9607a91f12219da76->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7a5b36430a9d8dd9607a91f12219da76, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7a5b36430a9d8dd9607a91f12219da76,
        type_description_1,
        var_eps,
        var_specs,
        var_spec,
        var_err_msg
    );


    // Release cached frame if used for exception.
    if (frame_7a5b36430a9d8dd9607a91f12219da76 == cache_frame_7a5b36430a9d8dd9607a91f12219da76) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7a5b36430a9d8dd9607a91f12219da76);
        cache_frame_7a5b36430a9d8dd9607a91f12219da76 = NULL;
    }

    assertFrameObject(frame_7a5b36430a9d8dd9607a91f12219da76);

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
    Py_XDECREF(var_eps);
    var_eps = NULL;
    Py_XDECREF(var_specs);
    var_specs = NULL;
    Py_XDECREF(var_spec);
    var_spec = NULL;
    Py_XDECREF(var_err_msg);
    var_err_msg = NULL;
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

    Py_XDECREF(var_eps);
    var_eps = NULL;
    Py_XDECREF(var_specs);
    var_specs = NULL;
    Py_XDECREF(var_spec);
    var_spec = NULL;
    Py_XDECREF(var_err_msg);
    var_err_msg = NULL;
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



static PyObject *MAKE_FUNCTION_fsspec$$$function__1_process_entries() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_fsspec$$$function__1_process_entries,
        mod_consts[502],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7a5b36430a9d8dd9607a91f12219da76,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_fsspec,
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

function_impl_code functable_fsspec[] = {
    impl_fsspec$$$function__1_process_entries,
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

    function_impl_code *current = functable_fsspec;
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

    if (offset > sizeof(functable_fsspec) || offset < 0) {
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
        functable_fsspec[offset],
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
        module_fsspec,
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
PyObject *modulecode_fsspec(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("fsspec");

    // Store the module for future use.
    module_fsspec = module;

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
        PRINT_STRING("fsspec: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("fsspec: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("fsspec: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initfsspec\n");

    moduledict_fsspec = MODULE_DICT(module_fsspec);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_fsspec,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_fsspec,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[445]
        );
#elif 1
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fsspec, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_fsspec,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fsspec, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_fsspec,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fsspec, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_fsspec,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_fsspec);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_fsspec, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_fsspec, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_fsspec, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_fsspec, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_fsspec);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    PyObject *tmp_import_from_4__module = NULL;
    struct Nuitka_FrameObject *frame_cba2401575d747dec8745c3fa8fbb9fb;
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
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[452], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[453], tmp_assign_source_2);
    }
    frame_cba2401575d747dec8745c3fa8fbb9fb = MAKE_MODULE_FRAME(codeobj_cba2401575d747dec8745c3fa8fbb9fb, module_fsspec);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cba2401575d747dec8745c3fa8fbb9fb);
    assert(Py_REFCNT(frame_cba2401575d747dec8745c3fa8fbb9fb) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = 1;
        {
            PyObject *hard_module = IMPORT_HARD_OS();
            if (likely(hard_module != NULL)) {
                tmp_expression_value_1 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[454]);
            } else {
                tmp_expression_value_1 = NULL;
            }
        }
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[455]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = module_filename_obj;
        frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = 1;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_expression_value_2;
            PyList_SET_ITEM(tmp_assign_source_3, 0, tmp_list_element_1);
            frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = 1;
            {
                PyObject *hard_module = IMPORT_HARD_OS();
                if (likely(hard_module != NULL)) {
                    tmp_expression_value_2 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[456]);
                } else {
                    tmp_expression_value_2 = NULL;
                }
            }
            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_expression_value_2);

                exception_lineno = 1;

                goto list_build_exception_1;
            }
            tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[442]);
            Py_DECREF(tmp_expression_value_2);
            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = 1;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_2, mod_consts[457]);

            Py_DECREF(tmp_called_value_2);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 1;

                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_3, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[458], tmp_assign_source_3);
    }
    {
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_dictset_value = Nuitka_Loader_New(loader_entry);
        tmp_dictset_dict = Nuitka_SysGetObject("path_importer_cache");
        if (tmp_dictset_dict == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[458]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[458]);
        }

        assert(!(tmp_expression_value_3 == NULL));
        tmp_subscript_value_1 = mod_consts[459];
        tmp_dictset_key = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_dictset_key == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_key);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[460]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[460]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[461], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[460]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[460]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[462], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        tmp_assattr_value_3 = GET_STRING_DICT_VALUE(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[458]);

        if (unlikely(tmp_assattr_value_3 == NULL)) {
            tmp_assattr_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[458]);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[460]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[460]);
        }

        assert(!(tmp_assattr_target_3 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[463], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = Py_None;
        UPDATE_STRING_DICT0(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[464], tmp_assign_source_4);
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_ImportError;
        tmp_raise_value_1 = mod_consts[465];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 2;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_cba2401575d747dec8745c3fa8fbb9fb, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_cba2401575d747dec8745c3fa8fbb9fb, exception_keeper_lineno_1);
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
    {
        PyObject *tmp_assign_source_5;
        {
            PyObject *hard_module = IMPORT_HARD_IMPORTLIB_METADATA();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[0]);
        }
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_5);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 1;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame) frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
    goto try_end_1;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[445];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_fsspec;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[466];
        tmp_level_value_1 = mod_consts[467];
        frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = 10;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_fsspec,
                mod_consts[468],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[468]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[468], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_fsspec,
                mod_consts[469],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[469]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[469], tmp_assign_source_8);
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

    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_import_from_1__module);
    Py_DECREF(tmp_import_from_1__module);
    tmp_import_from_1__module = NULL;
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[470];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_fsspec;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[471];
        tmp_level_value_2 = mod_consts[467];
        frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = 11;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_fsspec,
                mod_consts[472],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[472]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[472], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[473];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_fsspec;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[474];
        tmp_level_value_3 = mod_consts[467];
        frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = 12;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_fsspec,
                mod_consts[475],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[475]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[475], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[476];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_fsspec;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[477];
        tmp_level_value_4 = mod_consts[467];
        frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = 13;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
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
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_fsspec,
                mod_consts[478],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[478]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[478], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_fsspec,
                mod_consts[479],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[479]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[479], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_fsspec,
                mod_consts[480],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[480]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[480], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_fsspec,
                mod_consts[481],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[481]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto try_except_handler_4;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[481], tmp_assign_source_15);
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

    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_import_from_2__module);
    Py_DECREF(tmp_import_from_2__module);
    tmp_import_from_2__module = NULL;
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[482];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_fsspec;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[483];
        tmp_level_value_5 = mod_consts[467];
        frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = 14;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_fsspec,
                mod_consts[484],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[484]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[484], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[485];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_fsspec;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[486];
        tmp_level_value_6 = mod_consts[467];
        frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = 15;
        tmp_assign_source_17 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_17;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_10 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_fsspec,
                mod_consts[487],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[487]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[487], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_11 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_fsspec,
                mod_consts[488],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[488]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto try_except_handler_5;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[488], tmp_assign_source_19);
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

    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_import_from_3__module);
    Py_DECREF(tmp_import_from_3__module);
    tmp_import_from_3__module = NULL;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[489];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_fsspec;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[490];
        tmp_level_value_7 = mod_consts[467];
        frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = 16;
        tmp_assign_source_20 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_4__module == NULL);
        tmp_import_from_4__module = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_12 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_fsspec,
                mod_consts[491],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[491]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[491], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_13 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_fsspec,
                mod_consts[492],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[492]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[492], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_14 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_fsspec,
                mod_consts[493],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[493]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[493], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_15 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_fsspec,
                mod_consts[446],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[446]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[446], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_4__module);
        tmp_import_name_from_16 = tmp_import_from_4__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_fsspec,
                mod_consts[489],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[489]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto try_except_handler_6;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[489], tmp_assign_source_25);
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

    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_import_from_4__module);
    Py_DECREF(tmp_import_from_4__module);
    tmp_import_from_4__module = NULL;
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[494];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_fsspec;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = mod_consts[495];
        tmp_level_value_8 = mod_consts[467];
        frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = 23;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_fsspec,
                mod_consts[496],
                mod_consts[459]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[496]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[496], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_subscript_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[468]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[468]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = 25;
        tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[497]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[498];
        tmp_assign_source_27 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[499], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = LIST_COPY(mod_consts[500]);
        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[501], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;


        tmp_assign_source_29 = MAKE_FUNCTION_fsspec$$$function__1_process_entries();

        UPDATE_STRING_DICT1(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[502], tmp_assign_source_29);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_1;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_fsspec, (Nuitka_StringObject *)mod_consts[502]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[502]);
        }

        assert(!(tmp_called_value_3 == NULL));
        frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame.f_lineno = 65;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cba2401575d747dec8745c3fa8fbb9fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cba2401575d747dec8745c3fa8fbb9fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cba2401575d747dec8745c3fa8fbb9fb, exception_lineno);
    }



    assertFrameObject(frame_cba2401575d747dec8745c3fa8fbb9fb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("fsspec", false);

    Py_INCREF(module_fsspec);
    return module_fsspec;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_fsspec, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("fsspec", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
