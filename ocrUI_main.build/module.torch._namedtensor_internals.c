/* Generated code for Python module 'torch._namedtensor_internals'
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

/* The "module_torch$_namedtensor_internals" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$_namedtensor_internals;
PyDictObject *moduledict_torch$_namedtensor_internals;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[64];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[64];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch._namedtensor_internals"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 64; i++) {
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
void checkModuleConstants_torch$_namedtensor_internals(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 64; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d6cd448e79b902ef18884564a2e13b03;
static PyCodeObject *codeobj_29afd7573ff197ca98711f00f97f2e85;
static PyCodeObject *codeobj_25a213dacbe79780331809884a9fb17b;
static PyCodeObject *codeobj_6955a01f34fa979116a784156a848b0e;
static PyCodeObject *codeobj_41c0ac52a55ff561bb964b1e3bf44a9c;
static PyCodeObject *codeobj_81abf1889ec27ed9d6c1b2ecc0bd5f73;
static PyCodeObject *codeobj_4c9cd62dc54e27ae9e16009b9e77b913;
static PyCodeObject *codeobj_65bdedac1f41a35b5bb5aacc4980d182;
static PyCodeObject *codeobj_07e03537a555a1dbf3ee677bd53ee443;
static PyCodeObject *codeobj_2f0038220036424de2c761223f26764c;
static PyCodeObject *codeobj_489da3ccc7c9304837105a68edf0a222;
static PyCodeObject *codeobj_396528996d7df984c979caa42ce287df;
static PyCodeObject *codeobj_18b1638aa6b0b3aaa862af0f3ca2caeb;
static PyCodeObject *codeobj_1590531c474b4c8c4cc0337040eab2dc;
static PyCodeObject *codeobj_dd5807acefa24c986d7b4899c38485a6;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[47]); CHECK_OBJECT(module_filename_obj);
    codeobj_d6cd448e79b902ef18884564a2e13b03 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[49], NULL, 1, 0, 0);
    codeobj_29afd7573ff197ca98711f00f97f2e85 = MAKE_CODE_OBJECT(module_filename_obj, 20, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[48], mod_consts[48], mod_consts[50], NULL, 1, 0, 0);
    codeobj_25a213dacbe79780331809884a9fb17b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[51], mod_consts[51], NULL, NULL, 0, 0, 0);
    codeobj_6955a01f34fa979116a784156a848b0e = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[25], mod_consts[25], mod_consts[52], NULL, 1, 0, 0);
    codeobj_41c0ac52a55ff561bb964b1e3bf44a9c = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[44], mod_consts[44], mod_consts[52], NULL, 1, 0, 0);
    codeobj_81abf1889ec27ed9d6c1b2ecc0bd5f73 = MAKE_CODE_OBJECT(module_filename_obj, 56, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[17], mod_consts[17], mod_consts[53], NULL, 3, 0, 0);
    codeobj_4c9cd62dc54e27ae9e16009b9e77b913 = MAKE_CODE_OBJECT(module_filename_obj, 43, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[14], mod_consts[14], mod_consts[54], NULL, 1, 0, 0);
    codeobj_65bdedac1f41a35b5bb5aacc4980d182 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[24], mod_consts[24], mod_consts[55], NULL, 1, 0, 0);
    codeobj_07e03537a555a1dbf3ee677bd53ee443 = MAKE_CODE_OBJECT(module_filename_obj, 60, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[20], mod_consts[20], mod_consts[56], NULL, 3, 0, 0);
    codeobj_2f0038220036424de2c761223f26764c = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[23], mod_consts[23], mod_consts[57], NULL, 3, 0, 0);
    codeobj_489da3ccc7c9304837105a68edf0a222 = MAKE_CODE_OBJECT(module_filename_obj, 46, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[19], mod_consts[19], mod_consts[58], NULL, 2, 0, 0);
    codeobj_396528996d7df984c979caa42ce287df = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[45], mod_consts[45], mod_consts[59], NULL, 1, 0, 0);
    codeobj_18b1638aa6b0b3aaa862af0f3ca2caeb = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[46], mod_consts[46], mod_consts[60], NULL, 4, 0, 0);
    codeobj_1590531c474b4c8c4cc0337040eab2dc = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[33], mod_consts[33], mod_consts[61], NULL, 3, 0, 0);
    codeobj_dd5807acefa24c986d7b4899c38485a6 = MAKE_CODE_OBJECT(module_filename_obj, 84, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[62], NULL, 3, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__10_update_names_with_list();


static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__11_update_names_with_mapping();


static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__12_update_names();


static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__1_check_serializing_named_tensor();


static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__2_build_dim_map();


static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__3_unzip_namedshape();


static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__4_namer_api_name();


static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__5_is_ellipsis();


static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__6_single_ellipsis_index();


static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__7_expand_single_ellipsis();


static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__8_replace_ellipsis_by_position();


static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__9_resolve_ellipsis();


// The module function definitions.
static PyObject *impl_torch$_namedtensor_internals$$$function__1_check_serializing_named_tensor(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tensor = python_pars[0];
    struct Nuitka_FrameObject *frame_41c0ac52a55ff561bb964b1e3bf44a9c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_41c0ac52a55ff561bb964b1e3bf44a9c = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_41c0ac52a55ff561bb964b1e3bf44a9c)) {
        Py_XDECREF(cache_frame_41c0ac52a55ff561bb964b1e3bf44a9c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_41c0ac52a55ff561bb964b1e3bf44a9c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_41c0ac52a55ff561bb964b1e3bf44a9c = MAKE_FUNCTION_FRAME(codeobj_41c0ac52a55ff561bb964b1e3bf44a9c, module_torch$_namedtensor_internals, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_41c0ac52a55ff561bb964b1e3bf44a9c->m_type_description == NULL);
    frame_41c0ac52a55ff561bb964b1e3bf44a9c = cache_frame_41c0ac52a55ff561bb964b1e3bf44a9c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_41c0ac52a55ff561bb964b1e3bf44a9c);
    assert(Py_REFCNT(frame_41c0ac52a55ff561bb964b1e3bf44a9c) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_tensor);
        tmp_called_instance_1 = par_tensor;
        frame_41c0ac52a55ff561bb964b1e3bf44a9c->m_frame.f_lineno = 11;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[0]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 11;
            type_description_1 = "o";
            goto frame_exception_exit_1;
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[1];
        frame_41c0ac52a55ff561bb964b1e3bf44a9c->m_frame.f_lineno = 12;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 12;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_41c0ac52a55ff561bb964b1e3bf44a9c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_41c0ac52a55ff561bb964b1e3bf44a9c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_41c0ac52a55ff561bb964b1e3bf44a9c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_41c0ac52a55ff561bb964b1e3bf44a9c,
        type_description_1,
        par_tensor
    );


    // Release cached frame if used for exception.
    if (frame_41c0ac52a55ff561bb964b1e3bf44a9c == cache_frame_41c0ac52a55ff561bb964b1e3bf44a9c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_41c0ac52a55ff561bb964b1e3bf44a9c);
        cache_frame_41c0ac52a55ff561bb964b1e3bf44a9c = NULL;
    }

    assertFrameObject(frame_41c0ac52a55ff561bb964b1e3bf44a9c);

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
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_namedtensor_internals$$$function__2_build_dim_map(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tensor = python_pars[0];
    PyObject *outline_0_var_idx = NULL;
    PyObject *outline_0_var_name = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_6955a01f34fa979116a784156a848b0e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_29afd7573ff197ca98711f00f97f2e85_2;
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
    static struct Nuitka_FrameObject *cache_frame_29afd7573ff197ca98711f00f97f2e85_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_6955a01f34fa979116a784156a848b0e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6955a01f34fa979116a784156a848b0e)) {
        Py_XDECREF(cache_frame_6955a01f34fa979116a784156a848b0e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6955a01f34fa979116a784156a848b0e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6955a01f34fa979116a784156a848b0e = MAKE_FUNCTION_FRAME(codeobj_6955a01f34fa979116a784156a848b0e, module_torch$_namedtensor_internals, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6955a01f34fa979116a784156a848b0e->m_type_description == NULL);
    frame_6955a01f34fa979116a784156a848b0e = cache_frame_6955a01f34fa979116a784156a848b0e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6955a01f34fa979116a784156a848b0e);
    assert(Py_REFCNT(frame_6955a01f34fa979116a784156a848b0e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_expression_value_1;
            tmp_called_value_2 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT(par_tensor);
            tmp_expression_value_1 = par_tensor;
            tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            frame_6955a01f34fa979116a784156a848b0e->m_frame.f_lineno = 21;
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 21;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_1 = "o";
                goto try_except_handler_1;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_1;
        }
        {
            PyObject *tmp_assign_source_2;
            tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_2;
        }
        if (isFrameUnusable(cache_frame_29afd7573ff197ca98711f00f97f2e85_2)) {
            Py_XDECREF(cache_frame_29afd7573ff197ca98711f00f97f2e85_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_29afd7573ff197ca98711f00f97f2e85_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_29afd7573ff197ca98711f00f97f2e85_2 = MAKE_FUNCTION_FRAME(codeobj_29afd7573ff197ca98711f00f97f2e85, module_torch$_namedtensor_internals, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_29afd7573ff197ca98711f00f97f2e85_2->m_type_description == NULL);
        frame_29afd7573ff197ca98711f00f97f2e85_2 = cache_frame_29afd7573ff197ca98711f00f97f2e85_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_29afd7573ff197ca98711f00f97f2e85_2);
        assert(Py_REFCNT(frame_29afd7573ff197ca98711f00f97f2e85_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_3;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_3 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 20;
                    goto try_except_handler_2;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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


                type_description_2 = "oo";
                exception_lineno = 20;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
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


                type_description_2 = "oo";
                exception_lineno = 20;
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_6;
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

                        type_description_2 = "oo";
                        exception_lineno = 20;
                        goto try_except_handler_4;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[4];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 20;
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

        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
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

        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

        goto try_except_handler_2;
        // End of try:
        try_end_2:;
        CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
        Py_DECREF(tmp_listcomp$tuple_unpack_1__source_iter);
        tmp_listcomp$tuple_unpack_1__source_iter = NULL;
        {
            PyObject *tmp_assign_source_7;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_7 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_idx;
                outline_0_var_idx = tmp_assign_source_7;
                Py_INCREF(outline_0_var_idx);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_8 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_name;
                outline_0_var_name = tmp_assign_source_8;
                Py_INCREF(outline_0_var_name);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_tuple_element_1;
            bool tmp_condition_result_1;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_name);
            tmp_cmp_expr_left_1 = outline_0_var_name;
            tmp_cmp_expr_right_1 = Py_None;
            tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
            if (tmp_condition_result_1 != false) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            CHECK_OBJECT(outline_0_var_idx);
            tmp_tuple_element_1 = outline_0_var_idx;
            goto condexpr_end_1;
            condexpr_false_1:;
            CHECK_OBJECT(outline_0_var_name);
            tmp_tuple_element_1 = outline_0_var_name;
            condexpr_end_1:;
            tmp_append_value_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(outline_0_var_name);
            tmp_tuple_element_1 = outline_0_var_name;
            PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_1);
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 20;
                type_description_2 = "oo";
                goto try_except_handler_2;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_args_element_value_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_args_element_value_1);
        goto try_return_handler_2;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
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
        try_except_handler_2:;
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

        goto try_return_handler_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_29afd7573ff197ca98711f00f97f2e85_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_29afd7573ff197ca98711f00f97f2e85_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_29afd7573ff197ca98711f00f97f2e85_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_29afd7573ff197ca98711f00f97f2e85_2,
            type_description_2,
            outline_0_var_idx,
            outline_0_var_name
        );


        // Release cached frame if used for exception.
        if (frame_29afd7573ff197ca98711f00f97f2e85_2 == cache_frame_29afd7573ff197ca98711f00f97f2e85_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_29afd7573ff197ca98711f00f97f2e85_2);
            cache_frame_29afd7573ff197ca98711f00f97f2e85_2 = NULL;
        }

        assertFrameObject(frame_29afd7573ff197ca98711f00f97f2e85_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "o";
        goto try_except_handler_1;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_1:;
        Py_XDECREF(outline_0_var_idx);
        outline_0_var_idx = NULL;
        Py_XDECREF(outline_0_var_name);
        outline_0_var_name = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_idx);
        outline_0_var_idx = NULL;
        Py_XDECREF(outline_0_var_name);
        outline_0_var_name = NULL;
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
        exception_lineno = 20;
        goto frame_exception_exit_1;
        outline_result_1:;
        frame_6955a01f34fa979116a784156a848b0e->m_frame.f_lineno = 20;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "o";
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6955a01f34fa979116a784156a848b0e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6955a01f34fa979116a784156a848b0e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6955a01f34fa979116a784156a848b0e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6955a01f34fa979116a784156a848b0e,
        type_description_1,
        par_tensor
    );


    // Release cached frame if used for exception.
    if (frame_6955a01f34fa979116a784156a848b0e == cache_frame_6955a01f34fa979116a784156a848b0e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6955a01f34fa979116a784156a848b0e);
        cache_frame_6955a01f34fa979116a784156a848b0e = NULL;
    }

    assertFrameObject(frame_6955a01f34fa979116a784156a848b0e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_namedtensor_internals$$$function__3_unzip_namedshape(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_namedshape = python_pars[0];
    struct Nuitka_FrameObject *frame_396528996d7df984c979caa42ce287df;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_396528996d7df984c979caa42ce287df = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_396528996d7df984c979caa42ce287df)) {
        Py_XDECREF(cache_frame_396528996d7df984c979caa42ce287df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_396528996d7df984c979caa42ce287df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_396528996d7df984c979caa42ce287df = MAKE_FUNCTION_FRAME(codeobj_396528996d7df984c979caa42ce287df, module_torch$_namedtensor_internals, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_396528996d7df984c979caa42ce287df->m_type_description == NULL);
    frame_396528996d7df984c979caa42ce287df = cache_frame_396528996d7df984c979caa42ce287df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_396528996d7df984c979caa42ce287df);
    assert(Py_REFCNT(frame_396528996d7df984c979caa42ce287df) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_namedshape);
        tmp_isinstance_inst_1 = par_namedshape;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;
            type_description_1 = "o";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_namedshape);
        tmp_expression_value_1 = par_namedshape;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[6]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_396528996d7df984c979caa42ce287df->m_frame.f_lineno = 26;
        tmp_assign_source_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 26;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_namedshape;
            assert(old != NULL);
            par_namedshape = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_namedshape);
        tmp_expression_value_2 = par_namedshape;
        tmp_attribute_value_1 = mod_consts[7];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_2, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
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
        CHECK_OBJECT(par_namedshape);
        tmp_isinstance_inst_2 = par_namedshape;
        tmp_isinstance_cls_2 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 27;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res == 0) ? true : false;
        tmp_condition_result_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_2 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_type_arg_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[8];
        CHECK_OBJECT(par_namedshape);
        tmp_type_arg_1 = par_namedshape;
        tmp_kw_call_arg_value_1_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_kw_call_arg_value_1_1 == NULL));
        frame_396528996d7df984c979caa42ce287df->m_frame.f_lineno = 29;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_1_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_396528996d7df984c979caa42ce287df->m_frame.f_lineno = 28;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 28;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_namedshape);
        tmp_len_arg_1 = par_namedshape;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_3 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[9];
        frame_396528996d7df984c979caa42ce287df->m_frame.f_lineno = 32;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 32;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "o";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_dircall_arg1_1 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_namedshape);
        tmp_dircall_arg2_1 = par_namedshape;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
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
        exception_tb = MAKE_TRACEBACK(frame_396528996d7df984c979caa42ce287df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_396528996d7df984c979caa42ce287df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_396528996d7df984c979caa42ce287df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_396528996d7df984c979caa42ce287df,
        type_description_1,
        par_namedshape
    );


    // Release cached frame if used for exception.
    if (frame_396528996d7df984c979caa42ce287df == cache_frame_396528996d7df984c979caa42ce287df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_396528996d7df984c979caa42ce287df);
        cache_frame_396528996d7df984c979caa42ce287df = NULL;
    }

    assertFrameObject(frame_396528996d7df984c979caa42ce287df);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_namedshape);
    Py_DECREF(par_namedshape);
    par_namedshape = NULL;
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

    Py_XDECREF(par_namedshape);
    par_namedshape = NULL;
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


static PyObject *impl_torch$_namedtensor_internals$$$function__4_namer_api_name(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_inplace = python_pars[0];
    struct Nuitka_FrameObject *frame_65bdedac1f41a35b5bb5aacc4980d182;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_65bdedac1f41a35b5bb5aacc4980d182 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_65bdedac1f41a35b5bb5aacc4980d182)) {
        Py_XDECREF(cache_frame_65bdedac1f41a35b5bb5aacc4980d182);

#if _DEBUG_REFCOUNTS
        if (cache_frame_65bdedac1f41a35b5bb5aacc4980d182 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_65bdedac1f41a35b5bb5aacc4980d182 = MAKE_FUNCTION_FRAME(codeobj_65bdedac1f41a35b5bb5aacc4980d182, module_torch$_namedtensor_internals, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_65bdedac1f41a35b5bb5aacc4980d182->m_type_description == NULL);
    frame_65bdedac1f41a35b5bb5aacc4980d182 = cache_frame_65bdedac1f41a35b5bb5aacc4980d182;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_65bdedac1f41a35b5bb5aacc4980d182);
    assert(Py_REFCNT(frame_65bdedac1f41a35b5bb5aacc4980d182) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_inplace);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_inplace);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "o";
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
    tmp_return_value = mod_consts[10];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    goto branch_end_1;
    branch_no_1:;
    tmp_return_value = mod_consts[11];
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
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
        exception_tb = MAKE_TRACEBACK(frame_65bdedac1f41a35b5bb5aacc4980d182, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_65bdedac1f41a35b5bb5aacc4980d182->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_65bdedac1f41a35b5bb5aacc4980d182, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_65bdedac1f41a35b5bb5aacc4980d182,
        type_description_1,
        par_inplace
    );


    // Release cached frame if used for exception.
    if (frame_65bdedac1f41a35b5bb5aacc4980d182 == cache_frame_65bdedac1f41a35b5bb5aacc4980d182) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_65bdedac1f41a35b5bb5aacc4980d182);
        cache_frame_65bdedac1f41a35b5bb5aacc4980d182 = NULL;
    }

    assertFrameObject(frame_65bdedac1f41a35b5bb5aacc4980d182);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_namedtensor_internals$$$function__5_is_ellipsis(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_item = python_pars[0];
    struct Nuitka_FrameObject *frame_4c9cd62dc54e27ae9e16009b9e77b913;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4c9cd62dc54e27ae9e16009b9e77b913 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4c9cd62dc54e27ae9e16009b9e77b913)) {
        Py_XDECREF(cache_frame_4c9cd62dc54e27ae9e16009b9e77b913);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c9cd62dc54e27ae9e16009b9e77b913 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c9cd62dc54e27ae9e16009b9e77b913 = MAKE_FUNCTION_FRAME(codeobj_4c9cd62dc54e27ae9e16009b9e77b913, module_torch$_namedtensor_internals, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4c9cd62dc54e27ae9e16009b9e77b913->m_type_description == NULL);
    frame_4c9cd62dc54e27ae9e16009b9e77b913 = cache_frame_4c9cd62dc54e27ae9e16009b9e77b913;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4c9cd62dc54e27ae9e16009b9e77b913);
    assert(Py_REFCNT(frame_4c9cd62dc54e27ae9e16009b9e77b913) == 2);

    // Framed code:
    {
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_item);
        tmp_cmp_expr_left_1 = par_item;
        tmp_cmp_expr_right_1 = LOOKUP_BUILTIN(mod_consts[12]);
        assert(tmp_cmp_expr_right_1 != NULL);
        tmp_or_left_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_or_left_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_or_left_value_1);

            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        Py_DECREF(tmp_or_left_value_1);
        CHECK_OBJECT(par_item);
        tmp_cmp_expr_left_2 = par_item;
        tmp_cmp_expr_right_2 = mod_consts[13];
        tmp_or_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_return_value = tmp_or_left_value_1;
        or_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_4c9cd62dc54e27ae9e16009b9e77b913, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c9cd62dc54e27ae9e16009b9e77b913->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c9cd62dc54e27ae9e16009b9e77b913, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c9cd62dc54e27ae9e16009b9e77b913,
        type_description_1,
        par_item
    );


    // Release cached frame if used for exception.
    if (frame_4c9cd62dc54e27ae9e16009b9e77b913 == cache_frame_4c9cd62dc54e27ae9e16009b9e77b913) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4c9cd62dc54e27ae9e16009b9e77b913);
        cache_frame_4c9cd62dc54e27ae9e16009b9e77b913 = NULL;
    }

    assertFrameObject(frame_4c9cd62dc54e27ae9e16009b9e77b913);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_item);
    Py_DECREF(par_item);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_namedtensor_internals$$$function__6_single_ellipsis_index(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_names = python_pars[0];
    PyObject *par_fn_name = python_pars[1];
    PyObject *var_ellipsis_indices = NULL;
    PyObject *outline_0_var_i = NULL;
    PyObject *outline_0_var_name = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_489da3ccc7c9304837105a68edf0a222;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_d6cd448e79b902ef18884564a2e13b03_2;
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
    static struct Nuitka_FrameObject *cache_frame_d6cd448e79b902ef18884564a2e13b03_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_489da3ccc7c9304837105a68edf0a222 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_489da3ccc7c9304837105a68edf0a222)) {
        Py_XDECREF(cache_frame_489da3ccc7c9304837105a68edf0a222);

#if _DEBUG_REFCOUNTS
        if (cache_frame_489da3ccc7c9304837105a68edf0a222 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_489da3ccc7c9304837105a68edf0a222 = MAKE_FUNCTION_FRAME(codeobj_489da3ccc7c9304837105a68edf0a222, module_torch$_namedtensor_internals, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_489da3ccc7c9304837105a68edf0a222->m_type_description == NULL);
    frame_489da3ccc7c9304837105a68edf0a222 = cache_frame_489da3ccc7c9304837105a68edf0a222;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_489da3ccc7c9304837105a68edf0a222);
    assert(Py_REFCNT(frame_489da3ccc7c9304837105a68edf0a222) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_1 = (PyObject *)&PyEnum_Type;
            CHECK_OBJECT(par_names);
            tmp_args_element_value_1 = par_names;
            frame_489da3ccc7c9304837105a68edf0a222->m_frame.f_lineno = 47;
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_1 = "ooo";
                goto try_except_handler_2;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_d6cd448e79b902ef18884564a2e13b03_2)) {
            Py_XDECREF(cache_frame_d6cd448e79b902ef18884564a2e13b03_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d6cd448e79b902ef18884564a2e13b03_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d6cd448e79b902ef18884564a2e13b03_2 = MAKE_FUNCTION_FRAME(codeobj_d6cd448e79b902ef18884564a2e13b03, module_torch$_namedtensor_internals, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_d6cd448e79b902ef18884564a2e13b03_2->m_type_description == NULL);
        frame_d6cd448e79b902ef18884564a2e13b03_2 = cache_frame_d6cd448e79b902ef18884564a2e13b03_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d6cd448e79b902ef18884564a2e13b03_2);
        assert(Py_REFCNT(frame_d6cd448e79b902ef18884564a2e13b03_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "oo";
                    exception_lineno = 47;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_5;
            PyObject *tmp_iter_arg_2;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_iter_arg_2 = tmp_listcomp_1__iter_value_0;
            tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "oo";
                goto try_except_handler_4;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__source_iter;
                tmp_listcomp$tuple_unpack_1__source_iter = tmp_assign_source_5;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_unpack_1;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_1 = tmp_listcomp$tuple_unpack_1__source_iter;
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


                type_description_2 = "oo";
                exception_lineno = 47;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_1;
                tmp_listcomp$tuple_unpack_1__element_1 = tmp_assign_source_6;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_7;
            PyObject *tmp_unpack_2;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__source_iter);
            tmp_unpack_2 = tmp_listcomp$tuple_unpack_1__source_iter;
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


                type_description_2 = "oo";
                exception_lineno = 47;
                goto try_except_handler_5;
            }
            {
                PyObject *old = tmp_listcomp$tuple_unpack_1__element_2;
                tmp_listcomp$tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                        type_description_2 = "oo";
                        exception_lineno = 47;
                        goto try_except_handler_5;
                    }
                }
            } else {
                Py_DECREF(tmp_iterator_attempt);

                exception_type = PyExc_ValueError;
                Py_INCREF(PyExc_ValueError);
                exception_value = mod_consts[4];
                Py_INCREF(exception_value);
                exception_tb = NULL;

                type_description_2 = "oo";
                exception_lineno = 47;
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
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_1);
            tmp_assign_source_8 = tmp_listcomp$tuple_unpack_1__element_1;
            {
                PyObject *old = outline_0_var_i;
                outline_0_var_i = tmp_assign_source_8;
                Py_INCREF(outline_0_var_i);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_1);
        tmp_listcomp$tuple_unpack_1__element_1 = NULL;

        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_listcomp$tuple_unpack_1__element_2);
            tmp_assign_source_9 = tmp_listcomp$tuple_unpack_1__element_2;
            {
                PyObject *old = outline_0_var_name;
                outline_0_var_name = tmp_assign_source_9;
                Py_INCREF(outline_0_var_name);
                Py_XDECREF(old);
            }

        }
        Py_XDECREF(tmp_listcomp$tuple_unpack_1__element_2);
        tmp_listcomp$tuple_unpack_1__element_2 = NULL;

        {
            nuitka_bool tmp_condition_result_1;
            PyObject *tmp_called_value_2;
            PyObject *tmp_call_result_1;
            PyObject *tmp_args_element_value_2;
            int tmp_truth_name_1;
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            CHECK_OBJECT(outline_0_var_name);
            tmp_args_element_value_2 = outline_0_var_name;
            frame_d6cd448e79b902ef18884564a2e13b03_2->m_frame.f_lineno = 47;
            tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
            if (tmp_call_result_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
            tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
            if (tmp_truth_name_1 == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_call_result_1);

                exception_lineno = 47;
                type_description_2 = "oo";
                goto try_except_handler_3;
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
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_i);
            tmp_append_value_1 = outline_0_var_i;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;
                type_description_2 = "oo";
                goto try_except_handler_3;
            }
        }
        branch_no_1:;
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_1);
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
            exception_tb = MAKE_TRACEBACK(frame_d6cd448e79b902ef18884564a2e13b03_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d6cd448e79b902ef18884564a2e13b03_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d6cd448e79b902ef18884564a2e13b03_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d6cd448e79b902ef18884564a2e13b03_2,
            type_description_2,
            outline_0_var_i,
            outline_0_var_name
        );


        // Release cached frame if used for exception.
        if (frame_d6cd448e79b902ef18884564a2e13b03_2 == cache_frame_d6cd448e79b902ef18884564a2e13b03_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_d6cd448e79b902ef18884564a2e13b03_2);
            cache_frame_d6cd448e79b902ef18884564a2e13b03_2 = NULL;
        }

        assertFrameObject(frame_d6cd448e79b902ef18884564a2e13b03_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        Py_XDECREF(outline_0_var_name);
        outline_0_var_name = NULL;
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

        Py_XDECREF(outline_0_var_i);
        outline_0_var_i = NULL;
        Py_XDECREF(outline_0_var_name);
        outline_0_var_name = NULL;
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
        exception_lineno = 47;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_ellipsis_indices == NULL);
        var_ellipsis_indices = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_ellipsis_indices);
        tmp_len_arg_1 = var_ellipsis_indices;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 2;
        tmp_condition_result_2 = RICH_COMPARE_GE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[15];
        CHECK_OBJECT(par_fn_name);
        tmp_kw_call_arg_value_1_1 = par_fn_name;
        CHECK_OBJECT(par_names);
        tmp_kw_call_arg_value_2_1 = par_names;
        frame_489da3ccc7c9304837105a68edf0a222->m_frame.f_lineno = 49;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_489da3ccc7c9304837105a68edf0a222->m_frame.f_lineno = 49;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 49;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_2;
        CHECK_OBJECT(var_ellipsis_indices);
        tmp_len_arg_2 = var_ellipsis_indices;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 1;
        tmp_condition_result_3 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_ellipsis_indices);
        tmp_expression_value_1 = var_ellipsis_indices;
        tmp_subscript_value_1 = mod_consts[16];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_489da3ccc7c9304837105a68edf0a222, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_489da3ccc7c9304837105a68edf0a222->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_489da3ccc7c9304837105a68edf0a222, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_489da3ccc7c9304837105a68edf0a222,
        type_description_1,
        par_names,
        par_fn_name,
        var_ellipsis_indices
    );


    // Release cached frame if used for exception.
    if (frame_489da3ccc7c9304837105a68edf0a222 == cache_frame_489da3ccc7c9304837105a68edf0a222) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_489da3ccc7c9304837105a68edf0a222);
        cache_frame_489da3ccc7c9304837105a68edf0a222 = NULL;
    }

    assertFrameObject(frame_489da3ccc7c9304837105a68edf0a222);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ellipsis_indices);
    Py_DECREF(var_ellipsis_indices);
    var_ellipsis_indices = NULL;
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

    Py_XDECREF(var_ellipsis_indices);
    var_ellipsis_indices = NULL;
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
    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    CHECK_OBJECT(par_fn_name);
    Py_DECREF(par_fn_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    CHECK_OBJECT(par_fn_name);
    Py_DECREF(par_fn_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_namedtensor_internals$$$function__7_expand_single_ellipsis(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_numel_pre_glob = python_pars[0];
    PyObject *par_numel_post_glob = python_pars[1];
    PyObject *par_names = python_pars[2];
    struct Nuitka_FrameObject *frame_81abf1889ec27ed9d6c1b2ecc0bd5f73;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_81abf1889ec27ed9d6c1b2ecc0bd5f73 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_81abf1889ec27ed9d6c1b2ecc0bd5f73)) {
        Py_XDECREF(cache_frame_81abf1889ec27ed9d6c1b2ecc0bd5f73);

#if _DEBUG_REFCOUNTS
        if (cache_frame_81abf1889ec27ed9d6c1b2ecc0bd5f73 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_81abf1889ec27ed9d6c1b2ecc0bd5f73 = MAKE_FUNCTION_FRAME(codeobj_81abf1889ec27ed9d6c1b2ecc0bd5f73, module_torch$_namedtensor_internals, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_81abf1889ec27ed9d6c1b2ecc0bd5f73->m_type_description == NULL);
    frame_81abf1889ec27ed9d6c1b2ecc0bd5f73 = cache_frame_81abf1889ec27ed9d6c1b2ecc0bd5f73;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_81abf1889ec27ed9d6c1b2ecc0bd5f73);
    assert(Py_REFCNT(frame_81abf1889ec27ed9d6c1b2ecc0bd5f73) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_start_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_names);
        tmp_expression_value_1 = par_names;
        CHECK_OBJECT(par_numel_pre_glob);
        tmp_start_value_1 = par_numel_pre_glob;
        CHECK_OBJECT(par_names);
        tmp_len_arg_1 = par_names;
        tmp_sub_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_numel_post_glob);
        tmp_sub_expr_right_1 = par_numel_post_glob;
        tmp_stop_value_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
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
        exception_tb = MAKE_TRACEBACK(frame_81abf1889ec27ed9d6c1b2ecc0bd5f73, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_81abf1889ec27ed9d6c1b2ecc0bd5f73->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_81abf1889ec27ed9d6c1b2ecc0bd5f73, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_81abf1889ec27ed9d6c1b2ecc0bd5f73,
        type_description_1,
        par_numel_pre_glob,
        par_numel_post_glob,
        par_names
    );


    // Release cached frame if used for exception.
    if (frame_81abf1889ec27ed9d6c1b2ecc0bd5f73 == cache_frame_81abf1889ec27ed9d6c1b2ecc0bd5f73) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_81abf1889ec27ed9d6c1b2ecc0bd5f73);
        cache_frame_81abf1889ec27ed9d6c1b2ecc0bd5f73 = NULL;
    }

    assertFrameObject(frame_81abf1889ec27ed9d6c1b2ecc0bd5f73);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_numel_pre_glob);
    Py_DECREF(par_numel_pre_glob);
    CHECK_OBJECT(par_numel_post_glob);
    Py_DECREF(par_numel_post_glob);
    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_numel_pre_glob);
    Py_DECREF(par_numel_pre_glob);
    CHECK_OBJECT(par_numel_post_glob);
    Py_DECREF(par_numel_post_glob);
    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_namedtensor_internals$$$function__8_replace_ellipsis_by_position(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ellipsis_idx = python_pars[0];
    PyObject *par_names = python_pars[1];
    PyObject *par_tensor_names = python_pars[2];
    PyObject *var_globbed_names = NULL;
    struct Nuitka_FrameObject *frame_07e03537a555a1dbf3ee677bd53ee443;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_07e03537a555a1dbf3ee677bd53ee443 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_07e03537a555a1dbf3ee677bd53ee443)) {
        Py_XDECREF(cache_frame_07e03537a555a1dbf3ee677bd53ee443);

#if _DEBUG_REFCOUNTS
        if (cache_frame_07e03537a555a1dbf3ee677bd53ee443 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_07e03537a555a1dbf3ee677bd53ee443 = MAKE_FUNCTION_FRAME(codeobj_07e03537a555a1dbf3ee677bd53ee443, module_torch$_namedtensor_internals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_07e03537a555a1dbf3ee677bd53ee443->m_type_description == NULL);
    frame_07e03537a555a1dbf3ee677bd53ee443 = cache_frame_07e03537a555a1dbf3ee677bd53ee443;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_07e03537a555a1dbf3ee677bd53ee443);
    assert(Py_REFCNT(frame_07e03537a555a1dbf3ee677bd53ee443) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ellipsis_idx);
        tmp_args_element_value_1 = par_ellipsis_idx;
        CHECK_OBJECT(par_names);
        tmp_len_arg_1 = par_names;
        tmp_sub_expr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ellipsis_idx);
        tmp_sub_expr_right_2 = par_ellipsis_idx;
        tmp_sub_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_1 = mod_consts[18];
        tmp_args_element_value_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tensor_names);
        tmp_args_element_value_3 = par_tensor_names;
        frame_07e03537a555a1dbf3ee677bd53ee443->m_frame.f_lineno = 61;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_globbed_names == NULL);
        var_globbed_names = tmp_assign_source_1;
    }
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_start_value_1;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_stop_value_2;
        CHECK_OBJECT(par_names);
        tmp_expression_value_1 = par_names;
        CHECK_OBJECT(par_ellipsis_idx);
        tmp_stop_value_1 = par_ellipsis_idx;
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_globbed_names);
        tmp_add_expr_right_2 = var_globbed_names;
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_names);
        tmp_expression_value_2 = par_names;
        CHECK_OBJECT(par_ellipsis_idx);
        tmp_add_expr_left_3 = par_ellipsis_idx;
        tmp_add_expr_right_3 = mod_consts[18];
        tmp_start_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_start_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_value_2 = Py_None;
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_2);
        Py_DECREF(tmp_start_value_1);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 62;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
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
        exception_tb = MAKE_TRACEBACK(frame_07e03537a555a1dbf3ee677bd53ee443, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_07e03537a555a1dbf3ee677bd53ee443->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_07e03537a555a1dbf3ee677bd53ee443, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_07e03537a555a1dbf3ee677bd53ee443,
        type_description_1,
        par_ellipsis_idx,
        par_names,
        par_tensor_names,
        var_globbed_names
    );


    // Release cached frame if used for exception.
    if (frame_07e03537a555a1dbf3ee677bd53ee443 == cache_frame_07e03537a555a1dbf3ee677bd53ee443) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_07e03537a555a1dbf3ee677bd53ee443);
        cache_frame_07e03537a555a1dbf3ee677bd53ee443 = NULL;
    }

    assertFrameObject(frame_07e03537a555a1dbf3ee677bd53ee443);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_globbed_names);
    Py_DECREF(var_globbed_names);
    var_globbed_names = NULL;
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

    Py_XDECREF(var_globbed_names);
    var_globbed_names = NULL;
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
    CHECK_OBJECT(par_ellipsis_idx);
    Py_DECREF(par_ellipsis_idx);
    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    CHECK_OBJECT(par_tensor_names);
    Py_DECREF(par_tensor_names);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ellipsis_idx);
    Py_DECREF(par_ellipsis_idx);
    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    CHECK_OBJECT(par_tensor_names);
    Py_DECREF(par_tensor_names);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_namedtensor_internals$$$function__9_resolve_ellipsis(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_names = python_pars[0];
    PyObject *par_tensor_names = python_pars[1];
    PyObject *par_fn_name = python_pars[2];
    PyObject *var_ellipsis_idx = NULL;
    struct Nuitka_FrameObject *frame_2f0038220036424de2c761223f26764c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2f0038220036424de2c761223f26764c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2f0038220036424de2c761223f26764c)) {
        Py_XDECREF(cache_frame_2f0038220036424de2c761223f26764c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f0038220036424de2c761223f26764c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f0038220036424de2c761223f26764c = MAKE_FUNCTION_FRAME(codeobj_2f0038220036424de2c761223f26764c, module_torch$_namedtensor_internals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f0038220036424de2c761223f26764c->m_type_description == NULL);
    frame_2f0038220036424de2c761223f26764c = cache_frame_2f0038220036424de2c761223f26764c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2f0038220036424de2c761223f26764c);
    assert(Py_REFCNT(frame_2f0038220036424de2c761223f26764c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_names);
        tmp_args_element_value_1 = par_names;
        CHECK_OBJECT(par_fn_name);
        tmp_args_element_value_2 = par_fn_name;
        frame_2f0038220036424de2c761223f26764c->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        assert(var_ellipsis_idx == NULL);
        var_ellipsis_idx = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_ellipsis_idx);
        tmp_cmp_expr_left_1 = var_ellipsis_idx;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    CHECK_OBJECT(par_names);
    tmp_return_value = par_names;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ellipsis_idx);
        tmp_args_element_value_3 = var_ellipsis_idx;
        CHECK_OBJECT(par_names);
        tmp_args_element_value_4 = par_names;
        CHECK_OBJECT(par_tensor_names);
        tmp_args_element_value_5 = par_tensor_names;
        frame_2f0038220036424de2c761223f26764c->m_frame.f_lineno = 72;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
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
        exception_tb = MAKE_TRACEBACK(frame_2f0038220036424de2c761223f26764c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f0038220036424de2c761223f26764c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f0038220036424de2c761223f26764c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f0038220036424de2c761223f26764c,
        type_description_1,
        par_names,
        par_tensor_names,
        par_fn_name,
        var_ellipsis_idx
    );


    // Release cached frame if used for exception.
    if (frame_2f0038220036424de2c761223f26764c == cache_frame_2f0038220036424de2c761223f26764c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f0038220036424de2c761223f26764c);
        cache_frame_2f0038220036424de2c761223f26764c = NULL;
    }

    assertFrameObject(frame_2f0038220036424de2c761223f26764c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_ellipsis_idx);
    var_ellipsis_idx = NULL;
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

    Py_XDECREF(var_ellipsis_idx);
    var_ellipsis_idx = NULL;
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
    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    CHECK_OBJECT(par_tensor_names);
    Py_DECREF(par_tensor_names);
    CHECK_OBJECT(par_fn_name);
    Py_DECREF(par_fn_name);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    CHECK_OBJECT(par_tensor_names);
    Py_DECREF(par_tensor_names);
    CHECK_OBJECT(par_fn_name);
    Py_DECREF(par_fn_name);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_namedtensor_internals$$$function__10_update_names_with_list(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tensor = python_pars[0];
    PyObject *par_names = python_pars[1];
    PyObject *par_inplace = python_pars[2];
    struct Nuitka_FrameObject *frame_1590531c474b4c8c4cc0337040eab2dc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_1590531c474b4c8c4cc0337040eab2dc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1590531c474b4c8c4cc0337040eab2dc)) {
        Py_XDECREF(cache_frame_1590531c474b4c8c4cc0337040eab2dc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1590531c474b4c8c4cc0337040eab2dc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1590531c474b4c8c4cc0337040eab2dc = MAKE_FUNCTION_FRAME(codeobj_1590531c474b4c8c4cc0337040eab2dc, module_torch$_namedtensor_internals, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1590531c474b4c8c4cc0337040eab2dc->m_type_description == NULL);
    frame_1590531c474b4c8c4cc0337040eab2dc = cache_frame_1590531c474b4c8c4cc0337040eab2dc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1590531c474b4c8c4cc0337040eab2dc);
    assert(Py_REFCNT(frame_1590531c474b4c8c4cc0337040eab2dc) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_names);
        tmp_len_arg_1 = par_names;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 1;
        tmp_and_left_value_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_names);
        tmp_expression_value_1 = par_names;
        tmp_subscript_value_1 = mod_consts[16];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_tensor);
        tmp_called_instance_1 = par_tensor;
        tmp_args_element_value_1 = Py_None;
        CHECK_OBJECT(par_inplace);
        tmp_args_element_value_2 = par_inplace;
        frame_1590531c474b4c8c4cc0337040eab2dc->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[22],
                call_args
            );
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(par_tensor);
        tmp_expression_value_2 = par_tensor;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_names);
        tmp_args_element_value_4 = par_names;
        CHECK_OBJECT(par_tensor);
        tmp_expression_value_3 = par_tensor;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[3]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_inplace);
        tmp_args_element_value_7 = par_inplace;
        frame_1590531c474b4c8c4cc0337040eab2dc->m_frame.f_lineno = 81;
        tmp_args_element_value_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_7);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1590531c474b4c8c4cc0337040eab2dc->m_frame.f_lineno = 81;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_args_element_value_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 81;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_inplace);
        tmp_args_element_value_8 = par_inplace;
        frame_1590531c474b4c8c4cc0337040eab2dc->m_frame.f_lineno = 80;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_8};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_3);
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1590531c474b4c8c4cc0337040eab2dc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1590531c474b4c8c4cc0337040eab2dc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1590531c474b4c8c4cc0337040eab2dc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1590531c474b4c8c4cc0337040eab2dc,
        type_description_1,
        par_tensor,
        par_names,
        par_inplace
    );


    // Release cached frame if used for exception.
    if (frame_1590531c474b4c8c4cc0337040eab2dc == cache_frame_1590531c474b4c8c4cc0337040eab2dc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1590531c474b4c8c4cc0337040eab2dc);
        cache_frame_1590531c474b4c8c4cc0337040eab2dc = NULL;
    }

    assertFrameObject(frame_1590531c474b4c8c4cc0337040eab2dc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);
    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);
    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_namedtensor_internals$$$function__11_update_names_with_mapping(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tensor = python_pars[0];
    PyObject *par_rename_map = python_pars[1];
    PyObject *par_inplace = python_pars[2];
    PyObject *var_dim_map = NULL;
    PyObject *var_old_dim = NULL;
    PyObject *var_new_dim = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_dd5807acefa24c986d7b4899c38485a6;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_dd5807acefa24c986d7b4899c38485a6 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_dd5807acefa24c986d7b4899c38485a6)) {
        Py_XDECREF(cache_frame_dd5807acefa24c986d7b4899c38485a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dd5807acefa24c986d7b4899c38485a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dd5807acefa24c986d7b4899c38485a6 = MAKE_FUNCTION_FRAME(codeobj_dd5807acefa24c986d7b4899c38485a6, module_torch$_namedtensor_internals, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dd5807acefa24c986d7b4899c38485a6->m_type_description == NULL);
    frame_dd5807acefa24c986d7b4899c38485a6 = cache_frame_dd5807acefa24c986d7b4899c38485a6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dd5807acefa24c986d7b4899c38485a6);
    assert(Py_REFCNT(frame_dd5807acefa24c986d7b4899c38485a6) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tensor);
        tmp_args_element_value_1 = par_tensor;
        frame_dd5807acefa24c986d7b4899c38485a6->m_frame.f_lineno = 85;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dim_map == NULL);
        var_dim_map = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_rename_map);
        tmp_expression_value_1 = par_rename_map;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[26]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_dd5807acefa24c986d7b4899c38485a6->m_frame.f_lineno = 86;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
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
                exception_lineno = 86;
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
            PyObject *old = var_old_dim;
            var_old_dim = tmp_assign_source_4;
            Py_INCREF(var_old_dim);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_rename_map);
        tmp_expression_value_2 = par_rename_map;
        CHECK_OBJECT(var_old_dim);
        tmp_subscript_value_1 = var_old_dim;
        tmp_assign_source_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_new_dim;
            var_new_dim = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_old_dim);
        tmp_cmp_expr_left_1 = var_old_dim;
        if (var_dim_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 88;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_3 = var_dim_map;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[26]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_dd5807acefa24c986d7b4899c38485a6->m_frame.f_lineno = 88;
        tmp_cmp_expr_right_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooo";
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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_new_dim);
        tmp_ass_subvalue_1 = var_new_dim;
        if (var_dim_map == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }

        tmp_ass_subscribed_1 = var_dim_map;
        CHECK_OBJECT(var_old_dim);
        tmp_ass_subscript_1 = var_old_dim;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        tmp_kw_call_arg_value_0_1 = mod_consts[28];
        CHECK_OBJECT(var_old_dim);
        tmp_kw_call_dict_value_0_1 = var_old_dim;
        CHECK_OBJECT(var_new_dim);
        tmp_kw_call_dict_value_1_1 = var_new_dim;
        CHECK_OBJECT(par_tensor);
        tmp_expression_value_4 = par_tensor;
        tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[3]);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_2_1);

            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_inplace);
        tmp_args_element_value_2 = par_inplace;
        frame_dd5807acefa24c986d7b4899c38485a6->m_frame.f_lineno = 94;
        tmp_kw_call_dict_value_3_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        if (tmp_kw_call_dict_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_dict_value_2_1);

            exception_lineno = 94;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_dd5807acefa24c986d7b4899c38485a6->m_frame.f_lineno = 91;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[29]);
        }

        Py_DECREF(tmp_kw_call_dict_value_2_1);
        Py_DECREF(tmp_kw_call_dict_value_3_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        frame_dd5807acefa24c986d7b4899c38485a6->m_frame.f_lineno = 91;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 91;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto try_except_handler_2;
    }
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 86;
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
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_arg_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_tensor);
        tmp_expression_value_5 = par_tensor;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[22]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        if (var_dim_map == NULL) {
            Py_DECREF(tmp_called_value_5);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[27]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = var_dim_map;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[30]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_dd5807acefa24c986d7b4899c38485a6->m_frame.f_lineno = 95;
        tmp_tuple_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
        Py_DECREF(tmp_called_value_6);
        if (tmp_tuple_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 95;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_inplace);
        tmp_args_element_value_4 = par_inplace;
        frame_dd5807acefa24c986d7b4899c38485a6->m_frame.f_lineno = 95;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_dd5807acefa24c986d7b4899c38485a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dd5807acefa24c986d7b4899c38485a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dd5807acefa24c986d7b4899c38485a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dd5807acefa24c986d7b4899c38485a6,
        type_description_1,
        par_tensor,
        par_rename_map,
        par_inplace,
        var_dim_map,
        var_old_dim,
        var_new_dim
    );


    // Release cached frame if used for exception.
    if (frame_dd5807acefa24c986d7b4899c38485a6 == cache_frame_dd5807acefa24c986d7b4899c38485a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dd5807acefa24c986d7b4899c38485a6);
        cache_frame_dd5807acefa24c986d7b4899c38485a6 = NULL;
    }

    assertFrameObject(frame_dd5807acefa24c986d7b4899c38485a6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_dim_map);
    var_dim_map = NULL;
    Py_XDECREF(var_old_dim);
    var_old_dim = NULL;
    Py_XDECREF(var_new_dim);
    var_new_dim = NULL;
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

    Py_XDECREF(var_dim_map);
    var_dim_map = NULL;
    Py_XDECREF(var_old_dim);
    var_old_dim = NULL;
    Py_XDECREF(var_new_dim);
    var_new_dim = NULL;
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
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);
    CHECK_OBJECT(par_rename_map);
    Py_DECREF(par_rename_map);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);
    CHECK_OBJECT(par_rename_map);
    Py_DECREF(par_rename_map);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$_namedtensor_internals$$$function__12_update_names(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_tensor = python_pars[0];
    PyObject *par_names = python_pars[1];
    PyObject *par_rename_map = python_pars[2];
    PyObject *par_inplace = python_pars[3];
    nuitka_bool var_has_names = NUITKA_BOOL_UNASSIGNED;
    nuitka_bool var_has_rename_pairs = NUITKA_BOOL_UNASSIGNED;
    struct Nuitka_FrameObject *frame_18b1638aa6b0b3aaa862af0f3ca2caeb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_18b1638aa6b0b3aaa862af0f3ca2caeb = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_18b1638aa6b0b3aaa862af0f3ca2caeb)) {
        Py_XDECREF(cache_frame_18b1638aa6b0b3aaa862af0f3ca2caeb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18b1638aa6b0b3aaa862af0f3ca2caeb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18b1638aa6b0b3aaa862af0f3ca2caeb = MAKE_FUNCTION_FRAME(codeobj_18b1638aa6b0b3aaa862af0f3ca2caeb, module_torch$_namedtensor_internals, sizeof(nuitka_bool)+sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_18b1638aa6b0b3aaa862af0f3ca2caeb->m_type_description == NULL);
    frame_18b1638aa6b0b3aaa862af0f3ca2caeb = cache_frame_18b1638aa6b0b3aaa862af0f3ca2caeb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_18b1638aa6b0b3aaa862af0f3ca2caeb);
    assert(Py_REFCNT(frame_18b1638aa6b0b3aaa862af0f3ca2caeb) == 2);

    // Framed code:
    {
        nuitka_bool tmp_assign_source_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        bool tmp_tmp_assign_source_1_cbool_1;
        CHECK_OBJECT(par_names);
        tmp_len_arg_1 = par_names;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooobb";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_tmp_assign_source_1_cbool_1 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_assign_source_1 = tmp_tmp_assign_source_1_cbool_1 ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_has_names = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_assign_source_2;
        PyObject *tmp_value_value_1;
        CHECK_OBJECT(par_rename_map);
        tmp_value_value_1 = par_rename_map;
        tmp_res = CHECK_IF_TRUE(tmp_value_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooobb";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        var_has_rename_pairs = tmp_assign_source_2;
    }
    {
        bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        bool tmp_and_left_value_1;
        bool tmp_and_right_value_1;
        assert(var_has_names != NUITKA_BOOL_UNASSIGNED);
        tmp_and_left_value_1 = var_has_names == NUITKA_BOOL_TRUE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 != false ? 1 : 0;
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        assert(var_has_rename_pairs != NUITKA_BOOL_UNASSIGNED);
        tmp_and_right_value_1 = var_has_rename_pairs == NUITKA_BOOL_TRUE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
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
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[31];
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooobb";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_inplace);
        tmp_args_element_value_1 = par_inplace;
        frame_18b1638aa6b0b3aaa862af0f3ca2caeb->m_frame.f_lineno = 134;
        tmp_kw_call_dict_value_0_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;
            type_description_1 = "oooobb";
            goto frame_exception_exit_1;
        }
        frame_18b1638aa6b0b3aaa862af0f3ca2caeb->m_frame.f_lineno = 131;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_make_exception_arg_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(unicode_builtin_format, args, kw_values, mod_consts[32]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooobb";
            goto frame_exception_exit_1;
        }
        frame_18b1638aa6b0b3aaa862af0f3ca2caeb->m_frame.f_lineno = 131;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_RuntimeError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 131;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooobb";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        int tmp_and_left_truth_2;
        bool tmp_and_left_value_2;
        bool tmp_and_right_value_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_operand_value_2;
        assert(var_has_names != NUITKA_BOOL_UNASSIGNED);
        tmp_operand_value_1 = (var_has_names == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
        tmp_and_left_value_2 = (tmp_res == 0) ? true : false;
        tmp_and_left_truth_2 = tmp_and_left_value_2 != false ? 1 : 0;
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        assert(var_has_rename_pairs != NUITKA_BOOL_UNASSIGNED);
        tmp_operand_value_2 = (var_has_rename_pairs == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_and_right_value_2 = (tmp_res == 0) ? true : false;
        tmp_condition_result_2 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_condition_result_2 = tmp_and_left_value_2;
        and_end_2:;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooobb";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tensor);
        tmp_args_element_value_2 = par_tensor;
        CHECK_OBJECT(par_names);
        tmp_args_element_value_3 = par_names;
        CHECK_OBJECT(par_inplace);
        tmp_args_element_value_4 = par_inplace;
        frame_18b1638aa6b0b3aaa862af0f3ca2caeb->m_frame.f_lineno = 138;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "oooobb";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        assert(var_has_names != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_3 = var_has_names == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooobb";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tensor);
        tmp_args_element_value_5 = par_tensor;
        CHECK_OBJECT(par_names);
        tmp_args_element_value_6 = par_names;
        CHECK_OBJECT(par_inplace);
        tmp_args_element_value_7 = par_inplace;
        frame_18b1638aa6b0b3aaa862af0f3ca2caeb->m_frame.f_lineno = 141;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "oooobb";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooobb";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_tensor);
        tmp_args_element_value_8 = par_tensor;
        CHECK_OBJECT(par_rename_map);
        tmp_args_element_value_9 = par_rename_map;
        CHECK_OBJECT(par_inplace);
        tmp_args_element_value_10 = par_inplace;
        frame_18b1638aa6b0b3aaa862af0f3ca2caeb->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooobb";
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
        exception_tb = MAKE_TRACEBACK(frame_18b1638aa6b0b3aaa862af0f3ca2caeb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18b1638aa6b0b3aaa862af0f3ca2caeb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18b1638aa6b0b3aaa862af0f3ca2caeb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18b1638aa6b0b3aaa862af0f3ca2caeb,
        type_description_1,
        par_tensor,
        par_names,
        par_rename_map,
        par_inplace,
        (int)var_has_names,
        (int)var_has_rename_pairs
    );


    // Release cached frame if used for exception.
    if (frame_18b1638aa6b0b3aaa862af0f3ca2caeb == cache_frame_18b1638aa6b0b3aaa862af0f3ca2caeb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_18b1638aa6b0b3aaa862af0f3ca2caeb);
        cache_frame_18b1638aa6b0b3aaa862af0f3ca2caeb = NULL;
    }

    assertFrameObject(frame_18b1638aa6b0b3aaa862af0f3ca2caeb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    assert(var_has_names != NUITKA_BOOL_UNASSIGNED);
    var_has_names = NUITKA_BOOL_UNASSIGNED;
    assert(var_has_rename_pairs != NUITKA_BOOL_UNASSIGNED);
    var_has_rename_pairs = NUITKA_BOOL_UNASSIGNED;
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

    var_has_names = NUITKA_BOOL_UNASSIGNED;
    var_has_rename_pairs = NUITKA_BOOL_UNASSIGNED;
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
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);
    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    CHECK_OBJECT(par_rename_map);
    Py_DECREF(par_rename_map);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_tensor);
    Py_DECREF(par_tensor);
    CHECK_OBJECT(par_names);
    Py_DECREF(par_names);
    CHECK_OBJECT(par_rename_map);
    Py_DECREF(par_rename_map);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__10_update_names_with_list() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_namedtensor_internals$$$function__10_update_names_with_list,
        mod_consts[33],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1590531c474b4c8c4cc0337040eab2dc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_namedtensor_internals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__11_update_names_with_mapping() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_namedtensor_internals$$$function__11_update_names_with_mapping,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_dd5807acefa24c986d7b4899c38485a6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_namedtensor_internals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__12_update_names() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_namedtensor_internals$$$function__12_update_names,
        mod_consts[46],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_18b1638aa6b0b3aaa862af0f3ca2caeb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_namedtensor_internals,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__1_check_serializing_named_tensor() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_namedtensor_internals$$$function__1_check_serializing_named_tensor,
        mod_consts[44],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_41c0ac52a55ff561bb964b1e3bf44a9c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_namedtensor_internals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__2_build_dim_map() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_namedtensor_internals$$$function__2_build_dim_map,
        mod_consts[25],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6955a01f34fa979116a784156a848b0e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_namedtensor_internals,
        mod_consts[5],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__3_unzip_namedshape() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_namedtensor_internals$$$function__3_unzip_namedshape,
        mod_consts[45],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_396528996d7df984c979caa42ce287df,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_namedtensor_internals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__4_namer_api_name() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_namedtensor_internals$$$function__4_namer_api_name,
        mod_consts[24],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_65bdedac1f41a35b5bb5aacc4980d182,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_namedtensor_internals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__5_is_ellipsis() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_namedtensor_internals$$$function__5_is_ellipsis,
        mod_consts[14],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4c9cd62dc54e27ae9e16009b9e77b913,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_namedtensor_internals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__6_single_ellipsis_index() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_namedtensor_internals$$$function__6_single_ellipsis_index,
        mod_consts[19],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_489da3ccc7c9304837105a68edf0a222,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_namedtensor_internals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__7_expand_single_ellipsis() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_namedtensor_internals$$$function__7_expand_single_ellipsis,
        mod_consts[17],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_81abf1889ec27ed9d6c1b2ecc0bd5f73,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_namedtensor_internals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__8_replace_ellipsis_by_position() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_namedtensor_internals$$$function__8_replace_ellipsis_by_position,
        mod_consts[20],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_07e03537a555a1dbf3ee677bd53ee443,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_namedtensor_internals,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$_namedtensor_internals$$$function__9_resolve_ellipsis() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$_namedtensor_internals$$$function__9_resolve_ellipsis,
        mod_consts[23],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2f0038220036424de2c761223f26764c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$_namedtensor_internals,
        mod_consts[21],
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

function_impl_code functable_torch$_namedtensor_internals[] = {
    impl_torch$_namedtensor_internals$$$function__1_check_serializing_named_tensor,
    impl_torch$_namedtensor_internals$$$function__2_build_dim_map,
    impl_torch$_namedtensor_internals$$$function__3_unzip_namedshape,
    impl_torch$_namedtensor_internals$$$function__4_namer_api_name,
    impl_torch$_namedtensor_internals$$$function__5_is_ellipsis,
    impl_torch$_namedtensor_internals$$$function__6_single_ellipsis_index,
    impl_torch$_namedtensor_internals$$$function__7_expand_single_ellipsis,
    impl_torch$_namedtensor_internals$$$function__8_replace_ellipsis_by_position,
    impl_torch$_namedtensor_internals$$$function__9_resolve_ellipsis,
    impl_torch$_namedtensor_internals$$$function__10_update_names_with_list,
    impl_torch$_namedtensor_internals$$$function__11_update_names_with_mapping,
    impl_torch$_namedtensor_internals$$$function__12_update_names,
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

    function_impl_code *current = functable_torch$_namedtensor_internals;
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

    if (offset > sizeof(functable_torch$_namedtensor_internals) || offset < 0) {
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
        functable_torch$_namedtensor_internals[offset],
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
        module_torch$_namedtensor_internals,
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
PyObject *modulecode_torch$_namedtensor_internals(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch._namedtensor_internals");

    // Store the module for future use.
    module_torch$_namedtensor_internals = module;

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
        PRINT_STRING("torch._namedtensor_internals: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch._namedtensor_internals: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch._namedtensor_internals: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$_namedtensor_internals\n");

    moduledict_torch$_namedtensor_internals = MODULE_DICT(module_torch$_namedtensor_internals);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$_namedtensor_internals,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$_namedtensor_internals,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[63]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$_namedtensor_internals,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$_namedtensor_internals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$_namedtensor_internals,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$_namedtensor_internals);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$_namedtensor_internals);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_25a213dacbe79780331809884a9fb17b;
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
        UPDATE_STRING_DICT0(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_2);
    }
    frame_25a213dacbe79780331809884a9fb17b = MAKE_MODULE_FRAME(codeobj_25a213dacbe79780331809884a9fb17b, module_torch$_namedtensor_internals);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_25a213dacbe79780331809884a9fb17b);
    assert(Py_REFCNT(frame_25a213dacbe79780331809884a9fb17b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[39], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[40], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[42];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$_namedtensor_internals;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[43];
        tmp_level_value_1 = mod_consts[16];
        frame_25a213dacbe79780331809884a9fb17b->m_frame.f_lineno = 1;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_4 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$_namedtensor_internals,
                mod_consts[2],
                mod_consts[16]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[2]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_4);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_25a213dacbe79780331809884a9fb17b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_25a213dacbe79780331809884a9fb17b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_25a213dacbe79780331809884a9fb17b, exception_lineno);
    }



    assertFrameObject(frame_25a213dacbe79780331809884a9fb17b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_5;


        tmp_assign_source_5 = MAKE_FUNCTION_torch$_namedtensor_internals$$$function__1_check_serializing_named_tensor();

        UPDATE_STRING_DICT1(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;


        tmp_assign_source_6 = MAKE_FUNCTION_torch$_namedtensor_internals$$$function__2_build_dim_map();

        UPDATE_STRING_DICT1(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;


        tmp_assign_source_7 = MAKE_FUNCTION_torch$_namedtensor_internals$$$function__3_unzip_namedshape();

        UPDATE_STRING_DICT1(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_torch$_namedtensor_internals$$$function__4_namer_api_name();

        UPDATE_STRING_DICT1(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_torch$_namedtensor_internals$$$function__5_is_ellipsis();

        UPDATE_STRING_DICT1(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_torch$_namedtensor_internals$$$function__6_single_ellipsis_index();

        UPDATE_STRING_DICT1(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_torch$_namedtensor_internals$$$function__7_expand_single_ellipsis();

        UPDATE_STRING_DICT1(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;


        tmp_assign_source_12 = MAKE_FUNCTION_torch$_namedtensor_internals$$$function__8_replace_ellipsis_by_position();

        UPDATE_STRING_DICT1(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;


        tmp_assign_source_13 = MAKE_FUNCTION_torch$_namedtensor_internals$$$function__9_resolve_ellipsis();

        UPDATE_STRING_DICT1(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;


        tmp_assign_source_14 = MAKE_FUNCTION_torch$_namedtensor_internals$$$function__10_update_names_with_list();

        UPDATE_STRING_DICT1(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;


        tmp_assign_source_15 = MAKE_FUNCTION_torch$_namedtensor_internals$$$function__11_update_names_with_mapping();

        UPDATE_STRING_DICT1(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;


        tmp_assign_source_16 = MAKE_FUNCTION_torch$_namedtensor_internals$$$function__12_update_names();

        UPDATE_STRING_DICT1(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_16);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch._namedtensor_internals", false);

    Py_INCREF(module_torch$_namedtensor_internals);
    return module_torch$_namedtensor_internals;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$_namedtensor_internals, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$_namedtensor_internals", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
