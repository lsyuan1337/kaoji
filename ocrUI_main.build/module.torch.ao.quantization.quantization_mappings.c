/* Generated code for Python module 'torch.ao.quantization.quantization_mappings'
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

/* The "module_torch$ao$quantization$quantization_mappings" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$ao$quantization$quantization_mappings;
PyDictObject *moduledict_torch$ao$quantization$quantization_mappings;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[185];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[185];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.ao.quantization.quantization_mappings"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 185; i++) {
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
void checkModuleConstants_torch$ao$quantization$quantization_mappings(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 185; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_44c9413b88030d0e64b6af527f7470b1;
static PyCodeObject *codeobj_6dea6aed57d19cdf18b39b6cf6768202;
static PyCodeObject *codeobj_935ccf4faa0ca4afe52a6382456499f2;
static PyCodeObject *codeobj_26a4901ebfbba97c644eb8e0388120d1;
static PyCodeObject *codeobj_6b197ef8a37ff640ea14d3430dd6e31d;
static PyCodeObject *codeobj_0005915427a6e7c461f4f2fa10baa9f2;
static PyCodeObject *codeobj_295d1f5231f142b8dee263067297b7fc;
static PyCodeObject *codeobj_f0ec0eb74696e7a8df53d9a10d5ee26c;
static PyCodeObject *codeobj_c60ec05c14e171bb36d768661e5a5717;
static PyCodeObject *codeobj_44f3a7a85ac22a0194ce4002c495ebe9;
static PyCodeObject *codeobj_b92aad687c5adc26c8711706e9c2ea0a;
static PyCodeObject *codeobj_8e83124c50ecd6cdb509e28b1e10c7f4;
static PyCodeObject *codeobj_1bcafbc7f62164a1166b66631457547e;
static PyCodeObject *codeobj_6e288da2d417867d008bb27003c03a75;
static PyCodeObject *codeobj_2c26d7662130185451306799e9af9a70;
static PyCodeObject *codeobj_bb20b6987beee564ab39019f96afb04a;
static PyCodeObject *codeobj_bedf963714232fd1f586adef737c640c;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[174]); CHECK_OBJECT(module_filename_obj);
    codeobj_44c9413b88030d0e64b6af527f7470b1 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[175], mod_consts[175], NULL, NULL, 0, 0, 0);
    codeobj_6dea6aed57d19cdf18b39b6cf6768202 = MAKE_CODE_OBJECT(module_filename_obj, 284, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[172], mod_consts[172], mod_consts[176], NULL, 1, 0, 0);
    codeobj_935ccf4faa0ca4afe52a6382456499f2 = MAKE_CODE_OBJECT(module_filename_obj, 293, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[173], mod_consts[173], mod_consts[176], NULL, 1, 0, 0);
    codeobj_26a4901ebfbba97c644eb8e0388120d1 = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[166], mod_consts[166], mod_consts[177], NULL, 0, 0, 0);
    codeobj_6b197ef8a37ff640ea14d3430dd6e31d = MAKE_CODE_OBJECT(module_filename_obj, 234, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[163], mod_consts[163], NULL, NULL, 0, 0, 0);
    codeobj_0005915427a6e7c461f4f2fa10baa9f2 = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[164], mod_consts[164], NULL, NULL, 0, 0, 0);
    codeobj_295d1f5231f142b8dee263067297b7fc = MAKE_CODE_OBJECT(module_filename_obj, 271, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[167], mod_consts[167], NULL, NULL, 0, 0, 0);
    codeobj_f0ec0eb74696e7a8df53d9a10d5ee26c = MAKE_CODE_OBJECT(module_filename_obj, 219, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[161], NULL, NULL, 0, 0, 0);
    codeobj_c60ec05c14e171bb36d768661e5a5717 = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[178], NULL, 0, 0, 0);
    codeobj_44f3a7a85ac22a0194ce4002c495ebe9 = MAKE_CODE_OBJECT(module_filename_obj, 168, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[150], mod_consts[150], NULL, NULL, 0, 0, 0);
    codeobj_b92aad687c5adc26c8711706e9c2ea0a = MAKE_CODE_OBJECT(module_filename_obj, 181, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[152], mod_consts[152], NULL, NULL, 0, 0, 0);
    codeobj_8e83124c50ecd6cdb509e28b1e10c7f4 = MAKE_CODE_OBJECT(module_filename_obj, 204, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[179], NULL, 2, 0, 0);
    codeobj_1bcafbc7f62164a1166b66631457547e = MAKE_CODE_OBJECT(module_filename_obj, 224, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[180], NULL, 0, 0, 0);
    codeobj_6e288da2d417867d008bb27003c03a75 = MAKE_CODE_OBJECT(module_filename_obj, 173, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[151], mod_consts[151], mod_consts[180], NULL, 0, 0, 0);
    codeobj_2c26d7662130185451306799e9af9a70 = MAKE_CODE_OBJECT(module_filename_obj, 276, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[169], mod_consts[169], mod_consts[181], NULL, 1, 0, 0);
    codeobj_bb20b6987beee564ab39019f96afb04a = MAKE_CODE_OBJECT(module_filename_obj, 186, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[182], NULL, 3, 0, 0);
    codeobj_bedf963714232fd1f586adef737c640c = MAKE_CODE_OBJECT(module_filename_obj, 160, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[183], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__10_get_default_dynamic_sparse_quant_module_mappings(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__11_get_default_qconfig_propagation_list(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__12_get_default_compare_output_module_list(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__13_get_default_float_to_quantized_operator_mappings(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__14_get_quantized_operator(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__15__get_special_act_post_process(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__16__has_special_act_post_process(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__1_no_observer_set(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__2_get_default_static_quant_module_mappings(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__3_get_embedding_static_quant_module_mappings(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__4_get_default_static_sparse_quant_module_mappings(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__5_get_static_quant_module_class(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__6_get_dynamic_quant_module_class(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__7_get_default_qat_module_mappings(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__8_get_embedding_qat_module_mappings(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__9_get_default_dynamic_quant_module_mappings(PyObject *annotations);


// The module function definitions.
static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__1_no_observer_set(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_no_observers = NULL;
    struct Nuitka_FrameObject *frame_bedf963714232fd1f586adef737c640c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_bedf963714232fd1f586adef737c640c = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_bedf963714232fd1f586adef737c640c)) {
        Py_XDECREF(cache_frame_bedf963714232fd1f586adef737c640c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bedf963714232fd1f586adef737c640c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bedf963714232fd1f586adef737c640c = MAKE_FUNCTION_FRAME(codeobj_bedf963714232fd1f586adef737c640c, module_torch$ao$quantization$quantization_mappings, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bedf963714232fd1f586adef737c640c->m_type_description == NULL);
    frame_bedf963714232fd1f586adef737c640c = cache_frame_bedf963714232fd1f586adef737c640c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bedf963714232fd1f586adef737c640c);
    assert(Py_REFCNT(frame_bedf963714232fd1f586adef737c640c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_set_arg_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyList_SET_ITEM(tmp_set_arg_1, 0, tmp_list_element_1);
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[1]);
            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            tmp_list_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
            Py_DECREF(tmp_expression_value_3);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_1 = "o";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_set_arg_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_set_arg_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_assign_source_1 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_no_observers == NULL);
        var_no_observers = tmp_assign_source_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_bedf963714232fd1f586adef737c640c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bedf963714232fd1f586adef737c640c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bedf963714232fd1f586adef737c640c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bedf963714232fd1f586adef737c640c,
        type_description_1,
        var_no_observers
    );


    // Release cached frame if used for exception.
    if (frame_bedf963714232fd1f586adef737c640c == cache_frame_bedf963714232fd1f586adef737c640c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bedf963714232fd1f586adef737c640c);
        cache_frame_bedf963714232fd1f586adef737c640c = NULL;
    }

    assertFrameObject(frame_bedf963714232fd1f586adef737c640c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_no_observers);
    tmp_return_value = var_no_observers;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_no_observers);
    Py_DECREF(var_no_observers);
    var_no_observers = NULL;
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


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__2_get_default_static_quant_module_mappings(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_44f3a7a85ac22a0194ce4002c495ebe9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_44f3a7a85ac22a0194ce4002c495ebe9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_44f3a7a85ac22a0194ce4002c495ebe9)) {
        Py_XDECREF(cache_frame_44f3a7a85ac22a0194ce4002c495ebe9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_44f3a7a85ac22a0194ce4002c495ebe9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_44f3a7a85ac22a0194ce4002c495ebe9 = MAKE_FUNCTION_FRAME(codeobj_44f3a7a85ac22a0194ce4002c495ebe9, module_torch$ao$quantization$quantization_mappings, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_44f3a7a85ac22a0194ce4002c495ebe9->m_type_description == NULL);
    frame_44f3a7a85ac22a0194ce4002c495ebe9 = cache_frame_44f3a7a85ac22a0194ce4002c495ebe9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_44f3a7a85ac22a0194ce4002c495ebe9);
    assert(Py_REFCNT(frame_44f3a7a85ac22a0194ce4002c495ebe9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        frame_44f3a7a85ac22a0194ce4002c495ebe9->m_frame.f_lineno = 171;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

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
        exception_tb = MAKE_TRACEBACK(frame_44f3a7a85ac22a0194ce4002c495ebe9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_44f3a7a85ac22a0194ce4002c495ebe9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_44f3a7a85ac22a0194ce4002c495ebe9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_44f3a7a85ac22a0194ce4002c495ebe9,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_44f3a7a85ac22a0194ce4002c495ebe9 == cache_frame_44f3a7a85ac22a0194ce4002c495ebe9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_44f3a7a85ac22a0194ce4002c495ebe9);
        cache_frame_44f3a7a85ac22a0194ce4002c495ebe9 = NULL;
    }

    assertFrameObject(frame_44f3a7a85ac22a0194ce4002c495ebe9);

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


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__3_get_embedding_static_quant_module_mappings(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_mapping = NULL;
    struct Nuitka_FrameObject *frame_6e288da2d417867d008bb27003c03a75;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6e288da2d417867d008bb27003c03a75 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6e288da2d417867d008bb27003c03a75)) {
        Py_XDECREF(cache_frame_6e288da2d417867d008bb27003c03a75);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6e288da2d417867d008bb27003c03a75 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6e288da2d417867d008bb27003c03a75 = MAKE_FUNCTION_FRAME(codeobj_6e288da2d417867d008bb27003c03a75, module_torch$ao$quantization$quantization_mappings, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6e288da2d417867d008bb27003c03a75->m_type_description == NULL);
    frame_6e288da2d417867d008bb27003c03a75 = cache_frame_6e288da2d417867d008bb27003c03a75;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6e288da2d417867d008bb27003c03a75);
    assert(Py_REFCNT(frame_6e288da2d417867d008bb27003c03a75) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6e288da2d417867d008bb27003c03a75->m_frame.f_lineno = 176;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_mapping == NULL);
        var_mapping = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mapping);
        tmp_ass_subscribed_1 = var_mapping;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 177;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 177;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[12]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mapping);
        tmp_ass_subscribed_2 = var_mapping;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[12]);
        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6e288da2d417867d008bb27003c03a75, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6e288da2d417867d008bb27003c03a75->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6e288da2d417867d008bb27003c03a75, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6e288da2d417867d008bb27003c03a75,
        type_description_1,
        var_mapping
    );


    // Release cached frame if used for exception.
    if (frame_6e288da2d417867d008bb27003c03a75 == cache_frame_6e288da2d417867d008bb27003c03a75) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6e288da2d417867d008bb27003c03a75);
        cache_frame_6e288da2d417867d008bb27003c03a75 = NULL;
    }

    assertFrameObject(frame_6e288da2d417867d008bb27003c03a75);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_mapping);
    tmp_return_value = var_mapping;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_mapping);
    Py_DECREF(var_mapping);
    var_mapping = NULL;
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

    Py_XDECREF(var_mapping);
    var_mapping = NULL;
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


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__4_get_default_static_sparse_quant_module_mappings(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_b92aad687c5adc26c8711706e9c2ea0a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b92aad687c5adc26c8711706e9c2ea0a = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b92aad687c5adc26c8711706e9c2ea0a)) {
        Py_XDECREF(cache_frame_b92aad687c5adc26c8711706e9c2ea0a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b92aad687c5adc26c8711706e9c2ea0a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b92aad687c5adc26c8711706e9c2ea0a = MAKE_FUNCTION_FRAME(codeobj_b92aad687c5adc26c8711706e9c2ea0a, module_torch$ao$quantization$quantization_mappings, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b92aad687c5adc26c8711706e9c2ea0a->m_type_description == NULL);
    frame_b92aad687c5adc26c8711706e9c2ea0a = cache_frame_b92aad687c5adc26c8711706e9c2ea0a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b92aad687c5adc26c8711706e9c2ea0a);
    assert(Py_REFCNT(frame_b92aad687c5adc26c8711706e9c2ea0a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        frame_b92aad687c5adc26c8711706e9c2ea0a->m_frame.f_lineno = 184;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

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
        exception_tb = MAKE_TRACEBACK(frame_b92aad687c5adc26c8711706e9c2ea0a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b92aad687c5adc26c8711706e9c2ea0a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b92aad687c5adc26c8711706e9c2ea0a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b92aad687c5adc26c8711706e9c2ea0a,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_b92aad687c5adc26c8711706e9c2ea0a == cache_frame_b92aad687c5adc26c8711706e9c2ea0a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b92aad687c5adc26c8711706e9c2ea0a);
        cache_frame_b92aad687c5adc26c8711706e9c2ea0a = NULL;
    }

    assertFrameObject(frame_b92aad687c5adc26c8711706e9c2ea0a);

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


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__5_get_static_quant_module_class(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_float_module_class = python_pars[0];
    PyObject *par_additional_static_quant_mapping = python_pars[1];
    PyObject *par_is_reference = python_pars[2];
    PyObject *var_all_mappings = NULL;
    PyObject *var_static_quant_module_class = NULL;
    struct Nuitka_FrameObject *frame_bb20b6987beee564ab39019f96afb04a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_bb20b6987beee564ab39019f96afb04a = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_additional_static_quant_mapping);
        tmp_cmp_expr_left_1 = par_additional_static_quant_mapping;
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
            PyObject *old = par_additional_static_quant_mapping;
            assert(old != NULL);
            par_additional_static_quant_mapping = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_bb20b6987beee564ab39019f96afb04a)) {
        Py_XDECREF(cache_frame_bb20b6987beee564ab39019f96afb04a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_bb20b6987beee564ab39019f96afb04a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_bb20b6987beee564ab39019f96afb04a = MAKE_FUNCTION_FRAME(codeobj_bb20b6987beee564ab39019f96afb04a, module_torch$ao$quantization$quantization_mappings, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_bb20b6987beee564ab39019f96afb04a->m_type_description == NULL);
    frame_bb20b6987beee564ab39019f96afb04a = cache_frame_bb20b6987beee564ab39019f96afb04a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_bb20b6987beee564ab39019f96afb04a);
    assert(Py_REFCNT(frame_bb20b6987beee564ab39019f96afb04a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_is_reference);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_is_reference);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        CHECK_OBJECT(par_additional_static_quant_mapping);
        tmp_args_element_value_2 = par_additional_static_quant_mapping;
        frame_bb20b6987beee564ab39019f96afb04a->m_frame.f_lineno = 195;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "ooooo";
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
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_float_module_class);
        tmp_args_element_value_3 = par_float_module_class;
        tmp_args_element_value_4 = Py_None;
        frame_bb20b6987beee564ab39019f96afb04a->m_frame.f_lineno = 198;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_static_quant_module_class == NULL);
        var_static_quant_module_class = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_static_quant_module_class);
        tmp_cmp_expr_left_2 = var_static_quant_module_class;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
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
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_unicode_arg_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_kw_call_arg_value_0_1 = mod_consts[19];
        CHECK_OBJECT(par_float_module_class);
        tmp_unicode_arg_1 = par_float_module_class;
        tmp_kw_call_arg_value_1_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_bb20b6987beee564ab39019f96afb04a->m_frame.f_lineno = 200;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_add_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[20];
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        assert(!(tmp_tuple_element_1 == NULL));
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 199;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_static_quant_module_class);
        tmp_args_element_value_5 = var_static_quant_module_class;
        frame_bb20b6987beee564ab39019f96afb04a->m_frame.f_lineno = 202;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "ooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_bb20b6987beee564ab39019f96afb04a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_bb20b6987beee564ab39019f96afb04a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_bb20b6987beee564ab39019f96afb04a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_bb20b6987beee564ab39019f96afb04a,
        type_description_1,
        par_float_module_class,
        par_additional_static_quant_mapping,
        par_is_reference,
        var_all_mappings,
        var_static_quant_module_class
    );


    // Release cached frame if used for exception.
    if (frame_bb20b6987beee564ab39019f96afb04a == cache_frame_bb20b6987beee564ab39019f96afb04a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_bb20b6987beee564ab39019f96afb04a);
        cache_frame_bb20b6987beee564ab39019f96afb04a = NULL;
    }

    assertFrameObject(frame_bb20b6987beee564ab39019f96afb04a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_additional_static_quant_mapping);
    Py_DECREF(par_additional_static_quant_mapping);
    par_additional_static_quant_mapping = NULL;
    CHECK_OBJECT(var_all_mappings);
    Py_DECREF(var_all_mappings);
    var_all_mappings = NULL;
    CHECK_OBJECT(var_static_quant_module_class);
    Py_DECREF(var_static_quant_module_class);
    var_static_quant_module_class = NULL;
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

    CHECK_OBJECT(par_additional_static_quant_mapping);
    Py_DECREF(par_additional_static_quant_mapping);
    par_additional_static_quant_mapping = NULL;
    Py_XDECREF(var_all_mappings);
    var_all_mappings = NULL;
    Py_XDECREF(var_static_quant_module_class);
    var_static_quant_module_class = NULL;
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
    CHECK_OBJECT(par_float_module_class);
    Py_DECREF(par_float_module_class);
    CHECK_OBJECT(par_is_reference);
    Py_DECREF(par_is_reference);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_float_module_class);
    Py_DECREF(par_float_module_class);
    CHECK_OBJECT(par_is_reference);
    Py_DECREF(par_is_reference);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__6_get_dynamic_quant_module_class(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_float_module_class = python_pars[0];
    PyObject *par_additional_dynamic_quant_mapping = python_pars[1];
    PyObject *var_all_mappings = NULL;
    PyObject *var_dynamic_quant_module_class = NULL;
    struct Nuitka_FrameObject *frame_8e83124c50ecd6cdb509e28b1e10c7f4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8e83124c50ecd6cdb509e28b1e10c7f4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_additional_dynamic_quant_mapping);
        tmp_cmp_expr_left_1 = par_additional_dynamic_quant_mapping;
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
            PyObject *old = par_additional_dynamic_quant_mapping;
            assert(old != NULL);
            par_additional_dynamic_quant_mapping = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    // Tried code:
    if (isFrameUnusable(cache_frame_8e83124c50ecd6cdb509e28b1e10c7f4)) {
        Py_XDECREF(cache_frame_8e83124c50ecd6cdb509e28b1e10c7f4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8e83124c50ecd6cdb509e28b1e10c7f4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8e83124c50ecd6cdb509e28b1e10c7f4 = MAKE_FUNCTION_FRAME(codeobj_8e83124c50ecd6cdb509e28b1e10c7f4, module_torch$ao$quantization$quantization_mappings, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8e83124c50ecd6cdb509e28b1e10c7f4->m_type_description == NULL);
    frame_8e83124c50ecd6cdb509e28b1e10c7f4 = cache_frame_8e83124c50ecd6cdb509e28b1e10c7f4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8e83124c50ecd6cdb509e28b1e10c7f4);
    assert(Py_REFCNT(frame_8e83124c50ecd6cdb509e28b1e10c7f4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_additional_dynamic_quant_mapping);
        tmp_args_element_value_2 = par_additional_dynamic_quant_mapping;
        frame_8e83124c50ecd6cdb509e28b1e10c7f4->m_frame.f_lineno = 212;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
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
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_float_module_class);
        tmp_args_element_value_3 = par_float_module_class;
        tmp_args_element_value_4 = Py_None;
        frame_8e83124c50ecd6cdb509e28b1e10c7f4->m_frame.f_lineno = 213;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_dynamic_quant_module_class == NULL);
        var_dynamic_quant_module_class = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_dynamic_quant_module_class);
        tmp_cmp_expr_left_2 = var_dynamic_quant_module_class;
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
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_unicode_arg_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_kw_call_arg_value_0_1 = mod_consts[19];
        CHECK_OBJECT(par_float_module_class);
        tmp_unicode_arg_1 = par_float_module_class;
        tmp_kw_call_arg_value_1_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_8e83124c50ecd6cdb509e28b1e10c7f4->m_frame.f_lineno = 215;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_add_expr_left_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[20];
        tmp_tuple_element_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        assert(!(tmp_tuple_element_1 == NULL));
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 214;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_5;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dynamic_quant_module_class);
        tmp_args_element_value_5 = var_dynamic_quant_module_class;
        frame_8e83124c50ecd6cdb509e28b1e10c7f4->m_frame.f_lineno = 217;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_5);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;
            type_description_1 = "oooo";
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
        exception_tb = MAKE_TRACEBACK(frame_8e83124c50ecd6cdb509e28b1e10c7f4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8e83124c50ecd6cdb509e28b1e10c7f4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8e83124c50ecd6cdb509e28b1e10c7f4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8e83124c50ecd6cdb509e28b1e10c7f4,
        type_description_1,
        par_float_module_class,
        par_additional_dynamic_quant_mapping,
        var_all_mappings,
        var_dynamic_quant_module_class
    );


    // Release cached frame if used for exception.
    if (frame_8e83124c50ecd6cdb509e28b1e10c7f4 == cache_frame_8e83124c50ecd6cdb509e28b1e10c7f4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8e83124c50ecd6cdb509e28b1e10c7f4);
        cache_frame_8e83124c50ecd6cdb509e28b1e10c7f4 = NULL;
    }

    assertFrameObject(frame_8e83124c50ecd6cdb509e28b1e10c7f4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_additional_dynamic_quant_mapping);
    Py_DECREF(par_additional_dynamic_quant_mapping);
    par_additional_dynamic_quant_mapping = NULL;
    CHECK_OBJECT(var_all_mappings);
    Py_DECREF(var_all_mappings);
    var_all_mappings = NULL;
    CHECK_OBJECT(var_dynamic_quant_module_class);
    Py_DECREF(var_dynamic_quant_module_class);
    var_dynamic_quant_module_class = NULL;
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

    CHECK_OBJECT(par_additional_dynamic_quant_mapping);
    Py_DECREF(par_additional_dynamic_quant_mapping);
    par_additional_dynamic_quant_mapping = NULL;
    Py_XDECREF(var_all_mappings);
    var_all_mappings = NULL;
    Py_XDECREF(var_dynamic_quant_module_class);
    var_dynamic_quant_module_class = NULL;
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
    CHECK_OBJECT(par_float_module_class);
    Py_DECREF(par_float_module_class);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_float_module_class);
    Py_DECREF(par_float_module_class);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__7_get_default_qat_module_mappings(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_f0ec0eb74696e7a8df53d9a10d5ee26c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f0ec0eb74696e7a8df53d9a10d5ee26c = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f0ec0eb74696e7a8df53d9a10d5ee26c)) {
        Py_XDECREF(cache_frame_f0ec0eb74696e7a8df53d9a10d5ee26c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f0ec0eb74696e7a8df53d9a10d5ee26c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f0ec0eb74696e7a8df53d9a10d5ee26c = MAKE_FUNCTION_FRAME(codeobj_f0ec0eb74696e7a8df53d9a10d5ee26c, module_torch$ao$quantization$quantization_mappings, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f0ec0eb74696e7a8df53d9a10d5ee26c->m_type_description == NULL);
    frame_f0ec0eb74696e7a8df53d9a10d5ee26c = cache_frame_f0ec0eb74696e7a8df53d9a10d5ee26c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f0ec0eb74696e7a8df53d9a10d5ee26c);
    assert(Py_REFCNT(frame_f0ec0eb74696e7a8df53d9a10d5ee26c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 222;

            goto frame_exception_exit_1;
        }
        frame_f0ec0eb74696e7a8df53d9a10d5ee26c->m_frame.f_lineno = 222;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 222;

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
        exception_tb = MAKE_TRACEBACK(frame_f0ec0eb74696e7a8df53d9a10d5ee26c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f0ec0eb74696e7a8df53d9a10d5ee26c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f0ec0eb74696e7a8df53d9a10d5ee26c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f0ec0eb74696e7a8df53d9a10d5ee26c,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_f0ec0eb74696e7a8df53d9a10d5ee26c == cache_frame_f0ec0eb74696e7a8df53d9a10d5ee26c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f0ec0eb74696e7a8df53d9a10d5ee26c);
        cache_frame_f0ec0eb74696e7a8df53d9a10d5ee26c = NULL;
    }

    assertFrameObject(frame_f0ec0eb74696e7a8df53d9a10d5ee26c);

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


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__8_get_embedding_qat_module_mappings(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_mapping = NULL;
    struct Nuitka_FrameObject *frame_1bcafbc7f62164a1166b66631457547e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_1bcafbc7f62164a1166b66631457547e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1bcafbc7f62164a1166b66631457547e)) {
        Py_XDECREF(cache_frame_1bcafbc7f62164a1166b66631457547e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1bcafbc7f62164a1166b66631457547e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1bcafbc7f62164a1166b66631457547e = MAKE_FUNCTION_FRAME(codeobj_1bcafbc7f62164a1166b66631457547e, module_torch$ao$quantization$quantization_mappings, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1bcafbc7f62164a1166b66631457547e->m_type_description == NULL);
    frame_1bcafbc7f62164a1166b66631457547e = cache_frame_1bcafbc7f62164a1166b66631457547e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1bcafbc7f62164a1166b66631457547e);
    assert(Py_REFCNT(frame_1bcafbc7f62164a1166b66631457547e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_1bcafbc7f62164a1166b66631457547e->m_frame.f_lineno = 229;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_mapping == NULL);
        var_mapping = tmp_assign_source_1;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[10]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mapping);
        tmp_ass_subscribed_1 = var_mapping;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[10]);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[12]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mapping);
        tmp_ass_subscribed_2 = var_mapping;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 231;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[12]);
        if (tmp_ass_subscript_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 231;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscript_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1bcafbc7f62164a1166b66631457547e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1bcafbc7f62164a1166b66631457547e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1bcafbc7f62164a1166b66631457547e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1bcafbc7f62164a1166b66631457547e,
        type_description_1,
        var_mapping
    );


    // Release cached frame if used for exception.
    if (frame_1bcafbc7f62164a1166b66631457547e == cache_frame_1bcafbc7f62164a1166b66631457547e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1bcafbc7f62164a1166b66631457547e);
        cache_frame_1bcafbc7f62164a1166b66631457547e = NULL;
    }

    assertFrameObject(frame_1bcafbc7f62164a1166b66631457547e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_mapping);
    tmp_return_value = var_mapping;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_mapping);
    Py_DECREF(var_mapping);
    var_mapping = NULL;
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

    Py_XDECREF(var_mapping);
    var_mapping = NULL;
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


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__9_get_default_dynamic_quant_module_mappings(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_6b197ef8a37ff640ea14d3430dd6e31d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6b197ef8a37ff640ea14d3430dd6e31d = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6b197ef8a37ff640ea14d3430dd6e31d)) {
        Py_XDECREF(cache_frame_6b197ef8a37ff640ea14d3430dd6e31d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6b197ef8a37ff640ea14d3430dd6e31d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6b197ef8a37ff640ea14d3430dd6e31d = MAKE_FUNCTION_FRAME(codeobj_6b197ef8a37ff640ea14d3430dd6e31d, module_torch$ao$quantization$quantization_mappings, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6b197ef8a37ff640ea14d3430dd6e31d->m_type_description == NULL);
    frame_6b197ef8a37ff640ea14d3430dd6e31d = cache_frame_6b197ef8a37ff640ea14d3430dd6e31d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6b197ef8a37ff640ea14d3430dd6e31d);
    assert(Py_REFCNT(frame_6b197ef8a37ff640ea14d3430dd6e31d) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[22]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 237;

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
        exception_tb = MAKE_TRACEBACK(frame_6b197ef8a37ff640ea14d3430dd6e31d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6b197ef8a37ff640ea14d3430dd6e31d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6b197ef8a37ff640ea14d3430dd6e31d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6b197ef8a37ff640ea14d3430dd6e31d,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_6b197ef8a37ff640ea14d3430dd6e31d == cache_frame_6b197ef8a37ff640ea14d3430dd6e31d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6b197ef8a37ff640ea14d3430dd6e31d);
        cache_frame_6b197ef8a37ff640ea14d3430dd6e31d = NULL;
    }

    assertFrameObject(frame_6b197ef8a37ff640ea14d3430dd6e31d);

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


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__10_get_default_dynamic_sparse_quant_module_mappings(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_0005915427a6e7c461f4f2fa10baa9f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0005915427a6e7c461f4f2fa10baa9f2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0005915427a6e7c461f4f2fa10baa9f2)) {
        Py_XDECREF(cache_frame_0005915427a6e7c461f4f2fa10baa9f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0005915427a6e7c461f4f2fa10baa9f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0005915427a6e7c461f4f2fa10baa9f2 = MAKE_FUNCTION_FRAME(codeobj_0005915427a6e7c461f4f2fa10baa9f2, module_torch$ao$quantization$quantization_mappings, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0005915427a6e7c461f4f2fa10baa9f2->m_type_description == NULL);
    frame_0005915427a6e7c461f4f2fa10baa9f2 = cache_frame_0005915427a6e7c461f4f2fa10baa9f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0005915427a6e7c461f4f2fa10baa9f2);
    assert(Py_REFCNT(frame_0005915427a6e7c461f4f2fa10baa9f2) == 2);

    // Framed code:
    tmp_return_value = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[28]);

    if (unlikely(tmp_return_value == NULL)) {
        tmp_return_value = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
    }

    if (tmp_return_value == NULL) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 242;

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
        exception_tb = MAKE_TRACEBACK(frame_0005915427a6e7c461f4f2fa10baa9f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0005915427a6e7c461f4f2fa10baa9f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0005915427a6e7c461f4f2fa10baa9f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0005915427a6e7c461f4f2fa10baa9f2,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_0005915427a6e7c461f4f2fa10baa9f2 == cache_frame_0005915427a6e7c461f4f2fa10baa9f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0005915427a6e7c461f4f2fa10baa9f2);
        cache_frame_0005915427a6e7c461f4f2fa10baa9f2 = NULL;
    }

    assertFrameObject(frame_0005915427a6e7c461f4f2fa10baa9f2);

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


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__11_get_default_qconfig_propagation_list(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_QCONFIG_PROPAGATE_MODULE_CLASS_LIST = NULL;
    struct Nuitka_FrameObject *frame_c60ec05c14e171bb36d768661e5a5717;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c60ec05c14e171bb36d768661e5a5717 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_c60ec05c14e171bb36d768661e5a5717)) {
        Py_XDECREF(cache_frame_c60ec05c14e171bb36d768661e5a5717);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c60ec05c14e171bb36d768661e5a5717 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c60ec05c14e171bb36d768661e5a5717 = MAKE_FUNCTION_FRAME(codeobj_c60ec05c14e171bb36d768661e5a5717, module_torch$ao$quantization$quantization_mappings, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c60ec05c14e171bb36d768661e5a5717->m_type_description == NULL);
    frame_c60ec05c14e171bb36d768661e5a5717 = cache_frame_c60ec05c14e171bb36d768661e5a5717;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c60ec05c14e171bb36d768661e5a5717);
    assert(Py_REFCNT(frame_c60ec05c14e171bb36d768661e5a5717) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_bitor_expr_left_3;
        PyObject *tmp_bitor_expr_right_3;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_set_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_set_arg_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c60ec05c14e171bb36d768661e5a5717->m_frame.f_lineno = 249;
        tmp_set_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_set_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_3 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_bitor_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c60ec05c14e171bb36d768661e5a5717->m_frame.f_lineno = 250;
        tmp_set_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_set_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_3 = PySet_New(tmp_set_arg_2);
        Py_DECREF(tmp_set_arg_2);
        if (tmp_bitor_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 250;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
        Py_DECREF(tmp_bitor_expr_left_3);
        Py_DECREF(tmp_bitor_expr_right_3);
        assert(!(tmp_bitor_expr_left_2 == NULL));
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 251;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[30]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 251;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_c60ec05c14e171bb36d768661e5a5717->m_frame.f_lineno = 251;
        tmp_set_arg_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_set_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 251;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_2 = PySet_New(tmp_set_arg_3);
        Py_DECREF(tmp_set_arg_3);
        if (tmp_bitor_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 251;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        Py_DECREF(tmp_bitor_expr_left_2);
        Py_DECREF(tmp_bitor_expr_right_2);
        assert(!(tmp_bitor_expr_left_1 == NULL));
        tmp_bitor_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_bitor_expr_right_1 == NULL)) {
            tmp_bitor_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_bitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_QCONFIG_PROPAGATE_MODULE_CLASS_LIST == NULL);
        var_QCONFIG_PROPAGATE_MODULE_CLASS_LIST = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_QCONFIG_PROPAGATE_MODULE_CLASS_LIST);
        tmp_args_element_value_1 = var_QCONFIG_PROPAGATE_MODULE_CLASS_LIST;
        frame_c60ec05c14e171bb36d768661e5a5717->m_frame.f_lineno = 254;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c60ec05c14e171bb36d768661e5a5717, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c60ec05c14e171bb36d768661e5a5717->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c60ec05c14e171bb36d768661e5a5717, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c60ec05c14e171bb36d768661e5a5717,
        type_description_1,
        var_QCONFIG_PROPAGATE_MODULE_CLASS_LIST
    );


    // Release cached frame if used for exception.
    if (frame_c60ec05c14e171bb36d768661e5a5717 == cache_frame_c60ec05c14e171bb36d768661e5a5717) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c60ec05c14e171bb36d768661e5a5717);
        cache_frame_c60ec05c14e171bb36d768661e5a5717 = NULL;
    }

    assertFrameObject(frame_c60ec05c14e171bb36d768661e5a5717);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_QCONFIG_PROPAGATE_MODULE_CLASS_LIST);
    Py_DECREF(var_QCONFIG_PROPAGATE_MODULE_CLASS_LIST);
    var_QCONFIG_PROPAGATE_MODULE_CLASS_LIST = NULL;
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

    Py_XDECREF(var_QCONFIG_PROPAGATE_MODULE_CLASS_LIST);
    var_QCONFIG_PROPAGATE_MODULE_CLASS_LIST = NULL;
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


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__12_get_default_compare_output_module_list(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_NUMERIC_SUITE_COMPARE_MODEL_OUTPUT_MODULE_LIST = NULL;
    struct Nuitka_FrameObject *frame_26a4901ebfbba97c644eb8e0388120d1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_26a4901ebfbba97c644eb8e0388120d1 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_26a4901ebfbba97c644eb8e0388120d1)) {
        Py_XDECREF(cache_frame_26a4901ebfbba97c644eb8e0388120d1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_26a4901ebfbba97c644eb8e0388120d1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_26a4901ebfbba97c644eb8e0388120d1 = MAKE_FUNCTION_FRAME(codeobj_26a4901ebfbba97c644eb8e0388120d1, module_torch$ao$quantization$quantization_mappings, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_26a4901ebfbba97c644eb8e0388120d1->m_type_description == NULL);
    frame_26a4901ebfbba97c644eb8e0388120d1 = cache_frame_26a4901ebfbba97c644eb8e0388120d1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_26a4901ebfbba97c644eb8e0388120d1);
    assert(Py_REFCNT(frame_26a4901ebfbba97c644eb8e0388120d1) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        PyObject *tmp_bitor_expr_left_2;
        PyObject *tmp_bitor_expr_right_2;
        PyObject *tmp_bitor_expr_left_3;
        PyObject *tmp_bitor_expr_right_3;
        PyObject *tmp_bitor_expr_left_4;
        PyObject *tmp_bitor_expr_right_4;
        PyObject *tmp_bitor_expr_left_5;
        PyObject *tmp_bitor_expr_right_5;
        PyObject *tmp_bitor_expr_left_6;
        PyObject *tmp_bitor_expr_right_6;
        PyObject *tmp_set_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_set_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_set_arg_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_set_arg_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_set_arg_5;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_set_arg_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_26a4901ebfbba97c644eb8e0388120d1->m_frame.f_lineno = 261;
        tmp_set_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_set_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_6 = PySet_New(tmp_set_arg_1);
        Py_DECREF(tmp_set_arg_1);
        if (tmp_bitor_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 261;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[33]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_26a4901ebfbba97c644eb8e0388120d1->m_frame.f_lineno = 262;
        tmp_set_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_set_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_6 = PySet_New(tmp_set_arg_2);
        Py_DECREF(tmp_set_arg_2);
        if (tmp_bitor_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_6);

            exception_lineno = 262;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_5 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_6, tmp_bitor_expr_right_6);
        Py_DECREF(tmp_bitor_expr_left_6);
        Py_DECREF(tmp_bitor_expr_right_6);
        assert(!(tmp_bitor_expr_left_5 == NULL));
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[33]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_26a4901ebfbba97c644eb8e0388120d1->m_frame.f_lineno = 263;
        tmp_set_arg_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_set_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_5 = PySet_New(tmp_set_arg_3);
        Py_DECREF(tmp_set_arg_3);
        if (tmp_bitor_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_5);

            exception_lineno = 263;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_4 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_5, tmp_bitor_expr_right_5);
        Py_DECREF(tmp_bitor_expr_left_5);
        Py_DECREF(tmp_bitor_expr_right_5);
        assert(!(tmp_bitor_expr_left_4 == NULL));
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[7]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[7]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[30]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_26a4901ebfbba97c644eb8e0388120d1->m_frame.f_lineno = 264;
        tmp_set_arg_4 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_set_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_4 = PySet_New(tmp_set_arg_4);
        Py_DECREF(tmp_set_arg_4);
        if (tmp_bitor_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_4);

            exception_lineno = 264;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_3 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_4, tmp_bitor_expr_right_4);
        Py_DECREF(tmp_bitor_expr_left_4);
        Py_DECREF(tmp_bitor_expr_right_4);
        assert(!(tmp_bitor_expr_left_3 == NULL));
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[30]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_26a4901ebfbba97c644eb8e0388120d1->m_frame.f_lineno = 265;
        tmp_set_arg_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
        Py_DECREF(tmp_called_value_5);
        if (tmp_set_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_3 = PySet_New(tmp_set_arg_5);
        Py_DECREF(tmp_set_arg_5);
        if (tmp_bitor_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_3);

            exception_lineno = 265;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_2 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_3, tmp_bitor_expr_right_3);
        Py_DECREF(tmp_bitor_expr_left_3);
        Py_DECREF(tmp_bitor_expr_right_3);
        assert(!(tmp_bitor_expr_left_2 == NULL));
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 266;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[30]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 266;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_26a4901ebfbba97c644eb8e0388120d1->m_frame.f_lineno = 266;
        tmp_set_arg_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_set_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 266;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_right_2 = PySet_New(tmp_set_arg_6);
        Py_DECREF(tmp_set_arg_6);
        if (tmp_bitor_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_2);

            exception_lineno = 266;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_bitor_expr_left_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_2, tmp_bitor_expr_right_2);
        Py_DECREF(tmp_bitor_expr_left_2);
        Py_DECREF(tmp_bitor_expr_right_2);
        assert(!(tmp_bitor_expr_left_1 == NULL));
        tmp_bitor_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_bitor_expr_right_1 == NULL)) {
            tmp_bitor_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_bitor_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitor_expr_left_1);

            exception_lineno = 267;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        assert(var_NUMERIC_SUITE_COMPARE_MODEL_OUTPUT_MODULE_LIST == NULL);
        var_NUMERIC_SUITE_COMPARE_MODEL_OUTPUT_MODULE_LIST = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_NUMERIC_SUITE_COMPARE_MODEL_OUTPUT_MODULE_LIST);
        tmp_args_element_value_1 = var_NUMERIC_SUITE_COMPARE_MODEL_OUTPUT_MODULE_LIST;
        frame_26a4901ebfbba97c644eb8e0388120d1->m_frame.f_lineno = 269;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[6], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_26a4901ebfbba97c644eb8e0388120d1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_26a4901ebfbba97c644eb8e0388120d1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_26a4901ebfbba97c644eb8e0388120d1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_26a4901ebfbba97c644eb8e0388120d1,
        type_description_1,
        var_NUMERIC_SUITE_COMPARE_MODEL_OUTPUT_MODULE_LIST
    );


    // Release cached frame if used for exception.
    if (frame_26a4901ebfbba97c644eb8e0388120d1 == cache_frame_26a4901ebfbba97c644eb8e0388120d1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_26a4901ebfbba97c644eb8e0388120d1);
        cache_frame_26a4901ebfbba97c644eb8e0388120d1 = NULL;
    }

    assertFrameObject(frame_26a4901ebfbba97c644eb8e0388120d1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_NUMERIC_SUITE_COMPARE_MODEL_OUTPUT_MODULE_LIST);
    Py_DECREF(var_NUMERIC_SUITE_COMPARE_MODEL_OUTPUT_MODULE_LIST);
    var_NUMERIC_SUITE_COMPARE_MODEL_OUTPUT_MODULE_LIST = NULL;
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

    Py_XDECREF(var_NUMERIC_SUITE_COMPARE_MODEL_OUTPUT_MODULE_LIST);
    var_NUMERIC_SUITE_COMPARE_MODEL_OUTPUT_MODULE_LIST = NULL;
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


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__13_get_default_float_to_quantized_operator_mappings(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_295d1f5231f142b8dee263067297b7fc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_295d1f5231f142b8dee263067297b7fc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_295d1f5231f142b8dee263067297b7fc)) {
        Py_XDECREF(cache_frame_295d1f5231f142b8dee263067297b7fc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_295d1f5231f142b8dee263067297b7fc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_295d1f5231f142b8dee263067297b7fc = MAKE_FUNCTION_FRAME(codeobj_295d1f5231f142b8dee263067297b7fc, module_torch$ao$quantization$quantization_mappings, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_295d1f5231f142b8dee263067297b7fc->m_type_description == NULL);
    frame_295d1f5231f142b8dee263067297b7fc = cache_frame_295d1f5231f142b8dee263067297b7fc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_295d1f5231f142b8dee263067297b7fc);
    assert(Py_REFCNT(frame_295d1f5231f142b8dee263067297b7fc) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[5]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[5]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_args_element_value_1 == NULL)) {
            tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 273;

            goto frame_exception_exit_1;
        }
        frame_295d1f5231f142b8dee263067297b7fc->m_frame.f_lineno = 273;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

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
        exception_tb = MAKE_TRACEBACK(frame_295d1f5231f142b8dee263067297b7fc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_295d1f5231f142b8dee263067297b7fc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_295d1f5231f142b8dee263067297b7fc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_295d1f5231f142b8dee263067297b7fc,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_295d1f5231f142b8dee263067297b7fc == cache_frame_295d1f5231f142b8dee263067297b7fc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_295d1f5231f142b8dee263067297b7fc);
        cache_frame_295d1f5231f142b8dee263067297b7fc = NULL;
    }

    assertFrameObject(frame_295d1f5231f142b8dee263067297b7fc);

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


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__14_get_quantized_operator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_float_op = python_pars[0];
    PyObject *var_quantized_op = NULL;
    struct Nuitka_FrameObject *frame_2c26d7662130185451306799e9af9a70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_2c26d7662130185451306799e9af9a70 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2c26d7662130185451306799e9af9a70)) {
        Py_XDECREF(cache_frame_2c26d7662130185451306799e9af9a70);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2c26d7662130185451306799e9af9a70 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2c26d7662130185451306799e9af9a70 = MAKE_FUNCTION_FRAME(codeobj_2c26d7662130185451306799e9af9a70, module_torch$ao$quantization$quantization_mappings, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2c26d7662130185451306799e9af9a70->m_type_description == NULL);
    frame_2c26d7662130185451306799e9af9a70 = cache_frame_2c26d7662130185451306799e9af9a70;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2c26d7662130185451306799e9af9a70);
    assert(Py_REFCNT(frame_2c26d7662130185451306799e9af9a70) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_float_op);
        tmp_args_element_value_1 = par_float_op;
        tmp_args_element_value_2 = Py_None;
        frame_2c26d7662130185451306799e9af9a70->m_frame.f_lineno = 279;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_quantized_op == NULL);
        var_quantized_op = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_quantized_op);
        tmp_cmp_expr_left_1 = var_quantized_op;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_unicode_arg_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_kw_call_arg_value_0_1 = mod_consts[36];
        CHECK_OBJECT(par_float_op);
        tmp_unicode_arg_1 = par_float_op;
        tmp_kw_call_arg_value_1_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        if (tmp_kw_call_arg_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_2c26d7662130185451306799e9af9a70->m_frame.f_lineno = 281;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_raise_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_raise_value_1, 0, tmp_tuple_element_1);
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 280;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2c26d7662130185451306799e9af9a70, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2c26d7662130185451306799e9af9a70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2c26d7662130185451306799e9af9a70, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2c26d7662130185451306799e9af9a70,
        type_description_1,
        par_float_op,
        var_quantized_op
    );


    // Release cached frame if used for exception.
    if (frame_2c26d7662130185451306799e9af9a70 == cache_frame_2c26d7662130185451306799e9af9a70) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2c26d7662130185451306799e9af9a70);
        cache_frame_2c26d7662130185451306799e9af9a70 = NULL;
    }

    assertFrameObject(frame_2c26d7662130185451306799e9af9a70);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_quantized_op);
    tmp_return_value = var_quantized_op;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_quantized_op);
    Py_DECREF(var_quantized_op);
    var_quantized_op = NULL;
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

    Py_XDECREF(var_quantized_op);
    var_quantized_op = NULL;
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
    CHECK_OBJECT(par_float_op);
    Py_DECREF(par_float_op);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_float_op);
    Py_DECREF(par_float_op);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__15__get_special_act_post_process(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_module = python_pars[0];
    struct Nuitka_FrameObject *frame_6dea6aed57d19cdf18b39b6cf6768202;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6dea6aed57d19cdf18b39b6cf6768202 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6dea6aed57d19cdf18b39b6cf6768202)) {
        Py_XDECREF(cache_frame_6dea6aed57d19cdf18b39b6cf6768202);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6dea6aed57d19cdf18b39b6cf6768202 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6dea6aed57d19cdf18b39b6cf6768202 = MAKE_FUNCTION_FRAME(codeobj_6dea6aed57d19cdf18b39b6cf6768202, module_torch$ao$quantization$quantization_mappings, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6dea6aed57d19cdf18b39b6cf6768202->m_type_description == NULL);
    frame_6dea6aed57d19cdf18b39b6cf6768202 = cache_frame_6dea6aed57d19cdf18b39b6cf6768202;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6dea6aed57d19cdf18b39b6cf6768202);
    assert(Py_REFCNT(frame_6dea6aed57d19cdf18b39b6cf6768202) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_module);
        tmp_type_arg_1 = par_module;
        tmp_args_element_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_args_element_value_1 == NULL));
        tmp_args_element_value_2 = Py_None;
        frame_6dea6aed57d19cdf18b39b6cf6768202->m_frame.f_lineno = 291;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
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
        exception_tb = MAKE_TRACEBACK(frame_6dea6aed57d19cdf18b39b6cf6768202, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6dea6aed57d19cdf18b39b6cf6768202->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6dea6aed57d19cdf18b39b6cf6768202, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6dea6aed57d19cdf18b39b6cf6768202,
        type_description_1,
        par_module
    );


    // Release cached frame if used for exception.
    if (frame_6dea6aed57d19cdf18b39b6cf6768202 == cache_frame_6dea6aed57d19cdf18b39b6cf6768202) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6dea6aed57d19cdf18b39b6cf6768202);
        cache_frame_6dea6aed57d19cdf18b39b6cf6768202 = NULL;
    }

    assertFrameObject(frame_6dea6aed57d19cdf18b39b6cf6768202);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_module);
    Py_DECREF(par_module);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_module);
    Py_DECREF(par_module);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$quantization_mappings$$$function__16__has_special_act_post_process(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_module = python_pars[0];
    struct Nuitka_FrameObject *frame_935ccf4faa0ca4afe52a6382456499f2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_935ccf4faa0ca4afe52a6382456499f2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_935ccf4faa0ca4afe52a6382456499f2)) {
        Py_XDECREF(cache_frame_935ccf4faa0ca4afe52a6382456499f2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_935ccf4faa0ca4afe52a6382456499f2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_935ccf4faa0ca4afe52a6382456499f2 = MAKE_FUNCTION_FRAME(codeobj_935ccf4faa0ca4afe52a6382456499f2, module_torch$ao$quantization$quantization_mappings, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_935ccf4faa0ca4afe52a6382456499f2->m_type_description == NULL);
    frame_935ccf4faa0ca4afe52a6382456499f2 = cache_frame_935ccf4faa0ca4afe52a6382456499f2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_935ccf4faa0ca4afe52a6382456499f2);
    assert(Py_REFCNT(frame_935ccf4faa0ca4afe52a6382456499f2) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_type_arg_1;
        CHECK_OBJECT(par_module);
        tmp_expression_value_1 = par_module;
        tmp_and_left_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        if (tmp_and_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_and_left_value_1);

            exception_lineno = 294;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        Py_DECREF(tmp_and_left_value_1);
        CHECK_OBJECT(par_module);
        tmp_type_arg_1 = par_module;
        tmp_cmp_expr_left_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_cmp_expr_left_1 == NULL));
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 294;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 1) ? Py_True : Py_False;
        Py_INCREF(tmp_and_right_value_1);
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_935ccf4faa0ca4afe52a6382456499f2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_935ccf4faa0ca4afe52a6382456499f2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_935ccf4faa0ca4afe52a6382456499f2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_935ccf4faa0ca4afe52a6382456499f2,
        type_description_1,
        par_module
    );


    // Release cached frame if used for exception.
    if (frame_935ccf4faa0ca4afe52a6382456499f2 == cache_frame_935ccf4faa0ca4afe52a6382456499f2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_935ccf4faa0ca4afe52a6382456499f2);
        cache_frame_935ccf4faa0ca4afe52a6382456499f2 = NULL;
    }

    assertFrameObject(frame_935ccf4faa0ca4afe52a6382456499f2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_module);
    Py_DECREF(par_module);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_module);
    Py_DECREF(par_module);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__10_get_default_dynamic_sparse_quant_module_mappings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__10_get_default_dynamic_sparse_quant_module_mappings,
        mod_consts[164],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0005915427a6e7c461f4f2fa10baa9f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        mod_consts[29],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__11_get_default_qconfig_propagation_list(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__11_get_default_qconfig_propagation_list,
        mod_consts[165],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c60ec05c14e171bb36d768661e5a5717,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__12_get_default_compare_output_module_list(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__12_get_default_compare_output_module_list,
        mod_consts[166],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_26a4901ebfbba97c644eb8e0388120d1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        mod_consts[34],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__13_get_default_float_to_quantized_operator_mappings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__13_get_default_float_to_quantized_operator_mappings,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_295d1f5231f142b8dee263067297b7fc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__14_get_quantized_operator(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__14_get_quantized_operator,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2c26d7662130185451306799e9af9a70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        mod_consts[37],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__15__get_special_act_post_process(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__15__get_special_act_post_process,
        mod_consts[172],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6dea6aed57d19cdf18b39b6cf6768202,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__16__has_special_act_post_process(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__16__has_special_act_post_process,
        mod_consts[173],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_935ccf4faa0ca4afe52a6382456499f2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__1_no_observer_set(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__1_no_observer_set,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bedf963714232fd1f586adef737c640c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        mod_consts[4],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__2_get_default_static_quant_module_mappings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__2_get_default_static_quant_module_mappings,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_44f3a7a85ac22a0194ce4002c495ebe9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__3_get_embedding_static_quant_module_mappings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__3_get_embedding_static_quant_module_mappings,
        mod_consts[151],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6e288da2d417867d008bb27003c03a75,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__4_get_default_static_sparse_quant_module_mappings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__4_get_default_static_sparse_quant_module_mappings,
        mod_consts[152],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_b92aad687c5adc26c8711706e9c2ea0a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        mod_consts[15],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__5_get_static_quant_module_class(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__5_get_static_quant_module_class,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_bb20b6987beee564ab39019f96afb04a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__6_get_dynamic_quant_module_class(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__6_get_dynamic_quant_module_class,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8e83124c50ecd6cdb509e28b1e10c7f4,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        mod_consts[23],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__7_get_default_qat_module_mappings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__7_get_default_qat_module_mappings,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f0ec0eb74696e7a8df53d9a10d5ee26c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__8_get_embedding_qat_module_mappings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__8_get_embedding_qat_module_mappings,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1bcafbc7f62164a1166b66631457547e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        mod_consts[26],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__9_get_default_dynamic_quant_module_mappings(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantization_mappings$$$function__9_get_default_dynamic_quant_module_mappings,
        mod_consts[163],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6b197ef8a37ff640ea14d3430dd6e31d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$quantization_mappings,
        mod_consts[27],
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

function_impl_code functable_torch$ao$quantization$quantization_mappings[] = {
    impl_torch$ao$quantization$quantization_mappings$$$function__1_no_observer_set,
    impl_torch$ao$quantization$quantization_mappings$$$function__2_get_default_static_quant_module_mappings,
    impl_torch$ao$quantization$quantization_mappings$$$function__3_get_embedding_static_quant_module_mappings,
    impl_torch$ao$quantization$quantization_mappings$$$function__4_get_default_static_sparse_quant_module_mappings,
    impl_torch$ao$quantization$quantization_mappings$$$function__5_get_static_quant_module_class,
    impl_torch$ao$quantization$quantization_mappings$$$function__6_get_dynamic_quant_module_class,
    impl_torch$ao$quantization$quantization_mappings$$$function__7_get_default_qat_module_mappings,
    impl_torch$ao$quantization$quantization_mappings$$$function__8_get_embedding_qat_module_mappings,
    impl_torch$ao$quantization$quantization_mappings$$$function__9_get_default_dynamic_quant_module_mappings,
    impl_torch$ao$quantization$quantization_mappings$$$function__10_get_default_dynamic_sparse_quant_module_mappings,
    impl_torch$ao$quantization$quantization_mappings$$$function__11_get_default_qconfig_propagation_list,
    impl_torch$ao$quantization$quantization_mappings$$$function__12_get_default_compare_output_module_list,
    impl_torch$ao$quantization$quantization_mappings$$$function__13_get_default_float_to_quantized_operator_mappings,
    impl_torch$ao$quantization$quantization_mappings$$$function__14_get_quantized_operator,
    impl_torch$ao$quantization$quantization_mappings$$$function__15__get_special_act_post_process,
    impl_torch$ao$quantization$quantization_mappings$$$function__16__has_special_act_post_process,
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

    function_impl_code *current = functable_torch$ao$quantization$quantization_mappings;
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

    if (offset > sizeof(functable_torch$ao$quantization$quantization_mappings) || offset < 0) {
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
        functable_torch$ao$quantization$quantization_mappings[offset],
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
        module_torch$ao$quantization$quantization_mappings,
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
PyObject *modulecode_torch$ao$quantization$quantization_mappings(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.ao.quantization.quantization_mappings");

    // Store the module for future use.
    module_torch$ao$quantization$quantization_mappings = module;

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
        PRINT_STRING("torch.ao.quantization.quantization_mappings: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.ao.quantization.quantization_mappings: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.ao.quantization.quantization_mappings: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$ao$quantization$quantization_mappings\n");

    moduledict_torch$ao$quantization$quantization_mappings = MODULE_DICT(module_torch$ao$quantization$quantization_mappings);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$ao$quantization$quantization_mappings,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$ao$quantization$quantization_mappings,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[184]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$ao$quantization$quantization_mappings,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$ao$quantization$quantization_mappings,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$ao$quantization$quantization_mappings,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$ao$quantization$quantization_mappings);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$ao$quantization$quantization_mappings);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_44c9413b88030d0e64b6af527f7470b1;
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
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_2);
    }
    frame_44c9413b88030d0e64b6af527f7470b1 = MAKE_MODULE_FRAME(codeobj_44c9413b88030d0e64b6af527f7470b1, module_torch$ao$quantization$quantization_mappings);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_44c9413b88030d0e64b6af527f7470b1);
    assert(Py_REFCNT(frame_44c9413b88030d0e64b6af527f7470b1) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[44], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[45], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[5];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 1;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[5], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[49];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[49];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[50];
        tmp_level_value_3 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[0],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[51];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 6;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_import_name_from_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[0],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_2 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[52],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[52]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_import_name_from_5;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[54];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 7;
        tmp_import_name_from_5 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_import_name_from_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[0],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_4 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_5);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[55],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[55]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[57];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 8;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_import_name_from_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[0],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_7 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_import_name_from_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[55],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_6 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[55]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[58],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[60];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = Py_None;
        tmp_level_value_7 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 9;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_import_name_from_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[0],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_11 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_import_name_from_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[55],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_10 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[55]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_import_name_from_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[58],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_9 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[61],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_import_name_from_14;
        PyObject *tmp_import_name_from_15;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[63];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = Py_None;
        tmp_level_value_8 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 10;
        tmp_import_name_from_15 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_import_name_from_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_import_name_from_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[0],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_14 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_15);
        if (tmp_import_name_from_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_import_name_from_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[55],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_13 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[55]);
        }

        Py_DECREF(tmp_import_name_from_14);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[64],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_16;
        PyObject *tmp_import_name_from_17;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[66];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = Py_None;
        tmp_level_value_9 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 11;
        tmp_import_name_from_17 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_import_name_from_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_import_name_from_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[0],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_16 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_17);
        if (tmp_import_name_from_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[58],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_16);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_18;
        PyObject *tmp_import_name_from_19;
        PyObject *tmp_import_name_from_20;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[67];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = Py_None;
        tmp_level_value_10 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 12;
        tmp_import_name_from_20 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_import_name_from_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_import_name_from_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[0],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_19 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_20);
        if (tmp_import_name_from_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_import_name_from_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[58],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_18 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_19);
        if (tmp_import_name_from_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[68],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[68]);
        }

        Py_DECREF(tmp_import_name_from_18);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_21;
        PyObject *tmp_import_name_from_22;
        PyObject *tmp_import_name_from_23;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[70];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = Py_None;
        tmp_level_value_11 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 13;
        tmp_import_name_from_23 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_import_name_from_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_import_name_from_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[0],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_22 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_23);
        if (tmp_import_name_from_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_import_name_from_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[58],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_21 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[58]);
        }

        Py_DECREF(tmp_import_name_from_22);
        if (tmp_import_name_from_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[61],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_21);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_24;
        PyObject *tmp_import_name_from_25;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[72];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = Py_None;
        tmp_level_value_12 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 14;
        tmp_import_name_from_25 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_import_name_from_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_import_name_from_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[0],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_24 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_25);
        if (tmp_import_name_from_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[64],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_24);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 14;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_26;
        PyObject *tmp_import_name_from_27;
        PyObject *tmp_import_name_from_28;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[73];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = Py_None;
        tmp_level_value_13 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 15;
        tmp_import_name_from_28 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_import_name_from_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_import_name_from_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[0],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_27 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_28);
        if (tmp_import_name_from_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_import_name_from_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[64],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_26 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[64]);
        }

        Py_DECREF(tmp_import_name_from_27);
        if (tmp_import_name_from_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[61],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[61]);
        }

        Py_DECREF(tmp_import_name_from_26);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        tmp_assign_source_18 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_18 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_18);
        tmp_import_from_1__module = tmp_assign_source_18;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_29 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[75],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[75]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[75], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_30 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[76],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[76]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_31;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_31 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_31)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_31,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[77],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_31, mod_consts[77]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_32;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_32 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_32)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_32,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[78],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_32, mod_consts[78]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[78], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_import_name_from_33;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_33 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_33)) {
            tmp_assign_source_23 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_33,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[79],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_23 = IMPORT_NAME(tmp_import_name_from_33, mod_consts[79]);
        }

        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_34;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_34 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_34)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_34,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[80],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_34, mod_consts[80]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 17;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80], tmp_assign_source_24);
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
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_35;
        PyObject *tmp_import_name_from_36;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[81];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = Py_None;
        tmp_level_value_14 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 19;
        tmp_import_name_from_36 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_import_name_from_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_36)) {
            tmp_import_name_from_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_36,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[82],
                mod_consts[48]
            );
        } else {
            tmp_import_name_from_35 = IMPORT_NAME(tmp_import_name_from_36, mod_consts[82]);
        }

        Py_DECREF(tmp_import_name_from_36);
        if (tmp_import_name_from_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_35)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_35,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[0],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_35, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_35);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 19;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[84];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = mod_consts[85];
        tmp_level_value_15 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 20;
        tmp_assign_source_26 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_26;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_37;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_37 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_37)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_37,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[86],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_37, mod_consts[86]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_38;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_38 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_38)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_38,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[87],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_38, mod_consts[87]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_28);
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
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[88];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = mod_consts[89];
        tmp_level_value_16 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 21;
        tmp_assign_source_29 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_39;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_39 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_39)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_39,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[90],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_39, mod_consts[90]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[90], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_40;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_40 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_40)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_40,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[91],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_40, mod_consts[91]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_31);
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
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_41;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[92];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_torch$ao$quantization$quantization_mappings;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = mod_consts[93];
        tmp_level_value_17 = mod_consts[48];
        frame_44c9413b88030d0e64b6af527f7470b1->m_frame.f_lineno = 25;
        tmp_import_name_from_41 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_import_name_from_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_41)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_41,
                (PyObject *)moduledict_torch$ao$quantization$quantization_mappings,
                mod_consts[16],
                mod_consts[48]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_41, mod_consts[16]);
        }

        Py_DECREF(tmp_import_name_from_41);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[94]);
        if (tmp_dict_key_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[94]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_1);

            exception_lineno = 29;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_33 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_3;
            PyObject *tmp_expression_value_4;
            PyObject *tmp_expression_value_5;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto dict_build_exception_1;
            }
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[95]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[95]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 30;

                goto dict_build_exception_1;
            }
            tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_5 == NULL)) {
                tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[96]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[96]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto dict_build_exception_1;
            }
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto dict_build_exception_1;
            }
            tmp_dict_key_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[97]);
            if (tmp_dict_key_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto dict_build_exception_1;
            }
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[69]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 32;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[97]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_1);

                exception_lineno = 32;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_33, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            Py_DECREF(tmp_dict_key_1);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto dict_build_exception_1;
            }
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_assign_source_33);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_33);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto tuple_build_exception_1;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[17];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_10;
        tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_dict_key_2 == NULL)) {
            tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_dict_key_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[98]);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = _PyDict_NewPresized( 44 );
        {
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_expression_value_16;
            PyObject *tmp_expression_value_17;
            PyObject *tmp_expression_value_18;
            PyObject *tmp_expression_value_19;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_expression_value_21;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_expression_value_23;
            PyObject *tmp_expression_value_24;
            PyObject *tmp_expression_value_25;
            PyObject *tmp_expression_value_26;
            PyObject *tmp_expression_value_27;
            PyObject *tmp_expression_value_28;
            PyObject *tmp_expression_value_29;
            PyObject *tmp_expression_value_30;
            PyObject *tmp_expression_value_31;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_expression_value_33;
            PyObject *tmp_expression_value_34;
            PyObject *tmp_expression_value_35;
            PyObject *tmp_expression_value_36;
            PyObject *tmp_expression_value_37;
            PyObject *tmp_expression_value_38;
            PyObject *tmp_expression_value_39;
            PyObject *tmp_expression_value_40;
            PyObject *tmp_expression_value_41;
            PyObject *tmp_expression_value_42;
            PyObject *tmp_expression_value_43;
            PyObject *tmp_expression_value_44;
            PyObject *tmp_expression_value_45;
            PyObject *tmp_expression_value_46;
            PyObject *tmp_expression_value_47;
            PyObject *tmp_expression_value_48;
            PyObject *tmp_expression_value_49;
            PyObject *tmp_expression_value_50;
            PyObject *tmp_expression_value_51;
            PyObject *tmp_expression_value_52;
            PyObject *tmp_expression_value_53;
            PyObject *tmp_expression_value_54;
            PyObject *tmp_expression_value_55;
            PyObject *tmp_expression_value_56;
            PyObject *tmp_expression_value_57;
            PyObject *tmp_expression_value_58;
            PyObject *tmp_expression_value_59;
            PyObject *tmp_expression_value_60;
            PyObject *tmp_expression_value_61;
            PyObject *tmp_expression_value_62;
            PyObject *tmp_expression_value_63;
            PyObject *tmp_expression_value_64;
            PyObject *tmp_expression_value_65;
            PyObject *tmp_expression_value_66;
            PyObject *tmp_expression_value_67;
            PyObject *tmp_expression_value_68;
            PyObject *tmp_expression_value_69;
            PyObject *tmp_expression_value_70;
            PyObject *tmp_expression_value_71;
            PyObject *tmp_expression_value_72;
            PyObject *tmp_expression_value_73;
            PyObject *tmp_expression_value_74;
            PyObject *tmp_expression_value_75;
            PyObject *tmp_expression_value_76;
            PyObject *tmp_expression_value_77;
            PyObject *tmp_expression_value_78;
            PyObject *tmp_expression_value_79;
            PyObject *tmp_expression_value_80;
            PyObject *tmp_expression_value_81;
            PyObject *tmp_expression_value_82;
            PyObject *tmp_expression_value_83;
            PyObject *tmp_expression_value_84;
            PyObject *tmp_expression_value_85;
            PyObject *tmp_expression_value_86;
            PyObject *tmp_expression_value_87;
            PyObject *tmp_expression_value_88;
            PyObject *tmp_expression_value_89;
            PyObject *tmp_expression_value_90;
            PyObject *tmp_expression_value_91;
            PyObject *tmp_expression_value_92;
            PyObject *tmp_expression_value_93;
            PyObject *tmp_expression_value_94;
            PyObject *tmp_expression_value_95;
            PyObject *tmp_expression_value_96;
            PyObject *tmp_expression_value_97;
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 37;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[87]);

            if (unlikely(tmp_dict_key_2 == NULL)) {
                tmp_dict_key_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
            }

            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_2;
            }
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[99]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 38;

                goto dict_build_exception_2;
            }
            tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_12 == NULL)) {
                tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[100]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_2;
            }
            tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_13 == NULL)) {
                tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 39;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[100]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 39;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto dict_build_exception_2;
            }
            tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_14 == NULL)) {
                tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[101]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto dict_build_exception_2;
            }
            tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_15 == NULL)) {
                tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 40;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[101]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 40;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto dict_build_exception_2;
            }
            tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_16 == NULL)) {
                tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[102]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto dict_build_exception_2;
            }
            tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_17 == NULL)) {
                tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 41;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[102]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 41;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 41;

                goto dict_build_exception_2;
            }
            tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_18 == NULL)) {
                tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[95]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto dict_build_exception_2;
            }
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 42;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[95]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 42;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;

                goto dict_build_exception_2;
            }
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[96]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_2;
            }
            tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_21 == NULL)) {
                tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_21 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 43;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[96]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 43;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 43;

                goto dict_build_exception_2;
            }
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[97]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto dict_build_exception_2;
            }
            tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_23 == NULL)) {
                tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 44;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[97]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 44;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 44;

                goto dict_build_exception_2;
            }
            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_24 == NULL)) {
                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[103]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto dict_build_exception_2;
            }
            tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_25 == NULL)) {
                tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 45;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[103]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 45;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 45;

                goto dict_build_exception_2;
            }
            tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_26 == NULL)) {
                tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[104]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_2;
            }
            tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_27 == NULL)) {
                tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_27 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 46;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[104]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 46;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto dict_build_exception_2;
            }
            tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_28 == NULL)) {
                tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[105]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_2;
            }
            tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_29 == NULL)) {
                tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_29 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 47;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[105]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 47;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto dict_build_exception_2;
            }
            tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_30 == NULL)) {
                tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[106]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_2;
            }
            tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_31 == NULL)) {
                tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 48;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[106]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 48;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto dict_build_exception_2;
            }
            tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_32 == NULL)) {
                tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[12]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_2;
            }
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 49;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[12]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 49;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;

                goto dict_build_exception_2;
            }
            tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_34 == NULL)) {
                tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_34 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[10]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_2;
            }
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 50;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[10]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 50;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;

                goto dict_build_exception_2;
            }
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[107]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto dict_build_exception_2;
            }
            tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_37 == NULL)) {
                tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_37 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 51;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[107]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 51;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 51;

                goto dict_build_exception_2;
            }
            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_38 == NULL)) {
                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[108]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto dict_build_exception_2;
            }
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 52;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[108]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 52;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 52;

                goto dict_build_exception_2;
            }
            tmp_expression_value_40 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_40 == NULL)) {
                tmp_expression_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_40 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[109]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_2;
            }
            tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_41 == NULL)) {
                tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_41 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 53;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[109]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 53;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 53;

                goto dict_build_exception_2;
            }
            tmp_expression_value_42 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_42 == NULL)) {
                tmp_expression_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_42 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[110]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_2;
            }
            tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_43 == NULL)) {
                tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_43 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 54;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[110]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 54;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 54;

                goto dict_build_exception_2;
            }
            tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_44 == NULL)) {
                tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_44 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[111]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_2;
            }
            tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_45 == NULL)) {
                tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_45 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 55;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[111]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 55;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 55;

                goto dict_build_exception_2;
            }
            tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_46 == NULL)) {
                tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[112]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_2;
            }
            tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_47 == NULL)) {
                tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 56;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[112]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 56;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 56;

                goto dict_build_exception_2;
            }
            tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_48 == NULL)) {
                tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_48 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[113]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_2;
            }
            tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_49 == NULL)) {
                tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_49 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 57;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[113]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 57;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 57;

                goto dict_build_exception_2;
            }
            tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_52 == NULL)) {
                tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_52 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_2;
            }
            tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[114]);
            if (tmp_expression_value_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_2;
            }
            tmp_expression_value_50 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[115]);
            Py_DECREF(tmp_expression_value_51);
            if (tmp_expression_value_50 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[116]);
            Py_DECREF(tmp_expression_value_50);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_2;
            }
            tmp_expression_value_53 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_53 == NULL)) {
                tmp_expression_value_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_53 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 58;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[94]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 58;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 58;

                goto dict_build_exception_2;
            }
            tmp_expression_value_54 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_54 == NULL)) {
                tmp_expression_value_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[94]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_2;
            }
            tmp_expression_value_55 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_55 == NULL)) {
                tmp_expression_value_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_55 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 59;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[94]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 59;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 59;

                goto dict_build_exception_2;
            }
            tmp_expression_value_56 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_56 == NULL)) {
                tmp_expression_value_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[117]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_2;
            }
            tmp_expression_value_57 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_57 == NULL)) {
                tmp_expression_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_57 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 60;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_57, mod_consts[117]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 60;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 60;

                goto dict_build_exception_2;
            }
            tmp_expression_value_58 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_58 == NULL)) {
                tmp_expression_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_58 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[102]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_2;
            }
            tmp_expression_value_59 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_59 == NULL)) {
                tmp_expression_value_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 61;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_59, mod_consts[102]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 61;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 61;

                goto dict_build_exception_2;
            }
            tmp_expression_value_60 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_60 == NULL)) {
                tmp_expression_value_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_60, mod_consts[118]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_2;
            }
            tmp_expression_value_61 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_61 == NULL)) {
                tmp_expression_value_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_61 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 63;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_61, mod_consts[119]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 63;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 63;

                goto dict_build_exception_2;
            }
            tmp_expression_value_62 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_62 == NULL)) {
                tmp_expression_value_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_62, mod_consts[120]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_2;
            }
            tmp_expression_value_63 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_expression_value_63 == NULL)) {
                tmp_expression_value_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_expression_value_63 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 65;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[120]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 65;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 65;

                goto dict_build_exception_2;
            }
            tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_64 == NULL)) {
                tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_64 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[121]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_2;
            }
            tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_expression_value_65 == NULL)) {
                tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_expression_value_65 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 66;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[121]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 66;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 66;

                goto dict_build_exception_2;
            }
            tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_66 == NULL)) {
                tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[122]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_2;
            }
            tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_expression_value_67 == NULL)) {
                tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_expression_value_67 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 67;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[122]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 67;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto dict_build_exception_2;
            }
            tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_68 == NULL)) {
                tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[123]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto dict_build_exception_2;
            }
            tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_expression_value_69 == NULL)) {
                tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_expression_value_69 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 68;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[123]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 68;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 68;

                goto dict_build_exception_2;
            }
            tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_70 == NULL)) {
                tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_70 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[124]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_2;
            }
            tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_expression_value_71 == NULL)) {
                tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_expression_value_71 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 69;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[124]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 69;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 69;

                goto dict_build_exception_2;
            }
            tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_72 == NULL)) {
                tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_72 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[125]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto dict_build_exception_2;
            }
            tmp_expression_value_73 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_expression_value_73 == NULL)) {
                tmp_expression_value_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_expression_value_73 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 70;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_73, mod_consts[125]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 70;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 70;

                goto dict_build_exception_2;
            }
            tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_74 == NULL)) {
                tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_74 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[126]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_2;
            }
            tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_75 == NULL)) {
                tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 71;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_75, mod_consts[95]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 71;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 71;

                goto dict_build_exception_2;
            }
            tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_76 == NULL)) {
                tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_76 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[127]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_2;
            }
            tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_77 == NULL)) {
                tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_77 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 72;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[96]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 72;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;

                goto dict_build_exception_2;
            }
            tmp_expression_value_78 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_78 == NULL)) {
                tmp_expression_value_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_78 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[128]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto dict_build_exception_2;
            }
            tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_79 == NULL)) {
                tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_79 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 73;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[97]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 73;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto dict_build_exception_2;
            }
            tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_80 == NULL)) {
                tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_80 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[129]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_2;
            }
            tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_expression_value_81 == NULL)) {
                tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_expression_value_81 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 74;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[122]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 74;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 74;

                goto dict_build_exception_2;
            }
            tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_82 == NULL)) {
                tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_82 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[130]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_2;
            }
            tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_expression_value_83 == NULL)) {
                tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_expression_value_83 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 75;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[123]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 75;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 75;

                goto dict_build_exception_2;
            }
            tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_84 == NULL)) {
                tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_84 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[131]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto dict_build_exception_2;
            }
            tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_expression_value_85 == NULL)) {
                tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_expression_value_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 76;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[124]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 76;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 76;

                goto dict_build_exception_2;
            }
            tmp_expression_value_86 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_86 == NULL)) {
                tmp_expression_value_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_86 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_86, mod_consts[123]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto dict_build_exception_2;
            }
            tmp_expression_value_87 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_expression_value_87 == NULL)) {
                tmp_expression_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_expression_value_87 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 77;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[123]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 77;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 77;

                goto dict_build_exception_2;
            }
            tmp_expression_value_88 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_88 == NULL)) {
                tmp_expression_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_88 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_88, mod_consts[124]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto dict_build_exception_2;
            }
            tmp_expression_value_89 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_expression_value_89 == NULL)) {
                tmp_expression_value_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_expression_value_89 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 78;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[124]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 78;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 78;

                goto dict_build_exception_2;
            }
            tmp_expression_value_90 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_90 == NULL)) {
                tmp_expression_value_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_90 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_90, mod_consts[125]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto dict_build_exception_2;
            }
            tmp_expression_value_91 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[59]);

            if (unlikely(tmp_expression_value_91 == NULL)) {
                tmp_expression_value_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
            }

            if (tmp_expression_value_91 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 79;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[125]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 79;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto dict_build_exception_2;
            }
            tmp_expression_value_92 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_92 == NULL)) {
                tmp_expression_value_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_92 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_92, mod_consts[94]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto dict_build_exception_2;
            }
            tmp_expression_value_93 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_93 == NULL)) {
                tmp_expression_value_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 81;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[94]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 81;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;

                goto dict_build_exception_2;
            }
            tmp_expression_value_94 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_94 == NULL)) {
                tmp_expression_value_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_94 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_94, mod_consts[96]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto dict_build_exception_2;
            }
            tmp_expression_value_95 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_95 == NULL)) {
                tmp_expression_value_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 82;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[96]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 82;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 82;

                goto dict_build_exception_2;
            }
            tmp_expression_value_96 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_96 == NULL)) {
                tmp_expression_value_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_96 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_2;
            }
            tmp_dict_key_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_96, mod_consts[97]);
            if (tmp_dict_key_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_2;
            }
            tmp_expression_value_97 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_97 == NULL)) {
                tmp_expression_value_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_97 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 83;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[97]);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_2);

                exception_lineno = 83;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_34, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            Py_DECREF(tmp_dict_key_2);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;

                goto dict_build_exception_2;
            }
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_assign_source_34);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[7], tmp_assign_source_34);
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_expression_value_98 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_98 == NULL)) {
            tmp_expression_value_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto tuple_build_exception_2;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_subscript_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_ass_subvalue_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_98, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[7];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_expression_value_100;
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[96]);
        if (tmp_dict_key_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_3);

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[96]);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_3);

            exception_lineno = 88;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_35 = _PyDict_NewPresized( 13 );
        {
            PyObject *tmp_expression_value_101;
            PyObject *tmp_expression_value_102;
            PyObject *tmp_expression_value_103;
            PyObject *tmp_expression_value_104;
            PyObject *tmp_expression_value_105;
            PyObject *tmp_expression_value_106;
            PyObject *tmp_expression_value_107;
            PyObject *tmp_expression_value_108;
            PyObject *tmp_expression_value_109;
            PyObject *tmp_expression_value_110;
            PyObject *tmp_expression_value_111;
            PyObject *tmp_expression_value_112;
            PyObject *tmp_expression_value_113;
            PyObject *tmp_expression_value_114;
            PyObject *tmp_expression_value_115;
            PyObject *tmp_expression_value_116;
            PyObject *tmp_expression_value_117;
            PyObject *tmp_expression_value_118;
            PyObject *tmp_expression_value_119;
            PyObject *tmp_expression_value_120;
            PyObject *tmp_expression_value_121;
            PyObject *tmp_expression_value_122;
            PyObject *tmp_expression_value_123;
            PyObject *tmp_expression_value_124;
            PyObject *tmp_expression_value_125;
            PyObject *tmp_expression_value_126;
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            Py_DECREF(tmp_dict_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto dict_build_exception_3;
            }
            tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_101 == NULL)) {
                tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_101 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto dict_build_exception_3;
            }
            tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[97]);
            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto dict_build_exception_3;
            }
            tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_102 == NULL)) {
                tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_102 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 89;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[97]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 89;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            Py_DECREF(tmp_dict_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 89;

                goto dict_build_exception_3;
            }
            tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_103 == NULL)) {
                tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_103 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_3;
            }
            tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[94]);
            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_3;
            }
            tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_104 == NULL)) {
                tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_104 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 90;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[94]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 90;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            Py_DECREF(tmp_dict_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 90;

                goto dict_build_exception_3;
            }
            tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_107 == NULL)) {
                tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_107 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_3;
            }
            tmp_expression_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[114]);
            if (tmp_expression_value_106 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_3;
            }
            tmp_expression_value_105 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[115]);
            Py_DECREF(tmp_expression_value_106);
            if (tmp_expression_value_105 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_3;
            }
            tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[116]);
            Py_DECREF(tmp_expression_value_105);
            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_3;
            }
            tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[11]);

            if (unlikely(tmp_expression_value_108 == NULL)) {
                tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
            }

            if (tmp_expression_value_108 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 91;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[94]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 91;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            Py_DECREF(tmp_dict_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 91;

                goto dict_build_exception_3;
            }
            tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_109 == NULL)) {
                tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_109 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_3;
            }
            tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[126]);
            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_3;
            }
            tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_110 == NULL)) {
                tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_110 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 93;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[126]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 93;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            Py_DECREF(tmp_dict_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 93;

                goto dict_build_exception_3;
            }
            tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_111 == NULL)) {
                tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_111 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_3;
            }
            tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[127]);
            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_3;
            }
            tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_112 == NULL)) {
                tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_112 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 94;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[127]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 94;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            Py_DECREF(tmp_dict_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto dict_build_exception_3;
            }
            tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_113 == NULL)) {
                tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_113 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_3;
            }
            tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[128]);
            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_3;
            }
            tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_114 == NULL)) {
                tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_114 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 95;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[128]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 95;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            Py_DECREF(tmp_dict_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 95;

                goto dict_build_exception_3;
            }
            tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_115 == NULL)) {
                tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_115 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_3;
            }
            tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[129]);
            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_3;
            }
            tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_116 == NULL)) {
                tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_116 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 96;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[129]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 96;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            Py_DECREF(tmp_dict_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 96;

                goto dict_build_exception_3;
            }
            tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_117 == NULL)) {
                tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_117 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_3;
            }
            tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[130]);
            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_3;
            }
            tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_118 == NULL)) {
                tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_118 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 97;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[130]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 97;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            Py_DECREF(tmp_dict_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto dict_build_exception_3;
            }
            tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_119 == NULL)) {
                tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_119 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto dict_build_exception_3;
            }
            tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[131]);
            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto dict_build_exception_3;
            }
            tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_120 == NULL)) {
                tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_120 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 98;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[131]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 98;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            Py_DECREF(tmp_dict_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 98;

                goto dict_build_exception_3;
            }
            tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_121 == NULL)) {
                tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_121 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto dict_build_exception_3;
            }
            tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[123]);
            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto dict_build_exception_3;
            }
            tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_122 == NULL)) {
                tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_122 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 99;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[123]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 99;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            Py_DECREF(tmp_dict_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 99;

                goto dict_build_exception_3;
            }
            tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_123 == NULL)) {
                tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_123 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto dict_build_exception_3;
            }
            tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_123, mod_consts[124]);
            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto dict_build_exception_3;
            }
            tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_124 == NULL)) {
                tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_124 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 100;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[124]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 100;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            Py_DECREF(tmp_dict_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto dict_build_exception_3;
            }
            tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_125 == NULL)) {
                tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_125 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto dict_build_exception_3;
            }
            tmp_dict_key_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[125]);
            if (tmp_dict_key_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto dict_build_exception_3;
            }
            tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[65]);

            if (unlikely(tmp_expression_value_126 == NULL)) {
                tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[65]);
            }

            if (tmp_expression_value_126 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 101;

                goto dict_build_exception_3;
            }
            tmp_dict_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[125]);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_3);

                exception_lineno = 101;

                goto dict_build_exception_3;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_35, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            Py_DECREF(tmp_dict_key_3);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto dict_build_exception_3;
            }
        }
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_assign_source_35);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_35);
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_expression_value_127;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_expression_value_127 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_127 == NULL)) {
            tmp_expression_value_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto tuple_build_exception_3;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_3);
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_subscript_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_127, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[24];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_128;
        PyObject *tmp_expression_value_129;
        tmp_expression_value_128 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_128 == NULL)) {
            tmp_expression_value_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_128, mod_consts[132]);
        if (tmp_dict_key_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_129 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_expression_value_129 == NULL)) {
            tmp_expression_value_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_expression_value_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_4);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_129, mod_consts[132]);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_4);

            exception_lineno = 106;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_36 = _PyDict_NewPresized( 11 );
        {
            PyObject *tmp_expression_value_130;
            PyObject *tmp_expression_value_131;
            PyObject *tmp_expression_value_132;
            PyObject *tmp_expression_value_133;
            PyObject *tmp_expression_value_134;
            PyObject *tmp_expression_value_135;
            PyObject *tmp_expression_value_136;
            PyObject *tmp_expression_value_137;
            PyObject *tmp_expression_value_138;
            PyObject *tmp_expression_value_139;
            PyObject *tmp_expression_value_140;
            PyObject *tmp_expression_value_141;
            PyObject *tmp_expression_value_142;
            PyObject *tmp_expression_value_143;
            PyObject *tmp_expression_value_144;
            PyObject *tmp_expression_value_145;
            PyObject *tmp_expression_value_146;
            PyObject *tmp_expression_value_147;
            PyObject *tmp_expression_value_148;
            PyObject *tmp_expression_value_149;
            PyObject *tmp_expression_value_150;
            PyObject *tmp_expression_value_151;
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            Py_DECREF(tmp_dict_key_4);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 106;

                goto dict_build_exception_4;
            }
            tmp_expression_value_130 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_130 == NULL)) {
                tmp_expression_value_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_130 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto dict_build_exception_4;
            }
            tmp_dict_key_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_130, mod_consts[94]);
            if (tmp_dict_key_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto dict_build_exception_4;
            }
            tmp_expression_value_131 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_expression_value_131 == NULL)) {
                tmp_expression_value_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_expression_value_131 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 107;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_131, mod_consts[94]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 107;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            Py_DECREF(tmp_dict_key_4);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 107;

                goto dict_build_exception_4;
            }
            tmp_expression_value_132 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[74]);

            if (unlikely(tmp_expression_value_132 == NULL)) {
                tmp_expression_value_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
            }

            if (tmp_expression_value_132 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto dict_build_exception_4;
            }
            tmp_dict_key_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_132, mod_consts[94]);
            if (tmp_dict_key_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto dict_build_exception_4;
            }
            tmp_expression_value_133 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_expression_value_133 == NULL)) {
                tmp_expression_value_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_expression_value_133 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 108;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_133, mod_consts[94]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 108;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            Py_DECREF(tmp_dict_key_4);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 108;

                goto dict_build_exception_4;
            }
            tmp_expression_value_136 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_136 == NULL)) {
                tmp_expression_value_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_136 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_4;
            }
            tmp_expression_value_135 = LOOKUP_ATTRIBUTE(tmp_expression_value_136, mod_consts[114]);
            if (tmp_expression_value_135 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_4;
            }
            tmp_expression_value_134 = LOOKUP_ATTRIBUTE(tmp_expression_value_135, mod_consts[115]);
            Py_DECREF(tmp_expression_value_135);
            if (tmp_expression_value_134 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_4;
            }
            tmp_dict_key_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_134, mod_consts[116]);
            Py_DECREF(tmp_expression_value_134);
            if (tmp_dict_key_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_4;
            }
            tmp_expression_value_137 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_expression_value_137 == NULL)) {
                tmp_expression_value_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_expression_value_137 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 109;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_137, mod_consts[94]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 109;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            Py_DECREF(tmp_dict_key_4);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 109;

                goto dict_build_exception_4;
            }
            tmp_expression_value_138 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_138 == NULL)) {
                tmp_expression_value_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_138 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_4;
            }
            tmp_dict_key_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_138, mod_consts[2]);
            if (tmp_dict_key_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_4;
            }
            tmp_expression_value_139 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_expression_value_139 == NULL)) {
                tmp_expression_value_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_expression_value_139 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 110;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_139, mod_consts[2]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 110;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            Py_DECREF(tmp_dict_key_4);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto dict_build_exception_4;
            }
            tmp_expression_value_140 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_140 == NULL)) {
                tmp_expression_value_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_140 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_4;
            }
            tmp_dict_key_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_140, mod_consts[133]);
            if (tmp_dict_key_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_4;
            }
            tmp_expression_value_141 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_expression_value_141 == NULL)) {
                tmp_expression_value_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_expression_value_141 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 111;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_141, mod_consts[133]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 111;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            Py_DECREF(tmp_dict_key_4);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 111;

                goto dict_build_exception_4;
            }
            tmp_expression_value_142 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_142 == NULL)) {
                tmp_expression_value_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_142 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto dict_build_exception_4;
            }
            tmp_dict_key_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_142, mod_consts[134]);
            if (tmp_dict_key_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto dict_build_exception_4;
            }
            tmp_expression_value_143 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_expression_value_143 == NULL)) {
                tmp_expression_value_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_expression_value_143 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 112;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_143, mod_consts[134]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 112;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            Py_DECREF(tmp_dict_key_4);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 112;

                goto dict_build_exception_4;
            }
            tmp_expression_value_144 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_144 == NULL)) {
                tmp_expression_value_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_144 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_4;
            }
            tmp_dict_key_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_144, mod_consts[135]);
            if (tmp_dict_key_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_4;
            }
            tmp_expression_value_145 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[71]);

            if (unlikely(tmp_expression_value_145 == NULL)) {
                tmp_expression_value_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
            }

            if (tmp_expression_value_145 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 113;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_145, mod_consts[135]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 113;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            Py_DECREF(tmp_dict_key_4);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 113;

                goto dict_build_exception_4;
            }
            tmp_expression_value_146 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[56]);

            if (unlikely(tmp_expression_value_146 == NULL)) {
                tmp_expression_value_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
            }

            if (tmp_expression_value_146 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_4;
            }
            tmp_dict_key_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_146, mod_consts[125]);
            if (tmp_dict_key_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_4;
            }
            tmp_expression_value_147 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[62]);

            if (unlikely(tmp_expression_value_147 == NULL)) {
                tmp_expression_value_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
            }

            if (tmp_expression_value_147 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 114;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_147, mod_consts[125]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 114;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            Py_DECREF(tmp_dict_key_4);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 114;

                goto dict_build_exception_4;
            }
            tmp_expression_value_148 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_148 == NULL)) {
                tmp_expression_value_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_148 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_4;
            }
            tmp_dict_key_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_148, mod_consts[10]);
            if (tmp_dict_key_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_4;
            }
            tmp_expression_value_149 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_149 == NULL)) {
                tmp_expression_value_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_149 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 115;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_149, mod_consts[10]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 115;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            Py_DECREF(tmp_dict_key_4);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 115;

                goto dict_build_exception_4;
            }
            tmp_expression_value_150 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_150 == NULL)) {
                tmp_expression_value_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_150 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto dict_build_exception_4;
            }
            tmp_dict_key_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_150, mod_consts[12]);
            if (tmp_dict_key_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto dict_build_exception_4;
            }
            tmp_expression_value_151 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[9]);

            if (unlikely(tmp_expression_value_151 == NULL)) {
                tmp_expression_value_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
            }

            if (tmp_expression_value_151 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 116;

                goto dict_build_exception_4;
            }
            tmp_dict_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_151, mod_consts[12]);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_4);

                exception_lineno = 116;

                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_36, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            Py_DECREF(tmp_dict_key_4);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;

                goto dict_build_exception_4;
            }
        }
        goto dict_build_noexception_4;
        // Exception handling pass through code for dict_build:
        dict_build_exception_4:;
        Py_DECREF(tmp_assign_source_36);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_4:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_36);
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_expression_value_152;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        tmp_expression_value_152 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_152 == NULL)) {
            tmp_expression_value_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_4);
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto tuple_build_exception_4;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_4);
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_subscript_value_4);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_ass_subvalue_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_152, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_ass_subvalue_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_ass_subscribed_4 == NULL)) {
            tmp_ass_subscribed_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_ass_subscribed_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_4);

            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_4 = mod_consts[22];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        Py_DECREF(tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_set_element_1;
        PyObject *tmp_expression_value_153;
        tmp_expression_value_153 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_153 == NULL)) {
            tmp_expression_value_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_set_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_153, mod_consts[136]);
        if (tmp_set_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_37 = PySet_New(NULL);
        assert(tmp_assign_source_37);
        tmp_res = PySet_Add(tmp_assign_source_37, tmp_set_element_1);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_set_element_1);
            Py_DECREF(tmp_assign_source_37);

            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_set_element_1);
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_37);
    }
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_expression_value_154;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_expression_value_154 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_expression_value_154 == NULL)) {
            tmp_expression_value_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_expression_value_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_subscript_value_5 == NULL)) {
            tmp_subscript_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_subscript_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_154, tmp_subscript_value_5);
        if (tmp_ass_subvalue_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_ass_subscribed_5 == NULL)) {
            tmp_ass_subscribed_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_ass_subscribed_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_5);

            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = mod_consts[31];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        Py_DECREF(tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_155;
        PyObject *tmp_expression_value_156;
        PyObject *tmp_expression_value_157;
        PyObject *tmp_expression_value_158;
        tmp_expression_value_155 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_155 == NULL)) {
            tmp_expression_value_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_value_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_155, mod_consts[137]);
        if (tmp_dict_key_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_158 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_158 == NULL)) {
            tmp_expression_value_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_5);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_157 = LOOKUP_ATTRIBUTE(tmp_expression_value_158, mod_consts[138]);
        if (tmp_expression_value_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_5);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_156 = LOOKUP_ATTRIBUTE(tmp_expression_value_157, mod_consts[58]);
        Py_DECREF(tmp_expression_value_157);
        if (tmp_expression_value_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_5);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_156, mod_consts[137]);
        Py_DECREF(tmp_expression_value_156);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_5);

            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_38 = _PyDict_NewPresized( 6 );
        {
            PyObject *tmp_expression_value_159;
            PyObject *tmp_expression_value_160;
            PyObject *tmp_expression_value_161;
            PyObject *tmp_expression_value_162;
            PyObject *tmp_expression_value_163;
            PyObject *tmp_expression_value_164;
            PyObject *tmp_expression_value_165;
            PyObject *tmp_expression_value_166;
            PyObject *tmp_expression_value_167;
            PyObject *tmp_expression_value_168;
            PyObject *tmp_expression_value_169;
            PyObject *tmp_expression_value_170;
            PyObject *tmp_expression_value_171;
            PyObject *tmp_expression_value_172;
            PyObject *tmp_expression_value_173;
            PyObject *tmp_expression_value_174;
            PyObject *tmp_expression_value_175;
            PyObject *tmp_expression_value_176;
            PyObject *tmp_expression_value_177;
            PyObject *tmp_expression_value_178;
            tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            Py_DECREF(tmp_dict_key_5);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 135;

                goto dict_build_exception_5;
            }
            tmp_expression_value_159 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_159 == NULL)) {
                tmp_expression_value_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_expression_value_159 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto dict_build_exception_5;
            }
            tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_159, mod_consts[139]);
            if (tmp_dict_key_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto dict_build_exception_5;
            }
            tmp_expression_value_162 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_162 == NULL)) {
                tmp_expression_value_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
            }

            if (tmp_expression_value_162 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 136;

                goto dict_build_exception_5;
            }
            tmp_expression_value_161 = LOOKUP_ATTRIBUTE(tmp_expression_value_162, mod_consts[138]);
            if (tmp_expression_value_161 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 136;

                goto dict_build_exception_5;
            }
            tmp_expression_value_160 = LOOKUP_ATTRIBUTE(tmp_expression_value_161, mod_consts[58]);
            Py_DECREF(tmp_expression_value_161);
            if (tmp_expression_value_160 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 136;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_160, mod_consts[139]);
            Py_DECREF(tmp_expression_value_160);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 136;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            Py_DECREF(tmp_dict_key_5);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 136;

                goto dict_build_exception_5;
            }
            tmp_expression_value_163 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_163 == NULL)) {
                tmp_expression_value_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_expression_value_163 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_5;
            }
            tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_163, mod_consts[140]);
            if (tmp_dict_key_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_5;
            }
            tmp_expression_value_166 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_166 == NULL)) {
                tmp_expression_value_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
            }

            if (tmp_expression_value_166 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 137;

                goto dict_build_exception_5;
            }
            tmp_expression_value_165 = LOOKUP_ATTRIBUTE(tmp_expression_value_166, mod_consts[138]);
            if (tmp_expression_value_165 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 137;

                goto dict_build_exception_5;
            }
            tmp_expression_value_164 = LOOKUP_ATTRIBUTE(tmp_expression_value_165, mod_consts[58]);
            Py_DECREF(tmp_expression_value_165);
            if (tmp_expression_value_164 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 137;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_164, mod_consts[140]);
            Py_DECREF(tmp_expression_value_164);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 137;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            Py_DECREF(tmp_dict_key_5);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 137;

                goto dict_build_exception_5;
            }
            tmp_expression_value_167 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_167 == NULL)) {
                tmp_expression_value_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_expression_value_167 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto dict_build_exception_5;
            }
            tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_167, mod_consts[141]);
            if (tmp_dict_key_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto dict_build_exception_5;
            }
            tmp_expression_value_170 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_170 == NULL)) {
                tmp_expression_value_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
            }

            if (tmp_expression_value_170 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 138;

                goto dict_build_exception_5;
            }
            tmp_expression_value_169 = LOOKUP_ATTRIBUTE(tmp_expression_value_170, mod_consts[138]);
            if (tmp_expression_value_169 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 138;

                goto dict_build_exception_5;
            }
            tmp_expression_value_168 = LOOKUP_ATTRIBUTE(tmp_expression_value_169, mod_consts[58]);
            Py_DECREF(tmp_expression_value_169);
            if (tmp_expression_value_168 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 138;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_168, mod_consts[141]);
            Py_DECREF(tmp_expression_value_168);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 138;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            Py_DECREF(tmp_dict_key_5);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;

                goto dict_build_exception_5;
            }
            tmp_expression_value_171 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_171 == NULL)) {
                tmp_expression_value_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_expression_value_171 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto dict_build_exception_5;
            }
            tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_171, mod_consts[142]);
            if (tmp_dict_key_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto dict_build_exception_5;
            }
            tmp_expression_value_174 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_174 == NULL)) {
                tmp_expression_value_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
            }

            if (tmp_expression_value_174 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 139;

                goto dict_build_exception_5;
            }
            tmp_expression_value_173 = LOOKUP_ATTRIBUTE(tmp_expression_value_174, mod_consts[138]);
            if (tmp_expression_value_173 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 139;

                goto dict_build_exception_5;
            }
            tmp_expression_value_172 = LOOKUP_ATTRIBUTE(tmp_expression_value_173, mod_consts[58]);
            Py_DECREF(tmp_expression_value_173);
            if (tmp_expression_value_172 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 139;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_172, mod_consts[142]);
            Py_DECREF(tmp_expression_value_172);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 139;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            Py_DECREF(tmp_dict_key_5);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;

                goto dict_build_exception_5;
            }
            tmp_expression_value_175 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[53]);

            if (unlikely(tmp_expression_value_175 == NULL)) {
                tmp_expression_value_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
            }

            if (tmp_expression_value_175 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_5;
            }
            tmp_dict_key_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_175, mod_consts[143]);
            if (tmp_dict_key_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_5;
            }
            tmp_expression_value_178 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[49]);

            if (unlikely(tmp_expression_value_178 == NULL)) {
                tmp_expression_value_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
            }

            if (tmp_expression_value_178 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 140;

                goto dict_build_exception_5;
            }
            tmp_expression_value_177 = LOOKUP_ATTRIBUTE(tmp_expression_value_178, mod_consts[138]);
            if (tmp_expression_value_177 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 140;

                goto dict_build_exception_5;
            }
            tmp_expression_value_176 = LOOKUP_ATTRIBUTE(tmp_expression_value_177, mod_consts[58]);
            Py_DECREF(tmp_expression_value_177);
            if (tmp_expression_value_176 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 140;

                goto dict_build_exception_5;
            }
            tmp_dict_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_176, mod_consts[143]);
            Py_DECREF(tmp_expression_value_176);
            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_5);

                exception_lineno = 140;

                goto dict_build_exception_5;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_38, tmp_dict_key_5, tmp_dict_value_5);
            Py_DECREF(tmp_dict_value_5);
            Py_DECREF(tmp_dict_key_5);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 140;

                goto dict_build_exception_5;
            }
        }
        goto dict_build_noexception_5;
        // Exception handling pass through code for dict_build:
        dict_build_exception_5:;
        Py_DECREF(tmp_assign_source_38);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_5:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_38);
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_expression_value_179;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_expression_value_180;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_expression_value_179 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_179 == NULL)) {
            tmp_expression_value_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_180 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_value_180 == NULL)) {
            tmp_expression_value_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_value_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_6 == NULL)) {
            tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_6);
        tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_6);
        tmp_tuple_element_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_180, tmp_subscript_value_7);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_subscript_value_6, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto tuple_build_exception_5;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_6, 1, tmp_tuple_element_5);
        goto tuple_build_noexception_5;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_5:;
        Py_DECREF(tmp_subscript_value_6);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_5:;
        tmp_ass_subvalue_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_179, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_ass_subvalue_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_ass_subscribed_6 == NULL)) {
            tmp_ass_subscribed_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_ass_subscribed_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_6);

            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_6 = mod_consts[35];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_181;
        tmp_expression_value_181 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_181 == NULL)) {
            tmp_expression_value_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_181, mod_consts[144]);
        if (tmp_dict_key_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[90]);

        if (unlikely(tmp_dict_value_6 == NULL)) {
            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
        }

        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_6);

            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_39 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_182;
            PyObject *tmp_expression_value_183;
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_key_6);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;

                goto dict_build_exception_6;
            }
            tmp_expression_value_182 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_182 == NULL)) {
                tmp_expression_value_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_182 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_6;
            }
            tmp_dict_key_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_182, mod_consts[145]);
            if (tmp_dict_key_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[90]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[90]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_6);

                exception_lineno = 146;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_key_6);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 146;

                goto dict_build_exception_6;
            }
            tmp_expression_value_183 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_183 == NULL)) {
                tmp_expression_value_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_183 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto dict_build_exception_6;
            }
            tmp_dict_key_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_183, mod_consts[146]);
            if (tmp_dict_key_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto dict_build_exception_6;
            }
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[91]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_dict_key_6);

                exception_lineno = 147;

                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_assign_source_39, tmp_dict_key_6, tmp_dict_value_6);
            Py_DECREF(tmp_dict_key_6);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 147;

                goto dict_build_exception_6;
            }
        }
        goto dict_build_noexception_6;
        // Exception handling pass through code for dict_build:
        dict_build_exception_6:;
        Py_DECREF(tmp_assign_source_39);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_6:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_39);
    }
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_expression_value_184;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        tmp_expression_value_184 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_184 == NULL)) {
            tmp_expression_value_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_7);
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto tuple_build_exception_6;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_7);
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_subscript_value_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_ass_subvalue_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_184, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_ass_subvalue_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_ass_subscribed_7 == NULL)) {
            tmp_ass_subscribed_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_ass_subscribed_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_7);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_7 = mod_consts[38];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        Py_DECREF(tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_185;
        PyObject *tmp_expression_value_186;
        PyObject *tmp_expression_value_187;
        PyObject *tmp_expression_value_188;
        tmp_expression_value_185 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_185 == NULL)) {
            tmp_expression_value_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_185, mod_consts[94]);
        if (tmp_dict_key_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_188 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_188 == NULL)) {
            tmp_expression_value_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_expression_value_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_7);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_187 = LOOKUP_ATTRIBUTE(tmp_expression_value_188, mod_consts[147]);
        if (tmp_expression_value_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_7);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_186 = LOOKUP_ATTRIBUTE(tmp_expression_value_187, mod_consts[58]);
        Py_DECREF(tmp_expression_value_187);
        if (tmp_expression_value_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_7);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_186, mod_consts[94]);
        Py_DECREF(tmp_expression_value_186);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_7);

            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_40 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_40, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        Py_DECREF(tmp_dict_key_7);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto dict_build_exception_7;
        }
        goto dict_build_noexception_7;
        // Exception handling pass through code for dict_build:
        dict_build_exception_7:;
        Py_DECREF(tmp_assign_source_40);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_7:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_40);
    }
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_expression_value_189;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        tmp_expression_value_189 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_189 == NULL)) {
            tmp_expression_value_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_8);
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto tuple_build_exception_7;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_8);
        goto tuple_build_noexception_7;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_7:;
        Py_DECREF(tmp_subscript_value_9);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_7:;
        tmp_ass_subvalue_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_189, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_ass_subvalue_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_ass_subscribed_8 == NULL)) {
            tmp_ass_subscribed_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_ass_subscribed_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_8);

            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_8 = mod_consts[14];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        Py_DECREF(tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_value_190;
        PyObject *tmp_expression_value_191;
        PyObject *tmp_expression_value_192;
        PyObject *tmp_expression_value_193;
        PyObject *tmp_expression_value_194;
        tmp_expression_value_190 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_190 == NULL)) {
            tmp_expression_value_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_190, mod_consts[94]);
        if (tmp_dict_key_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_194 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_194 == NULL)) {
            tmp_expression_value_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_expression_value_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_8);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_193 = LOOKUP_ATTRIBUTE(tmp_expression_value_194, mod_consts[147]);
        if (tmp_expression_value_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_8);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_192 = LOOKUP_ATTRIBUTE(tmp_expression_value_193, mod_consts[58]);
        Py_DECREF(tmp_expression_value_193);
        if (tmp_expression_value_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_8);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_191 = LOOKUP_ATTRIBUTE(tmp_expression_value_192, mod_consts[61]);
        Py_DECREF(tmp_expression_value_192);
        if (tmp_expression_value_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_8);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_191, mod_consts[94]);
        Py_DECREF(tmp_expression_value_191);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dict_key_8);

            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_41 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_assign_source_41, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        Py_DECREF(tmp_dict_key_8);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto dict_build_exception_8;
        }
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_assign_source_41);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_41);
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_expression_value_195;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        tmp_expression_value_195 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_195 == NULL)) {
            tmp_expression_value_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_9);
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto tuple_build_exception_8;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_9);
        goto tuple_build_noexception_8;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_8:;
        Py_DECREF(tmp_subscript_value_10);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_8:;
        tmp_ass_subvalue_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_195, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_ass_subvalue_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_ass_subscribed_9 == NULL)) {
            tmp_ass_subscribed_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_ass_subscribed_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_9);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_9 = mod_consts[28];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        Py_DECREF(tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_196;
        PyObject *tmp_subscript_value_11;
        tmp_dict_key_9 = mod_consts[148];
        tmp_expression_value_196 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_expression_value_196 == NULL)) {
            tmp_expression_value_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_expression_value_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_subscript_value_11 == NULL)) {
            tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_subscript_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_196, tmp_subscript_value_11);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));


        tmp_assign_source_42 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__1_no_observer_set(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_42);
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_197;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_tuple_element_10;
        tmp_dict_key_10 = mod_consts[148];
        tmp_expression_value_197 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_197 == NULL)) {
            tmp_expression_value_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_10);
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto tuple_build_exception_9;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_12, 1, tmp_tuple_element_10);
        goto tuple_build_noexception_9;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_9:;
        Py_DECREF(tmp_subscript_value_12);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_9:;
        tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_197, tmp_subscript_value_12);
        Py_DECREF(tmp_subscript_value_12);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));


        tmp_assign_source_43 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__2_get_default_static_quant_module_mappings(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_43);
    }
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_198;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_tuple_element_11;
        tmp_dict_key_11 = mod_consts[148];
        tmp_expression_value_198 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_198 == NULL)) {
            tmp_expression_value_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_13, 0, tmp_tuple_element_11);
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto tuple_build_exception_10;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_13, 1, tmp_tuple_element_11);
        goto tuple_build_noexception_10;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_10:;
        Py_DECREF(tmp_subscript_value_13);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_10:;
        tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_198, tmp_subscript_value_13);
        Py_DECREF(tmp_subscript_value_13);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_11, tmp_dict_value_11);
        Py_DECREF(tmp_dict_value_11);
        assert(!(tmp_res != 0));


        tmp_assign_source_44 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__3_get_embedding_static_quant_module_mappings(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[151], tmp_assign_source_44);
    }
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_value_199;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_tuple_element_12;
        tmp_dict_key_12 = mod_consts[148];
        tmp_expression_value_199 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_199 == NULL)) {
            tmp_expression_value_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_14, 0, tmp_tuple_element_12);
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto tuple_build_exception_11;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_14, 1, tmp_tuple_element_12);
        goto tuple_build_noexception_11;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_11:;
        Py_DECREF(tmp_subscript_value_14);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_11:;
        tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_199, tmp_subscript_value_14);
        Py_DECREF(tmp_subscript_value_14);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));


        tmp_assign_source_45 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__4_get_default_static_sparse_quant_module_mappings(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[152], tmp_assign_source_45);
    }
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_defaults_1 = mod_consts[153];
        tmp_dict_key_13 = mod_consts[154];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 4 );
        {
            PyObject *tmp_expression_value_200;
            PyObject *tmp_subscript_value_15;
            PyObject *tmp_expression_value_201;
            PyObject *tmp_subscript_value_16;
            PyObject *tmp_tuple_element_13;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[155];
            tmp_expression_value_200 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_200 == NULL)) {
                tmp_expression_value_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
            }

            if (tmp_expression_value_200 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto dict_build_exception_9;
            }
            tmp_expression_value_201 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

            if (unlikely(tmp_expression_value_201 == NULL)) {
                tmp_expression_value_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
            }

            if (tmp_expression_value_201 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto dict_build_exception_9;
            }
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto dict_build_exception_9;
            }
            tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_16, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_tuple_element_13 == NULL)) {
                tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
            }

            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto tuple_build_exception_12;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_16, 1, tmp_tuple_element_13);
            goto tuple_build_noexception_12;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_12:;
            Py_DECREF(tmp_subscript_value_16);
            goto dict_build_exception_9;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_12:;
            tmp_subscript_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_201, tmp_subscript_value_16);
            Py_DECREF(tmp_subscript_value_16);
            if (tmp_subscript_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto dict_build_exception_9;
            }
            tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_200, tmp_subscript_value_15);
            Py_DECREF(tmp_subscript_value_15);
            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 188;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[156];
            tmp_dict_value_13 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[148];
            tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_dict_value_13 == NULL)) {
                tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
            }

            if (tmp_dict_value_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 189;

                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_13, tmp_dict_value_13);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_46 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__5_get_static_quant_module_class(tmp_defaults_1, tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_46);
    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        tmp_defaults_2 = mod_consts[158];
        tmp_dict_key_14 = mod_consts[154];
        tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_dict_value_14 == NULL)) {
            tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_202;
            PyObject *tmp_subscript_value_17;
            PyObject *tmp_expression_value_203;
            PyObject *tmp_subscript_value_18;
            PyObject *tmp_tuple_element_14;
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[159];
            tmp_expression_value_202 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_202 == NULL)) {
                tmp_expression_value_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
            }

            if (tmp_expression_value_202 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_10;
            }
            tmp_expression_value_203 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

            if (unlikely(tmp_expression_value_203 == NULL)) {
                tmp_expression_value_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
            }

            if (tmp_expression_value_203 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_10;
            }
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_10;
            }
            tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_18, 0, tmp_tuple_element_14);
            tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_tuple_element_14 == NULL)) {
                tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
            }

            if (tmp_tuple_element_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto tuple_build_exception_13;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_18, 1, tmp_tuple_element_14);
            goto tuple_build_noexception_13;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_13:;
            Py_DECREF(tmp_subscript_value_18);
            goto dict_build_exception_10;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_13:;
            tmp_subscript_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_203, tmp_subscript_value_18);
            Py_DECREF(tmp_subscript_value_18);
            if (tmp_subscript_value_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_10;
            }
            tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_202, tmp_subscript_value_17);
            Py_DECREF(tmp_subscript_value_17);
            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_14, tmp_dict_value_14);
            Py_DECREF(tmp_dict_value_14);
            assert(!(tmp_res != 0));
            tmp_dict_key_14 = mod_consts[148];
            tmp_dict_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

            if (unlikely(tmp_dict_value_14 == NULL)) {
                tmp_dict_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
            }

            if (tmp_dict_value_14 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 206;

                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_14, tmp_dict_value_14);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_annotations_6);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_47 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__6_get_dynamic_quant_module_class(tmp_defaults_2, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_expression_value_204;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_tuple_element_15;
        tmp_dict_key_15 = mod_consts[148];
        tmp_expression_value_204 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_204 == NULL)) {
            tmp_expression_value_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_19, 0, tmp_tuple_element_15);
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto tuple_build_exception_14;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_19, 1, tmp_tuple_element_15);
        goto tuple_build_noexception_14;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_14:;
        Py_DECREF(tmp_subscript_value_19);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_14:;
        tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_204, tmp_subscript_value_19);
        Py_DECREF(tmp_subscript_value_19);
        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        assert(!(tmp_res != 0));


        tmp_assign_source_48 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__7_get_default_qat_module_mappings(tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_value_205;
        PyObject *tmp_subscript_value_20;
        PyObject *tmp_tuple_element_16;
        tmp_dict_key_16 = mod_consts[148];
        tmp_expression_value_205 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_205 == NULL)) {
            tmp_expression_value_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_20 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_20, 0, tmp_tuple_element_16);
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto tuple_build_exception_15;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_20, 1, tmp_tuple_element_16);
        goto tuple_build_noexception_15;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_15:;
        Py_DECREF(tmp_subscript_value_20);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_15:;
        tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_205, tmp_subscript_value_20);
        Py_DECREF(tmp_subscript_value_20);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_16, tmp_dict_value_16);
        Py_DECREF(tmp_dict_value_16);
        assert(!(tmp_res != 0));


        tmp_assign_source_49 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__8_get_embedding_qat_module_mappings(tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_49);
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_expression_value_206;
        PyObject *tmp_subscript_value_21;
        PyObject *tmp_tuple_element_17;
        tmp_dict_key_17 = mod_consts[148];
        tmp_expression_value_206 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_206 == NULL)) {
            tmp_expression_value_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_21 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_21, 0, tmp_tuple_element_17);
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto tuple_build_exception_16;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_21, 1, tmp_tuple_element_17);
        goto tuple_build_noexception_16;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_16:;
        Py_DECREF(tmp_subscript_value_21);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_16:;
        tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_206, tmp_subscript_value_21);
        Py_DECREF(tmp_subscript_value_21);
        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_17, tmp_dict_value_17);
        Py_DECREF(tmp_dict_value_17);
        assert(!(tmp_res != 0));


        tmp_assign_source_50 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__9_get_default_dynamic_quant_module_mappings(tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[163], tmp_assign_source_50);
    }
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_18;
        PyObject *tmp_dict_value_18;
        PyObject *tmp_expression_value_207;
        PyObject *tmp_subscript_value_22;
        PyObject *tmp_tuple_element_18;
        tmp_dict_key_18 = mod_consts[148];
        tmp_expression_value_207 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_207 == NULL)) {
            tmp_expression_value_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_22 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_22, 0, tmp_tuple_element_18);
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[80]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[80]);
        }

        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto tuple_build_exception_17;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_22, 1, tmp_tuple_element_18);
        goto tuple_build_noexception_17;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_17:;
        Py_DECREF(tmp_subscript_value_22);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_17:;
        tmp_dict_value_18 = LOOKUP_SUBSCRIPT(tmp_expression_value_207, tmp_subscript_value_22);
        Py_DECREF(tmp_subscript_value_22);
        if (tmp_dict_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_18, tmp_dict_value_18);
        Py_DECREF(tmp_dict_value_18);
        assert(!(tmp_res != 0));


        tmp_assign_source_51 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__10_get_default_dynamic_sparse_quant_module_mappings(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[164], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_19;
        PyObject *tmp_dict_value_19;
        PyObject *tmp_expression_value_208;
        PyObject *tmp_subscript_value_23;
        tmp_dict_key_19 = mod_consts[148];
        tmp_expression_value_208 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_expression_value_208 == NULL)) {
            tmp_expression_value_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_expression_value_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_subscript_value_23 == NULL)) {
            tmp_subscript_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_subscript_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_208, tmp_subscript_value_23);
        if (tmp_dict_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_19, tmp_dict_value_19);
        Py_DECREF(tmp_dict_value_19);
        assert(!(tmp_res != 0));


        tmp_assign_source_52 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__11_get_default_qconfig_propagation_list(tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_52);
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_20;
        PyObject *tmp_dict_value_20;
        PyObject *tmp_expression_value_209;
        PyObject *tmp_subscript_value_24;
        tmp_dict_key_20 = mod_consts[148];
        tmp_expression_value_209 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[78]);

        if (unlikely(tmp_expression_value_209 == NULL)) {
            tmp_expression_value_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[78]);
        }

        if (tmp_expression_value_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_subscript_value_24 == NULL)) {
            tmp_subscript_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_subscript_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_20 = LOOKUP_SUBSCRIPT(tmp_expression_value_209, tmp_subscript_value_24);
        if (tmp_dict_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_20, tmp_dict_value_20);
        Py_DECREF(tmp_dict_value_20);
        assert(!(tmp_res != 0));


        tmp_assign_source_53 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__12_get_default_compare_output_module_list(tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_53);
    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_21;
        PyObject *tmp_dict_value_21;
        PyObject *tmp_expression_value_210;
        PyObject *tmp_subscript_value_25;
        PyObject *tmp_tuple_element_19;
        PyObject *tmp_expression_value_211;
        PyObject *tmp_subscript_value_26;
        PyObject *tmp_tuple_element_20;
        tmp_dict_key_21 = mod_consts[148];
        tmp_expression_value_210 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[77]);

        if (unlikely(tmp_expression_value_210 == NULL)) {
            tmp_expression_value_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[77]);
        }

        if (tmp_expression_value_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_211 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_value_211 == NULL)) {
            tmp_expression_value_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_value_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_20 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_20 == NULL)) {
            tmp_tuple_element_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_26 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_26, 0, tmp_tuple_element_20);
        tmp_tuple_element_20 = (PyObject *)&PyUnicode_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_26, 1, tmp_tuple_element_20);
        tmp_tuple_element_19 = LOOKUP_SUBSCRIPT(tmp_expression_value_211, tmp_subscript_value_26);
        Py_DECREF(tmp_subscript_value_26);
        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_25 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_subscript_value_25, 0, tmp_tuple_element_19);
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto tuple_build_exception_18;
        }
        PyTuple_SET_ITEM0(tmp_subscript_value_25, 1, tmp_tuple_element_19);
        goto tuple_build_noexception_18;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_18:;
        Py_DECREF(tmp_subscript_value_25);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_18:;
        tmp_dict_value_21 = LOOKUP_SUBSCRIPT(tmp_expression_value_210, tmp_subscript_value_25);
        Py_DECREF(tmp_subscript_value_25);
        if (tmp_dict_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_annotations_13 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_21, tmp_dict_value_21);
        Py_DECREF(tmp_dict_value_21);
        assert(!(tmp_res != 0));


        tmp_assign_source_54 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__13_get_default_float_to_quantized_operator_mappings(tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[167], tmp_assign_source_54);
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_22;
        PyObject *tmp_dict_value_22;
        PyObject *tmp_expression_value_212;
        PyObject *tmp_subscript_value_27;
        PyObject *tmp_tuple_element_21;
        tmp_dict_key_22 = mod_consts[168];
        tmp_expression_value_212 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_expression_value_212 == NULL)) {
            tmp_expression_value_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_expression_value_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_21 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_tuple_element_21 == NULL)) {
            tmp_tuple_element_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_tuple_element_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_27 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_27, 0, tmp_tuple_element_21);
        tmp_tuple_element_21 = (PyObject *)&PyUnicode_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_27, 1, tmp_tuple_element_21);
        tmp_dict_value_22 = LOOKUP_SUBSCRIPT(tmp_expression_value_212, tmp_subscript_value_27);
        Py_DECREF(tmp_subscript_value_27);
        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_annotations_14 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_22, tmp_dict_value_22);
        Py_DECREF(tmp_dict_value_22);
        assert(!(tmp_res != 0));
        tmp_dict_key_22 = mod_consts[148];
        tmp_dict_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_dict_value_22 == NULL)) {
            tmp_dict_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_dict_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_22, tmp_dict_value_22);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_annotations_14);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;


        tmp_assign_source_55 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__14_get_quantized_operator(tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[169], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_annotations_15;
        PyObject *tmp_dict_key_23;
        PyObject *tmp_dict_value_23;
        PyObject *tmp_expression_value_213;
        PyObject *tmp_expression_value_214;
        tmp_dict_key_23 = mod_consts[170];
        tmp_expression_value_214 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_214 == NULL)) {
            tmp_expression_value_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_213 = LOOKUP_ATTRIBUTE(tmp_expression_value_214, mod_consts[0]);
        if (tmp_expression_value_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_213, mod_consts[171]);
        Py_DECREF(tmp_expression_value_213);
        if (tmp_dict_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto frame_exception_exit_1;
        }
        tmp_annotations_15 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_215;
            PyObject *tmp_subscript_value_28;
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));
            tmp_dict_key_23 = mod_consts[148];
            tmp_expression_value_215 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[75]);

            if (unlikely(tmp_expression_value_215 == NULL)) {
                tmp_expression_value_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[75]);
            }

            if (tmp_expression_value_215 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[79]);

            if (unlikely(tmp_subscript_value_28 == NULL)) {
                tmp_subscript_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
            }

            if (tmp_subscript_value_28 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto dict_build_exception_12;
            }
            tmp_dict_value_23 = LOOKUP_SUBSCRIPT(tmp_expression_value_215, tmp_subscript_value_28);
            if (tmp_dict_value_23 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 284;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_23, tmp_dict_value_23);
            Py_DECREF(tmp_dict_value_23);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_annotations_15);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;


        tmp_assign_source_56 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__15__get_special_act_post_process(tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[172], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_24;
        PyObject *tmp_dict_value_24;
        PyObject *tmp_expression_value_216;
        PyObject *tmp_expression_value_217;
        tmp_dict_key_24 = mod_consts[170];
        tmp_expression_value_217 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_217 == NULL)) {
            tmp_expression_value_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_216 = LOOKUP_ATTRIBUTE(tmp_expression_value_217, mod_consts[0]);
        if (tmp_expression_value_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_216, mod_consts[171]);
        Py_DECREF(tmp_expression_value_216);
        if (tmp_dict_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_annotations_16 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_24, tmp_dict_value_24);
        Py_DECREF(tmp_dict_value_24);
        assert(!(tmp_res != 0));
        tmp_dict_key_24 = mod_consts[148];
        tmp_dict_value_24 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_24, tmp_dict_value_24);
        assert(!(tmp_res != 0));


        tmp_assign_source_57 = MAKE_FUNCTION_torch$ao$quantization$quantization_mappings$$$function__16__has_special_act_post_process(tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)mod_consts[173], tmp_assign_source_57);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_44c9413b88030d0e64b6af527f7470b1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_44c9413b88030d0e64b6af527f7470b1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_44c9413b88030d0e64b6af527f7470b1, exception_lineno);
    }



    assertFrameObject(frame_44c9413b88030d0e64b6af527f7470b1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.ao.quantization.quantization_mappings", false);

    Py_INCREF(module_torch$ao$quantization$quantization_mappings);
    return module_torch$ao$quantization$quantization_mappings;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantization_mappings, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$ao$quantization$quantization_mappings", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
