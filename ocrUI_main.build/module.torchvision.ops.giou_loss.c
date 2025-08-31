/* Generated code for Python module 'torchvision.ops.giou_loss'
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

/* The "module_torchvision$ops$giou_loss" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torchvision$ops$giou_loss;
PyDictObject *moduledict_torchvision$ops$giou_loss;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[33];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[33];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torchvision.ops.giou_loss"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 33; i++) {
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
void checkModuleConstants_torchvision$ops$giou_loss(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 33; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8b5302b2c061fdcd452006ebe55b66d6;
static PyCodeObject *codeobj_e89bbef53769ba3bdc316c180505b6df;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[29]); CHECK_OBJECT(module_filename_obj);
    codeobj_8b5302b2c061fdcd452006ebe55b66d6 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[30], mod_consts[30], NULL, NULL, 0, 0, 0);
    codeobj_e89bbef53769ba3bdc316c180505b6df = MAKE_CODE_OBJECT(module_filename_obj, 4, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[31], NULL, 4, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_FUNCTION_torchvision$ops$giou_loss$$$function__1_generalized_box_iou_loss(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_torchvision$ops$giou_loss$$$function__1_generalized_box_iou_loss(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_boxes1 = python_pars[0];
    PyObject *par_boxes2 = python_pars[1];
    PyObject *par_reduction = python_pars[2];
    PyObject *par_eps = python_pars[3];
    PyObject *var_x1 = NULL;
    PyObject *var_y1 = NULL;
    PyObject *var_x2 = NULL;
    PyObject *var_y2 = NULL;
    PyObject *var_x1g = NULL;
    PyObject *var_y1g = NULL;
    PyObject *var_x2g = NULL;
    PyObject *var_y2g = NULL;
    PyObject *var_xkis1 = NULL;
    PyObject *var_ykis1 = NULL;
    PyObject *var_xkis2 = NULL;
    PyObject *var_ykis2 = NULL;
    PyObject *var_intsctk = NULL;
    PyObject *var_mask = NULL;
    PyObject *var_unionk = NULL;
    PyObject *var_iouk = NULL;
    PyObject *var_xc1 = NULL;
    PyObject *var_yc1 = NULL;
    PyObject *var_xc2 = NULL;
    PyObject *var_yc2 = NULL;
    PyObject *var_area_c = NULL;
    PyObject *var_miouk = NULL;
    PyObject *var_loss = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    struct Nuitka_FrameObject *frame_e89bbef53769ba3bdc316c180505b6df;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e89bbef53769ba3bdc316c180505b6df = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e89bbef53769ba3bdc316c180505b6df)) {
        Py_XDECREF(cache_frame_e89bbef53769ba3bdc316c180505b6df);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e89bbef53769ba3bdc316c180505b6df == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e89bbef53769ba3bdc316c180505b6df = MAKE_FUNCTION_FRAME(codeobj_e89bbef53769ba3bdc316c180505b6df, module_torchvision$ops$giou_loss, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e89bbef53769ba3bdc316c180505b6df->m_type_description == NULL);
    frame_e89bbef53769ba3bdc316c180505b6df = cache_frame_e89bbef53769ba3bdc316c180505b6df;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e89bbef53769ba3bdc316c180505b6df);
    assert(Py_REFCNT(frame_e89bbef53769ba3bdc316c180505b6df) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_boxes1);
        tmp_expression_value_1 = par_boxes1;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 37;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[1], 0), mod_consts[2]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "ooooooooooooooooooooooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 37;
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 37;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 37;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_5 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 37;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_5;
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

                    type_description_1 = "ooooooooooooooooooooooooooo";
                    exception_lineno = 37;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[3];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 37;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;
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
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_x1 == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_x1 = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_y1 == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_y1 = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_x2 == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_x2 = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_4;
        assert(var_y2 == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_y2 = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_boxes2);
        tmp_expression_value_2 = par_boxes2;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 38;
        tmp_iter_arg_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[1], 0), mod_consts[2]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_10 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        Py_DECREF(tmp_iter_arg_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_2__source_iter == NULL);
        tmp_tuple_unpack_2__source_iter = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_5, 0, 4);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 38;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_1 == NULL);
        tmp_tuple_unpack_2__element_1 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_6, 1, 4);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 38;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_2 == NULL);
        tmp_tuple_unpack_2__element_2 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_13 = UNPACK_NEXT(tmp_unpack_7, 2, 4);
        if (tmp_assign_source_13 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 38;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_3 == NULL);
        tmp_tuple_unpack_2__element_3 = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_14 = UNPACK_NEXT(tmp_unpack_8, 3, 4);
        if (tmp_assign_source_14 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 38;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_2__element_4 == NULL);
        tmp_tuple_unpack_2__element_4 = tmp_assign_source_14;
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

                    type_description_1 = "ooooooooooooooooooooooooooo";
                    exception_lineno = 38;
                    goto try_except_handler_5;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[3];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooooo";
            exception_lineno = 38;
            goto try_except_handler_5;
        }
    }
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_4;
    // End of try:
    try_end_3:;
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

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_15 = tmp_tuple_unpack_2__element_1;
        assert(var_x1g == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_x1g = tmp_assign_source_15;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_16;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_16 = tmp_tuple_unpack_2__element_2;
        assert(var_y1g == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_y1g = tmp_assign_source_16;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_17 = tmp_tuple_unpack_2__element_3;
        assert(var_x2g == NULL);
        Py_INCREF(tmp_assign_source_17);
        var_x2g = tmp_assign_source_17;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
        tmp_assign_source_18 = tmp_tuple_unpack_2__element_4;
        assert(var_y2g == NULL);
        Py_INCREF(tmp_assign_source_18);
        var_y2g = tmp_assign_source_18;
    }
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x1);
        tmp_args_element_value_1 = var_x1;
        CHECK_OBJECT(var_x1g);
        tmp_args_element_value_2 = var_x1g;
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 41;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_19 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[5],
                call_args
            );
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_xkis1 == NULL);
        var_xkis1 = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_y1);
        tmp_args_element_value_3 = var_y1;
        CHECK_OBJECT(var_y1g);
        tmp_args_element_value_4 = var_y1g;
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 42;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_20 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[5],
                call_args
            );
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ykis1 == NULL);
        var_ykis1 = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x2);
        tmp_args_element_value_5 = var_x2;
        CHECK_OBJECT(var_x2g);
        tmp_args_element_value_6 = var_x2g;
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 43;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_21 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_xkis2 == NULL);
        var_xkis2 = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_y2);
        tmp_args_element_value_7 = var_y2;
        CHECK_OBJECT(var_y2g);
        tmp_args_element_value_8 = var_y2g;
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 44;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assign_source_22 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ykis2 == NULL);
        var_ykis2 = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_args_element_value_9;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x1);
        tmp_args_element_value_9 = var_x1;
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 46;
        tmp_assign_source_23 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_5, mod_consts[7], tmp_args_element_value_9);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_intsctk == NULL);
        var_intsctk = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_ykis2);
        tmp_cmp_expr_left_1 = var_ykis2;
        CHECK_OBJECT(var_ykis1);
        tmp_cmp_expr_right_1 = var_ykis1;
        tmp_bitand_expr_left_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xkis2);
        tmp_cmp_expr_left_2 = var_xkis2;
        CHECK_OBJECT(var_xkis1);
        tmp_cmp_expr_right_2 = var_xkis1;
        tmp_bitand_expr_right_1 = RICH_COMPARE_GT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_bitand_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_1);

            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        Py_DECREF(tmp_bitand_expr_right_1);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mask == NULL);
        var_mask = tmp_assign_source_24;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(var_xkis2);
        tmp_expression_value_3 = var_xkis2;
        CHECK_OBJECT(var_mask);
        tmp_subscript_value_1 = var_mask;
        tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_xkis1);
        tmp_expression_value_4 = var_xkis1;
        CHECK_OBJECT(var_mask);
        tmp_subscript_value_2 = var_mask;
        tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ykis2);
        tmp_expression_value_5 = var_ykis2;
        CHECK_OBJECT(var_mask);
        tmp_subscript_value_3 = var_mask;
        tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ykis1);
        tmp_expression_value_6 = var_ykis1;
        CHECK_OBJECT(var_mask);
        tmp_subscript_value_4 = var_mask;
        tmp_sub_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_intsctk);
        tmp_ass_subscribed_1 = var_intsctk;
        CHECK_OBJECT(var_mask);
        tmp_ass_subscript_1 = var_mask;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        PyObject *tmp_sub_expr_left_7;
        PyObject *tmp_sub_expr_right_7;
        CHECK_OBJECT(var_x2);
        tmp_sub_expr_left_4 = var_x2;
        CHECK_OBJECT(var_x1);
        tmp_sub_expr_right_4 = var_x1;
        tmp_mult_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_y2);
        tmp_sub_expr_left_5 = var_y2;
        CHECK_OBJECT(var_y1);
        tmp_sub_expr_right_5 = var_y1;
        tmp_mult_expr_right_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x2g);
        tmp_sub_expr_left_6 = var_x2g;
        CHECK_OBJECT(var_x1g);
        tmp_sub_expr_right_6 = var_x1g;
        tmp_mult_expr_left_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        if (tmp_mult_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_y2g);
        tmp_sub_expr_left_7 = var_y2g;
        CHECK_OBJECT(var_y1g);
        tmp_sub_expr_right_7 = var_y1g;
        tmp_mult_expr_right_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_7, tmp_sub_expr_right_7);
        if (tmp_mult_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_mult_expr_left_3);

            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        Py_DECREF(tmp_mult_expr_right_3);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_intsctk);
        tmp_sub_expr_right_3 = var_intsctk;
        tmp_assign_source_25 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_unionk == NULL);
        var_unionk = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        CHECK_OBJECT(var_intsctk);
        tmp_truediv_expr_left_1 = var_intsctk;
        CHECK_OBJECT(var_unionk);
        tmp_add_expr_left_2 = var_unionk;
        CHECK_OBJECT(par_eps);
        tmp_add_expr_right_2 = par_eps;
        tmp_truediv_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_26 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_iouk == NULL);
        var_iouk = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x1);
        tmp_args_element_value_10 = var_x1;
        CHECK_OBJECT(var_x1g);
        tmp_args_element_value_11 = var_x1g;
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assign_source_27 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_6,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_xc1 == NULL);
        var_xc1 = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_y1);
        tmp_args_element_value_12 = var_y1;
        CHECK_OBJECT(var_y1g);
        tmp_args_element_value_13 = var_y1g;
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_assign_source_28 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_7,
                mod_consts[6],
                call_args
            );
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_yc1 == NULL);
        var_yc1 = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        tmp_called_instance_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_8 == NULL)) {
            tmp_called_instance_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_x2);
        tmp_args_element_value_14 = var_x2;
        CHECK_OBJECT(var_x2g);
        tmp_args_element_value_15 = var_x2g;
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_assign_source_29 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_8,
                mod_consts[5],
                call_args
            );
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_xc2 == NULL);
        var_xc2 = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_y2);
        tmp_args_element_value_16 = var_y2;
        CHECK_OBJECT(var_y2g);
        tmp_args_element_value_17 = var_y2g;
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 56;
        {
            PyObject *call_args[] = {tmp_args_element_value_16, tmp_args_element_value_17};
            tmp_assign_source_30 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_9,
                mod_consts[5],
                call_args
            );
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_yc2 == NULL);
        var_yc2 = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_sub_expr_left_8;
        PyObject *tmp_sub_expr_right_8;
        PyObject *tmp_sub_expr_left_9;
        PyObject *tmp_sub_expr_right_9;
        CHECK_OBJECT(var_xc2);
        tmp_sub_expr_left_8 = var_xc2;
        CHECK_OBJECT(var_xc1);
        tmp_sub_expr_right_8 = var_xc1;
        tmp_mult_expr_left_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_8, tmp_sub_expr_right_8);
        if (tmp_mult_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_yc2);
        tmp_sub_expr_left_9 = var_yc2;
        CHECK_OBJECT(var_yc1);
        tmp_sub_expr_right_9 = var_yc1;
        tmp_mult_expr_right_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_9, tmp_sub_expr_right_9);
        if (tmp_mult_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_4);

            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_31 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_left_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_area_c == NULL);
        var_area_c = tmp_assign_source_31;
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_sub_expr_left_10;
        PyObject *tmp_sub_expr_right_10;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_sub_expr_left_11;
        PyObject *tmp_sub_expr_right_11;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        CHECK_OBJECT(var_iouk);
        tmp_sub_expr_left_10 = var_iouk;
        CHECK_OBJECT(var_area_c);
        tmp_sub_expr_left_11 = var_area_c;
        CHECK_OBJECT(var_unionk);
        tmp_sub_expr_right_11 = var_unionk;
        tmp_truediv_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_11, tmp_sub_expr_right_11);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_area_c);
        tmp_add_expr_left_3 = var_area_c;
        CHECK_OBJECT(par_eps);
        tmp_add_expr_right_3 = par_eps;
        tmp_truediv_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_truediv_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_2);

            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_sub_expr_right_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        Py_DECREF(tmp_truediv_expr_right_2);
        if (tmp_sub_expr_right_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_32 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_10, tmp_sub_expr_right_10);
        Py_DECREF(tmp_sub_expr_right_10);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_miouk == NULL);
        var_miouk = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_sub_expr_left_12;
        PyObject *tmp_sub_expr_right_12;
        tmp_sub_expr_left_12 = mod_consts[8];
        CHECK_OBJECT(var_miouk);
        tmp_sub_expr_right_12 = var_miouk;
        tmp_assign_source_33 = BINARY_OPERATION_SUB_OBJECT_LONG_OBJECT(tmp_sub_expr_left_12, tmp_sub_expr_right_12);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_loss == NULL);
        var_loss = tmp_assign_source_33;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_reduction);
        tmp_cmp_expr_left_3 = par_reduction;
        tmp_cmp_expr_right_3 = mod_consts[9];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;
            type_description_1 = "ooooooooooooooooooooooooooo";
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
        PyObject *tmp_assign_source_34;
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_called_instance_12;
        CHECK_OBJECT(var_loss);
        tmp_called_instance_10 = var_loss;
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 64;
        tmp_cmp_expr_left_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[10]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = mod_consts[11];
        tmp_condition_result_2 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_loss);
        tmp_called_instance_11 = var_loss;
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 64;
        tmp_assign_source_34 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[9]);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_mult_expr_left_5 = mod_consts[12];
        CHECK_OBJECT(var_loss);
        tmp_called_instance_12 = var_loss;
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 64;
        tmp_mult_expr_right_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[13]);
        if (tmp_mult_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_34 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_right_5);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        {
            PyObject *old = var_loss;
            assert(old != NULL);
            var_loss = tmp_assign_source_34;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_reduction);
        tmp_cmp_expr_left_5 = par_reduction;
        tmp_cmp_expr_right_5 = mod_consts[13];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_instance_13;
        CHECK_OBJECT(var_loss);
        tmp_called_instance_13 = var_loss;
        frame_e89bbef53769ba3bdc316c180505b6df->m_frame.f_lineno = 66;
        tmp_assign_source_35 = CALL_METHOD_NO_ARGS(tmp_called_instance_13, mod_consts[13]);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_loss;
            assert(old != NULL);
            var_loss = tmp_assign_source_35;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e89bbef53769ba3bdc316c180505b6df, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e89bbef53769ba3bdc316c180505b6df->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e89bbef53769ba3bdc316c180505b6df, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e89bbef53769ba3bdc316c180505b6df,
        type_description_1,
        par_boxes1,
        par_boxes2,
        par_reduction,
        par_eps,
        var_x1,
        var_y1,
        var_x2,
        var_y2,
        var_x1g,
        var_y1g,
        var_x2g,
        var_y2g,
        var_xkis1,
        var_ykis1,
        var_xkis2,
        var_ykis2,
        var_intsctk,
        var_mask,
        var_unionk,
        var_iouk,
        var_xc1,
        var_yc1,
        var_xc2,
        var_yc2,
        var_area_c,
        var_miouk,
        var_loss
    );


    // Release cached frame if used for exception.
    if (frame_e89bbef53769ba3bdc316c180505b6df == cache_frame_e89bbef53769ba3bdc316c180505b6df) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e89bbef53769ba3bdc316c180505b6df);
        cache_frame_e89bbef53769ba3bdc316c180505b6df = NULL;
    }

    assertFrameObject(frame_e89bbef53769ba3bdc316c180505b6df);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_loss);
    tmp_return_value = var_loss;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_x1);
    Py_DECREF(var_x1);
    var_x1 = NULL;
    CHECK_OBJECT(var_y1);
    Py_DECREF(var_y1);
    var_y1 = NULL;
    CHECK_OBJECT(var_x2);
    Py_DECREF(var_x2);
    var_x2 = NULL;
    CHECK_OBJECT(var_y2);
    Py_DECREF(var_y2);
    var_y2 = NULL;
    CHECK_OBJECT(var_x1g);
    Py_DECREF(var_x1g);
    var_x1g = NULL;
    CHECK_OBJECT(var_y1g);
    Py_DECREF(var_y1g);
    var_y1g = NULL;
    CHECK_OBJECT(var_x2g);
    Py_DECREF(var_x2g);
    var_x2g = NULL;
    CHECK_OBJECT(var_y2g);
    Py_DECREF(var_y2g);
    var_y2g = NULL;
    CHECK_OBJECT(var_xkis1);
    Py_DECREF(var_xkis1);
    var_xkis1 = NULL;
    CHECK_OBJECT(var_ykis1);
    Py_DECREF(var_ykis1);
    var_ykis1 = NULL;
    CHECK_OBJECT(var_xkis2);
    Py_DECREF(var_xkis2);
    var_xkis2 = NULL;
    CHECK_OBJECT(var_ykis2);
    Py_DECREF(var_ykis2);
    var_ykis2 = NULL;
    CHECK_OBJECT(var_intsctk);
    Py_DECREF(var_intsctk);
    var_intsctk = NULL;
    CHECK_OBJECT(var_mask);
    Py_DECREF(var_mask);
    var_mask = NULL;
    CHECK_OBJECT(var_unionk);
    Py_DECREF(var_unionk);
    var_unionk = NULL;
    CHECK_OBJECT(var_iouk);
    Py_DECREF(var_iouk);
    var_iouk = NULL;
    CHECK_OBJECT(var_xc1);
    Py_DECREF(var_xc1);
    var_xc1 = NULL;
    CHECK_OBJECT(var_yc1);
    Py_DECREF(var_yc1);
    var_yc1 = NULL;
    CHECK_OBJECT(var_xc2);
    Py_DECREF(var_xc2);
    var_xc2 = NULL;
    CHECK_OBJECT(var_yc2);
    Py_DECREF(var_yc2);
    var_yc2 = NULL;
    CHECK_OBJECT(var_area_c);
    Py_DECREF(var_area_c);
    var_area_c = NULL;
    CHECK_OBJECT(var_miouk);
    Py_DECREF(var_miouk);
    var_miouk = NULL;
    CHECK_OBJECT(var_loss);
    Py_DECREF(var_loss);
    var_loss = NULL;
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

    Py_XDECREF(var_x1);
    var_x1 = NULL;
    Py_XDECREF(var_y1);
    var_y1 = NULL;
    Py_XDECREF(var_x2);
    var_x2 = NULL;
    Py_XDECREF(var_y2);
    var_y2 = NULL;
    Py_XDECREF(var_x1g);
    var_x1g = NULL;
    Py_XDECREF(var_y1g);
    var_y1g = NULL;
    Py_XDECREF(var_x2g);
    var_x2g = NULL;
    Py_XDECREF(var_y2g);
    var_y2g = NULL;
    Py_XDECREF(var_xkis1);
    var_xkis1 = NULL;
    Py_XDECREF(var_ykis1);
    var_ykis1 = NULL;
    Py_XDECREF(var_xkis2);
    var_xkis2 = NULL;
    Py_XDECREF(var_ykis2);
    var_ykis2 = NULL;
    Py_XDECREF(var_intsctk);
    var_intsctk = NULL;
    Py_XDECREF(var_mask);
    var_mask = NULL;
    Py_XDECREF(var_unionk);
    var_unionk = NULL;
    Py_XDECREF(var_iouk);
    var_iouk = NULL;
    Py_XDECREF(var_xc1);
    var_xc1 = NULL;
    Py_XDECREF(var_yc1);
    var_yc1 = NULL;
    Py_XDECREF(var_xc2);
    var_xc2 = NULL;
    Py_XDECREF(var_yc2);
    var_yc2 = NULL;
    Py_XDECREF(var_area_c);
    var_area_c = NULL;
    Py_XDECREF(var_miouk);
    var_miouk = NULL;
    Py_XDECREF(var_loss);
    var_loss = NULL;
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
    CHECK_OBJECT(par_boxes1);
    Py_DECREF(par_boxes1);
    CHECK_OBJECT(par_boxes2);
    Py_DECREF(par_boxes2);
    CHECK_OBJECT(par_reduction);
    Py_DECREF(par_reduction);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_boxes1);
    Py_DECREF(par_boxes1);
    CHECK_OBJECT(par_boxes2);
    Py_DECREF(par_boxes2);
    CHECK_OBJECT(par_reduction);
    Py_DECREF(par_reduction);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torchvision$ops$giou_loss$$$function__1_generalized_box_iou_loss(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$ops$giou_loss$$$function__1_generalized_box_iou_loss,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e89bbef53769ba3bdc316c180505b6df,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$ops$giou_loss,
        mod_consts[14],
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

function_impl_code functable_torchvision$ops$giou_loss[] = {
    impl_torchvision$ops$giou_loss$$$function__1_generalized_box_iou_loss,
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

    function_impl_code *current = functable_torchvision$ops$giou_loss;
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

    if (offset > sizeof(functable_torchvision$ops$giou_loss) || offset < 0) {
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
        functable_torchvision$ops$giou_loss[offset],
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
        module_torchvision$ops$giou_loss,
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
PyObject *modulecode_torchvision$ops$giou_loss(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torchvision.ops.giou_loss");

    // Store the module for future use.
    module_torchvision$ops$giou_loss = module;

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
        PRINT_STRING("torchvision.ops.giou_loss: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.ops.giou_loss: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.ops.giou_loss: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorchvision$ops$giou_loss\n");

    moduledict_torchvision$ops$giou_loss = MODULE_DICT(module_torchvision$ops$giou_loss);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torchvision$ops$giou_loss,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torchvision$ops$giou_loss,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[32]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torchvision$ops$giou_loss,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$ops$giou_loss,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$ops$giou_loss,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torchvision$ops$giou_loss);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torchvision$ops$giou_loss);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_8b5302b2c061fdcd452006ebe55b66d6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_2);
    }
    frame_8b5302b2c061fdcd452006ebe55b66d6 = MAKE_MODULE_FRAME(codeobj_8b5302b2c061fdcd452006ebe55b66d6, module_torchvision$ops$giou_loss);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8b5302b2c061fdcd452006ebe55b66d6);
    assert(Py_REFCNT(frame_8b5302b2c061fdcd452006ebe55b66d6) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[18], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[17]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[17]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[19], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[4];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$ops$giou_loss;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[11];
        frame_8b5302b2c061fdcd452006ebe55b66d6->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[4], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        tmp_defaults_1 = mod_consts[21];
        tmp_dict_key_1 = mod_consts[22];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[4]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 5 );
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[24];
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[23]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 6;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[25];
            tmp_dict_value_1 = (PyObject *)&PyUnicode_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[26];
            tmp_dict_value_1 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[27];
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[4]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[4]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[23]);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 9;

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
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_5 = MAKE_FUNCTION_torchvision$ops$giou_loss$$$function__1_generalized_box_iou_loss(tmp_defaults_1, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_5);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b5302b2c061fdcd452006ebe55b66d6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b5302b2c061fdcd452006ebe55b66d6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b5302b2c061fdcd452006ebe55b66d6, exception_lineno);
    }



    assertFrameObject(frame_8b5302b2c061fdcd452006ebe55b66d6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torchvision.ops.giou_loss", false);

    Py_INCREF(module_torchvision$ops$giou_loss);
    return module_torchvision$ops$giou_loss;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$ops$giou_loss, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torchvision$ops$giou_loss", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
