/* Generated code for Python module 'dill._objects'
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

/* The "module_dill$_objects" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_dill$_objects;
PyDictObject *moduledict_dill$_objects;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[576];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[576];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("dill._objects"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 576; i++) {
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
void checkModuleConstants_dill$_objects(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 576; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_9a4153e2bf13fc153eff0fbaeed3d739;
static PyCodeObject *codeobj_2caf08ef5083e68e05b2297ac8310261;
static PyCodeObject *codeobj_b3655a8a833caeaa46367237797bd5e4;
static PyCodeObject *codeobj_055af561147bc398dec138c5e48a8193;
static PyCodeObject *codeobj_e04f3b5c6c6b4764ee4eff1db87487a8;
static PyCodeObject *codeobj_7e4f5f9d920a85aeb5511e957a8ceeb2;
static PyCodeObject *codeobj_8872c1ce7a47effc7ae3cbbe02059e29;
static PyCodeObject *codeobj_3f176cb9a0549fe112038db6b688af98;
static PyCodeObject *codeobj_467cc5a3b0bec5b4fc0f0677bab95ea1;
static PyCodeObject *codeobj_eee5efb989dc760dfe0c01594a9005e5;
static PyCodeObject *codeobj_98e7e125845a0eeb110d1ec81d242bb7;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[569]); CHECK_OBJECT(module_filename_obj);
    codeobj_9a4153e2bf13fc153eff0fbaeed3d739 = MAKE_CODE_OBJECT(module_filename_obj, 514, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], NULL, NULL, 0, 0, 0);
    codeobj_2caf08ef5083e68e05b2297ac8310261 = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[570], NULL, 1, 0, 0);
    codeobj_b3655a8a833caeaa46367237797bd5e4 = MAKE_CODE_OBJECT(module_filename_obj, 269, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[5], mod_consts[5], mod_consts[571], mod_consts[570], 1, 0, 0);
    codeobj_055af561147bc398dec138c5e48a8193 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[572], mod_consts[572], NULL, NULL, 0, 0, 0);
    codeobj_e04f3b5c6c6b4764ee4eff1db87487a8 = MAKE_CODE_OBJECT(module_filename_obj, 98, CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[573], NULL, 1, 0, 0);
    codeobj_7e4f5f9d920a85aeb5511e957a8ceeb2 = MAKE_CODE_OBJECT(module_filename_obj, 112, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[1], mod_consts[1], mod_consts[570], NULL, 1, 0, 0);
    codeobj_8872c1ce7a47effc7ae3cbbe02059e29 = MAKE_CODE_OBJECT(module_filename_obj, 113, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[95], mod_consts[95], mod_consts[574], NULL, 0, 0, 0);
    codeobj_3f176cb9a0549fe112038db6b688af98 = MAKE_CODE_OBJECT(module_filename_obj, 89, CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[573], NULL, 1, 0, 0);
    codeobj_467cc5a3b0bec5b4fc0f0677bab95ea1 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[573], NULL, 1, 0, 0);
    codeobj_eee5efb989dc760dfe0c01594a9005e5 = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_NOFREE, mod_consts[85], mod_consts[85], mod_consts[575], NULL, 0, 0, 0);
    codeobj_98e7e125845a0eeb110d1ec81d242bb7 = MAKE_CODE_OBJECT(module_filename_obj, 110, CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[575], NULL, 0, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_dill$_objects$$$function__4__function$$$genobj__1__function(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__1__method();


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__2___call__();


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__3__method();


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__4__function();


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__5__function2();


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__6_lambda();


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__6_lambda$$$function__1_lambda(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_dill$_objects$$$function__7_lambda();


// The module function definitions.
static PyObject *impl_dill$_objects$$$function__4__function(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_x = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_x;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_GENERATOR_dill$_objects$$$function__4__function$$$genobj__1__function(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct dill$_objects$$$function__4__function$$$genobj__1__function_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
};

static PyObject *dill$_objects$$$function__4__function$$$genobj__1__function_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct dill$_objects$$$function__4__function$$$genobj__1__function_locals *generator_heap = (struct dill$_objects$$$function__4__function$$$genobj__1__function_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->type_description_1 = NULL;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Actual generator function body.
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_7e4f5f9d920a85aeb5511e957a8ceeb2, module_dill$_objects, sizeof(void *));
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
        PyObject *tmp_expression_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        if (Nuitka_Cell_GET(generator->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&generator_heap->exception_type, &generator_heap->exception_value, mod_consts[0]);
            generator_heap->exception_tb = NULL;
            NORMALIZE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            CHAIN_EXCEPTION(generator_heap->exception_value);

            generator_heap->exception_lineno = 112;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(generator->m_closure[0]);
        Py_INCREF(tmp_expression_value_1);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 112;
            generator_heap->type_description_1 = "c";
            goto frame_exception_exit_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }

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
    goto function_exception_exit;

    frame_no_exception_1:;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_dill$_objects$$$function__4__function$$$genobj__1__function(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        dill$_objects$$$function__4__function$$$genobj__1__function_context,
        module_dill$_objects,
        mod_consts[1],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_7e4f5f9d920a85aeb5511e957a8ceeb2,
        closure,
        1,
        sizeof(struct dill$_objects$$$function__4__function$$$genobj__1__function_locals)
    );
}


static PyObject *impl_dill$_objects$$$function__5__function2(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_exc_info = NULL;
    PyObject *var_e = NULL;
    PyObject *var_er = NULL;
    PyObject *var_tb = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_8872c1ce7a47effc7ae3cbbe02059e29;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_8872c1ce7a47effc7ae3cbbe02059e29 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8872c1ce7a47effc7ae3cbbe02059e29)) {
        Py_XDECREF(cache_frame_8872c1ce7a47effc7ae3cbbe02059e29);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8872c1ce7a47effc7ae3cbbe02059e29 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8872c1ce7a47effc7ae3cbbe02059e29 = MAKE_FUNCTION_FRAME(codeobj_8872c1ce7a47effc7ae3cbbe02059e29, module_dill$_objects, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8872c1ce7a47effc7ae3cbbe02059e29->m_type_description == NULL);
    frame_8872c1ce7a47effc7ae3cbbe02059e29 = cache_frame_8872c1ce7a47effc7ae3cbbe02059e29;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8872c1ce7a47effc7ae3cbbe02059e29);
    assert(Py_REFCNT(frame_8872c1ce7a47effc7ae3cbbe02059e29) == 2);

    // Framed code:
    // Tried code:
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 114;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_8872c1ce7a47effc7ae3cbbe02059e29->m_frame) frame_8872c1ce7a47effc7ae3cbbe02059e29->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooo";
    goto try_except_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_8872c1ce7a47effc7ae3cbbe02059e29, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_8872c1ce7a47effc7ae3cbbe02059e29, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_import_name_from_1;
        tmp_import_name_from_1 = IMPORT_HARD_SYS();
        assert(!(tmp_import_name_from_1 == NULL));
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_1 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[2],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_1 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[2]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooo";
            goto try_except_handler_3;
        }
        assert(var_exc_info == NULL);
        var_exc_info = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        CHECK_OBJECT(var_exc_info);
        tmp_called_value_1 = var_exc_info;
        frame_8872c1ce7a47effc7ae3cbbe02059e29->m_frame.f_lineno = 117;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooo";
            goto try_except_handler_4;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooo";
            exception_lineno = 117;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
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
            exception_lineno = 117;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_5 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
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
            exception_lineno = 117;
            goto try_except_handler_5;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_5;
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
                    exception_lineno = 117;
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

            type_description_1 = "oooo";
            exception_lineno = 117;
            goto try_except_handler_5;
        }
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_5:;
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

    goto try_except_handler_4;
    // End of try:
    try_end_1:;
    goto try_end_2;
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

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_1;
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_e = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_7 = tmp_tuple_unpack_1__element_2;
        assert(var_er == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_er = tmp_assign_source_7;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_3;
        assert(var_tb == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_tb = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(var_er);
        tmp_tuple_element_1 = var_er;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_tb);
        tmp_tuple_element_1 = var_tb;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto try_return_handler_3;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_3:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto frame_return_exit_1;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8872c1ce7a47effc7ae3cbbe02059e29, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8872c1ce7a47effc7ae3cbbe02059e29->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8872c1ce7a47effc7ae3cbbe02059e29, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8872c1ce7a47effc7ae3cbbe02059e29,
        type_description_1,
        var_exc_info,
        var_e,
        var_er,
        var_tb
    );


    // Release cached frame if used for exception.
    if (frame_8872c1ce7a47effc7ae3cbbe02059e29 == cache_frame_8872c1ce7a47effc7ae3cbbe02059e29) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8872c1ce7a47effc7ae3cbbe02059e29);
        cache_frame_8872c1ce7a47effc7ae3cbbe02059e29 = NULL;
    }

    assertFrameObject(frame_8872c1ce7a47effc7ae3cbbe02059e29);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_exc_info);
    Py_DECREF(var_exc_info);
    var_exc_info = NULL;
    CHECK_OBJECT(var_e);
    Py_DECREF(var_e);
    var_e = NULL;
    CHECK_OBJECT(var_er);
    Py_DECREF(var_er);
    var_er = NULL;
    CHECK_OBJECT(var_tb);
    Py_DECREF(var_tb);
    var_tb = NULL;
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

    Py_XDECREF(var_exc_info);
    var_exc_info = NULL;
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


static PyObject *impl_dill$_objects$$$function__6_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_x = Nuitka_Cell_New1(python_pars[0]);
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_x;
        Py_INCREF(tmp_closure_1[0]);

        tmp_return_value = MAKE_FUNCTION_dill$_objects$$$function__6_lambda$$$function__1_lambda(tmp_closure_1);

        goto function_return_exit;
    }

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_dill$_objects$$$function__6_lambda$$$function__1_lambda(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_y = python_pars[0];
    struct Nuitka_FrameObject *frame_b3655a8a833caeaa46367237797bd5e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b3655a8a833caeaa46367237797bd5e4 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b3655a8a833caeaa46367237797bd5e4)) {
        Py_XDECREF(cache_frame_b3655a8a833caeaa46367237797bd5e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b3655a8a833caeaa46367237797bd5e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b3655a8a833caeaa46367237797bd5e4 = MAKE_FUNCTION_FRAME(codeobj_b3655a8a833caeaa46367237797bd5e4, module_dill$_objects, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b3655a8a833caeaa46367237797bd5e4->m_type_description == NULL);
    frame_b3655a8a833caeaa46367237797bd5e4 = cache_frame_b3655a8a833caeaa46367237797bd5e4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b3655a8a833caeaa46367237797bd5e4);
    assert(Py_REFCNT(frame_b3655a8a833caeaa46367237797bd5e4) == 2);

    // Framed code:
    if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

        FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[0]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 269;
        type_description_1 = "oc";
        goto frame_exception_exit_1;
    }

    tmp_return_value = Nuitka_Cell_GET(self->m_closure[0]);
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
        exception_tb = MAKE_TRACEBACK(frame_b3655a8a833caeaa46367237797bd5e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b3655a8a833caeaa46367237797bd5e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b3655a8a833caeaa46367237797bd5e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b3655a8a833caeaa46367237797bd5e4,
        type_description_1,
        par_y,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b3655a8a833caeaa46367237797bd5e4 == cache_frame_b3655a8a833caeaa46367237797bd5e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b3655a8a833caeaa46367237797bd5e4);
        cache_frame_b3655a8a833caeaa46367237797bd5e4 = NULL;
    }

    assertFrameObject(frame_b3655a8a833caeaa46367237797bd5e4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_y);
    Py_DECREF(par_y);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__1__method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[77],
#endif
        codeobj_3f176cb9a0549fe112038db6b688af98,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__2___call__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        mod_consts[81],
#endif
        codeobj_e04f3b5c6c6b4764ee4eff1db87487a8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__3__method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        mod_consts[90],
#endif
        codeobj_467cc5a3b0bec5b4fc0f0677bab95ea1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__4__function() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dill$_objects$$$function__4__function,
        mod_consts[1],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7e4f5f9d920a85aeb5511e957a8ceeb2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__5__function2() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dill$_objects$$$function__5__function2,
        mod_consts[95],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8872c1ce7a47effc7ae3cbbe02059e29,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__6_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dill$_objects$$$function__6_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2caf08ef5083e68e05b2297ac8310261,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__6_lambda$$$function__1_lambda(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_dill$_objects$$$function__6_lambda$$$function__1_lambda,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[6],
#endif
        codeobj_b3655a8a833caeaa46367237797bd5e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_dill$_objects$$$function__7_lambda() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        NULL,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9a4153e2bf13fc153eff0fbaeed3d739,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_dill$_objects,
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

function_impl_code functable_dill$_objects[] = {
    impl_dill$_objects$$$function__6_lambda$$$function__1_lambda,
    NULL,
    NULL,
    NULL,
    impl_dill$_objects$$$function__4__function,
    impl_dill$_objects$$$function__5__function2,
    impl_dill$_objects$$$function__6_lambda,
    NULL,
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

    function_impl_code *current = functable_dill$_objects;
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

    if (offset > sizeof(functable_dill$_objects) || offset < 0) {
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
        functable_dill$_objects[offset],
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
        module_dill$_objects,
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
PyObject *modulecode_dill$_objects(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("dill._objects");

    // Store the module for future use.
    module_dill$_objects = module;

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
        PRINT_STRING("dill._objects: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("dill._objects: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("dill._objects: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initdill$_objects\n");

    moduledict_dill$_objects = MODULE_DICT(module_dill$_objects);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_dill$_objects,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_dill$_objects,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[281]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_dill$_objects,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_dill$_objects,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_dill$_objects,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_dill$_objects);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_dill$_objects);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var___class__ = NULL;
    PyObject *tmp_assign_unpack_11__assign_source = NULL;
    PyObject *tmp_assign_unpack_12__assign_source = NULL;
    PyObject *tmp_assign_unpack_13__assign_source = NULL;
    PyObject *tmp_assign_unpack_14__assign_source = NULL;
    PyObject *tmp_assign_unpack_15__assign_source = NULL;
    PyObject *tmp_assign_unpack_16__assign_source = NULL;
    PyObject *tmp_assign_unpack_17__assign_source = NULL;
    PyObject *tmp_assign_unpack_19__assign_source = NULL;
    PyObject *tmp_assign_unpack_1__assign_source = NULL;
    PyObject *tmp_assign_unpack_20__assign_source = NULL;
    PyObject *tmp_assign_unpack_21__assign_source = NULL;
    PyObject *tmp_assign_unpack_22__assign_source = NULL;
    PyObject *tmp_assign_unpack_23__assign_source = NULL;
    PyObject *tmp_assign_unpack_24__assign_source = NULL;
    PyObject *tmp_assign_unpack_25__assign_source = NULL;
    PyObject *tmp_assign_unpack_26__assign_source = NULL;
    PyObject *tmp_assign_unpack_27__assign_source = NULL;
    PyObject *tmp_assign_unpack_29__assign_source = NULL;
    PyObject *tmp_assign_unpack_2__assign_source = NULL;
    PyObject *tmp_assign_unpack_30__assign_source = NULL;
    PyObject *tmp_assign_unpack_31__assign_source = NULL;
    PyObject *tmp_assign_unpack_32__assign_source = NULL;
    PyObject *tmp_assign_unpack_33__assign_source = NULL;
    PyObject *tmp_assign_unpack_3__assign_source = NULL;
    PyObject *tmp_assign_unpack_4__assign_source = NULL;
    PyObject *tmp_assign_unpack_5__assign_source = NULL;
    PyObject *tmp_assign_unpack_6__assign_source = NULL;
    PyObject *tmp_assign_unpack_8__assign_source = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__bases = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__metaclass = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_055af561147bc398dec138c5e48a8193;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_ExceptionStackItem exception_preserved_4;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    PyObject *locals_dill$_objects$$$class__1__class_88 = NULL;
    PyObject *tmp_dictset_value;
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
    PyObject *locals_dill$_objects$$$class__2__class2_97 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    PyObject *locals_dill$_objects$$$class__3__newclass_101 = NULL;
    struct Nuitka_FrameObject *frame_eee5efb989dc760dfe0c01594a9005e5_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
    PyObject *locals_dill$_objects$$$class__4__newclass2_110 = NULL;
    struct Nuitka_FrameObject *frame_98e7e125845a0eeb110d1ec81d242bb7_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_16;
    PyObject *exception_keeper_value_16;
    PyTracebackObject *exception_keeper_tb_16;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_16;
    PyObject *exception_keeper_type_17;
    PyObject *exception_keeper_value_17;
    PyTracebackObject *exception_keeper_tb_17;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_17;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    PyObject *locals_dill$_objects$$$class__5__Struct_120 = NULL;
    PyObject *exception_keeper_type_19;
    PyObject *exception_keeper_value_19;
    PyTracebackObject *exception_keeper_tb_19;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_19;
    PyObject *exception_keeper_type_20;
    PyObject *exception_keeper_value_20;
    PyTracebackObject *exception_keeper_tb_20;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_20;
    PyObject *exception_keeper_type_21;
    PyObject *exception_keeper_value_21;
    PyTracebackObject *exception_keeper_tb_21;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_21;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_22;
    PyObject *exception_keeper_value_22;
    PyTracebackObject *exception_keeper_tb_22;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_22;
    PyObject *exception_keeper_type_23;
    PyObject *exception_keeper_value_23;
    PyTracebackObject *exception_keeper_tb_23;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_23;
    PyObject *exception_keeper_type_24;
    PyObject *exception_keeper_value_24;
    PyTracebackObject *exception_keeper_tb_24;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_24;
    struct Nuitka_ExceptionStackItem exception_preserved_6;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    struct Nuitka_ExceptionStackItem exception_preserved_5;
    PyObject *exception_keeper_type_26;
    PyObject *exception_keeper_value_26;
    PyTracebackObject *exception_keeper_tb_26;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_26;
    PyObject *exception_keeper_type_27;
    PyObject *exception_keeper_value_27;
    PyTracebackObject *exception_keeper_tb_27;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_27;
    PyObject *exception_keeper_type_28;
    PyObject *exception_keeper_value_28;
    PyTracebackObject *exception_keeper_tb_28;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_28;
    PyObject *exception_keeper_type_29;
    PyObject *exception_keeper_value_29;
    PyTracebackObject *exception_keeper_tb_29;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_29;
    PyObject *exception_keeper_type_30;
    PyObject *exception_keeper_value_30;
    PyTracebackObject *exception_keeper_tb_30;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_30;
    PyObject *exception_keeper_type_31;
    PyObject *exception_keeper_value_31;
    PyTracebackObject *exception_keeper_tb_31;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_31;
    PyObject *exception_keeper_type_32;
    PyObject *exception_keeper_value_32;
    PyTracebackObject *exception_keeper_tb_32;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_32;
    PyObject *exception_keeper_type_33;
    PyObject *exception_keeper_value_33;
    PyTracebackObject *exception_keeper_tb_33;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_33;
    PyObject *exception_keeper_type_34;
    PyObject *exception_keeper_value_34;
    PyTracebackObject *exception_keeper_tb_34;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_34;
    PyObject *exception_keeper_type_35;
    PyObject *exception_keeper_value_35;
    PyTracebackObject *exception_keeper_tb_35;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_35;
    PyObject *exception_keeper_type_36;
    PyObject *exception_keeper_value_36;
    PyTracebackObject *exception_keeper_tb_36;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_36;
    PyObject *exception_keeper_type_37;
    PyObject *exception_keeper_value_37;
    PyTracebackObject *exception_keeper_tb_37;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_37;
    struct Nuitka_ExceptionStackItem exception_preserved_7;
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    struct Nuitka_ExceptionStackItem exception_preserved_8;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;
    PyObject *exception_keeper_type_41;
    PyObject *exception_keeper_value_41;
    PyTracebackObject *exception_keeper_tb_41;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_41;
    PyObject *exception_keeper_type_42;
    PyObject *exception_keeper_value_42;
    PyTracebackObject *exception_keeper_tb_42;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_42;
    PyObject *exception_keeper_type_43;
    PyObject *exception_keeper_value_43;
    PyTracebackObject *exception_keeper_tb_43;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_43;
    struct Nuitka_ExceptionStackItem exception_preserved_9;
    PyObject *exception_keeper_type_44;
    PyObject *exception_keeper_value_44;
    PyTracebackObject *exception_keeper_tb_44;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_44;
    PyObject *exception_keeper_type_45;
    PyObject *exception_keeper_value_45;
    PyTracebackObject *exception_keeper_tb_45;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_45;
    PyObject *exception_keeper_type_46;
    PyObject *exception_keeper_value_46;
    PyTracebackObject *exception_keeper_tb_46;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_46;
    PyObject *exception_keeper_type_47;
    PyObject *exception_keeper_value_47;
    PyTracebackObject *exception_keeper_tb_47;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_47;
    PyObject *exception_keeper_type_48;
    PyObject *exception_keeper_value_48;
    PyTracebackObject *exception_keeper_tb_48;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_48;
    PyObject *exception_keeper_type_49;
    PyObject *exception_keeper_value_49;
    PyTracebackObject *exception_keeper_tb_49;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_49;
    PyObject *exception_keeper_type_50;
    PyObject *exception_keeper_value_50;
    PyTracebackObject *exception_keeper_tb_50;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_50;
    PyObject *exception_keeper_type_51;
    PyObject *exception_keeper_value_51;
    PyTracebackObject *exception_keeper_tb_51;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_51;
    PyObject *exception_keeper_type_52;
    PyObject *exception_keeper_value_52;
    PyTracebackObject *exception_keeper_tb_52;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_52;
    struct Nuitka_ExceptionStackItem exception_preserved_10;
    PyObject *exception_keeper_type_53;
    PyObject *exception_keeper_value_53;
    PyTracebackObject *exception_keeper_tb_53;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_53;
    PyObject *exception_keeper_type_54;
    PyObject *exception_keeper_value_54;
    PyTracebackObject *exception_keeper_tb_54;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_54;
    struct Nuitka_ExceptionStackItem exception_preserved_11;
    PyObject *exception_keeper_type_55;
    PyObject *exception_keeper_value_55;
    PyTracebackObject *exception_keeper_tb_55;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_55;
    PyObject *exception_keeper_type_56;
    PyObject *exception_keeper_value_56;
    PyTracebackObject *exception_keeper_tb_56;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_56;
    struct Nuitka_ExceptionStackItem exception_preserved_12;
    PyObject *exception_keeper_type_57;
    PyObject *exception_keeper_value_57;
    PyTracebackObject *exception_keeper_tb_57;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_57;
    PyObject *exception_keeper_type_58;
    PyObject *exception_keeper_value_58;
    PyTracebackObject *exception_keeper_tb_58;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_58;
    struct Nuitka_ExceptionStackItem exception_preserved_13;
    PyObject *exception_keeper_type_59;
    PyObject *exception_keeper_value_59;
    PyTracebackObject *exception_keeper_tb_59;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_59;
    PyObject *exception_keeper_type_60;
    PyObject *exception_keeper_value_60;
    PyTracebackObject *exception_keeper_tb_60;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_60;
    struct Nuitka_ExceptionStackItem exception_preserved_14;
    PyObject *exception_keeper_type_61;
    PyObject *exception_keeper_value_61;
    PyTracebackObject *exception_keeper_tb_61;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_61;
    PyObject *exception_keeper_type_62;
    PyObject *exception_keeper_value_62;
    PyTracebackObject *exception_keeper_tb_62;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_62;
    struct Nuitka_ExceptionStackItem exception_preserved_15;
    PyObject *exception_keeper_type_63;
    PyObject *exception_keeper_value_63;
    PyTracebackObject *exception_keeper_tb_63;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_63;
    PyObject *exception_keeper_type_64;
    PyObject *exception_keeper_value_64;
    PyTracebackObject *exception_keeper_tb_64;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_64;
    PyObject *exception_keeper_type_65;
    PyObject *exception_keeper_value_65;
    PyTracebackObject *exception_keeper_tb_65;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_65;
    PyObject *exception_keeper_type_66;
    PyObject *exception_keeper_value_66;
    PyTracebackObject *exception_keeper_tb_66;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_66;
    PyObject *exception_keeper_type_67;
    PyObject *exception_keeper_value_67;
    PyTracebackObject *exception_keeper_tb_67;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_67;
    PyObject *exception_keeper_type_68;
    PyObject *exception_keeper_value_68;
    PyTracebackObject *exception_keeper_tb_68;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_68;
    PyObject *exception_keeper_type_69;
    PyObject *exception_keeper_value_69;
    PyTracebackObject *exception_keeper_tb_69;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_69;
    PyObject *exception_keeper_type_70;
    PyObject *exception_keeper_value_70;
    PyTracebackObject *exception_keeper_tb_70;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_70;
    struct Nuitka_ExceptionStackItem exception_preserved_16;
    PyObject *exception_keeper_type_71;
    PyObject *exception_keeper_value_71;
    PyTracebackObject *exception_keeper_tb_71;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_71;
    PyObject *exception_keeper_type_72;
    PyObject *exception_keeper_value_72;
    PyTracebackObject *exception_keeper_tb_72;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_72;
    struct Nuitka_ExceptionStackItem exception_preserved_17;
    PyObject *exception_keeper_type_73;
    PyObject *exception_keeper_value_73;
    PyTracebackObject *exception_keeper_tb_73;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_73;
    PyObject *exception_keeper_type_74;
    PyObject *exception_keeper_value_74;
    PyTracebackObject *exception_keeper_tb_74;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_74;
    PyObject *exception_keeper_type_75;
    PyObject *exception_keeper_value_75;
    PyTracebackObject *exception_keeper_tb_75;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_75;
    struct Nuitka_ExceptionStackItem exception_preserved_18;
    PyObject *exception_keeper_type_76;
    PyObject *exception_keeper_value_76;
    PyTracebackObject *exception_keeper_tb_76;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_76;

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[7];
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_2);
    }
    frame_055af561147bc398dec138c5e48a8193 = MAKE_MODULE_FRAME(codeobj_055af561147bc398dec138c5e48a8193, module_dill$_objects);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_055af561147bc398dec138c5e48a8193);
    assert(Py_REFCNT(frame_055af561147bc398dec138c5e48a8193) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[10]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[10]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[12], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_LIST3(mod_consts[14],mod_consts[15],mod_consts[16]);
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[17], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[18];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 16;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[18], tmp_assign_source_5);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[18]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[18]);
        }

        assert(!(tmp_expression_value_1 == NULL));
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[19]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 16;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};
            tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_1, mod_consts[21], kw_values, mod_consts[22]);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 16;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_SYS();
        assert(!(tmp_assign_source_6 == NULL));
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_True;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[25];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 20;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[27];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 21;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_9);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[29];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[30];
        tmp_level_value_4 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 28;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[31],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[31]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 28;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_10);
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_1);
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
        PyObject *tmp_assign_source_11;
        {
            PyObject *hard_module = IMPORT_HARD_IO();
            tmp_assign_source_11 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[32]);
        }
        assert(!(tmp_assign_source_11 == NULL));
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_11);
    }
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 27;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_2;
    branch_end_1:;
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
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[33];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = Py_None;
        tmp_level_value_5 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 34;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[34];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 35;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        assert(!(tmp_assign_source_13 == NULL));
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[35];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = Py_None;
        tmp_level_value_7 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 36;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[35], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_name_value_8;
        PyObject *tmp_globals_arg_value_8;
        PyObject *tmp_locals_arg_value_8;
        PyObject *tmp_fromlist_value_8;
        PyObject *tmp_level_value_8;
        tmp_name_value_8 = mod_consts[36];
        tmp_globals_arg_value_8 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_8 = Py_None;
        tmp_fromlist_value_8 = Py_None;
        tmp_level_value_8 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 37;
        tmp_assign_source_15 = IMPORT_MODULE5(tmp_name_value_8, tmp_globals_arg_value_8, tmp_locals_arg_value_8, tmp_fromlist_value_8, tmp_level_value_8);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[36], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_name_value_9;
        PyObject *tmp_globals_arg_value_9;
        PyObject *tmp_locals_arg_value_9;
        PyObject *tmp_fromlist_value_9;
        PyObject *tmp_level_value_9;
        tmp_name_value_9 = mod_consts[37];
        tmp_globals_arg_value_9 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_9 = Py_None;
        tmp_fromlist_value_9 = Py_None;
        tmp_level_value_9 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 38;
        tmp_assign_source_16 = IMPORT_MODULE5(tmp_name_value_9, tmp_globals_arg_value_9, tmp_locals_arg_value_9, tmp_fromlist_value_9, tmp_level_value_9);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_name_value_10;
        PyObject *tmp_globals_arg_value_10;
        PyObject *tmp_locals_arg_value_10;
        PyObject *tmp_fromlist_value_10;
        PyObject *tmp_level_value_10;
        tmp_name_value_10 = mod_consts[38];
        tmp_globals_arg_value_10 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_10 = Py_None;
        tmp_fromlist_value_10 = Py_None;
        tmp_level_value_10 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 39;
        tmp_assign_source_17 = IMPORT_MODULE5(tmp_name_value_10, tmp_globals_arg_value_10, tmp_locals_arg_value_10, tmp_fromlist_value_10, tmp_level_value_10);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_name_value_11;
        PyObject *tmp_globals_arg_value_11;
        PyObject *tmp_locals_arg_value_11;
        PyObject *tmp_fromlist_value_11;
        PyObject *tmp_level_value_11;
        tmp_name_value_11 = mod_consts[39];
        tmp_globals_arg_value_11 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_11 = Py_None;
        tmp_fromlist_value_11 = Py_None;
        tmp_level_value_11 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 40;
        tmp_assign_source_18 = IMPORT_MODULE5(tmp_name_value_11, tmp_globals_arg_value_11, tmp_locals_arg_value_11, tmp_fromlist_value_11, tmp_level_value_11);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[39], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_name_value_12;
        PyObject *tmp_globals_arg_value_12;
        PyObject *tmp_locals_arg_value_12;
        PyObject *tmp_fromlist_value_12;
        PyObject *tmp_level_value_12;
        tmp_name_value_12 = mod_consts[40];
        tmp_globals_arg_value_12 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_12 = Py_None;
        tmp_fromlist_value_12 = Py_None;
        tmp_level_value_12 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 41;
        tmp_assign_source_19 = IMPORT_MODULE5(tmp_name_value_12, tmp_globals_arg_value_12, tmp_locals_arg_value_12, tmp_fromlist_value_12, tmp_level_value_12);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[40], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_name_value_13;
        PyObject *tmp_globals_arg_value_13;
        PyObject *tmp_locals_arg_value_13;
        PyObject *tmp_fromlist_value_13;
        PyObject *tmp_level_value_13;
        tmp_name_value_13 = mod_consts[41];
        tmp_globals_arg_value_13 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_13 = Py_None;
        tmp_fromlist_value_13 = Py_None;
        tmp_level_value_13 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 42;
        tmp_assign_source_20 = IMPORT_MODULE5(tmp_name_value_13, tmp_globals_arg_value_13, tmp_locals_arg_value_13, tmp_fromlist_value_13, tmp_level_value_13);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_name_value_14;
        PyObject *tmp_globals_arg_value_14;
        PyObject *tmp_locals_arg_value_14;
        PyObject *tmp_fromlist_value_14;
        PyObject *tmp_level_value_14;
        tmp_name_value_14 = mod_consts[42];
        tmp_globals_arg_value_14 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_14 = Py_None;
        tmp_fromlist_value_14 = Py_None;
        tmp_level_value_14 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 43;
        tmp_assign_source_21 = IMPORT_MODULE5(tmp_name_value_14, tmp_globals_arg_value_14, tmp_locals_arg_value_14, tmp_fromlist_value_14, tmp_level_value_14);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = IMPORT_HARD_FUNCTOOLS();
        assert(!(tmp_assign_source_22 == NULL));
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[43], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_name_value_15;
        PyObject *tmp_globals_arg_value_15;
        PyObject *tmp_locals_arg_value_15;
        PyObject *tmp_fromlist_value_15;
        PyObject *tmp_level_value_15;
        tmp_name_value_15 = mod_consts[44];
        tmp_globals_arg_value_15 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_15 = Py_None;
        tmp_fromlist_value_15 = Py_None;
        tmp_level_value_15 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 45;
        tmp_assign_source_23 = IMPORT_MODULE5(tmp_name_value_15, tmp_globals_arg_value_15, tmp_locals_arg_value_15, tmp_fromlist_value_15, tmp_level_value_15);
        assert(!(tmp_assign_source_23 == NULL));
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_name_value_16;
        PyObject *tmp_globals_arg_value_16;
        PyObject *tmp_locals_arg_value_16;
        PyObject *tmp_fromlist_value_16;
        PyObject *tmp_level_value_16;
        tmp_name_value_16 = mod_consts[45];
        tmp_globals_arg_value_16 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_16 = Py_None;
        tmp_fromlist_value_16 = Py_None;
        tmp_level_value_16 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 46;
        tmp_assign_source_24 = IMPORT_MODULE5(tmp_name_value_16, tmp_globals_arg_value_16, tmp_locals_arg_value_16, tmp_fromlist_value_16, tmp_level_value_16);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_name_value_17;
        PyObject *tmp_globals_arg_value_17;
        PyObject *tmp_locals_arg_value_17;
        PyObject *tmp_fromlist_value_17;
        PyObject *tmp_level_value_17;
        tmp_name_value_17 = mod_consts[46];
        tmp_globals_arg_value_17 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_17 = Py_None;
        tmp_fromlist_value_17 = Py_None;
        tmp_level_value_17 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 47;
        tmp_assign_source_25 = IMPORT_MODULE5(tmp_name_value_17, tmp_globals_arg_value_17, tmp_locals_arg_value_17, tmp_fromlist_value_17, tmp_level_value_17);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[46], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_name_value_18;
        PyObject *tmp_globals_arg_value_18;
        PyObject *tmp_locals_arg_value_18;
        PyObject *tmp_fromlist_value_18;
        PyObject *tmp_level_value_18;
        tmp_name_value_18 = mod_consts[47];
        tmp_globals_arg_value_18 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_18 = Py_None;
        tmp_fromlist_value_18 = Py_None;
        tmp_level_value_18 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 48;
        tmp_assign_source_26 = IMPORT_MODULE5(tmp_name_value_18, tmp_globals_arg_value_18, tmp_locals_arg_value_18, tmp_fromlist_value_18, tmp_level_value_18);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_name_value_19;
        PyObject *tmp_globals_arg_value_19;
        PyObject *tmp_locals_arg_value_19;
        PyObject *tmp_fromlist_value_19;
        PyObject *tmp_level_value_19;
        tmp_name_value_19 = mod_consts[48];
        tmp_globals_arg_value_19 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_19 = Py_None;
        tmp_fromlist_value_19 = Py_None;
        tmp_level_value_19 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 49;
        tmp_assign_source_27 = IMPORT_MODULE5(tmp_name_value_19, tmp_globals_arg_value_19, tmp_locals_arg_value_19, tmp_fromlist_value_19, tmp_level_value_19);
        assert(!(tmp_assign_source_27 == NULL));
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[48], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_name_value_20;
        PyObject *tmp_globals_arg_value_20;
        PyObject *tmp_locals_arg_value_20;
        PyObject *tmp_fromlist_value_20;
        PyObject *tmp_level_value_20;
        tmp_name_value_20 = mod_consts[49];
        tmp_globals_arg_value_20 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_20 = Py_None;
        tmp_fromlist_value_20 = Py_None;
        tmp_level_value_20 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 50;
        tmp_assign_source_28 = IMPORT_MODULE5(tmp_name_value_20, tmp_globals_arg_value_20, tmp_locals_arg_value_20, tmp_fromlist_value_20, tmp_level_value_20);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_name_value_21;
        PyObject *tmp_globals_arg_value_21;
        PyObject *tmp_locals_arg_value_21;
        PyObject *tmp_fromlist_value_21;
        PyObject *tmp_level_value_21;
        tmp_name_value_21 = mod_consts[50];
        tmp_globals_arg_value_21 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_21 = Py_None;
        tmp_fromlist_value_21 = Py_None;
        tmp_level_value_21 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 51;
        tmp_assign_source_29 = IMPORT_MODULE5(tmp_name_value_21, tmp_globals_arg_value_21, tmp_locals_arg_value_21, tmp_fromlist_value_21, tmp_level_value_21);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_name_value_22;
        PyObject *tmp_globals_arg_value_22;
        PyObject *tmp_locals_arg_value_22;
        PyObject *tmp_fromlist_value_22;
        PyObject *tmp_level_value_22;
        tmp_name_value_22 = mod_consts[51];
        tmp_globals_arg_value_22 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_22 = Py_None;
        tmp_fromlist_value_22 = Py_None;
        tmp_level_value_22 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 52;
        tmp_assign_source_30 = IMPORT_MODULE5(tmp_name_value_22, tmp_globals_arg_value_22, tmp_locals_arg_value_22, tmp_fromlist_value_22, tmp_level_value_22);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[51], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_name_value_23;
        PyObject *tmp_globals_arg_value_23;
        PyObject *tmp_locals_arg_value_23;
        PyObject *tmp_fromlist_value_23;
        PyObject *tmp_level_value_23;
        tmp_name_value_23 = mod_consts[52];
        tmp_globals_arg_value_23 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_23 = Py_None;
        tmp_fromlist_value_23 = Py_None;
        tmp_level_value_23 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 53;
        tmp_assign_source_31 = IMPORT_MODULE5(tmp_name_value_23, tmp_globals_arg_value_23, tmp_locals_arg_value_23, tmp_fromlist_value_23, tmp_level_value_23);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_name_value_24;
        PyObject *tmp_globals_arg_value_24;
        PyObject *tmp_locals_arg_value_24;
        PyObject *tmp_fromlist_value_24;
        PyObject *tmp_level_value_24;
        tmp_name_value_24 = mod_consts[53];
        tmp_globals_arg_value_24 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_24 = Py_None;
        tmp_fromlist_value_24 = Py_None;
        tmp_level_value_24 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 54;
        tmp_assign_source_32 = IMPORT_MODULE5(tmp_name_value_24, tmp_globals_arg_value_24, tmp_locals_arg_value_24, tmp_fromlist_value_24, tmp_level_value_24);
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_name_value_25;
        PyObject *tmp_globals_arg_value_25;
        PyObject *tmp_locals_arg_value_25;
        PyObject *tmp_fromlist_value_25;
        PyObject *tmp_level_value_25;
        tmp_name_value_25 = mod_consts[54];
        tmp_globals_arg_value_25 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_25 = Py_None;
        tmp_fromlist_value_25 = Py_None;
        tmp_level_value_25 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 55;
        tmp_assign_source_33 = IMPORT_MODULE5(tmp_name_value_25, tmp_globals_arg_value_25, tmp_locals_arg_value_25, tmp_fromlist_value_25, tmp_level_value_25);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_name_value_26;
        PyObject *tmp_globals_arg_value_26;
        PyObject *tmp_locals_arg_value_26;
        PyObject *tmp_fromlist_value_26;
        PyObject *tmp_level_value_26;
        tmp_name_value_26 = mod_consts[55];
        tmp_globals_arg_value_26 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_26 = Py_None;
        tmp_fromlist_value_26 = Py_None;
        tmp_level_value_26 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 56;
        tmp_assign_source_34 = IMPORT_MODULE5(tmp_name_value_26, tmp_globals_arg_value_26, tmp_locals_arg_value_26, tmp_fromlist_value_26, tmp_level_value_26);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = IMPORT_HARD_OS();
        assert(!(tmp_assign_source_35 == NULL));
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_name_value_27;
        PyObject *tmp_globals_arg_value_27;
        PyObject *tmp_locals_arg_value_27;
        PyObject *tmp_fromlist_value_27;
        PyObject *tmp_level_value_27;
        tmp_name_value_27 = mod_consts[57];
        tmp_globals_arg_value_27 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_27 = Py_None;
        tmp_fromlist_value_27 = Py_None;
        tmp_level_value_27 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 58;
        tmp_assign_source_36 = IMPORT_MODULE5(tmp_name_value_27, tmp_globals_arg_value_27, tmp_locals_arg_value_27, tmp_fromlist_value_27, tmp_level_value_27);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[57], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_name_value_28;
        PyObject *tmp_globals_arg_value_28;
        PyObject *tmp_locals_arg_value_28;
        PyObject *tmp_fromlist_value_28;
        PyObject *tmp_level_value_28;
        tmp_name_value_28 = mod_consts[58];
        tmp_globals_arg_value_28 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_28 = Py_None;
        tmp_fromlist_value_28 = Py_None;
        tmp_level_value_28 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 59;
        tmp_assign_source_37 = IMPORT_MODULE5(tmp_name_value_28, tmp_globals_arg_value_28, tmp_locals_arg_value_28, tmp_fromlist_value_28, tmp_level_value_28);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_name_value_29;
        PyObject *tmp_globals_arg_value_29;
        PyObject *tmp_locals_arg_value_29;
        PyObject *tmp_fromlist_value_29;
        PyObject *tmp_level_value_29;
        tmp_name_value_29 = mod_consts[59];
        tmp_globals_arg_value_29 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_29 = Py_None;
        tmp_fromlist_value_29 = Py_None;
        tmp_level_value_29 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 61;
        tmp_assign_source_38 = IMPORT_MODULE5(tmp_name_value_29, tmp_globals_arg_value_29, tmp_locals_arg_value_29, tmp_fromlist_value_29, tmp_level_value_29);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_38);
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_name_value_30;
        PyObject *tmp_globals_arg_value_30;
        PyObject *tmp_locals_arg_value_30;
        PyObject *tmp_fromlist_value_30;
        PyObject *tmp_level_value_30;
        tmp_name_value_30 = mod_consts[60];
        tmp_globals_arg_value_30 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_30 = Py_None;
        tmp_fromlist_value_30 = Py_None;
        tmp_level_value_30 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 62;
        tmp_assign_source_39 = IMPORT_MODULE5(tmp_name_value_30, tmp_globals_arg_value_30, tmp_locals_arg_value_30, tmp_fromlist_value_30, tmp_level_value_30);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_name_value_31;
        PyObject *tmp_globals_arg_value_31;
        PyObject *tmp_locals_arg_value_31;
        PyObject *tmp_fromlist_value_31;
        PyObject *tmp_level_value_31;
        tmp_name_value_31 = mod_consts[61];
        tmp_globals_arg_value_31 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_31 = Py_None;
        tmp_fromlist_value_31 = Py_None;
        tmp_level_value_31 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 63;
        tmp_assign_source_40 = IMPORT_MODULE5(tmp_name_value_31, tmp_globals_arg_value_31, tmp_locals_arg_value_31, tmp_fromlist_value_31, tmp_level_value_31);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 63;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[61], tmp_assign_source_40);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_name_value_32;
        PyObject *tmp_globals_arg_value_32;
        PyObject *tmp_locals_arg_value_32;
        PyObject *tmp_fromlist_value_32;
        PyObject *tmp_level_value_32;
        tmp_name_value_32 = mod_consts[62];
        tmp_globals_arg_value_32 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_32 = Py_None;
        tmp_fromlist_value_32 = Py_None;
        tmp_level_value_32 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 65;
        tmp_assign_source_41 = IMPORT_MODULE5(tmp_name_value_32, tmp_globals_arg_value_32, tmp_locals_arg_value_32, tmp_fromlist_value_32, tmp_level_value_32);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_41);
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_name_value_33;
        PyObject *tmp_globals_arg_value_33;
        PyObject *tmp_locals_arg_value_33;
        PyObject *tmp_fromlist_value_33;
        PyObject *tmp_level_value_33;
        tmp_name_value_33 = mod_consts[63];
        tmp_globals_arg_value_33 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_33 = Py_None;
        tmp_fromlist_value_33 = Py_None;
        tmp_level_value_33 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 66;
        tmp_assign_source_42 = IMPORT_MODULE5(tmp_name_value_33, tmp_globals_arg_value_33, tmp_locals_arg_value_33, tmp_fromlist_value_33, tmp_level_value_33);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_42);
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_mvar_value_1;
        int tmp_truth_name_1;
        tmp_mvar_value_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_mvar_value_1 == NULL)) {
            tmp_mvar_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_mvar_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_3;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_mvar_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_3;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_34;
        PyObject *tmp_globals_arg_value_34;
        PyObject *tmp_locals_arg_value_34;
        PyObject *tmp_fromlist_value_34;
        PyObject *tmp_level_value_34;
        tmp_name_value_34 = mod_consts[64];
        tmp_globals_arg_value_34 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_34 = Py_None;
        tmp_fromlist_value_34 = Py_None;
        tmp_level_value_34 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 67;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_34, tmp_globals_arg_value_34, tmp_locals_arg_value_34, tmp_fromlist_value_34, tmp_level_value_34);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_3;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_43 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[65],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_43 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[65]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_43);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_name_value_35;
        PyObject *tmp_globals_arg_value_35;
        PyObject *tmp_locals_arg_value_35;
        PyObject *tmp_fromlist_value_35;
        PyObject *tmp_level_value_35;
        tmp_name_value_35 = mod_consts[27];
        tmp_globals_arg_value_35 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_35 = Py_None;
        tmp_fromlist_value_35 = Py_None;
        tmp_level_value_35 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 68;
        tmp_assign_source_44 = IMPORT_MODULE5(tmp_name_value_35, tmp_globals_arg_value_35, tmp_locals_arg_value_35, tmp_fromlist_value_35, tmp_level_value_35);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_44);
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = Py_True;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_45);
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_46;
        tmp_assign_source_46 = Py_False;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_46);
    }
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 64;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_4;
    branch_end_3:;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_3;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_3:;
    {
        PyObject *tmp_assign_source_47;
        tmp_assign_source_47 = Py_True;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[67], tmp_assign_source_47);
    }
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = IMPORT_HARD_CTYPES();
        assert(!(tmp_assign_source_48 == NULL));
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68], tmp_assign_source_48);
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = Py_True;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_49);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_expression_value_2 == NULL));
        tmp_attribute_value_1 = mod_consts[70];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_2, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_5;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 82;

            goto try_except_handler_5;
        }
        tmp_assign_source_50 = (tmp_res == 0) ? Py_True : Py_False;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_50);
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

    // Preserve existing published exception id 4.
    exception_preserved_4 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_5 == NULL) {
        exception_keeper_tb_5 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_5);
    } else if (exception_keeper_lineno_5 != 0) {
        exception_keeper_tb_5 = ADD_TRACEBACK(exception_keeper_tb_5, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_5);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_5, &exception_keeper_value_5, &exception_keeper_tb_5);
    // Tried code:
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_51;
        tmp_assign_source_51 = Py_False;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[69], tmp_assign_source_51);
    }
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = Py_False;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_52);
    }
    goto branch_end_4;
    branch_no_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 78;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_6;
    branch_end_4:;
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

    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    // Restore previous exception id 4.
    SET_CURRENT_EXCEPTION(&exception_preserved_4);

    goto try_end_5;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_5:;
    {
        PyObject *tmp_assign_source_53;
        tmp_assign_source_53 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_54;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_55;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_dill$_objects$$$class__1__class_88 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyDict_SetItem(locals_dill$_objects$$$class__1__class_88, mod_consts[73], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[74];
        tmp_res = PyDict_SetItem(locals_dill$_objects$$$class__1__class_88, mod_consts[75], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_dill$_objects$$$function__1__method();

        tmp_res = PyDict_SetItem(locals_dill$_objects$$$class__1__class_88, mod_consts[76], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_56;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_1;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_2 = (PyObject *)&PyType_Type;
            tmp_tuple_element_1 = mod_consts[74];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
            tmp_tuple_element_1 = locals_dill$_objects$$$class__1__class_88;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 88;
            tmp_assign_source_56 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_56 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 88;

                goto try_except_handler_9;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_56;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_55 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_55);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_dill$_objects$$$class__1__class_88);
        locals_dill$_objects$$$class__1__class_88 = NULL;
        goto try_return_handler_8;
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

        Py_DECREF(locals_dill$_objects$$$class__1__class_88);
        locals_dill$_objects$$$class__1__class_88 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto try_except_handler_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
        // Exception handler code:
        try_except_handler_8:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 88;
        goto try_except_handler_7;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[74], tmp_assign_source_55);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_7:;
    exception_keeper_type_9 = exception_type;
    exception_keeper_value_9 = exception_value;
    exception_keeper_tb_9 = exception_tb;
    exception_keeper_lineno_9 = exception_lineno;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        tmp_assign_source_58 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_58;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_59;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_dill$_objects$$$class__2__class2_97 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyDict_SetItem(locals_dill$_objects$$$class__2__class2_97, mod_consts[73], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[79];
        tmp_res = PyDict_SetItem(locals_dill$_objects$$$class__2__class2_97, mod_consts[75], tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_dill$_objects$$$function__2___call__();

        tmp_res = PyDict_SetItem(locals_dill$_objects$$$class__2__class2_97, mod_consts[80], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[79];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[78];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_dill$_objects$$$class__2__class2_97;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 97;
            tmp_assign_source_60 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 97;

                goto try_except_handler_12;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_60;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_59 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_59);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        Py_DECREF(locals_dill$_objects$$$class__2__class2_97);
        locals_dill$_objects$$$class__2__class2_97 = NULL;
        goto try_return_handler_11;
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

        Py_DECREF(locals_dill$_objects$$$class__2__class2_97);
        locals_dill$_objects$$$class__2__class2_97 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto try_except_handler_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_11;
        exception_value = exception_keeper_value_11;
        exception_tb = exception_keeper_tb_11;
        exception_lineno = exception_keeper_lineno_11;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 97;
        goto try_except_handler_10;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[79], tmp_assign_source_59);
    }
    goto try_end_8;
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

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        assert(!(tmp_called_value_4 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 100;
        tmp_assign_source_61 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[82], tmp_assign_source_61);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[83];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_62 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_13;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_3 = tmp_class_creation_3__bases;
        tmp_subscript_value_1 = mod_consts[3];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_13;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_13;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_1 = tmp_class_creation_3__bases;
        tmp_assign_source_64 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_64;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_4 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[84]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_5 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[84]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_13;
        }
        tmp_tuple_element_3 = mod_consts[85];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_3 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 101;
        tmp_assign_source_65 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_13;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_65;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_6 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[86]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_13;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[87];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_1 = mod_consts[88];
        tmp_getattr_default_1 = mod_consts[89];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_13;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_2 = tmp_class_creation_3__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[88]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_13;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_13;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 101;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_13;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_66;
        tmp_assign_source_66 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_66;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_67;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_dill$_objects$$$class__3__newclass_101 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__3__newclass_101, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_15;
        }
        tmp_dictset_value = mod_consts[85];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__3__newclass_101, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_15;
        }
        frame_eee5efb989dc760dfe0c01594a9005e5_2 = MAKE_CLASS_FRAME(codeobj_eee5efb989dc760dfe0c01594a9005e5, module_dill$_objects, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_eee5efb989dc760dfe0c01594a9005e5_2);
        assert(Py_REFCNT(frame_eee5efb989dc760dfe0c01594a9005e5_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_dill$_objects$$$function__3__method();

        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__3__newclass_101, mod_consts[76], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_eee5efb989dc760dfe0c01594a9005e5_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_eee5efb989dc760dfe0c01594a9005e5_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_eee5efb989dc760dfe0c01594a9005e5_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_eee5efb989dc760dfe0c01594a9005e5_2,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_eee5efb989dc760dfe0c01594a9005e5_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_15;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_3__bases;
            tmp_cmp_expr_right_4 = mod_consts[83];
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto try_except_handler_15;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__3__newclass_101, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;

            goto try_except_handler_15;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_68;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_5 = mod_consts[85];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_5 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_dill$_objects$$$class__3__newclass_101;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_3__class_decl_dict;
            frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 101;
            tmp_assign_source_68 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_68 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;

                goto try_except_handler_15;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_68;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_67 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_67);
        goto try_return_handler_15;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_DECREF(locals_dill$_objects$$$class__3__newclass_101);
        locals_dill$_objects$$$class__3__newclass_101 = NULL;
        goto try_return_handler_14;
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

        Py_DECREF(locals_dill$_objects$$$class__3__newclass_101);
        locals_dill$_objects$$$class__3__newclass_101 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto try_except_handler_14;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
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

        // Re-raise.
        exception_type = exception_keeper_type_14;
        exception_value = exception_keeper_value_14;
        exception_tb = exception_keeper_tb_14;
        exception_lineno = exception_keeper_lineno_14;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 101;
        goto try_except_handler_13;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_67);
    }
    goto try_end_9;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_15 = exception_type;
    exception_keeper_value_15 = exception_value;
    exception_keeper_tb_15 = exception_tb;
    exception_keeper_lineno_15 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto frame_exception_exit_1;
    // End of try:
    try_end_9:;
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
        PyObject *tmp_assign_source_69;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[83];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_69 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_4__bases == NULL);
        tmp_class_creation_4__bases = tmp_assign_source_69;
    }
    {
        PyObject *tmp_assign_source_70;
        tmp_assign_source_70 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_70;
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_4__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_16;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_expression_value_8 = tmp_class_creation_4__bases;
        tmp_subscript_value_2 = mod_consts[3];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_8, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_16;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_16;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_bases_value_2 = tmp_class_creation_4__bases;
        tmp_assign_source_71 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_4__metaclass == NULL);
        tmp_class_creation_4__metaclass = tmp_assign_source_71;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_9 = tmp_class_creation_4__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[84]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_expression_value_10 = tmp_class_creation_4__metaclass;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[84]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_16;
        }
        tmp_tuple_element_6 = mod_consts[92];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_4__bases);
        tmp_tuple_element_6 = tmp_class_creation_4__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_4__class_decl_dict;
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 110;
        tmp_assign_source_72 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_16;
        }
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_72;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_4__prepared);
        tmp_expression_value_11 = tmp_class_creation_4__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[86]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_16;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
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
        tmp_mod_expr_left_2 = mod_consts[87];
        CHECK_OBJECT(tmp_class_creation_4__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_4__metaclass;
        tmp_getattr_attr_2 = mod_consts[88];
        tmp_getattr_default_2 = mod_consts[89];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_16;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_type_arg_4 = tmp_class_creation_4__prepared;
            tmp_expression_value_12 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_12 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[88]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_16;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_16;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 110;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_16;
    }
    branch_no_9:;
    goto branch_end_8;
    branch_no_8:;
    {
        PyObject *tmp_assign_source_73;
        tmp_assign_source_73 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_73;
    }
    branch_end_8:;
    {
        PyObject *tmp_assign_source_74;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_dill$_objects$$$class__4__newclass2_110 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__4__newclass2_110, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_18;
        }
        tmp_dictset_value = mod_consts[92];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__4__newclass2_110, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_18;
        }
        frame_98e7e125845a0eeb110d1ec81d242bb7_3 = MAKE_CLASS_FRAME(codeobj_98e7e125845a0eeb110d1ec81d242bb7, module_dill$_objects, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_98e7e125845a0eeb110d1ec81d242bb7_3);
        assert(Py_REFCNT(frame_98e7e125845a0eeb110d1ec81d242bb7_3) == 2);

        // Framed code:
        tmp_dictset_value = MAKE_LIST1(mod_consts[93]);
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__4__newclass2_110, mod_consts[94], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_98e7e125845a0eeb110d1ec81d242bb7_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_98e7e125845a0eeb110d1ec81d242bb7_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_98e7e125845a0eeb110d1ec81d242bb7_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_98e7e125845a0eeb110d1ec81d242bb7_3,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_98e7e125845a0eeb110d1ec81d242bb7_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_18;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_5;
            PyObject *tmp_cmp_expr_right_5;
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_cmp_expr_left_5 = tmp_class_creation_4__bases;
            tmp_cmp_expr_right_5 = mod_consts[83];
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto try_except_handler_18;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_10;
            } else {
                goto branch_no_10;
            }
        }
        branch_yes_10:;
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__4__newclass2_110, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto try_except_handler_18;
        }
        branch_no_10:;
        {
            PyObject *tmp_assign_source_75;
            PyObject *tmp_called_value_8;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_4__metaclass);
            tmp_called_value_8 = tmp_class_creation_4__metaclass;
            tmp_tuple_element_8 = mod_consts[92];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_4__bases);
            tmp_tuple_element_8 = tmp_class_creation_4__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_dill$_objects$$$class__4__newclass2_110;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
            frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 110;
            tmp_assign_source_75 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_75 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 110;

                goto try_except_handler_18;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_75;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_74 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_74);
        goto try_return_handler_18;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_18:;
        Py_DECREF(locals_dill$_objects$$$class__4__newclass2_110);
        locals_dill$_objects$$$class__4__newclass2_110 = NULL;
        goto try_return_handler_17;
        // Exception handler code:
        try_except_handler_18:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dill$_objects$$$class__4__newclass2_110);
        locals_dill$_objects$$$class__4__newclass2_110 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto try_except_handler_17;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_17 = exception_type;
        exception_keeper_value_17 = exception_value;
        exception_keeper_tb_17 = exception_tb;
        exception_keeper_lineno_17 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_17;
        exception_value = exception_keeper_value_17;
        exception_tb = exception_keeper_tb_17;
        exception_lineno = exception_keeper_lineno_17;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 110;
        goto try_except_handler_16;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_74);
    }
    goto try_end_10;
    // Exception handler code:
    try_except_handler_16:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_4__bases);
    tmp_class_creation_4__bases = NULL;
    Py_XDECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_4__metaclass);
    tmp_class_creation_4__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_18;
    exception_value = exception_keeper_value_18;
    exception_tb = exception_keeper_tb_18;
    exception_lineno = exception_keeper_lineno_18;

    goto frame_exception_exit_1;
    // End of try:
    try_end_10:;
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
    {
        PyObject *tmp_assign_source_76;


        tmp_assign_source_76 = MAKE_FUNCTION_dill$_objects$$$function__4__function();

        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;


        tmp_assign_source_77 = MAKE_FUNCTION_dill$_objects$$$function__5__function2();

        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_77);
    }
    {
        nuitka_bool tmp_condition_result_13;
        PyObject *tmp_mvar_value_2;
        int tmp_truth_name_4;
        tmp_mvar_value_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_mvar_value_2 == NULL)) {
            tmp_mvar_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_mvar_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_mvar_value_2);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 119;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    // Tried code:
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_expression_value_13;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_expression_value_13 == NULL));
        tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[96]);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_assign_source_78 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_78, 0, tmp_tuple_element_9);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_78;
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_79 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_79;
    }
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_14;
        int tmp_truth_name_5;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_5 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_5 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_condition_result_14 = tmp_truth_name_5 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_14 = tmp_class_creation_5__bases;
        tmp_subscript_value_3 = mod_consts[3];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_3, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_3 = tmp_class_creation_5__bases;
        tmp_assign_source_81 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_81;
    }
    {
        nuitka_bool tmp_condition_result_15;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_15 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_15, mod_consts[84]);
        tmp_condition_result_15 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_15 == NUITKA_BOOL_TRUE) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_value_7;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_kwargs_value_7;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_16 = tmp_class_creation_5__metaclass;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[84]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_tuple_element_10 = mod_consts[97];
        tmp_args_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_10 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_10);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_7 = tmp_class_creation_5__class_decl_dict;
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 120;
        tmp_assign_source_82 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_7, tmp_kwargs_value_7);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_value_7);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_82;
    }
    {
        bool tmp_condition_result_16;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_17 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[86]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_condition_result_16 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_16 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
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
        tmp_mod_expr_left_3 = mod_consts[87];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_3 = mod_consts[88];
        tmp_getattr_default_3 = mod_consts[89];
        tmp_tuple_element_11 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_11);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_6 = tmp_class_creation_5__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[88]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_11);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_19;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_19;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 120;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_19;
    }
    branch_no_13:;
    goto branch_end_12;
    branch_no_12:;
    {
        PyObject *tmp_assign_source_83;
        tmp_assign_source_83 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_83;
    }
    branch_end_12:;
    {
        PyObject *tmp_assign_source_84;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_dill$_objects$$$class__5__Struct_120 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[72];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__5__Struct_120, mod_consts[73], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_21;
        }
        tmp_dictset_value = mod_consts[97];
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__5__Struct_120, mod_consts[75], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_21;
        }
        {
            nuitka_bool tmp_condition_result_17;
            PyObject *tmp_cmp_expr_left_6;
            PyObject *tmp_cmp_expr_right_6;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_6 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_6 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_17 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
            if (tmp_condition_result_17 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto try_except_handler_21;
            }
            if (tmp_condition_result_17 == NUITKA_BOOL_TRUE) {
                goto branch_yes_14;
            } else {
                goto branch_no_14;
            }
        }
        branch_yes_14:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_dill$_objects$$$class__5__Struct_120, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;

            goto try_except_handler_21;
        }
        branch_no_14:;
        {
            PyObject *tmp_assign_source_85;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_8;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_8;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_10 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_12 = mod_consts[97];
            tmp_args_value_8 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_12 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_dill$_objects$$$class__5__Struct_120;
            PyTuple_SET_ITEM0(tmp_args_value_8, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_8 = tmp_class_creation_5__class_decl_dict;
            frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 120;
            tmp_assign_source_85 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_8, tmp_kwargs_value_8);
            Py_DECREF(tmp_args_value_8);
            if (tmp_assign_source_85 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 120;

                goto try_except_handler_21;
            }
            assert(outline_4_var___class__ == NULL);
            outline_4_var___class__ = tmp_assign_source_85;
        }
        CHECK_OBJECT(outline_4_var___class__);
        tmp_assign_source_84 = outline_4_var___class__;
        Py_INCREF(tmp_assign_source_84);
        goto try_return_handler_21;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_21:;
        Py_DECREF(locals_dill$_objects$$$class__5__Struct_120);
        locals_dill$_objects$$$class__5__Struct_120 = NULL;
        goto try_return_handler_20;
        // Exception handler code:
        try_except_handler_21:;
        exception_keeper_type_19 = exception_type;
        exception_keeper_value_19 = exception_value;
        exception_keeper_tb_19 = exception_tb;
        exception_keeper_lineno_19 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_dill$_objects$$$class__5__Struct_120);
        locals_dill$_objects$$$class__5__Struct_120 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_19;
        exception_value = exception_keeper_value_19;
        exception_tb = exception_keeper_tb_19;
        exception_lineno = exception_keeper_lineno_19;

        goto try_except_handler_20;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_20:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_20:;
        exception_keeper_type_20 = exception_type;
        exception_keeper_value_20 = exception_value;
        exception_keeper_tb_20 = exception_tb;
        exception_keeper_lineno_20 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_20;
        exception_value = exception_keeper_value_20;
        exception_tb = exception_keeper_tb_20;
        exception_lineno = exception_keeper_lineno_20;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 120;
        goto try_except_handler_19;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_84);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    Py_XDECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
    tmp_class_creation_5__bases_orig = NULL;
    CHECK_OBJECT(tmp_class_creation_5__bases);
    Py_DECREF(tmp_class_creation_5__bases);
    tmp_class_creation_5__bases = NULL;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__metaclass);
    Py_DECREF(tmp_class_creation_5__metaclass);
    tmp_class_creation_5__metaclass = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_13;
        PyObject *tmp_assattr_target_3;
        tmp_tuple_element_13 = mod_consts[98];
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_19;
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_13);
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
            }

            assert(!(tmp_expression_value_19 == NULL));
            tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[99]);
            if (tmp_tuple_element_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 122;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_13);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_list_element_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_assattr_value_3 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_tuple_element_14;
            PyList_SET_ITEM(tmp_assattr_value_3, 0, tmp_list_element_1);
            tmp_tuple_element_14 = mod_consts[100];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_called_value_11;
                PyObject *tmp_expression_value_20;
                PyObject *tmp_args_element_value_1;
                PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_14);
                tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

                if (unlikely(tmp_expression_value_20 == NULL)) {
                    tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
                }

                assert(!(tmp_expression_value_20 == NULL));
                tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[101]);
                if (tmp_called_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 122;

                    goto tuple_build_exception_5;
                }
                tmp_args_element_value_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[97]);

                if (unlikely(tmp_args_element_value_1 == NULL)) {
                    tmp_args_element_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
                }

                if (tmp_args_element_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_called_value_11);

                    exception_lineno = 122;

                    goto tuple_build_exception_5;
                }
                frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 122;
                tmp_tuple_element_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_1);
                Py_DECREF(tmp_called_value_11);
                if (tmp_tuple_element_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 122;

                    goto tuple_build_exception_5;
                }
                PyTuple_SET_ITEM(tmp_list_element_1, 1, tmp_tuple_element_14);
            }
            goto tuple_build_noexception_5;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_5:;
            Py_DECREF(tmp_list_element_1);
            goto list_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_5:;
            PyList_SET_ITEM(tmp_assattr_value_3, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assattr_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_assattr_target_3 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_assattr_target_3 == NULL)) {
            tmp_assattr_target_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_assattr_target_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_3);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[102], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
    }
    branch_no_11:;
    // Tried code:
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_22;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 123;
        tmp_iter_arg_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[103],
            PyTuple_GET_ITEM(mod_consts[104], 0)
        );

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_22;
        }
        tmp_assign_source_86 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;

            goto try_except_handler_22;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_86;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_87 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_87 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 123;
            goto try_except_handler_23;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_87;
    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_88 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_88 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }



            exception_lineno = 123;
            goto try_except_handler_23;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_88;
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


                    exception_lineno = 123;
                    goto try_except_handler_23;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[105];
            Py_INCREF(exception_value);
            exception_tb = NULL;


            exception_lineno = 123;
            goto try_except_handler_23;
        }
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_22;
    // End of try:
    try_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto frame_exception_exit_1;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
    Py_DECREF(tmp_tuple_unpack_1__source_iter);
    tmp_tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_89;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_89 = tmp_tuple_unpack_1__element_1;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_89);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_90;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_90 = tmp_tuple_unpack_1__element_2;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_90);
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_91;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[46]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[46]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 124;
        tmp_assign_source_91 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[108],
            PyTuple_GET_ITEM(mod_consts[109], 0)
        );

        if (tmp_assign_source_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 124;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_91);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_92;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_36;
        PyObject *tmp_globals_arg_value_36;
        PyObject *tmp_locals_arg_value_36;
        PyObject *tmp_fromlist_value_36;
        PyObject *tmp_level_value_36;
        tmp_name_value_36 = mod_consts[35];
        tmp_globals_arg_value_36 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_36 = Py_None;
        tmp_fromlist_value_36 = mod_consts[111];
        tmp_level_value_36 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 128;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_36, tmp_globals_arg_value_36, tmp_locals_arg_value_36, tmp_fromlist_value_36, tmp_level_value_36);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_24;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_92 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[112],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_92 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[112]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto try_except_handler_24;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_92);
    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_24:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 6.
    exception_preserved_6 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_24 == NULL) {
        exception_keeper_tb_24 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_24);
    } else if (exception_keeper_lineno_24 != 0) {
        exception_keeper_tb_24 = ADD_TRACEBACK(exception_keeper_tb_24, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_24);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_24, &exception_keeper_value_24, &exception_keeper_tb_24);
    // Tried code:
    {
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    // Tried code:
    {
        PyObject *tmp_assign_source_93;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_37;
        PyObject *tmp_globals_arg_value_37;
        PyObject *tmp_locals_arg_value_37;
        PyObject *tmp_fromlist_value_37;
        PyObject *tmp_level_value_37;
        tmp_name_value_37 = mod_consts[114];
        tmp_globals_arg_value_37 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_37 = Py_None;
        tmp_fromlist_value_37 = mod_consts[111];
        tmp_level_value_37 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 131;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_37, tmp_globals_arg_value_37, tmp_locals_arg_value_37, tmp_fromlist_value_37, tmp_level_value_37);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_26;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_93 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[112],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_93 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[112]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;

            goto try_except_handler_26;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_93);
    }
    goto try_end_15;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 5.
    exception_preserved_5 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_25 == NULL) {
        exception_keeper_tb_25 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_25);
    } else if (exception_keeper_lineno_25 != 0) {
        exception_keeper_tb_25 = ADD_TRACEBACK(exception_keeper_tb_25, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_25);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_25, &exception_keeper_value_25, &exception_keeper_tb_25);
    // Tried code:
    {
        bool tmp_condition_result_19;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        tmp_cmp_expr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_8 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        assert(!(tmp_res == -1));
        tmp_condition_result_19 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        PyObject *tmp_assign_source_94;
        tmp_assign_source_94 = (PyObject *)&PyDict_Type;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_94);
    }
    goto branch_end_16;
    branch_no_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 130;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_27;
    branch_end_16:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(&exception_preserved_5);

    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto try_except_handler_25;
    // End of try:
    try_end_16:;
    // Restore previous exception id 5.
    SET_CURRENT_EXCEPTION(&exception_preserved_5);

    goto try_end_15;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_15:;
    goto branch_end_15;
    branch_no_15:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 127;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_25;
    branch_end_15:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_25:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(&exception_preserved_6);

    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto frame_exception_exit_1;
    // End of try:
    try_end_17:;
    // Restore previous exception id 6.
    SET_CURRENT_EXCEPTION(&exception_preserved_6);

    goto try_end_14;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_14:;
    {
        PyObject *tmp_assign_source_95;
        PyObject *tmp_called_value_12;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        assert(!(tmp_called_value_12 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 135;
        tmp_assign_source_95 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        if (tmp_assign_source_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_1__assign_source == NULL);
        tmp_assign_unpack_1__assign_source = tmp_assign_source_95;
    }
    {
        PyObject *tmp_assign_source_96;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_96 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_96);
    }
    {
        PyObject *tmp_assign_source_97;
        CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
        tmp_assign_source_97 = tmp_assign_unpack_1__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_97);
    }
    CHECK_OBJECT(tmp_assign_unpack_1__assign_source);
    Py_DECREF(tmp_assign_unpack_1__assign_source);
    tmp_assign_unpack_1__assign_source = NULL;
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_called_value_13;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 137;
        tmp_assign_source_98 = CALL_FUNCTION_NO_ARGS(tmp_called_value_13);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_2__assign_source == NULL);
        tmp_assign_unpack_2__assign_source = tmp_assign_source_98;
    }
    {
        PyObject *tmp_assign_source_99;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_99 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_99);
    }
    {
        PyObject *tmp_assign_source_100;
        CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
        tmp_assign_source_100 = tmp_assign_unpack_2__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_100);
    }
    CHECK_OBJECT(tmp_assign_unpack_2__assign_source);
    Py_DECREF(tmp_assign_unpack_2__assign_source);
    tmp_assign_unpack_2__assign_source = NULL;
    {
        PyObject *tmp_assign_source_101;
        PyObject *tmp_called_value_14;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 139;
        tmp_assign_source_101 = CALL_FUNCTION_NO_ARGS(tmp_called_value_14);
        if (tmp_assign_source_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;

            goto frame_exception_exit_1;
        }
        assert(tmp_assign_unpack_3__assign_source == NULL);
        tmp_assign_unpack_3__assign_source = tmp_assign_source_101;
    }
    {
        PyObject *tmp_assign_source_102;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assign_source_102 = tmp_assign_unpack_3__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_102);
    }
    {
        PyObject *tmp_assign_source_103;
        CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
        tmp_assign_source_103 = tmp_assign_unpack_3__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_103);
    }
    CHECK_OBJECT(tmp_assign_unpack_3__assign_source);
    Py_DECREF(tmp_assign_unpack_3__assign_source);
    tmp_assign_unpack_3__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = Py_True;
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[117];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = LOOKUP_BUILTIN(mod_consts[118]);
        assert(tmp_ass_subvalue_2 != NULL);
        tmp_ass_subscribed_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_2 == NULL)) {
            tmp_ass_subscribed_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[119];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_3;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_ass_subscribed_3;
        PyObject *tmp_ass_subscript_3;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[119];
        tmp_ass_subvalue_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_4);
        if (tmp_ass_subvalue_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_3 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_3 == NULL)) {
            tmp_ass_subscribed_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_3);

            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_3 = mod_consts[120];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_3, tmp_ass_subscript_3, tmp_ass_subvalue_3);
        Py_DECREF(tmp_ass_subvalue_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_104;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_subscript_value_5;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_28;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 145;
        tmp_expression_value_22 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[121],
            PyTuple_GET_ITEM(mod_consts[122], 0)
        );

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_28;
        }
        tmp_subscript_value_5 = mod_consts[3];
        tmp_assign_source_104 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_22, tmp_subscript_value_5, 0);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_assign_source_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_28;
        }
        assert(tmp_assign_unpack_4__assign_source == NULL);
        tmp_assign_unpack_4__assign_source = tmp_assign_source_104;
    }
    {
        PyObject *tmp_ass_subvalue_4;
        PyObject *tmp_ass_subscribed_4;
        PyObject *tmp_ass_subscript_4;
        CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
        tmp_ass_subvalue_4 = tmp_assign_unpack_4__assign_source;
        tmp_ass_subscribed_4 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_4 == NULL)) {
            tmp_ass_subscribed_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_28;
        }
        tmp_ass_subscript_4 = mod_consts[123];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_4, tmp_ass_subscript_4, tmp_ass_subvalue_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto try_except_handler_28;
        }
    }
    goto try_end_18;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_4__assign_source);
    tmp_assign_unpack_4__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    {
        PyObject *tmp_assign_source_105;
        CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
        tmp_assign_source_105 = tmp_assign_unpack_4__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_105);
    }
    CHECK_OBJECT(tmp_assign_unpack_4__assign_source);
    Py_DECREF(tmp_assign_unpack_4__assign_source);
    tmp_assign_unpack_4__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_5;
        PyObject *tmp_ass_subscribed_5;
        PyObject *tmp_ass_subscript_5;
        tmp_ass_subvalue_5 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_ass_subvalue_5 == NULL)) {
            tmp_ass_subvalue_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_ass_subvalue_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_5 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_5 == NULL)) {
            tmp_ass_subscribed_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_5 = mod_consts[125];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_5, tmp_ass_subscript_5, tmp_ass_subvalue_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_6;
        PyObject *tmp_real_arg_1;
        PyObject *tmp_ass_subscribed_6;
        PyObject *tmp_ass_subscript_6;
        tmp_real_arg_1 = mod_consts[126];
        tmp_ass_subvalue_6 = BUILTIN_COMPLEX1(tmp_real_arg_1);
        if (tmp_ass_subvalue_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_6 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_6 == NULL)) {
            tmp_ass_subscribed_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_6);

            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_6 = mod_consts[127];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_6, tmp_ass_subscript_6, tmp_ass_subvalue_6);
        Py_DECREF(tmp_ass_subvalue_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_106;
        tmp_assign_source_106 = MAKE_DICT_EMPTY();
        assert(tmp_assign_unpack_5__assign_source == NULL);
        tmp_assign_unpack_5__assign_source = tmp_assign_source_106;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_7;
        PyObject *tmp_ass_subscribed_7;
        PyObject *tmp_ass_subscript_7;
        CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
        tmp_ass_subvalue_7 = tmp_assign_unpack_5__assign_source;
        tmp_ass_subscribed_7 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_7 == NULL)) {
            tmp_ass_subscribed_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_29;
        }
        tmp_ass_subscript_7 = mod_consts[128];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_7, tmp_ass_subscript_7, tmp_ass_subvalue_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;

            goto try_except_handler_29;
        }
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
    Py_DECREF(tmp_assign_unpack_5__assign_source);
    tmp_assign_unpack_5__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto frame_exception_exit_1;
    // End of try:
    try_end_19:;
    {
        PyObject *tmp_assign_source_107;
        CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
        tmp_assign_source_107 = tmp_assign_unpack_5__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[129], tmp_assign_source_107);
    }
    CHECK_OBJECT(tmp_assign_unpack_5__assign_source);
    Py_DECREF(tmp_assign_unpack_5__assign_source);
    tmp_assign_unpack_5__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_8;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_ass_subscribed_8;
        PyObject *tmp_ass_subscript_8;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = mod_consts[128];
        tmp_ass_subvalue_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_6);
        if (tmp_ass_subvalue_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_8 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_8 == NULL)) {
            tmp_ass_subscribed_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_8);

            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_8 = mod_consts[130];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_8, tmp_ass_subscript_8, tmp_ass_subvalue_8);
        Py_DECREF(tmp_ass_subvalue_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_9;
        PyObject *tmp_ass_subscribed_9;
        PyObject *tmp_ass_subscript_9;
        tmp_ass_subvalue_9 = mod_consts[131];
        tmp_ass_subscribed_9 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_9 == NULL)) {
            tmp_ass_subscribed_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_9 = mod_consts[132];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_9, tmp_ass_subscript_9, tmp_ass_subvalue_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_10;
        PyObject *tmp_ass_subscribed_10;
        PyObject *tmp_ass_subscript_10;
        tmp_ass_subvalue_10 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_ass_subvalue_10 == NULL)) {
            tmp_ass_subvalue_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_ass_subvalue_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_10 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_10 == NULL)) {
            tmp_ass_subscribed_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_10 = mod_consts[133];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_10, tmp_ass_subscript_10, tmp_ass_subvalue_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_called_value_15;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_30;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 152;
        tmp_assign_source_108 = CALL_FUNCTION_NO_ARGS(tmp_called_value_15);
        if (tmp_assign_source_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_30;
        }
        assert(tmp_assign_unpack_6__assign_source == NULL);
        tmp_assign_unpack_6__assign_source = tmp_assign_source_108;
    }
    {
        PyObject *tmp_ass_subvalue_11;
        PyObject *tmp_ass_subscribed_11;
        PyObject *tmp_ass_subscript_11;
        CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
        tmp_ass_subvalue_11 = tmp_assign_unpack_6__assign_source;
        tmp_ass_subscribed_11 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_11 == NULL)) {
            tmp_ass_subscribed_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_30;
        }
        tmp_ass_subscript_11 = mod_consts[134];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_11, tmp_ass_subscript_11, tmp_ass_subvalue_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto try_except_handler_30;
        }
    }
    goto try_end_20;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_6__assign_source);
    tmp_assign_unpack_6__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto frame_exception_exit_1;
    // End of try:
    try_end_20:;
    {
        PyObject *tmp_assign_source_109;
        CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
        tmp_assign_source_109 = tmp_assign_unpack_6__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[135], tmp_assign_source_109);
    }
    CHECK_OBJECT(tmp_assign_unpack_6__assign_source);
    Py_DECREF(tmp_assign_unpack_6__assign_source);
    tmp_assign_unpack_6__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_12;
        PyObject *tmp_ass_subscribed_12;
        PyObject *tmp_ass_subscript_12;
        tmp_ass_subvalue_12 = mod_consts[126];
        tmp_ass_subscribed_12 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_12 == NULL)) {
            tmp_ass_subscribed_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_12 = mod_consts[136];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_12, tmp_ass_subscript_12, tmp_ass_subvalue_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_110;
        tmp_assign_source_110 = mod_consts[126];
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_110);
    }
    {
        PyObject *tmp_assign_source_111;
        tmp_assign_source_111 = MAKE_LIST_EMPTY(0);
        assert(tmp_assign_unpack_8__assign_source == NULL);
        tmp_assign_unpack_8__assign_source = tmp_assign_source_111;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_13;
        PyObject *tmp_ass_subscribed_13;
        PyObject *tmp_ass_subscript_13;
        CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
        tmp_ass_subvalue_13 = tmp_assign_unpack_8__assign_source;
        tmp_ass_subscribed_13 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_13 == NULL)) {
            tmp_ass_subscribed_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_31;
        }
        tmp_ass_subscript_13 = mod_consts[138];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_13, tmp_ass_subscript_13, tmp_ass_subvalue_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;

            goto try_except_handler_31;
        }
    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
    Py_DECREF(tmp_assign_unpack_8__assign_source);
    tmp_assign_unpack_8__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_31;
    exception_value = exception_keeper_value_31;
    exception_tb = exception_keeper_tb_31;
    exception_lineno = exception_keeper_lineno_31;

    goto frame_exception_exit_1;
    // End of try:
    try_end_21:;
    {
        PyObject *tmp_assign_source_112;
        CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
        tmp_assign_source_112 = tmp_assign_unpack_8__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_112);
    }
    CHECK_OBJECT(tmp_assign_unpack_8__assign_source);
    Py_DECREF(tmp_assign_unpack_8__assign_source);
    tmp_assign_unpack_8__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_14;
        PyObject *tmp_ass_subscribed_14;
        PyObject *tmp_ass_subscript_14;
        tmp_ass_subvalue_14 = Py_None;
        tmp_ass_subscribed_14 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_14 == NULL)) {
            tmp_ass_subscribed_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_14 = mod_consts[140];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_14, tmp_ass_subscript_14, tmp_ass_subvalue_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_15;
        PyObject *tmp_called_value_16;
        PyObject *tmp_ass_subscribed_15;
        PyObject *tmp_ass_subscript_15;
        tmp_called_value_16 = (PyObject *)&PyBaseObject_Type;
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 156;
        tmp_ass_subvalue_15 = CALL_FUNCTION_NO_ARGS(tmp_called_value_16);
        if (tmp_ass_subvalue_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_15 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_15 == NULL)) {
            tmp_ass_subscribed_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_15);

            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_15 = mod_consts[141];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_15, tmp_ass_subscript_15, tmp_ass_subvalue_15);
        Py_DECREF(tmp_ass_subvalue_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_16;
        PyObject *tmp_ass_subscribed_16;
        PyObject *tmp_ass_subscript_16;
        tmp_ass_subvalue_16 = mod_consts[142];
        tmp_ass_subscribed_16 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_16 == NULL)) {
            tmp_ass_subscribed_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_16 = mod_consts[143];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_16, tmp_ass_subscript_16, tmp_ass_subvalue_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = mod_consts[142];
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[144], tmp_assign_source_113);
    }
    {
        PyObject *tmp_ass_subvalue_17;
        PyObject *tmp_ass_subscribed_17;
        PyObject *tmp_ass_subscript_17;
        tmp_ass_subvalue_17 = mod_consts[78];
        tmp_ass_subscribed_17 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_17 == NULL)) {
            tmp_ass_subscribed_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_17 = mod_consts[145];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_17, tmp_ass_subscript_17, tmp_ass_subvalue_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_114;
        tmp_assign_source_114 = mod_consts[78];
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_114);
    }
    {
        PyObject *tmp_ass_subvalue_18;
        PyObject *tmp_ass_subscribed_18;
        PyObject *tmp_ass_subscript_18;
        tmp_ass_subvalue_18 = (PyObject *)&PyType_Type;
        tmp_ass_subscribed_18 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_18 == NULL)) {
            tmp_ass_subscribed_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_18 = mod_consts[147];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_18, tmp_ass_subscript_18, tmp_ass_subvalue_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 159;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_20;
        PyObject *tmp_mvar_value_3;
        int tmp_truth_name_6;
        tmp_mvar_value_3 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_mvar_value_3 == NULL)) {
            tmp_mvar_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_mvar_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_6 = CHECK_IF_TRUE(tmp_mvar_value_3);
        if (tmp_truth_name_6 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_20 = tmp_truth_name_6 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_20 == NUITKA_BOOL_TRUE) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    {
        PyObject *tmp_ass_subvalue_19;
        PyObject *tmp_ass_subscribed_19;
        PyObject *tmp_ass_subscript_19;
        tmp_ass_subvalue_19 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[137]);

        if (unlikely(tmp_ass_subvalue_19 == NULL)) {
            tmp_ass_subvalue_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[137]);
        }

        if (tmp_ass_subvalue_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_19 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_19 == NULL)) {
            tmp_ass_subscribed_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_19 = mod_consts[148];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_19, tmp_ass_subscript_19, tmp_ass_subvalue_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_20;
        PyObject *tmp_ass_subscribed_20;
        PyObject *tmp_ass_subscript_20;
        tmp_ass_subvalue_20 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_ass_subvalue_20 == NULL)) {
            tmp_ass_subvalue_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_ass_subvalue_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_20 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_20 == NULL)) {
            tmp_ass_subscribed_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_20 = mod_consts[149];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_20, tmp_ass_subscript_20, tmp_ass_subvalue_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;

            goto frame_exception_exit_1;
        }
    }
    goto branch_end_17;
    branch_no_17:;
    {
        PyObject *tmp_ass_subvalue_21;
        PyObject *tmp_called_value_17;
        PyObject *tmp_ass_subscribed_21;
        PyObject *tmp_ass_subscript_21;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[150]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[150]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 164;
        tmp_ass_subvalue_21 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[151]);

        if (tmp_ass_subvalue_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_21 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_21 == NULL)) {
            tmp_ass_subscribed_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_21);

            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_21 = mod_consts[148];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_21, tmp_ass_subscript_21, tmp_ass_subvalue_21);
        Py_DECREF(tmp_ass_subvalue_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_22;
        PyObject *tmp_called_value_18;
        PyObject *tmp_ass_subscribed_22;
        PyObject *tmp_ass_subscript_22;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[152]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[152]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 165;
        tmp_ass_subvalue_22 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_18, mod_consts[151]);

        if (tmp_ass_subvalue_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_22 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_22 == NULL)) {
            tmp_ass_subscribed_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_22);

            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_22 = mod_consts[149];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_22, tmp_ass_subscript_22, tmp_ass_subvalue_22);
        Py_DECREF(tmp_ass_subvalue_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;

            goto frame_exception_exit_1;
        }
    }
    branch_end_17:;
    {
        PyObject *tmp_ass_subvalue_23;
        PyObject *tmp_ass_subscribed_23;
        PyObject *tmp_ass_subscript_23;
        tmp_ass_subvalue_23 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[153]);

        if (unlikely(tmp_ass_subvalue_23 == NULL)) {
            tmp_ass_subvalue_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[153]);
        }

        if (tmp_ass_subvalue_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_23 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_23 == NULL)) {
            tmp_ass_subscribed_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_23 = mod_consts[154];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_23, tmp_ass_subscript_23, tmp_ass_subvalue_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_24;
        PyObject *tmp_ass_subscribed_24;
        PyObject *tmp_ass_subscript_24;
        tmp_ass_subvalue_24 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_ass_subvalue_24 == NULL)) {
            tmp_ass_subvalue_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_ass_subvalue_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_24 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_24 == NULL)) {
            tmp_ass_subscribed_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_24 = mod_consts[155];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_24, tmp_ass_subscript_24, tmp_ass_subvalue_24);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_25;
        PyObject *tmp_called_value_19;
        PyObject *tmp_ass_subscribed_25;
        PyObject *tmp_ass_subscript_25;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 170;
        tmp_ass_subvalue_25 = CALL_FUNCTION_NO_ARGS(tmp_called_value_19);
        if (tmp_ass_subvalue_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_25 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_25 == NULL)) {
            tmp_ass_subscribed_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_25);

            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_25 = mod_consts[156];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_25, tmp_ass_subscript_25, tmp_ass_subvalue_25);
        Py_DECREF(tmp_ass_subvalue_25);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_115;
        tmp_assign_source_115 = PySet_New(NULL);
        assert(tmp_assign_unpack_11__assign_source == NULL);
        tmp_assign_unpack_11__assign_source = tmp_assign_source_115;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_26;
        PyObject *tmp_ass_subscribed_26;
        PyObject *tmp_ass_subscript_26;
        CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
        tmp_ass_subvalue_26 = tmp_assign_unpack_11__assign_source;
        tmp_ass_subscribed_26 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_26 == NULL)) {
            tmp_ass_subscribed_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_32;
        }
        tmp_ass_subscript_26 = mod_consts[157];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_26, tmp_ass_subscript_26, tmp_ass_subvalue_26);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto try_except_handler_32;
        }
    }
    goto try_end_22;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
    Py_DECREF(tmp_assign_unpack_11__assign_source);
    tmp_assign_unpack_11__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto frame_exception_exit_1;
    // End of try:
    try_end_22:;
    {
        PyObject *tmp_assign_source_116;
        CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
        tmp_assign_source_116 = tmp_assign_unpack_11__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_116);
    }
    CHECK_OBJECT(tmp_assign_unpack_11__assign_source);
    Py_DECREF(tmp_assign_unpack_11__assign_source);
    tmp_assign_unpack_11__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_27;
        PyObject *tmp_ass_subscribed_27;
        PyObject *tmp_ass_subscript_27;
        tmp_ass_subvalue_27 = mod_consts[159];
        tmp_ass_subscribed_27 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_27 == NULL)) {
            tmp_ass_subscribed_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_27 = mod_consts[160];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_27, tmp_ass_subscript_27, tmp_ass_subvalue_27);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_called_value_20;
        PyObject *tmp_subscript_value_7;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_33;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 174;
        tmp_expression_value_24 = CALL_FUNCTION_NO_ARGS(tmp_called_value_20);
        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_33;
        }
        tmp_subscript_value_7 = mod_consts[3];
        tmp_assign_source_117 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_24, tmp_subscript_value_7, 0);
        Py_DECREF(tmp_expression_value_24);
        if (tmp_assign_source_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_33;
        }
        assert(tmp_assign_unpack_12__assign_source == NULL);
        tmp_assign_unpack_12__assign_source = tmp_assign_source_117;
    }
    {
        PyObject *tmp_ass_subvalue_28;
        PyObject *tmp_ass_subscribed_28;
        PyObject *tmp_ass_subscript_28;
        CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
        tmp_ass_subvalue_28 = tmp_assign_unpack_12__assign_source;
        tmp_ass_subscribed_28 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_28 == NULL)) {
            tmp_ass_subscribed_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_33;
        }
        tmp_ass_subscript_28 = mod_consts[161];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_28, tmp_ass_subscript_28, tmp_ass_subvalue_28);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;

            goto try_except_handler_33;
        }
    }
    goto try_end_23;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_12__assign_source);
    tmp_assign_unpack_12__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto frame_exception_exit_1;
    // End of try:
    try_end_23:;
    {
        PyObject *tmp_assign_source_118;
        CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
        tmp_assign_source_118 = tmp_assign_unpack_12__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[162], tmp_assign_source_118);
    }
    CHECK_OBJECT(tmp_assign_unpack_12__assign_source);
    Py_DECREF(tmp_assign_unpack_12__assign_source);
    tmp_assign_unpack_12__assign_source = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_119;
        PyObject *tmp_called_instance_4;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_34;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 176;
        tmp_assign_source_119 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[163],
            PyTuple_GET_ITEM(mod_consts[164], 0)
        );

        if (tmp_assign_source_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_34;
        }
        assert(tmp_assign_unpack_13__assign_source == NULL);
        tmp_assign_unpack_13__assign_source = tmp_assign_source_119;
    }
    {
        PyObject *tmp_ass_subvalue_29;
        PyObject *tmp_ass_subscribed_29;
        PyObject *tmp_ass_subscript_29;
        CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
        tmp_ass_subvalue_29 = tmp_assign_unpack_13__assign_source;
        tmp_ass_subscribed_29 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_29 == NULL)) {
            tmp_ass_subscribed_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_34;
        }
        tmp_ass_subscript_29 = mod_consts[165];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_29, tmp_ass_subscript_29, tmp_ass_subvalue_29);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto try_except_handler_34;
        }
    }
    goto try_end_24;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_13__assign_source);
    tmp_assign_unpack_13__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto frame_exception_exit_1;
    // End of try:
    try_end_24:;
    {
        PyObject *tmp_assign_source_120;
        CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
        tmp_assign_source_120 = tmp_assign_unpack_13__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[166], tmp_assign_source_120);
    }
    CHECK_OBJECT(tmp_assign_unpack_13__assign_source);
    Py_DECREF(tmp_assign_unpack_13__assign_source);
    tmp_assign_unpack_13__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_30;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_ass_subscribed_30;
        PyObject *tmp_ass_subscript_30;
        tmp_called_instance_5 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_instance_5 == NULL)) {
            tmp_called_instance_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 178;
        tmp_ass_subvalue_30 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[34],
            PyTuple_GET_ITEM(mod_consts[167], 0)
        );

        if (tmp_ass_subvalue_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_30 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_30 == NULL)) {
            tmp_ass_subscribed_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_30);

            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_30 = mod_consts[168];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_30, tmp_ass_subscript_30, tmp_ass_subvalue_30);
        Py_DECREF(tmp_ass_subvalue_30);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_31;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_ass_subscribed_31;
        PyObject *tmp_ass_subscript_31;
        tmp_called_instance_6 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_called_instance_6 == NULL)) {
            tmp_called_instance_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_LIST1(mod_consts[3]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 179;
        tmp_ass_subvalue_31 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[169], tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_ass_subvalue_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_31 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_31 == NULL)) {
            tmp_ass_subscribed_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_31);

            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_31 = mod_consts[170];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_31, tmp_ass_subscript_31, tmp_ass_subvalue_31);
        Py_DECREF(tmp_ass_subvalue_31);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_32;
        PyObject *tmp_called_value_21;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_ass_subscribed_32;
        PyObject *tmp_ass_subscript_32;
        tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_25 == NULL)) {
            tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[171]);
        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_3 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_3 == NULL)) {
            tmp_args_element_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_21);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 180;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_ass_subvalue_32 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_21, call_args);
        }

        Py_DECREF(tmp_called_value_21);
        if (tmp_ass_subvalue_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_32 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_32 == NULL)) {
            tmp_ass_subscribed_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_32);

            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_32 = mod_consts[172];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_32, tmp_ass_subscript_32, tmp_ass_subvalue_32);
        Py_DECREF(tmp_ass_subvalue_32);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_33;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_ass_subscribed_33;
        PyObject *tmp_ass_subscript_33;
        tmp_called_instance_7 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_7 == NULL)) {
            tmp_called_instance_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 181;
        tmp_ass_subvalue_33 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[173]);
        if (tmp_ass_subvalue_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_33 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_33 == NULL)) {
            tmp_ass_subscribed_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_33);

            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_33 = mod_consts[174];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_33, tmp_ass_subscript_33, tmp_ass_subvalue_33);
        Py_DECREF(tmp_ass_subvalue_33);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_34;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_ass_subscribed_34;
        PyObject *tmp_ass_subscript_34;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[38]);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 182;
        tmp_ass_subvalue_34 = CALL_METHOD_NO_ARGS(tmp_called_instance_8, mod_consts[175]);
        Py_DECREF(tmp_called_instance_8);
        if (tmp_ass_subvalue_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_34 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_34 == NULL)) {
            tmp_ass_subscribed_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_34);

            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_34 = mod_consts[176];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_34, tmp_ass_subscript_34, tmp_ass_subvalue_34);
        Py_DECREF(tmp_ass_subvalue_34);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_35;
        PyObject *tmp_called_instance_9;
        PyObject *tmp_ass_subscribed_35;
        PyObject *tmp_ass_subscript_35;
        tmp_called_instance_9 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[39]);

        if (unlikely(tmp_called_instance_9 == NULL)) {
            tmp_called_instance_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[39]);
        }

        if (tmp_called_instance_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 183;
        tmp_ass_subvalue_35 = CALL_METHOD_NO_ARGS(tmp_called_instance_9, mod_consts[177]);
        if (tmp_ass_subvalue_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_35 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_35 == NULL)) {
            tmp_ass_subscribed_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_35);

            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_35 = mod_consts[178];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_35, tmp_ass_subscript_35, tmp_ass_subvalue_35);
        Py_DECREF(tmp_ass_subvalue_35);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 183;

            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_21;
        PyObject *tmp_operand_value_5;
        tmp_operand_value_5 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_operand_value_5 == NULL)) {
            tmp_operand_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 184;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_21 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_ass_subvalue_36;
        PyObject *tmp_called_instance_10;
        PyObject *tmp_ass_subscribed_36;
        PyObject *tmp_ass_subscript_36;
        tmp_called_instance_10 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_called_instance_10 == NULL)) {
            tmp_called_instance_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        if (tmp_called_instance_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 185;
        tmp_ass_subvalue_36 = CALL_METHOD_NO_ARGS(tmp_called_instance_10, mod_consts[180]);
        if (tmp_ass_subvalue_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_36 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_36 == NULL)) {
            tmp_ass_subscribed_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_36);

            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_36 = mod_consts[181];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_36, tmp_ass_subscript_36, tmp_ass_subvalue_36);
        Py_DECREF(tmp_ass_subvalue_36);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_37;
        PyObject *tmp_called_instance_11;
        PyObject *tmp_ass_subscribed_37;
        PyObject *tmp_ass_subscript_37;
        tmp_called_instance_11 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_called_instance_11 == NULL)) {
            tmp_called_instance_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        if (tmp_called_instance_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 186;
        tmp_ass_subvalue_37 = CALL_METHOD_NO_ARGS(tmp_called_instance_11, mod_consts[182]);
        if (tmp_ass_subvalue_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_37 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_37 == NULL)) {
            tmp_ass_subscribed_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_37);

            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_37 = mod_consts[183];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_37, tmp_ass_subscript_37, tmp_ass_subvalue_37);
        Py_DECREF(tmp_ass_subvalue_37);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_38;
        PyObject *tmp_called_instance_12;
        PyObject *tmp_ass_subscribed_38;
        PyObject *tmp_ass_subscript_38;
        tmp_called_instance_12 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[184]);

        if (unlikely(tmp_called_instance_12 == NULL)) {
            tmp_called_instance_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
        }

        if (tmp_called_instance_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 187;
        tmp_ass_subvalue_38 = CALL_METHOD_NO_ARGS(tmp_called_instance_12, mod_consts[184]);
        if (tmp_ass_subvalue_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_38 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_38 == NULL)) {
            tmp_ass_subscribed_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_38);

            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_38 = mod_consts[185];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_38, tmp_ass_subscript_38, tmp_ass_subvalue_38);
        Py_DECREF(tmp_ass_subvalue_38);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 187;

            goto frame_exception_exit_1;
        }
    }
    branch_no_18:;
    {
        PyObject *tmp_ass_subvalue_39;
        PyObject *tmp_called_instance_13;
        PyObject *tmp_ass_subscribed_39;
        PyObject *tmp_ass_subscript_39;
        tmp_called_instance_13 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_instance_13 == NULL)) {
            tmp_called_instance_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_instance_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 189;
        tmp_ass_subvalue_39 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_13,
            mod_consts[186],
            PyTuple_GET_ITEM(mod_consts[151], 0)
        );

        if (tmp_ass_subvalue_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_39 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_39 == NULL)) {
            tmp_ass_subscribed_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_39);

            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_39 = mod_consts[187];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_39, tmp_ass_subscript_39, tmp_ass_subvalue_39);
        Py_DECREF(tmp_ass_subvalue_39);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_40;
        PyObject *tmp_called_value_22;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_ass_subscribed_40;
        PyObject *tmp_ass_subscript_40;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[188]);
        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 190;
        tmp_ass_subvalue_40 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_22, mod_consts[189]);

        Py_DECREF(tmp_called_value_22);
        if (tmp_ass_subvalue_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_40 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_40 == NULL)) {
            tmp_ass_subscribed_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_40);

            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_40 = mod_consts[190];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_40, tmp_ass_subscript_40, tmp_ass_subvalue_40);
        Py_DECREF(tmp_ass_subvalue_40);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_41;
        PyObject *tmp_called_instance_14;
        PyObject *tmp_ass_subscribed_41;
        PyObject *tmp_ass_subscript_41;
        tmp_called_instance_14 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_called_instance_14 == NULL)) {
            tmp_called_instance_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_called_instance_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 192;
        tmp_ass_subvalue_41 = CALL_METHOD_NO_ARGS(tmp_called_instance_14, mod_consts[191]);
        if (tmp_ass_subvalue_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_41 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_41 == NULL)) {
            tmp_ass_subscribed_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_41);

            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_41 = mod_consts[192];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_41, tmp_ass_subscript_41, tmp_ass_subvalue_41);
        Py_DECREF(tmp_ass_subvalue_41);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_42;
        PyObject *tmp_called_instance_15;
        PyObject *tmp_ass_subscribed_42;
        PyObject *tmp_ass_subscript_42;
        tmp_called_instance_15 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_15 == NULL)) {
            tmp_called_instance_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 194;
        tmp_ass_subvalue_42 = CALL_METHOD_NO_ARGS(tmp_called_instance_15, mod_consts[193]);
        if (tmp_ass_subvalue_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_42 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_42 == NULL)) {
            tmp_ass_subscribed_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_42);

            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_42 = mod_consts[194];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_42, tmp_ass_subscript_42, tmp_ass_subvalue_42);
        Py_DECREF(tmp_ass_subvalue_42);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_43;
        PyObject *tmp_called_instance_16;
        PyObject *tmp_ass_subscribed_43;
        PyObject *tmp_ass_subscript_43;
        tmp_called_instance_16 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_16 == NULL)) {
            tmp_called_instance_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 195;
        tmp_ass_subvalue_43 = CALL_METHOD_NO_ARGS(tmp_called_instance_16, mod_consts[195]);
        if (tmp_ass_subvalue_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_43 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_43 == NULL)) {
            tmp_ass_subscribed_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_43);

            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_43 = mod_consts[196];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_43, tmp_ass_subscript_43, tmp_ass_subvalue_43);
        Py_DECREF(tmp_ass_subvalue_43);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_44;
        PyObject *tmp_called_instance_17;
        PyObject *tmp_ass_subscribed_44;
        PyObject *tmp_ass_subscript_44;
        tmp_called_instance_17 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_17 == NULL)) {
            tmp_called_instance_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 196;
        tmp_ass_subvalue_44 = CALL_METHOD_NO_ARGS(tmp_called_instance_17, mod_consts[197]);
        if (tmp_ass_subvalue_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_44 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_44 == NULL)) {
            tmp_ass_subscribed_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_44);

            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_44 = mod_consts[198];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_44, tmp_ass_subscript_44, tmp_ass_subvalue_44);
        Py_DECREF(tmp_ass_subvalue_44);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_45;
        PyObject *tmp_called_value_23;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_ass_subscribed_45;
        PyObject *tmp_ass_subscript_45;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[199]);
        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_4 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_4 == NULL)) {
            tmp_args_element_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_23);

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 197;
        tmp_ass_subvalue_45 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_23);
        if (tmp_ass_subvalue_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_45 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_45 == NULL)) {
            tmp_ass_subscribed_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_45);

            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_45 = mod_consts[200];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_45, tmp_ass_subscript_45, tmp_ass_subvalue_45);
        Py_DECREF(tmp_ass_subvalue_45);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_called_instance_18;
        tmp_called_instance_18 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_instance_18 == NULL)) {
            tmp_called_instance_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_instance_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_35;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 198;
        tmp_assign_source_121 = CALL_METHOD_NO_ARGS(tmp_called_instance_18, mod_consts[201]);
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_35;
        }
        assert(tmp_assign_unpack_14__assign_source == NULL);
        tmp_assign_unpack_14__assign_source = tmp_assign_source_121;
    }
    {
        PyObject *tmp_ass_subvalue_46;
        PyObject *tmp_ass_subscribed_46;
        PyObject *tmp_ass_subscript_46;
        CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
        tmp_ass_subvalue_46 = tmp_assign_unpack_14__assign_source;
        tmp_ass_subscribed_46 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_46 == NULL)) {
            tmp_ass_subscribed_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_35;
        }
        tmp_ass_subscript_46 = mod_consts[202];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_46, tmp_ass_subscript_46, tmp_ass_subvalue_46);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;

            goto try_except_handler_35;
        }
    }
    goto try_end_25;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_14__assign_source);
    tmp_assign_unpack_14__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto frame_exception_exit_1;
    // End of try:
    try_end_25:;
    {
        PyObject *tmp_assign_source_122;
        CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
        tmp_assign_source_122 = tmp_assign_unpack_14__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_122);
    }
    CHECK_OBJECT(tmp_assign_unpack_14__assign_source);
    Py_DECREF(tmp_assign_unpack_14__assign_source);
    tmp_assign_unpack_14__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_47;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_ass_subscribed_47;
        PyObject *tmp_ass_subscript_47;
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[204]);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_args_element_value_5 == NULL)) {
            tmp_args_element_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
        }

        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_24);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_6 = mod_consts[205];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_ass_subvalue_47 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_24, call_args);
        }

        Py_DECREF(tmp_called_value_24);
        if (tmp_ass_subvalue_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_47 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_47 == NULL)) {
            tmp_ass_subscribed_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_47);

            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_47 = mod_consts[206];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_47, tmp_ass_subscript_47, tmp_ass_subvalue_47);
        Py_DECREF(tmp_ass_subvalue_47);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_48;
        PyObject *tmp_called_instance_19;
        PyObject *tmp_ass_subscribed_48;
        PyObject *tmp_ass_subscript_48;
        tmp_called_instance_19 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_instance_19 == NULL)) {
            tmp_called_instance_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_instance_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 200;
        tmp_ass_subvalue_48 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_19,
            mod_consts[207],
            PyTuple_GET_ITEM(mod_consts[208], 0)
        );

        if (tmp_ass_subvalue_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_48 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_48 == NULL)) {
            tmp_ass_subscribed_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_48);

            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_48 = mod_consts[209];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_48, tmp_ass_subscript_48, tmp_ass_subvalue_48);
        Py_DECREF(tmp_ass_subvalue_48);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_mvar_value_4;
        int tmp_truth_name_7;
        tmp_mvar_value_4 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_mvar_value_4 == NULL)) {
            tmp_mvar_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_mvar_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_7 = CHECK_IF_TRUE(tmp_mvar_value_4);
        if (tmp_truth_name_7 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_22 = tmp_truth_name_7 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    // Tried code:
    {
        PyObject *tmp_assign_source_123;
        PyObject *tmp_called_instance_20;
        tmp_called_instance_20 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_20 == NULL)) {
            tmp_called_instance_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_20 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 202;
        tmp_assign_source_123 = CALL_METHOD_NO_ARGS(tmp_called_instance_20, mod_consts[210]);
        if (tmp_assign_source_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_36;
        }
        assert(tmp_assign_unpack_15__assign_source == NULL);
        tmp_assign_unpack_15__assign_source = tmp_assign_source_123;
    }
    {
        PyObject *tmp_ass_subvalue_49;
        PyObject *tmp_ass_subscribed_49;
        PyObject *tmp_ass_subscript_49;
        CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
        tmp_ass_subvalue_49 = tmp_assign_unpack_15__assign_source;
        tmp_ass_subscribed_49 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_49 == NULL)) {
            tmp_ass_subscribed_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_36;
        }
        tmp_ass_subscript_49 = mod_consts[211];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_49, tmp_ass_subscript_49, tmp_ass_subvalue_49);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;

            goto try_except_handler_36;
        }
    }
    goto try_end_26;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_15__assign_source);
    tmp_assign_unpack_15__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    {
        PyObject *tmp_assign_source_124;
        CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
        tmp_assign_source_124 = tmp_assign_unpack_15__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_124);
    }
    CHECK_OBJECT(tmp_assign_unpack_15__assign_source);
    Py_DECREF(tmp_assign_unpack_15__assign_source);
    tmp_assign_unpack_15__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_50;
        PyObject *tmp_called_instance_21;
        PyObject *tmp_ass_subscribed_50;
        PyObject *tmp_ass_subscript_50;
        tmp_called_instance_21 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_21 == NULL)) {
            tmp_called_instance_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_21 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 203;
        tmp_ass_subvalue_50 = CALL_METHOD_NO_ARGS(tmp_called_instance_21, mod_consts[213]);
        if (tmp_ass_subvalue_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_50 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_50 == NULL)) {
            tmp_ass_subscribed_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_50);

            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_50 = mod_consts[214];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_50, tmp_ass_subscript_50, tmp_ass_subvalue_50);
        Py_DECREF(tmp_ass_subvalue_50);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_51;
        PyObject *tmp_called_instance_22;
        PyObject *tmp_ass_subscribed_51;
        PyObject *tmp_ass_subscript_51;
        tmp_called_instance_22 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_22 == NULL)) {
            tmp_called_instance_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_22 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 204;
        tmp_ass_subvalue_51 = CALL_METHOD_NO_ARGS(tmp_called_instance_22, mod_consts[215]);
        if (tmp_ass_subvalue_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_51 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_51 == NULL)) {
            tmp_ass_subscribed_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_51);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_51 = mod_consts[216];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_51, tmp_ass_subscript_51, tmp_ass_subvalue_51);
        Py_DECREF(tmp_ass_subvalue_51);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_52;
        PyObject *tmp_called_instance_23;
        PyObject *tmp_ass_subscribed_52;
        PyObject *tmp_ass_subscript_52;
        tmp_called_instance_23 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_23 == NULL)) {
            tmp_called_instance_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_23 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 205;
        tmp_ass_subvalue_52 = CALL_METHOD_NO_ARGS(tmp_called_instance_23, mod_consts[217]);
        if (tmp_ass_subvalue_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_52 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_52 == NULL)) {
            tmp_ass_subscribed_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_52);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_52 = mod_consts[218];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_52, tmp_ass_subscript_52, tmp_ass_subvalue_52);
        Py_DECREF(tmp_ass_subvalue_52);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_53;
        PyObject *tmp_called_instance_24;
        PyObject *tmp_ass_subscribed_53;
        PyObject *tmp_ass_subscript_53;
        tmp_called_instance_24 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_24 == NULL)) {
            tmp_called_instance_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_24 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 206;
        tmp_ass_subvalue_53 = CALL_METHOD_NO_ARGS(tmp_called_instance_24, mod_consts[219]);
        if (tmp_ass_subvalue_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_53 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_53 == NULL)) {
            tmp_ass_subscribed_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_53);

            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_53 = mod_consts[220];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_53, tmp_ass_subscript_53, tmp_ass_subvalue_53);
        Py_DECREF(tmp_ass_subvalue_53);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_54;
        PyObject *tmp_called_instance_25;
        PyObject *tmp_ass_subscribed_54;
        PyObject *tmp_ass_subscript_54;
        tmp_called_instance_25 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_25 == NULL)) {
            tmp_called_instance_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_25 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 207;
        tmp_ass_subvalue_54 = CALL_METHOD_NO_ARGS(tmp_called_instance_25, mod_consts[221]);
        if (tmp_ass_subvalue_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_54 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_54 == NULL)) {
            tmp_ass_subscribed_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_54);

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_54 = mod_consts[222];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_54, tmp_ass_subscript_54, tmp_ass_subvalue_54);
        Py_DECREF(tmp_ass_subvalue_54);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_55;
        PyObject *tmp_called_instance_26;
        PyObject *tmp_ass_subscribed_55;
        PyObject *tmp_ass_subscript_55;
        tmp_called_instance_26 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_26 == NULL)) {
            tmp_called_instance_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_26 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 208;
        tmp_ass_subvalue_55 = CALL_METHOD_NO_ARGS(tmp_called_instance_26, mod_consts[99]);
        if (tmp_ass_subvalue_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_55 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_55 == NULL)) {
            tmp_ass_subscribed_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_55);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_55 = mod_consts[223];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_55, tmp_ass_subscript_55, tmp_ass_subvalue_55);
        Py_DECREF(tmp_ass_subvalue_55);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_56;
        PyObject *tmp_called_instance_27;
        PyObject *tmp_ass_subscribed_56;
        PyObject *tmp_ass_subscript_56;
        tmp_called_instance_27 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_27 == NULL)) {
            tmp_called_instance_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_27 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 209;
        tmp_ass_subvalue_56 = CALL_METHOD_NO_ARGS(tmp_called_instance_27, mod_consts[224]);
        if (tmp_ass_subvalue_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_56 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_56 == NULL)) {
            tmp_ass_subscribed_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_56);

            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_56 = mod_consts[225];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_56, tmp_ass_subscript_56, tmp_ass_subvalue_56);
        Py_DECREF(tmp_ass_subvalue_56);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_57;
        PyObject *tmp_called_instance_28;
        PyObject *tmp_ass_subscribed_57;
        PyObject *tmp_ass_subscript_57;
        tmp_called_instance_28 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_28 == NULL)) {
            tmp_called_instance_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_28 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 210;
        tmp_ass_subvalue_57 = CALL_METHOD_NO_ARGS(tmp_called_instance_28, mod_consts[226]);
        if (tmp_ass_subvalue_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_57 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_57 == NULL)) {
            tmp_ass_subscribed_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_57);

            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_57 = mod_consts[227];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_57, tmp_ass_subscript_57, tmp_ass_subvalue_57);
        Py_DECREF(tmp_ass_subvalue_57);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_58;
        PyObject *tmp_called_instance_29;
        PyObject *tmp_ass_subscribed_58;
        PyObject *tmp_ass_subscript_58;
        tmp_called_instance_29 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_29 == NULL)) {
            tmp_called_instance_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_29 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 211;
        tmp_ass_subvalue_58 = CALL_METHOD_NO_ARGS(tmp_called_instance_29, mod_consts[228]);
        if (tmp_ass_subvalue_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_58 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_58 == NULL)) {
            tmp_ass_subscribed_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_58);

            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_58 = mod_consts[229];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_58, tmp_ass_subscript_58, tmp_ass_subvalue_58);
        Py_DECREF(tmp_ass_subvalue_58);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 211;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_59;
        PyObject *tmp_called_instance_30;
        PyObject *tmp_ass_subscribed_59;
        PyObject *tmp_ass_subscript_59;
        tmp_called_instance_30 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_30 == NULL)) {
            tmp_called_instance_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_30 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 212;
        tmp_ass_subvalue_59 = CALL_METHOD_NO_ARGS(tmp_called_instance_30, mod_consts[230]);
        if (tmp_ass_subvalue_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_59 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_59 == NULL)) {
            tmp_ass_subscribed_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_59);

            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_59 = mod_consts[231];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_59, tmp_ass_subscript_59, tmp_ass_subvalue_59);
        Py_DECREF(tmp_ass_subvalue_59);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_60;
        PyObject *tmp_called_instance_31;
        PyObject *tmp_ass_subscribed_60;
        PyObject *tmp_ass_subscript_60;
        tmp_called_instance_31 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_31 == NULL)) {
            tmp_called_instance_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_31 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 213;
        tmp_ass_subvalue_60 = CALL_METHOD_NO_ARGS(tmp_called_instance_31, mod_consts[232]);
        if (tmp_ass_subvalue_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_60 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_60 == NULL)) {
            tmp_ass_subscribed_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_60);

            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_60 = mod_consts[233];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_60, tmp_ass_subscript_60, tmp_ass_subvalue_60);
        Py_DECREF(tmp_ass_subvalue_60);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_61;
        PyObject *tmp_called_instance_32;
        PyObject *tmp_ass_subscribed_61;
        PyObject *tmp_ass_subscript_61;
        tmp_called_instance_32 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_32 == NULL)) {
            tmp_called_instance_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_32 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 214;
        tmp_ass_subvalue_61 = CALL_METHOD_NO_ARGS(tmp_called_instance_32, mod_consts[234]);
        if (tmp_ass_subvalue_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_61 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_61 == NULL)) {
            tmp_ass_subscribed_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_61);

            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_61 = mod_consts[235];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_61, tmp_ass_subscript_61, tmp_ass_subvalue_61);
        Py_DECREF(tmp_ass_subvalue_61);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_62;
        PyObject *tmp_called_instance_33;
        PyObject *tmp_ass_subscribed_62;
        PyObject *tmp_ass_subscript_62;
        tmp_called_instance_33 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_33 == NULL)) {
            tmp_called_instance_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_33 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 215;
        tmp_ass_subvalue_62 = CALL_METHOD_NO_ARGS(tmp_called_instance_33, mod_consts[236]);
        if (tmp_ass_subvalue_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_62 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_62 == NULL)) {
            tmp_ass_subscribed_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_62);

            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_62 = mod_consts[237];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_62, tmp_ass_subscript_62, tmp_ass_subvalue_62);
        Py_DECREF(tmp_ass_subvalue_62);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_63;
        PyObject *tmp_called_instance_34;
        PyObject *tmp_ass_subscribed_63;
        PyObject *tmp_ass_subscript_63;
        tmp_called_instance_34 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_34 == NULL)) {
            tmp_called_instance_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_34 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 216;
        tmp_ass_subvalue_63 = CALL_METHOD_NO_ARGS(tmp_called_instance_34, mod_consts[238]);
        if (tmp_ass_subvalue_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_63 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_63 == NULL)) {
            tmp_ass_subscribed_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_63);

            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_63 = mod_consts[239];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_63, tmp_ass_subscript_63, tmp_ass_subvalue_63);
        Py_DECREF(tmp_ass_subvalue_63);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_64;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_ass_subscribed_64;
        PyObject *tmp_ass_subscript_64;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_expression_value_30 == NULL));
        tmp_ass_subvalue_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[240]);
        if (tmp_ass_subvalue_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_64 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_64 == NULL)) {
            tmp_ass_subscribed_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_64);

            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_64 = mod_consts[241];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_64, tmp_ass_subscript_64, tmp_ass_subvalue_64);
        Py_DECREF(tmp_ass_subvalue_64);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 217;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_65;
        PyObject *tmp_ass_subscribed_65;
        PyObject *tmp_ass_subscript_65;
        tmp_ass_subvalue_65 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_ass_subvalue_65 == NULL)) {
            tmp_ass_subvalue_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_ass_subvalue_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_65 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_65 == NULL)) {
            tmp_ass_subscribed_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_65 = mod_consts[242];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_65, tmp_ass_subscript_65, tmp_ass_subvalue_65);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 218;

            goto frame_exception_exit_1;
        }
    }
    branch_no_19:;
    // Tried code:
    {
        PyObject *tmp_assign_source_125;
        PyObject *tmp_name_value_38;
        PyObject *tmp_globals_arg_value_38;
        PyObject *tmp_locals_arg_value_38;
        PyObject *tmp_fromlist_value_38;
        PyObject *tmp_level_value_38;
        tmp_name_value_38 = mod_consts[243];
        tmp_globals_arg_value_38 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_38 = Py_None;
        tmp_fromlist_value_38 = Py_None;
        tmp_level_value_38 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 227;
        tmp_assign_source_125 = IMPORT_MODULE5(tmp_name_value_38, tmp_globals_arg_value_38, tmp_locals_arg_value_38, tmp_fromlist_value_38, tmp_level_value_38);
        if (tmp_assign_source_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;

            goto try_except_handler_37;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[243], tmp_assign_source_125);
    }
    {
        PyObject *tmp_assign_source_126;
        PyObject *tmp_name_value_39;
        PyObject *tmp_globals_arg_value_39;
        PyObject *tmp_locals_arg_value_39;
        PyObject *tmp_fromlist_value_39;
        PyObject *tmp_level_value_39;
        tmp_name_value_39 = mod_consts[244];
        tmp_globals_arg_value_39 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_39 = Py_None;
        tmp_fromlist_value_39 = Py_None;
        tmp_level_value_39 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 228;
        tmp_assign_source_126 = IMPORT_MODULE5(tmp_name_value_39, tmp_globals_arg_value_39, tmp_locals_arg_value_39, tmp_fromlist_value_39, tmp_level_value_39);
        if (tmp_assign_source_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;

            goto try_except_handler_37;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[244], tmp_assign_source_126);
    }
    {
        PyObject *tmp_assign_source_127;
        tmp_assign_source_127 = IMPORT_HARD_IO();
        assert(!(tmp_assign_source_127 == NULL));
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[245], tmp_assign_source_127);
    }
    {
        PyObject *tmp_assign_source_128;
        PyObject *tmp_import_name_from_5;
        tmp_import_name_from_5 = IMPORT_HARD_IO();
        assert(!(tmp_import_name_from_5 == NULL));
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_128 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[31],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_128 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[31]);
        }

        if (tmp_assign_source_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;

            goto try_except_handler_37;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[246], tmp_assign_source_128);
    }
    {
        PyObject *tmp_ass_subvalue_66;
        PyObject *tmp_ass_subscribed_66;
        PyObject *tmp_ass_subscript_66;
        tmp_ass_subvalue_66 = BYTEARRAY_COPY(mod_consts[247]);
        tmp_ass_subscribed_66 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_66 == NULL)) {
            tmp_ass_subscribed_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_66);

            exception_lineno = 232;

            goto try_except_handler_37;
        }
        tmp_ass_subscript_66 = mod_consts[248];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_66, tmp_ass_subscript_66, tmp_ass_subvalue_66);
        Py_DECREF(tmp_ass_subvalue_66);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;

            goto try_except_handler_37;
        }
    }
    {
        PyObject *tmp_ass_subvalue_67;
        PyObject *tmp_called_instance_35;
        PyObject *tmp_ass_subscribed_67;
        PyObject *tmp_ass_subscript_67;
        tmp_called_instance_35 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[243]);

        if (unlikely(tmp_called_instance_35 == NULL)) {
            tmp_called_instance_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[243]);
        }

        if (tmp_called_instance_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_37;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 234;
        tmp_ass_subvalue_67 = CALL_METHOD_NO_ARGS(tmp_called_instance_35, mod_consts[249]);
        if (tmp_ass_subvalue_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_37;
        }
        tmp_ass_subscribed_67 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_67 == NULL)) {
            tmp_ass_subscribed_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_67);

            exception_lineno = 234;

            goto try_except_handler_37;
        }
        tmp_ass_subscript_67 = mod_consts[250];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_67, tmp_ass_subscript_67, tmp_ass_subvalue_67);
        Py_DECREF(tmp_ass_subvalue_67);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;

            goto try_except_handler_37;
        }
    }
    {
        PyObject *tmp_ass_subvalue_68;
        PyObject *tmp_called_instance_36;
        PyObject *tmp_ass_subscribed_68;
        PyObject *tmp_ass_subscript_68;
        tmp_called_instance_36 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[251]);

        if (unlikely(tmp_called_instance_36 == NULL)) {
            tmp_called_instance_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[251]);
        }

        if (tmp_called_instance_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_37;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 235;
        tmp_ass_subvalue_68 = CALL_METHOD_NO_ARGS(tmp_called_instance_36, mod_consts[252]);
        if (tmp_ass_subvalue_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_37;
        }
        tmp_ass_subscribed_68 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_68 == NULL)) {
            tmp_ass_subscribed_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_68);

            exception_lineno = 235;

            goto try_except_handler_37;
        }
        tmp_ass_subscript_68 = mod_consts[253];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_68, tmp_ass_subscript_68, tmp_ass_subvalue_68);
        Py_DECREF(tmp_ass_subvalue_68);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 235;

            goto try_except_handler_37;
        }
    }
    {
        PyObject *tmp_ass_subvalue_69;
        PyObject *tmp_called_instance_37;
        PyObject *tmp_ass_subscribed_69;
        PyObject *tmp_ass_subscript_69;
        tmp_called_instance_37 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_called_instance_37 == NULL)) {
            tmp_called_instance_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
        }

        assert(!(tmp_called_instance_37 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 237;
        tmp_ass_subvalue_69 = CALL_METHOD_NO_ARGS(tmp_called_instance_37, mod_consts[254]);
        if (tmp_ass_subvalue_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto try_except_handler_37;
        }
        tmp_ass_subscribed_69 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_69 == NULL)) {
            tmp_ass_subscribed_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_69);

            exception_lineno = 237;

            goto try_except_handler_37;
        }
        tmp_ass_subscript_69 = mod_consts[255];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_69, tmp_ass_subscript_69, tmp_ass_subvalue_69);
        Py_DECREF(tmp_ass_subvalue_69);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;

            goto try_except_handler_37;
        }
    }
    {
        PyObject *tmp_ass_subvalue_70;
        PyObject *tmp_called_instance_38;
        PyObject *tmp_ass_subscribed_70;
        PyObject *tmp_ass_subscript_70;
        tmp_called_instance_38 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_called_instance_38 == NULL)) {
            tmp_called_instance_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
        }

        assert(!(tmp_called_instance_38 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 238;
        tmp_ass_subvalue_70 = CALL_METHOD_NO_ARGS(tmp_called_instance_38, mod_consts[256]);
        if (tmp_ass_subvalue_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_37;
        }
        tmp_ass_subscribed_70 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_70 == NULL)) {
            tmp_ass_subscribed_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_70);

            exception_lineno = 238;

            goto try_except_handler_37;
        }
        tmp_ass_subscript_70 = mod_consts[257];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_70, tmp_ass_subscript_70, tmp_ass_subvalue_70);
        Py_DECREF(tmp_ass_subvalue_70);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;

            goto try_except_handler_37;
        }
    }
    {
        PyObject *tmp_ass_subvalue_71;
        PyObject *tmp_called_instance_39;
        PyObject *tmp_ass_subscribed_71;
        PyObject *tmp_ass_subscript_71;
        tmp_called_instance_39 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_called_instance_39 == NULL)) {
            tmp_called_instance_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
        }

        assert(!(tmp_called_instance_39 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 239;
        tmp_ass_subvalue_71 = CALL_METHOD_NO_ARGS(tmp_called_instance_39, mod_consts[258]);
        if (tmp_ass_subvalue_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_37;
        }
        tmp_ass_subscribed_71 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_71 == NULL)) {
            tmp_ass_subscribed_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_71);

            exception_lineno = 239;

            goto try_except_handler_37;
        }
        tmp_ass_subscript_71 = mod_consts[259];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_71, tmp_ass_subscript_71, tmp_ass_subvalue_71);
        Py_DECREF(tmp_ass_subvalue_71);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;

            goto try_except_handler_37;
        }
    }
    {
        PyObject *tmp_ass_subvalue_72;
        PyObject *tmp_called_instance_40;
        PyObject *tmp_ass_subscribed_72;
        PyObject *tmp_ass_subscript_72;
        tmp_called_instance_40 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[245]);

        if (unlikely(tmp_called_instance_40 == NULL)) {
            tmp_called_instance_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[245]);
        }

        assert(!(tmp_called_instance_40 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 240;
        tmp_ass_subvalue_72 = CALL_METHOD_NO_ARGS(tmp_called_instance_40, mod_consts[260]);
        if (tmp_ass_subvalue_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_37;
        }
        tmp_ass_subscribed_72 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_72 == NULL)) {
            tmp_ass_subscribed_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_72);

            exception_lineno = 240;

            goto try_except_handler_37;
        }
        tmp_ass_subscript_72 = mod_consts[261];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_72, tmp_ass_subscript_72, tmp_ass_subvalue_72);
        Py_DECREF(tmp_ass_subvalue_72);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto try_except_handler_37;
        }
    }
    {
        PyObject *tmp_ass_subvalue_73;
        PyObject *tmp_called_value_25;
        PyObject *tmp_ass_subscribed_73;
        PyObject *tmp_ass_subscript_73;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[246]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[246]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_37;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 241;
        tmp_ass_subvalue_73 = CALL_FUNCTION_NO_ARGS(tmp_called_value_25);
        if (tmp_ass_subvalue_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_37;
        }
        tmp_ass_subscribed_73 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_73 == NULL)) {
            tmp_ass_subscribed_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_73);

            exception_lineno = 241;

            goto try_except_handler_37;
        }
        tmp_ass_subscript_73 = mod_consts[262];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_73, tmp_ass_subscript_73, tmp_ass_subvalue_73);
        Py_DECREF(tmp_ass_subvalue_73);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;

            goto try_except_handler_37;
        }
    }
    {
        PyObject *tmp_ass_subvalue_74;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_ass_subscribed_74;
        PyObject *tmp_ass_subscript_74;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_37;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[263]);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_37;
        }
        tmp_args_element_value_7 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[264]);

        if (unlikely(tmp_args_element_value_7 == NULL)) {
            tmp_args_element_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[264]);
        }

        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 242;

            goto try_except_handler_37;
        }
        tmp_args_element_value_8 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_8 == NULL)) {
            tmp_args_element_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 242;

            goto try_except_handler_37;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 242;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_ass_subvalue_74 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_26, call_args);
        }

        Py_DECREF(tmp_called_value_26);
        if (tmp_ass_subvalue_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_37;
        }
        tmp_ass_subscribed_74 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_74 == NULL)) {
            tmp_ass_subscribed_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_74);

            exception_lineno = 242;

            goto try_except_handler_37;
        }
        tmp_ass_subscript_74 = mod_consts[265];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_74, tmp_ass_subscript_74, tmp_ass_subvalue_74);
        Py_DECREF(tmp_ass_subvalue_74);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 242;

            goto try_except_handler_37;
        }
    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_mvar_value_5;
        int tmp_truth_name_8;
        tmp_mvar_value_5 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_mvar_value_5 == NULL)) {
            tmp_mvar_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_mvar_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_37;
        }
        tmp_truth_name_8 = CHECK_IF_TRUE(tmp_mvar_value_5);
        if (tmp_truth_name_8 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;

            goto try_except_handler_37;
        }
        tmp_condition_result_23 = tmp_truth_name_8 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_ass_subvalue_75;
        PyObject *tmp_called_instance_41;
        PyObject *tmp_ass_subscribed_75;
        PyObject *tmp_ass_subscript_75;
        tmp_called_instance_41 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_41 == NULL)) {
            tmp_called_instance_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_41 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 244;
        tmp_ass_subvalue_75 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_41,
            mod_consts[266],
            PyTuple_GET_ITEM(mod_consts[151], 0)
        );

        if (tmp_ass_subvalue_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto try_except_handler_37;
        }
        tmp_ass_subscribed_75 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_75 == NULL)) {
            tmp_ass_subscribed_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_75);

            exception_lineno = 244;

            goto try_except_handler_37;
        }
        tmp_ass_subscript_75 = mod_consts[267];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_75, tmp_ass_subscript_75, tmp_ass_subvalue_75);
        Py_DECREF(tmp_ass_subvalue_75);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;

            goto try_except_handler_37;
        }
    }
    {
        PyObject *tmp_ass_subvalue_76;
        PyObject *tmp_called_instance_42;
        PyObject *tmp_ass_subscribed_76;
        PyObject *tmp_ass_subscript_76;
        tmp_called_instance_42 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_42 == NULL)) {
            tmp_called_instance_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_42 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 245;
        tmp_ass_subvalue_76 = CALL_METHOD_NO_ARGS(tmp_called_instance_42, mod_consts[268]);
        if (tmp_ass_subvalue_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_37;
        }
        tmp_ass_subscribed_76 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_76 == NULL)) {
            tmp_ass_subscribed_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_76);

            exception_lineno = 245;

            goto try_except_handler_37;
        }
        tmp_ass_subscript_76 = mod_consts[269];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_76, tmp_ass_subscript_76, tmp_ass_subvalue_76);
        Py_DECREF(tmp_ass_subvalue_76);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;

            goto try_except_handler_37;
        }
    }
    branch_no_20:;
    goto try_end_27;
    // Exception handler code:
    try_except_handler_37:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 7.
    exception_preserved_7 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_37 == NULL) {
        exception_keeper_tb_37 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_37);
    } else if (exception_keeper_lineno_37 != 0) {
        exception_keeper_tb_37 = ADD_TRACEBACK(exception_keeper_tb_37, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_37);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_37, &exception_keeper_value_37, &exception_keeper_tb_37);
    // Tried code:
    {
        bool tmp_condition_result_24;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        tmp_cmp_expr_left_9 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_9 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        assert(!(tmp_res == -1));
        tmp_condition_result_24 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 226;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_38;
    branch_no_21:;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_38:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(&exception_preserved_7);

    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto frame_exception_exit_1;
    // End of try:
    try_end_28:;
    // Restore previous exception id 7.
    SET_CURRENT_EXCEPTION(&exception_preserved_7);

    goto try_end_27;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_27:;
    // Tried code:
    {
        PyObject *tmp_assign_source_129;
        PyObject *tmp_name_value_40;
        PyObject *tmp_globals_arg_value_40;
        PyObject *tmp_locals_arg_value_40;
        PyObject *tmp_fromlist_value_40;
        PyObject *tmp_level_value_40;
        tmp_name_value_40 = mod_consts[270];
        tmp_globals_arg_value_40 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_40 = Py_None;
        tmp_fromlist_value_40 = Py_None;
        tmp_level_value_40 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 249;
        tmp_assign_source_129 = IMPORT_MODULE5(tmp_name_value_40, tmp_globals_arg_value_40, tmp_locals_arg_value_40, tmp_fromlist_value_40, tmp_level_value_40);
        if (tmp_assign_source_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;

            goto try_except_handler_39;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[270], tmp_assign_source_129);
    }
    {
        PyObject *tmp_ass_subvalue_77;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_ass_subscribed_77;
        PyObject *tmp_ass_subscript_77;
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto try_except_handler_39;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[112]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto try_except_handler_39;
        }
        tmp_args_element_value_9 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_9 == NULL)) {
            tmp_args_element_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 251;

            goto try_except_handler_39;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 251;
        tmp_ass_subvalue_77 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_27, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_27);
        if (tmp_ass_subvalue_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto try_except_handler_39;
        }
        tmp_ass_subscribed_77 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_77 == NULL)) {
            tmp_ass_subscribed_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_77);

            exception_lineno = 251;

            goto try_except_handler_39;
        }
        tmp_ass_subscript_77 = mod_consts[271];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_77, tmp_ass_subscript_77, tmp_ass_subvalue_77);
        Py_DECREF(tmp_ass_subvalue_77);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;

            goto try_except_handler_39;
        }
    }
    {
        PyObject *tmp_ass_subvalue_78;
        PyObject *tmp_called_value_28;
        PyObject *tmp_expression_value_33;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_ass_subscribed_78;
        PyObject *tmp_ass_subscript_78;
        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[35]);

        if (unlikely(tmp_expression_value_33 == NULL)) {
            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[35]);
        }

        if (tmp_expression_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_39;
        }
        tmp_called_value_28 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[272]);
        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_39;
        }
        tmp_args_element_value_10 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_args_element_value_10 == NULL)) {
            tmp_args_element_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_28);

            exception_lineno = 252;

            goto try_except_handler_39;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 252;
        tmp_ass_subvalue_78 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_28, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_28);
        if (tmp_ass_subvalue_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_39;
        }
        tmp_ass_subscribed_78 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_78 == NULL)) {
            tmp_ass_subscribed_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_78);

            exception_lineno = 252;

            goto try_except_handler_39;
        }
        tmp_ass_subscript_78 = mod_consts[273];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_78, tmp_ass_subscript_78, tmp_ass_subvalue_78);
        Py_DECREF(tmp_ass_subvalue_78);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto try_except_handler_39;
        }
    }
    {
        nuitka_bool tmp_condition_result_25;
        PyObject *tmp_mvar_value_6;
        int tmp_truth_name_9;
        tmp_mvar_value_6 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_mvar_value_6 == NULL)) {
            tmp_mvar_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_mvar_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_39;
        }
        tmp_truth_name_9 = CHECK_IF_TRUE(tmp_mvar_value_6);
        if (tmp_truth_name_9 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;

            goto try_except_handler_39;
        }
        tmp_condition_result_25 = tmp_truth_name_9 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_25 == NUITKA_BOOL_TRUE) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_ass_subvalue_79;
        PyObject *tmp_called_instance_43;
        PyObject *tmp_ass_subscribed_79;
        PyObject *tmp_ass_subscript_79;
        tmp_called_instance_43 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_43 == NULL)) {
            tmp_called_instance_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_43 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 254;
        tmp_ass_subvalue_79 = CALL_METHOD_NO_ARGS(tmp_called_instance_43, mod_consts[274]);
        if (tmp_ass_subvalue_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto try_except_handler_39;
        }
        tmp_ass_subscribed_79 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_79 == NULL)) {
            tmp_ass_subscribed_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_79);

            exception_lineno = 254;

            goto try_except_handler_39;
        }
        tmp_ass_subscript_79 = mod_consts[275];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_79, tmp_ass_subscript_79, tmp_ass_subvalue_79);
        Py_DECREF(tmp_ass_subvalue_79);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;

            goto try_except_handler_39;
        }
    }
    branch_no_22:;
    {
        PyObject *tmp_ass_subvalue_80;
        PyObject *tmp_called_instance_44;
        PyObject *tmp_ass_subscribed_80;
        PyObject *tmp_ass_subscript_80;
        tmp_called_instance_44 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_44 == NULL)) {
            tmp_called_instance_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_39;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 256;
        tmp_ass_subvalue_80 = CALL_METHOD_NO_ARGS(tmp_called_instance_44, mod_consts[276]);
        if (tmp_ass_subvalue_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_39;
        }
        tmp_ass_subscribed_80 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_80 == NULL)) {
            tmp_ass_subscribed_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_80);

            exception_lineno = 256;

            goto try_except_handler_39;
        }
        tmp_ass_subscript_80 = mod_consts[277];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_80, tmp_ass_subscript_80, tmp_ass_subvalue_80);
        Py_DECREF(tmp_ass_subvalue_80);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;

            goto try_except_handler_39;
        }
    }
    {
        PyObject *tmp_ass_subvalue_81;
        PyObject *tmp_called_instance_45;
        PyObject *tmp_ass_subscribed_81;
        PyObject *tmp_ass_subscript_81;
        tmp_called_instance_45 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[270]);

        if (unlikely(tmp_called_instance_45 == NULL)) {
            tmp_called_instance_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[270]);
        }

        if (tmp_called_instance_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_39;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 257;
        tmp_ass_subvalue_81 = CALL_METHOD_NO_ARGS(tmp_called_instance_45, mod_consts[278]);
        if (tmp_ass_subvalue_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_39;
        }
        tmp_ass_subscribed_81 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_81 == NULL)) {
            tmp_ass_subscribed_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_81);

            exception_lineno = 257;

            goto try_except_handler_39;
        }
        tmp_ass_subscript_81 = mod_consts[279];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_81, tmp_ass_subscript_81, tmp_ass_subvalue_81);
        Py_DECREF(tmp_ass_subvalue_81);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto try_except_handler_39;
        }
    }
    goto try_end_29;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 8.
    exception_preserved_8 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_39 == NULL) {
        exception_keeper_tb_39 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_39);
    } else if (exception_keeper_lineno_39 != 0) {
        exception_keeper_tb_39 = ADD_TRACEBACK(exception_keeper_tb_39, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_39);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_39, &exception_keeper_value_39, &exception_keeper_tb_39);
    // Tried code:
    {
        bool tmp_condition_result_26;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        tmp_cmp_expr_left_10 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_10 = mod_consts[280];
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;

            goto try_except_handler_40;
        }
        tmp_condition_result_26 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_26 != false) {
            goto branch_yes_23;
        } else {
            goto branch_no_23;
        }
    }
    branch_yes_23:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 248;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_40;
    branch_no_23:;
    goto try_end_30;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(&exception_preserved_8);

    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

    goto frame_exception_exit_1;
    // End of try:
    try_end_30:;
    // Restore previous exception id 8.
    SET_CURRENT_EXCEPTION(&exception_preserved_8);

    goto try_end_29;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_29:;
    {
        PyObject *tmp_ass_subvalue_82;
        PyObject *tmp_compile_source_1;
        PyObject *tmp_compile_filename_1;
        PyObject *tmp_compile_mode_1;
        PyObject *tmp_ass_subscribed_82;
        PyObject *tmp_ass_subscript_82;
        tmp_compile_source_1 = mod_consts[281];
        tmp_compile_filename_1 = mod_consts[281];
        tmp_compile_mode_1 = mod_consts[282];
        tmp_ass_subvalue_82 = COMPILE_CODE(tmp_compile_source_1, tmp_compile_filename_1, tmp_compile_mode_1, NULL, NULL, NULL);
        if (tmp_ass_subvalue_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_82 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_82 == NULL)) {
            tmp_ass_subscribed_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_82);

            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_82 = mod_consts[283];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_82, tmp_ass_subscript_82, tmp_ass_subvalue_82);
        Py_DECREF(tmp_ass_subvalue_82);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_83;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_ass_subscribed_83;
        PyObject *tmp_ass_subscript_83;
        tmp_expression_value_34 = (PyObject *)&PyType_Type;
        tmp_ass_subvalue_83 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_34);
        assert(!(tmp_ass_subvalue_83 == NULL));
        tmp_ass_subscribed_83 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_83 == NULL)) {
            tmp_ass_subscribed_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_83);

            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_83 = mod_consts[284];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_83, tmp_ass_subscript_83, tmp_ass_subvalue_83);
        Py_DECREF(tmp_ass_subvalue_83);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_84;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_ass_subscribed_84;
        PyObject *tmp_ass_subscript_84;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_84 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_35);
        if (tmp_ass_subvalue_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_84 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_84 == NULL)) {
            tmp_ass_subscribed_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_84);

            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_84 = mod_consts[285];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_84, tmp_ass_subscript_84, tmp_ass_subvalue_84);
        Py_DECREF(tmp_ass_subvalue_84);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_85;
        PyObject *tmp_ass_subscribed_85;
        PyObject *tmp_ass_subscript_85;
        tmp_ass_subvalue_85 = LOOKUP_BUILTIN(mod_consts[286]);
        assert(tmp_ass_subvalue_85 != NULL);
        tmp_ass_subscribed_85 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_85 == NULL)) {
            tmp_ass_subscribed_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_85 = mod_consts[287];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_85, tmp_ass_subscript_85, tmp_ass_subvalue_85);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_86;
        PyObject *tmp_called_instance_46;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_open_mode_1;
        PyObject *tmp_open_buffering_1;
        PyObject *tmp_ass_subscribed_86;
        PyObject *tmp_ass_subscript_86;
        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_36 == NULL)) {
            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_36 == NULL));
        tmp_open_filename_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[288]);
        if (tmp_open_filename_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_open_mode_1 = mod_consts[289];
        tmp_open_buffering_1 = mod_consts[3];
        tmp_called_instance_46 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, tmp_open_buffering_1, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_1);
        if (tmp_called_instance_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 267;
        tmp_ass_subvalue_86 = CALL_METHOD_NO_ARGS(tmp_called_instance_46, mod_consts[290]);
        Py_DECREF(tmp_called_instance_46);
        if (tmp_ass_subvalue_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_86 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_86 == NULL)) {
            tmp_ass_subscribed_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_86);

            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_86 = mod_consts[291];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_86, tmp_ass_subscript_86, tmp_ass_subvalue_86);
        Py_DECREF(tmp_ass_subvalue_86);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_87;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_ass_subscribed_87;
        PyObject *tmp_ass_subscript_87;
        tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_expression_value_38 == NULL)) {
            tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_expression_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_37 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[34]);
        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_87 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[292]);
        Py_DECREF(tmp_expression_value_37);
        if (tmp_ass_subvalue_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_87 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_87 == NULL)) {
            tmp_ass_subscribed_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_87);

            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_87 = mod_consts[293];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_87, tmp_ass_subscript_87, tmp_ass_subvalue_87);
        Py_DECREF(tmp_ass_subvalue_87);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 268;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_130;


        tmp_assign_source_130 = MAKE_FUNCTION_dill$_objects$$$function__6_lambda();

        assert(tmp_assign_unpack_16__assign_source == NULL);
        tmp_assign_unpack_16__assign_source = tmp_assign_source_130;
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_88;
        PyObject *tmp_ass_subscribed_88;
        PyObject *tmp_ass_subscript_88;
        CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
        tmp_ass_subvalue_88 = tmp_assign_unpack_16__assign_source;
        tmp_ass_subscribed_88 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_88 == NULL)) {
            tmp_ass_subscribed_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_41;
        }
        tmp_ass_subscript_88 = mod_consts[294];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_88, tmp_ass_subscript_88, tmp_ass_subvalue_88);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;

            goto try_except_handler_41;
        }
    }
    goto try_end_31;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_41 = exception_type;
    exception_keeper_value_41 = exception_value;
    exception_keeper_tb_41 = exception_tb;
    exception_keeper_lineno_41 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
    Py_DECREF(tmp_assign_unpack_16__assign_source);
    tmp_assign_unpack_16__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_41;
    exception_value = exception_keeper_value_41;
    exception_tb = exception_keeper_tb_41;
    exception_lineno = exception_keeper_lineno_41;

    goto frame_exception_exit_1;
    // End of try:
    try_end_31:;
    {
        PyObject *tmp_assign_source_131;
        CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
        tmp_assign_source_131 = tmp_assign_unpack_16__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[295], tmp_assign_source_131);
    }
    CHECK_OBJECT(tmp_assign_unpack_16__assign_source);
    Py_DECREF(tmp_assign_unpack_16__assign_source);
    tmp_assign_unpack_16__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_89;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_ass_subscribed_89;
        PyObject *tmp_ass_subscript_89;
        tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[92]);

        if (unlikely(tmp_expression_value_39 == NULL)) {
            tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[92]);
        }

        if (tmp_expression_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[93]);
        if (tmp_ass_subvalue_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_89 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_89 == NULL)) {
            tmp_ass_subscribed_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_89);

            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_89 = mod_consts[296];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_89, tmp_ass_subscript_89, tmp_ass_subvalue_89);
        Py_DECREF(tmp_ass_subvalue_89);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_27;
        PyObject *tmp_operand_value_6;
        tmp_operand_value_6 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_operand_value_6 == NULL)) {
            tmp_operand_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_27 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_27 != false) {
            goto branch_yes_24;
        } else {
            goto branch_no_24;
        }
    }
    branch_yes_24:;
    {
        PyObject *tmp_ass_subvalue_90;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_ass_subscribed_90;
        PyObject *tmp_ass_subscript_90;
        tmp_expression_value_41 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_41 == NULL)) {
            tmp_expression_value_41 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[297]);
        if (tmp_expression_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[298]);
        Py_DECREF(tmp_expression_value_40);
        if (tmp_ass_subvalue_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_90 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_90 == NULL)) {
            tmp_ass_subscribed_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_90);

            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_90 = mod_consts[299];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_90, tmp_ass_subscript_90, tmp_ass_subvalue_90);
        Py_DECREF(tmp_ass_subvalue_90);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;

            goto frame_exception_exit_1;
        }
    }
    branch_no_24:;
    // Tried code:
    {
        PyObject *tmp_assign_source_132;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_called_value_29;
        tmp_called_value_29 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_29 == NULL)) {
            tmp_called_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_42;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 273;
        tmp_expression_value_42 = CALL_FUNCTION_NO_ARGS(tmp_called_value_29);
        if (tmp_expression_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_42;
        }
        tmp_assign_source_132 = LOOKUP_ATTRIBUTE(tmp_expression_value_42, mod_consts[76]);
        Py_DECREF(tmp_expression_value_42);
        if (tmp_assign_source_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_42;
        }
        assert(tmp_assign_unpack_17__assign_source == NULL);
        tmp_assign_unpack_17__assign_source = tmp_assign_source_132;
    }
    {
        PyObject *tmp_ass_subvalue_91;
        PyObject *tmp_ass_subscribed_91;
        PyObject *tmp_ass_subscript_91;
        CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
        tmp_ass_subvalue_91 = tmp_assign_unpack_17__assign_source;
        tmp_ass_subscribed_91 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_91 == NULL)) {
            tmp_ass_subscribed_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_42;
        }
        tmp_ass_subscript_91 = mod_consts[300];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_91, tmp_ass_subscript_91, tmp_ass_subvalue_91);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;

            goto try_except_handler_42;
        }
    }
    goto try_end_32;
    // Exception handler code:
    try_except_handler_42:;
    exception_keeper_type_42 = exception_type;
    exception_keeper_value_42 = exception_value;
    exception_keeper_tb_42 = exception_tb;
    exception_keeper_lineno_42 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_17__assign_source);
    tmp_assign_unpack_17__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_42;
    exception_value = exception_keeper_value_42;
    exception_tb = exception_keeper_tb_42;
    exception_lineno = exception_keeper_lineno_42;

    goto frame_exception_exit_1;
    // End of try:
    try_end_32:;
    {
        PyObject *tmp_assign_source_133;
        CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
        tmp_assign_source_133 = tmp_assign_unpack_17__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_133);
    }
    CHECK_OBJECT(tmp_assign_unpack_17__assign_source);
    Py_DECREF(tmp_assign_unpack_17__assign_source);
    tmp_assign_unpack_17__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_92;
        PyObject *tmp_ass_subscribed_92;
        PyObject *tmp_ass_subscript_92;
        tmp_ass_subvalue_92 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_ass_subvalue_92 == NULL)) {
            tmp_ass_subvalue_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_ass_subvalue_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_92 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_92 == NULL)) {
            tmp_ass_subscribed_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_92 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_92 = mod_consts[301];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_92, tmp_ass_subscript_92, tmp_ass_subvalue_92);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 274;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_93;
        PyObject *tmp_ass_subscribed_93;
        PyObject *tmp_ass_subscript_93;
        tmp_ass_subvalue_93 = Py_NotImplemented;
        tmp_ass_subscribed_93 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_93 == NULL)) {
            tmp_ass_subscribed_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_93 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_93 = mod_consts[302];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_93, tmp_ass_subscript_93, tmp_ass_subvalue_93);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_94;
        PyObject *tmp_ass_subscribed_94;
        PyObject *tmp_ass_subscript_94;
        tmp_ass_subvalue_94 = mod_consts[303];
        tmp_ass_subscribed_94 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_94 == NULL)) {
            tmp_ass_subscribed_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_94 = mod_consts[304];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_94, tmp_ass_subscript_94, tmp_ass_subvalue_94);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_95;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_ass_subscribed_95;
        PyObject *tmp_ass_subscript_95;
        tmp_expression_value_43 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_expression_value_43 == NULL)) {
            tmp_expression_value_43 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_expression_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_95 = LOOKUP_ATTRIBUTE(tmp_expression_value_43, mod_consts[76]);
        if (tmp_ass_subvalue_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_95 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_95 == NULL)) {
            tmp_ass_subscribed_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_95);

            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_95 = mod_consts[305];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_95, tmp_ass_subscript_95, tmp_ass_subvalue_95);
        Py_DECREF(tmp_ass_subvalue_95);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_96;
        PyObject *tmp_open_filename_2;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_open_mode_2;
        PyObject *tmp_ass_subscribed_96;
        PyObject *tmp_ass_subscript_96;
        tmp_expression_value_44 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_44 == NULL)) {
            tmp_expression_value_44 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_44 == NULL));
        tmp_open_filename_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_44, mod_consts[288]);
        if (tmp_open_filename_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_open_mode_2 = mod_consts[306];
        tmp_ass_subvalue_96 = BUILTIN_OPEN(tmp_open_filename_2, tmp_open_mode_2, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_2);
        if (tmp_ass_subvalue_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_96 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_96 == NULL)) {
            tmp_ass_subscribed_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_96);

            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_96 = mod_consts[307];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_96, tmp_ass_subscript_96, tmp_ass_subvalue_96);
        Py_DECREF(tmp_ass_subvalue_96);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_97;
        PyObject *tmp_open_filename_3;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_open_mode_3;
        PyObject *tmp_ass_subscribed_97;
        PyObject *tmp_ass_subscript_97;
        tmp_expression_value_45 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_45 == NULL)) {
            tmp_expression_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_45 == NULL));
        tmp_open_filename_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_45, mod_consts[288]);
        if (tmp_open_filename_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_open_mode_3 = mod_consts[308];
        tmp_ass_subvalue_97 = BUILTIN_OPEN(tmp_open_filename_3, tmp_open_mode_3, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_3);
        if (tmp_ass_subvalue_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_97 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_97 == NULL)) {
            tmp_ass_subscribed_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_97);

            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_97 = mod_consts[309];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_97, tmp_ass_subscript_97, tmp_ass_subvalue_97);
        Py_DECREF(tmp_ass_subvalue_97);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_98;
        PyObject *tmp_open_filename_4;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_open_mode_4;
        PyObject *tmp_ass_subscribed_98;
        PyObject *tmp_ass_subscript_98;
        tmp_expression_value_46 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_46 == NULL)) {
            tmp_expression_value_46 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_46 == NULL));
        tmp_open_filename_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_46, mod_consts[288]);
        if (tmp_open_filename_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_open_mode_4 = mod_consts[310];
        tmp_ass_subvalue_98 = BUILTIN_OPEN(tmp_open_filename_4, tmp_open_mode_4, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_4);
        if (tmp_ass_subvalue_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_98 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_98 == NULL)) {
            tmp_ass_subscribed_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_98);

            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_98 = mod_consts[311];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_98, tmp_ass_subscript_98, tmp_ass_subvalue_98);
        Py_DECREF(tmp_ass_subvalue_98);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_99;
        PyObject *tmp_open_filename_5;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_open_mode_5;
        PyObject *tmp_ass_subscribed_99;
        PyObject *tmp_ass_subscript_99;
        tmp_expression_value_47 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_47 == NULL)) {
            tmp_expression_value_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_47 == NULL));
        tmp_open_filename_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_47, mod_consts[288]);
        if (tmp_open_filename_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_open_mode_5 = mod_consts[289];
        tmp_ass_subvalue_99 = BUILTIN_OPEN(tmp_open_filename_5, tmp_open_mode_5, NULL, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_5);
        if (tmp_ass_subvalue_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_99 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_99 == NULL)) {
            tmp_ass_subscribed_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_99);

            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_99 = mod_consts[312];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_99, tmp_ass_subscript_99, tmp_ass_subvalue_99);
        Py_DECREF(tmp_ass_subvalue_99);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_134;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_41;
        PyObject *tmp_globals_arg_value_41;
        PyObject *tmp_locals_arg_value_41;
        PyObject *tmp_fromlist_value_41;
        PyObject *tmp_level_value_41;
        tmp_name_value_41 = mod_consts[313];
        tmp_globals_arg_value_41 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_41 = Py_None;
        tmp_fromlist_value_41 = mod_consts[314];
        tmp_level_value_41 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 283;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_41, tmp_globals_arg_value_41, tmp_locals_arg_value_41, tmp_fromlist_value_41, tmp_level_value_41);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_43;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_134 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[315],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_134 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[315]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;

            goto try_except_handler_43;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[316], tmp_assign_source_134);
    }
    {
        PyObject *tmp_ass_subvalue_100;
        PyObject *tmp_called_value_30;
        PyObject *tmp_args_value_9;
        PyObject *tmp_tuple_element_15;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_kwargs_value_9;
        PyObject *tmp_ass_subscribed_100;
        PyObject *tmp_ass_subscript_100;
        tmp_called_value_30 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[316]);

        if (unlikely(tmp_called_value_30 == NULL)) {
            tmp_called_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[316]);
        }

        assert(!(tmp_called_value_30 == NULL));
        tmp_expression_value_48 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_48 == NULL)) {
            tmp_expression_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_48 == NULL));
        tmp_tuple_element_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_48, mod_consts[288]);
        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_43;
        }
        tmp_args_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_9, 0, tmp_tuple_element_15);
        tmp_tuple_element_15 = mod_consts[306];
        PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_15);
        tmp_kwargs_value_9 = DICT_COPY(mod_consts[317]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 284;
        tmp_ass_subvalue_100 = CALL_FUNCTION(tmp_called_value_30, tmp_args_value_9, tmp_kwargs_value_9);
        Py_DECREF(tmp_args_value_9);
        Py_DECREF(tmp_kwargs_value_9);
        if (tmp_ass_subvalue_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_43;
        }
        tmp_ass_subscribed_100 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_100 == NULL)) {
            tmp_ass_subscribed_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_100);

            exception_lineno = 284;

            goto try_except_handler_43;
        }
        tmp_ass_subscript_100 = mod_consts[318];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_100, tmp_ass_subscript_100, tmp_ass_subvalue_100);
        Py_DECREF(tmp_ass_subvalue_100);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;

            goto try_except_handler_43;
        }
    }
    {
        PyObject *tmp_ass_subvalue_101;
        PyObject *tmp_called_value_31;
        PyObject *tmp_args_value_10;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_kwargs_value_10;
        PyObject *tmp_ass_subscribed_101;
        PyObject *tmp_ass_subscript_101;
        tmp_called_value_31 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[316]);

        if (unlikely(tmp_called_value_31 == NULL)) {
            tmp_called_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[316]);
        }

        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_43;
        }
        tmp_expression_value_49 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_49 == NULL)) {
            tmp_expression_value_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_49 == NULL));
        tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_49, mod_consts[288]);
        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_43;
        }
        tmp_args_value_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_10, 0, tmp_tuple_element_16);
        tmp_tuple_element_16 = mod_consts[308];
        PyTuple_SET_ITEM0(tmp_args_value_10, 1, tmp_tuple_element_16);
        tmp_kwargs_value_10 = DICT_COPY(mod_consts[317]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 285;
        tmp_ass_subvalue_101 = CALL_FUNCTION(tmp_called_value_31, tmp_args_value_10, tmp_kwargs_value_10);
        Py_DECREF(tmp_args_value_10);
        Py_DECREF(tmp_kwargs_value_10);
        if (tmp_ass_subvalue_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_43;
        }
        tmp_ass_subscribed_101 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_101 == NULL)) {
            tmp_ass_subscribed_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_101);

            exception_lineno = 285;

            goto try_except_handler_43;
        }
        tmp_ass_subscript_101 = mod_consts[319];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_101, tmp_ass_subscript_101, tmp_ass_subvalue_101);
        Py_DECREF(tmp_ass_subvalue_101);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;

            goto try_except_handler_43;
        }
    }
    {
        PyObject *tmp_ass_subvalue_102;
        PyObject *tmp_called_value_32;
        PyObject *tmp_args_value_11;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_kwargs_value_11;
        PyObject *tmp_ass_subscribed_102;
        PyObject *tmp_ass_subscript_102;
        tmp_called_value_32 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[316]);

        if (unlikely(tmp_called_value_32 == NULL)) {
            tmp_called_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[316]);
        }

        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_43;
        }
        tmp_expression_value_50 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_50 == NULL)) {
            tmp_expression_value_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_50 == NULL));
        tmp_tuple_element_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_50, mod_consts[288]);
        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_43;
        }
        tmp_args_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_11, 0, tmp_tuple_element_17);
        tmp_tuple_element_17 = mod_consts[310];
        PyTuple_SET_ITEM0(tmp_args_value_11, 1, tmp_tuple_element_17);
        tmp_kwargs_value_11 = DICT_COPY(mod_consts[317]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 286;
        tmp_ass_subvalue_102 = CALL_FUNCTION(tmp_called_value_32, tmp_args_value_11, tmp_kwargs_value_11);
        Py_DECREF(tmp_args_value_11);
        Py_DECREF(tmp_kwargs_value_11);
        if (tmp_ass_subvalue_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_43;
        }
        tmp_ass_subscribed_102 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_102 == NULL)) {
            tmp_ass_subscribed_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_102);

            exception_lineno = 286;

            goto try_except_handler_43;
        }
        tmp_ass_subscript_102 = mod_consts[320];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_102, tmp_ass_subscript_102, tmp_ass_subvalue_102);
        Py_DECREF(tmp_ass_subvalue_102);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;

            goto try_except_handler_43;
        }
    }
    {
        PyObject *tmp_ass_subvalue_103;
        PyObject *tmp_called_value_33;
        PyObject *tmp_args_value_12;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_kwargs_value_12;
        PyObject *tmp_ass_subscribed_103;
        PyObject *tmp_ass_subscript_103;
        tmp_called_value_33 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[316]);

        if (unlikely(tmp_called_value_33 == NULL)) {
            tmp_called_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[316]);
        }

        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_43;
        }
        tmp_expression_value_51 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_51 == NULL)) {
            tmp_expression_value_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_51 == NULL));
        tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[288]);
        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_43;
        }
        tmp_args_value_12 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM(tmp_args_value_12, 0, tmp_tuple_element_18);
        tmp_tuple_element_18 = mod_consts[289];
        PyTuple_SET_ITEM0(tmp_args_value_12, 1, tmp_tuple_element_18);
        tmp_kwargs_value_12 = DICT_COPY(mod_consts[317]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 287;
        tmp_ass_subvalue_103 = CALL_FUNCTION(tmp_called_value_33, tmp_args_value_12, tmp_kwargs_value_12);
        Py_DECREF(tmp_args_value_12);
        Py_DECREF(tmp_kwargs_value_12);
        if (tmp_ass_subvalue_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_43;
        }
        tmp_ass_subscribed_103 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_103 == NULL)) {
            tmp_ass_subscribed_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_103);

            exception_lineno = 287;

            goto try_except_handler_43;
        }
        tmp_ass_subscript_103 = mod_consts[321];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_103, tmp_ass_subscript_103, tmp_ass_subvalue_103);
        Py_DECREF(tmp_ass_subvalue_103);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;

            goto try_except_handler_43;
        }
    }
    goto try_end_33;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_43 = exception_type;
    exception_keeper_value_43 = exception_value;
    exception_keeper_tb_43 = exception_tb;
    exception_keeper_lineno_43 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 9.
    exception_preserved_9 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_43 == NULL) {
        exception_keeper_tb_43 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_43);
    } else if (exception_keeper_lineno_43 != 0) {
        exception_keeper_tb_43 = ADD_TRACEBACK(exception_keeper_tb_43, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_43);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_43, &exception_keeper_value_43, &exception_keeper_tb_43);
    // Tried code:
    {
        bool tmp_condition_result_28;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        tmp_cmp_expr_left_11 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_11 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        assert(!(tmp_res == -1));
        tmp_condition_result_28 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_28 != false) {
            goto branch_yes_25;
        } else {
            goto branch_no_25;
        }
    }
    branch_yes_25:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 282;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_44;
    branch_no_25:;
    goto try_end_34;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_44 = exception_type;
    exception_keeper_value_44 = exception_value;
    exception_keeper_tb_44 = exception_tb;
    exception_keeper_lineno_44 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(&exception_preserved_9);

    // Re-raise.
    exception_type = exception_keeper_type_44;
    exception_value = exception_keeper_value_44;
    exception_tb = exception_keeper_tb_44;
    exception_lineno = exception_keeper_lineno_44;

    goto frame_exception_exit_1;
    // End of try:
    try_end_34:;
    // Restore previous exception id 9.
    SET_CURRENT_EXCEPTION(&exception_preserved_9);

    goto try_end_33;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_33:;
    {
        nuitka_bool tmp_condition_result_29;
        PyObject *tmp_mvar_value_7;
        int tmp_truth_name_10;
        tmp_mvar_value_7 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_mvar_value_7 == NULL)) {
            tmp_mvar_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_mvar_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_10 = CHECK_IF_TRUE(tmp_mvar_value_7);
        if (tmp_truth_name_10 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_29 = tmp_truth_name_10 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_29 == NUITKA_BOOL_TRUE) {
            goto branch_yes_26;
        } else {
            goto branch_no_26;
        }
    }
    branch_yes_26:;
    {
        PyObject *tmp_ass_subvalue_104;
        PyObject *tmp_expression_value_52;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_called_value_34;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_ass_subscribed_104;
        PyObject *tmp_ass_subscript_104;
        tmp_called_value_34 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[295]);

        if (unlikely(tmp_called_value_34 == NULL)) {
            tmp_called_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[295]);
        }

        if (tmp_called_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 292;
        tmp_expression_value_53 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_34, mod_consts[189]);

        if (tmp_expression_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[322]);
        Py_DECREF(tmp_expression_value_53);
        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = mod_consts[3];
        tmp_ass_subvalue_104 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_52, tmp_subscript_value_8, 0);
        Py_DECREF(tmp_expression_value_52);
        if (tmp_ass_subvalue_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_104 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_ass_subscribed_104 == NULL)) {
            tmp_ass_subscribed_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_ass_subscribed_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_104);

            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_104 = mod_consts[323];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_104, tmp_ass_subscript_104, tmp_ass_subvalue_104);
        Py_DECREF(tmp_ass_subvalue_104);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_105;
        PyObject *tmp_ass_subscribed_105;
        PyObject *tmp_ass_subscript_105;
        tmp_ass_subvalue_105 = mod_consts[324];
        tmp_ass_subscribed_105 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_105 == NULL)) {
            tmp_ass_subscribed_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_105 = mod_consts[325];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_105, tmp_ass_subscript_105, tmp_ass_subvalue_105);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_135;
        tmp_assign_source_135 = mod_consts[324];
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_135);
    }
    goto branch_end_26;
    branch_no_26:;
    {
        PyObject *tmp_ass_subvalue_106;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_called_value_35;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_ass_subscribed_106;
        PyObject *tmp_ass_subscript_106;
        tmp_called_value_35 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[295]);

        if (unlikely(tmp_called_value_35 == NULL)) {
            tmp_called_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[295]);
        }

        if (tmp_called_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 295;
        tmp_expression_value_55 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_35, mod_consts[189]);

        if (tmp_expression_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[327]);
        Py_DECREF(tmp_expression_value_55);
        if (tmp_expression_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_9 = mod_consts[3];
        tmp_ass_subvalue_106 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_54, tmp_subscript_value_9, 0);
        Py_DECREF(tmp_expression_value_54);
        if (tmp_ass_subvalue_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_106 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_ass_subscribed_106 == NULL)) {
            tmp_ass_subscribed_106 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_ass_subscribed_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_106);

            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_106 = mod_consts[323];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_106, tmp_ass_subscript_106, tmp_ass_subvalue_106);
        Py_DECREF(tmp_ass_subvalue_106);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 295;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_136;
        PyObject *tmp_called_value_36;
        tmp_called_value_36 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[328]);

        if (unlikely(tmp_called_value_36 == NULL)) {
            tmp_called_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[328]);
        }

        if (tmp_called_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_45;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 296;
        tmp_assign_source_136 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_36, mod_consts[151]);

        if (tmp_assign_source_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_45;
        }
        assert(tmp_assign_unpack_19__assign_source == NULL);
        tmp_assign_unpack_19__assign_source = tmp_assign_source_136;
    }
    {
        PyObject *tmp_ass_subvalue_107;
        PyObject *tmp_ass_subscribed_107;
        PyObject *tmp_ass_subscript_107;
        CHECK_OBJECT(tmp_assign_unpack_19__assign_source);
        tmp_ass_subvalue_107 = tmp_assign_unpack_19__assign_source;
        tmp_ass_subscribed_107 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_107 == NULL)) {
            tmp_ass_subscribed_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_107 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_45;
        }
        tmp_ass_subscript_107 = mod_consts[325];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_107, tmp_ass_subscript_107, tmp_ass_subvalue_107);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;

            goto try_except_handler_45;
        }
    }
    goto try_end_35;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_45 = exception_type;
    exception_keeper_value_45 = exception_value;
    exception_keeper_tb_45 = exception_tb;
    exception_keeper_lineno_45 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_19__assign_source);
    tmp_assign_unpack_19__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_45;
    exception_value = exception_keeper_value_45;
    exception_tb = exception_keeper_tb_45;
    exception_lineno = exception_keeper_lineno_45;

    goto frame_exception_exit_1;
    // End of try:
    try_end_35:;
    {
        PyObject *tmp_assign_source_137;
        CHECK_OBJECT(tmp_assign_unpack_19__assign_source);
        tmp_assign_source_137 = tmp_assign_unpack_19__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[326], tmp_assign_source_137);
    }
    CHECK_OBJECT(tmp_assign_unpack_19__assign_source);
    Py_DECREF(tmp_assign_unpack_19__assign_source);
    tmp_assign_unpack_19__assign_source = NULL;
    branch_end_26:;
    {
        bool tmp_condition_result_30;
        PyObject *tmp_operand_value_7;
        tmp_operand_value_7 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_operand_value_7 == NULL)) {
            tmp_operand_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_operand_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_30 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_30 != false) {
            goto branch_yes_27;
        } else {
            goto branch_no_27;
        }
    }
    branch_yes_27:;
    {
        PyObject *tmp_ass_subvalue_108;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_ass_subscribed_108;
        PyObject *tmp_ass_subscript_108;
        tmp_expression_value_57 = (PyObject *)&PyType_Type;
        tmp_expression_value_56 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_57);
        assert(!(tmp_expression_value_56 == NULL));
        tmp_subscript_value_10 = mod_consts[329];
        tmp_ass_subvalue_108 = LOOKUP_SUBSCRIPT(tmp_expression_value_56, tmp_subscript_value_10);
        Py_DECREF(tmp_expression_value_56);
        if (tmp_ass_subvalue_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_108 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_ass_subscribed_108 == NULL)) {
            tmp_ass_subscribed_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_ass_subscribed_108 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_108);

            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_108 = mod_consts[330];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_108, tmp_ass_subscript_108, tmp_ass_subvalue_108);
        Py_DECREF(tmp_ass_subvalue_108);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 298;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_109;
        PyObject *tmp_expression_value_58;
        PyObject *tmp_ass_subscribed_109;
        PyObject *tmp_ass_subscript_109;
        tmp_expression_value_58 = (PyObject *)&PyType_Type;
        tmp_ass_subvalue_109 = LOOKUP_ATTRIBUTE(tmp_expression_value_58, mod_consts[331]);
        assert(!(tmp_ass_subvalue_109 == NULL));
        tmp_ass_subscribed_109 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_ass_subscribed_109 == NULL)) {
            tmp_ass_subscribed_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_ass_subscribed_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_109);

            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_109 = mod_consts[332];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_109, tmp_ass_subscript_109, tmp_ass_subvalue_109);
        Py_DECREF(tmp_ass_subvalue_109);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 299;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_110;
        PyObject *tmp_expression_value_59;
        PyObject *tmp_expression_value_60;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_ass_subscribed_110;
        PyObject *tmp_ass_subscript_110;
        tmp_expression_value_60 = (PyObject *)&PyType_Type;
        tmp_expression_value_59 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_60);
        assert(!(tmp_expression_value_59 == NULL));
        tmp_subscript_value_11 = mod_consts[73];
        tmp_ass_subvalue_110 = LOOKUP_SUBSCRIPT(tmp_expression_value_59, tmp_subscript_value_11);
        Py_DECREF(tmp_expression_value_59);
        if (tmp_ass_subvalue_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_110 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_110 == NULL)) {
            tmp_ass_subscribed_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_110);

            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_110 = mod_consts[333];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_110, tmp_ass_subscript_110, tmp_ass_subvalue_110);
        Py_DECREF(tmp_ass_subvalue_110);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_111;
        PyObject *tmp_expression_value_61;
        PyObject *tmp_expression_value_62;
        PyObject *tmp_subscript_value_12;
        nuitka_bool tmp_condition_result_31;
        PyObject *tmp_mvar_value_8;
        int tmp_truth_name_11;
        PyObject *tmp_ass_subscribed_111;
        PyObject *tmp_ass_subscript_111;
        tmp_expression_value_62 = (PyObject *)&PyType_Type;
        tmp_expression_value_61 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_62);
        assert(!(tmp_expression_value_61 == NULL));
        tmp_mvar_value_8 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_mvar_value_8 == NULL)) {
            tmp_mvar_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_mvar_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_61);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_11 = CHECK_IF_TRUE(tmp_mvar_value_8);
        if (tmp_truth_name_11 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_61);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_31 = tmp_truth_name_11 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_31 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        tmp_subscript_value_12 = mod_consts[84];
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_subscript_value_12 = mod_consts[329];
        condexpr_end_4:;
        tmp_ass_subvalue_111 = LOOKUP_SUBSCRIPT(tmp_expression_value_61, tmp_subscript_value_12);
        Py_DECREF(tmp_expression_value_61);
        if (tmp_ass_subvalue_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_111 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_ass_subscribed_111 == NULL)) {
            tmp_ass_subscribed_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_ass_subscribed_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_111);

            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_111 = mod_consts[334];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_111, tmp_ass_subscript_111, tmp_ass_subvalue_111);
        Py_DECREF(tmp_ass_subvalue_111);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;

            goto frame_exception_exit_1;
        }
    }
    branch_no_27:;
    {
        nuitka_bool tmp_condition_result_32;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_mvar_value_9;
        int tmp_truth_name_12;
        PyObject *tmp_mvar_value_10;
        int tmp_truth_name_13;
        tmp_mvar_value_9 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_mvar_value_9 == NULL)) {
            tmp_mvar_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_mvar_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_12 = CHECK_IF_TRUE(tmp_mvar_value_9);
        if (tmp_truth_name_12 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = tmp_truth_name_12 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        tmp_mvar_value_10 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_mvar_value_10 == NULL)) {
            tmp_mvar_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_mvar_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_13 = CHECK_IF_TRUE(tmp_mvar_value_10);
        if (tmp_truth_name_13 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;

            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_truth_name_13 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        tmp_condition_result_32 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_32 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_32 == NUITKA_BOOL_TRUE) {
            goto branch_yes_28;
        } else {
            goto branch_no_28;
        }
    }
    branch_yes_28:;
    {
        PyObject *tmp_assign_source_138;
        PyObject *tmp_expression_value_63;
        tmp_expression_value_63 = mod_consts[126];
        tmp_assign_source_138 = LOOKUP_ATTRIBUTE(tmp_expression_value_63, mod_consts[335]);
        assert(!(tmp_assign_source_138 == NULL));
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[336], tmp_assign_source_138);
    }
    goto branch_end_28;
    branch_no_28:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        tmp_raise_type_4 = PyExc_AttributeError;
        tmp_raise_value_4 = mod_consts[337];
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        Py_INCREF(tmp_raise_value_4);
        exception_lineno = 306;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto frame_exception_exit_1;
    }
    branch_end_28:;
    {
        PyObject *tmp_ass_subvalue_112;
        PyObject *tmp_ass_subscribed_112;
        PyObject *tmp_ass_subscript_112;
        tmp_ass_subvalue_112 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[336]);

        if (unlikely(tmp_ass_subvalue_112 == NULL)) {
            tmp_ass_subvalue_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[336]);
        }

        assert(!(tmp_ass_subvalue_112 == NULL));
        tmp_ass_subscribed_112 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_ass_subscribed_112 == NULL)) {
            tmp_ass_subscribed_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_ass_subscribed_112 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_112 = mod_consts[338];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_112, tmp_ass_subscript_112, tmp_ass_subvalue_112);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 307;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_113;
        PyObject *tmp_staticmethod_arg_1;
        PyObject *tmp_ass_subscribed_113;
        PyObject *tmp_ass_subscript_113;
        tmp_staticmethod_arg_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_staticmethod_arg_1 == NULL)) {
            tmp_staticmethod_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_staticmethod_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_113 = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_1);
        if (tmp_ass_subvalue_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_113 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_113 == NULL)) {
            tmp_ass_subscribed_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_113);

            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_113 = mod_consts[339];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_113, tmp_ass_subscript_113, tmp_ass_subvalue_113);
        Py_DECREF(tmp_ass_subvalue_113);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_114;
        PyObject *tmp_classmethod_arg_1;
        PyObject *tmp_ass_subscribed_114;
        PyObject *tmp_ass_subscript_114;
        tmp_classmethod_arg_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_classmethod_arg_1 == NULL)) {
            tmp_classmethod_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_classmethod_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_114 = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
        if (tmp_ass_subvalue_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_114 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_114 == NULL)) {
            tmp_ass_subscribed_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_114);

            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_114 = mod_consts[340];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_114, tmp_ass_subscript_114, tmp_ass_subvalue_114);
        Py_DECREF(tmp_ass_subvalue_114);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 309;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_115;
        PyObject *tmp_called_value_37;
        PyObject *tmp_ass_subscribed_115;
        PyObject *tmp_ass_subscript_115;
        tmp_called_value_37 = (PyObject *)&PyProperty_Type;
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 310;
        tmp_ass_subvalue_115 = CALL_FUNCTION_NO_ARGS(tmp_called_value_37);
        if (tmp_ass_subvalue_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_115 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_115 == NULL)) {
            tmp_ass_subscribed_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_115 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_115);

            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_115 = mod_consts[341];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_115, tmp_ass_subscript_115, tmp_ass_subvalue_115);
        Py_DECREF(tmp_ass_subvalue_115);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 310;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_116;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_ass_subscribed_116;
        PyObject *tmp_ass_subscript_116;
        tmp_type_arg_value_1 = PyExc_Exception;
        tmp_object_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[162]);

        if (unlikely(tmp_object_arg_value_1 == NULL)) {
            tmp_object_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[162]);
        }

        if (tmp_object_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_116 = BUILTIN_SUPER2(moduledict_dill$_objects, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_ass_subvalue_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_116 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_ass_subscribed_116 == NULL)) {
            tmp_ass_subscribed_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_ass_subscribed_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_116);

            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_116 = mod_consts[342];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_116, tmp_ass_subscript_116, tmp_ass_subvalue_116);
        Py_DECREF(tmp_ass_subvalue_116);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_33;
        PyObject *tmp_mvar_value_11;
        int tmp_truth_name_14;
        tmp_mvar_value_11 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_mvar_value_11 == NULL)) {
            tmp_mvar_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_mvar_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_14 = CHECK_IF_TRUE(tmp_mvar_value_11);
        if (tmp_truth_name_14 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_33 = tmp_truth_name_14 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_33 == NUITKA_BOOL_TRUE) {
            goto branch_yes_29;
        } else {
            goto branch_no_29;
        }
    }
    branch_yes_29:;
    {
        PyObject *tmp_assign_source_139;
        tmp_assign_source_139 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_assign_source_139 == NULL)) {
            tmp_assign_source_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_assign_source_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 314;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_139);
    }
    goto branch_end_29;
    branch_no_29:;
    {
        PyObject *tmp_assign_source_140;
        tmp_assign_source_140 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[144]);

        if (unlikely(tmp_assign_source_140 == NULL)) {
            tmp_assign_source_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[144]);
        }

        if (tmp_assign_source_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[343], tmp_assign_source_140);
    }
    branch_end_29:;
    // Tried code:
    {
        PyObject *tmp_assign_source_141;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_38 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_38 == NULL)) {
            tmp_called_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_46;
        }
        tmp_args_element_value_11 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[343]);

        if (unlikely(tmp_args_element_value_11 == NULL)) {
            tmp_args_element_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[343]);
        }

        assert(!(tmp_args_element_value_11 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 317;
        tmp_assign_source_141 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_38, tmp_args_element_value_11);
        if (tmp_assign_source_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_46;
        }
        assert(tmp_assign_unpack_20__assign_source == NULL);
        tmp_assign_unpack_20__assign_source = tmp_assign_source_141;
    }
    {
        PyObject *tmp_ass_subvalue_117;
        PyObject *tmp_ass_subscribed_117;
        PyObject *tmp_ass_subscript_117;
        CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
        tmp_ass_subvalue_117 = tmp_assign_unpack_20__assign_source;
        tmp_ass_subscribed_117 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_117 == NULL)) {
            tmp_ass_subscribed_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_46;
        }
        tmp_ass_subscript_117 = mod_consts[344];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_117, tmp_ass_subscript_117, tmp_ass_subvalue_117);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;

            goto try_except_handler_46;
        }
    }
    goto try_end_36;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_46 = exception_type;
    exception_keeper_value_46 = exception_value;
    exception_keeper_tb_46 = exception_tb;
    exception_keeper_lineno_46 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_20__assign_source);
    tmp_assign_unpack_20__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_46;
    exception_value = exception_keeper_value_46;
    exception_tb = exception_keeper_tb_46;
    exception_lineno = exception_keeper_lineno_46;

    goto frame_exception_exit_1;
    // End of try:
    try_end_36:;
    {
        PyObject *tmp_assign_source_142;
        CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
        tmp_assign_source_142 = tmp_assign_unpack_20__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[345], tmp_assign_source_142);
    }
    CHECK_OBJECT(tmp_assign_unpack_20__assign_source);
    Py_DECREF(tmp_assign_unpack_20__assign_source);
    tmp_assign_unpack_20__assign_source = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_143;
        PyObject *tmp_called_value_39;
        tmp_called_value_39 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_39 == NULL)) {
            tmp_called_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_47;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 318;
        tmp_assign_source_143 = CALL_FUNCTION_NO_ARGS(tmp_called_value_39);
        if (tmp_assign_source_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_47;
        }
        assert(tmp_assign_unpack_21__assign_source == NULL);
        tmp_assign_unpack_21__assign_source = tmp_assign_source_143;
    }
    {
        PyObject *tmp_ass_subvalue_118;
        PyObject *tmp_ass_subscribed_118;
        PyObject *tmp_ass_subscript_118;
        CHECK_OBJECT(tmp_assign_unpack_21__assign_source);
        tmp_ass_subvalue_118 = tmp_assign_unpack_21__assign_source;
        tmp_ass_subscribed_118 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_118 == NULL)) {
            tmp_ass_subscribed_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_47;
        }
        tmp_ass_subscript_118 = mod_consts[346];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_118, tmp_ass_subscript_118, tmp_ass_subvalue_118);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;

            goto try_except_handler_47;
        }
    }
    goto try_end_37;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_47 = exception_type;
    exception_keeper_value_47 = exception_value;
    exception_keeper_tb_47 = exception_tb;
    exception_keeper_lineno_47 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_21__assign_source);
    tmp_assign_unpack_21__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_47;
    exception_value = exception_keeper_value_47;
    exception_tb = exception_keeper_tb_47;
    exception_lineno = exception_keeper_lineno_47;

    goto frame_exception_exit_1;
    // End of try:
    try_end_37:;
    {
        PyObject *tmp_assign_source_144;
        CHECK_OBJECT(tmp_assign_unpack_21__assign_source);
        tmp_assign_source_144 = tmp_assign_unpack_21__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[347], tmp_assign_source_144);
    }
    CHECK_OBJECT(tmp_assign_unpack_21__assign_source);
    Py_DECREF(tmp_assign_unpack_21__assign_source);
    tmp_assign_unpack_21__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_119;
        PyObject *tmp_called_instance_47;
        PyObject *tmp_ass_subscribed_119;
        PyObject *tmp_ass_subscript_119;
        tmp_called_instance_47 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_instance_47 == NULL)) {
            tmp_called_instance_47 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_instance_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 320;
        tmp_ass_subvalue_119 = CALL_METHOD_NO_ARGS(tmp_called_instance_47, mod_consts[348]);
        if (tmp_ass_subvalue_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_119 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_119 == NULL)) {
            tmp_ass_subscribed_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_119);

            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_119 = mod_consts[349];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_119, tmp_ass_subscript_119, tmp_ass_subvalue_119);
        Py_DECREF(tmp_ass_subvalue_119);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_120;
        PyObject *tmp_called_instance_48;
        PyObject *tmp_ass_subscribed_120;
        PyObject *tmp_ass_subscript_120;
        tmp_called_instance_48 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_instance_48 == NULL)) {
            tmp_called_instance_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_instance_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 321;
        tmp_ass_subvalue_120 = CALL_METHOD_NO_ARGS(tmp_called_instance_48, mod_consts[350]);
        if (tmp_ass_subvalue_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_120 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_120 == NULL)) {
            tmp_ass_subscribed_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_120);

            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_120 = mod_consts[351];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_120, tmp_ass_subscript_120, tmp_ass_subvalue_120);
        Py_DECREF(tmp_ass_subvalue_120);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_121;
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_64;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_ass_subscribed_121;
        PyObject *tmp_ass_subscript_121;
        tmp_expression_value_64 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_64 == NULL)) {
            tmp_expression_value_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_64, mod_consts[352]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_12 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_args_element_value_12 == NULL)) {
            tmp_args_element_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_40);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 322;
        tmp_ass_subvalue_121 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_40);
        if (tmp_ass_subvalue_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_121 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_121 == NULL)) {
            tmp_ass_subscribed_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_121);

            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_121 = mod_consts[353];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_121, tmp_ass_subscript_121, tmp_ass_subvalue_121);
        Py_DECREF(tmp_ass_subvalue_121);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_122;
        PyObject *tmp_called_value_41;
        PyObject *tmp_expression_value_65;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_value_42;
        PyObject *tmp_ass_subscribed_122;
        PyObject *tmp_ass_subscript_122;
        tmp_expression_value_65 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_65 == NULL)) {
            tmp_expression_value_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_called_value_41 = LOOKUP_ATTRIBUTE(tmp_expression_value_65, mod_consts[352]);
        if (tmp_called_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_called_value_42 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_42 == NULL)) {
            tmp_called_value_42 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 323;
        tmp_args_element_value_13 = CALL_FUNCTION_NO_ARGS(tmp_called_value_42);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_41);

            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 323;
        tmp_ass_subvalue_122 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_41, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_41);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_ass_subvalue_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_122 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_122 == NULL)) {
            tmp_ass_subscribed_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_122 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_122);

            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_122 = mod_consts[354];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_122, tmp_ass_subscript_122, tmp_ass_subvalue_122);
        Py_DECREF(tmp_ass_subvalue_122);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_123;
        PyObject *tmp_called_value_43;
        PyObject *tmp_expression_value_66;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_ass_subscribed_123;
        PyObject *tmp_ass_subscript_123;
        tmp_expression_value_66 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_66 == NULL)) {
            tmp_expression_value_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_called_value_43 = LOOKUP_ATTRIBUTE(tmp_expression_value_66, mod_consts[355]);
        if (tmp_called_value_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_14 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[135]);

        if (unlikely(tmp_args_element_value_14 == NULL)) {
            tmp_args_element_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[135]);
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_43);

            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 324;
        tmp_ass_subvalue_123 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_43, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_43);
        if (tmp_ass_subvalue_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_123 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_123 == NULL)) {
            tmp_ass_subscribed_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_123);

            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_123 = mod_consts[356];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_123, tmp_ass_subscript_123, tmp_ass_subvalue_123);
        Py_DECREF(tmp_ass_subvalue_123);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_124;
        PyObject *tmp_called_value_44;
        PyObject *tmp_expression_value_67;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_called_value_45;
        PyObject *tmp_ass_subscribed_124;
        PyObject *tmp_ass_subscript_124;
        tmp_expression_value_67 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_67 == NULL)) {
            tmp_expression_value_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_called_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_67, mod_consts[355]);
        if (tmp_called_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_called_value_45 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[74]);

        if (unlikely(tmp_called_value_45 == NULL)) {
            tmp_called_value_45 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[74]);
        }

        if (tmp_called_value_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 325;
        tmp_args_element_value_15 = CALL_FUNCTION_NO_ARGS(tmp_called_value_45);
        if (tmp_args_element_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_44);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 325;
        tmp_ass_subvalue_124 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_44, tmp_args_element_value_15);
        Py_DECREF(tmp_called_value_44);
        Py_DECREF(tmp_args_element_value_15);
        if (tmp_ass_subvalue_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_124 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_124 == NULL)) {
            tmp_ass_subscribed_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_124);

            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_124 = mod_consts[357];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_124, tmp_ass_subscript_124, tmp_ass_subvalue_124);
        Py_DECREF(tmp_ass_subvalue_124);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_125;
        PyObject *tmp_called_value_46;
        PyObject *tmp_expression_value_68;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_ass_subscribed_125;
        PyObject *tmp_ass_subscript_125;
        tmp_expression_value_68 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_68 == NULL)) {
            tmp_expression_value_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_called_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_68, mod_consts[355]);
        if (tmp_called_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_16 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[82]);

        if (unlikely(tmp_args_element_value_16 == NULL)) {
            tmp_args_element_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[82]);
        }

        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_46);

            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 326;
        tmp_ass_subvalue_125 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_46, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_46);
        if (tmp_ass_subvalue_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_125 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_125 == NULL)) {
            tmp_ass_subscribed_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_125 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_125);

            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_125 = mod_consts[358];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_125, tmp_ass_subscript_125, tmp_ass_subvalue_125);
        Py_DECREF(tmp_ass_subvalue_125);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_126;
        PyObject *tmp_called_value_47;
        PyObject *tmp_expression_value_69;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_48;
        PyObject *tmp_ass_subscribed_126;
        PyObject *tmp_ass_subscript_126;
        tmp_expression_value_69 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_expression_value_69 == NULL)) {
            tmp_expression_value_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_expression_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_called_value_47 = LOOKUP_ATTRIBUTE(tmp_expression_value_69, mod_consts[355]);
        if (tmp_called_value_47 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_called_value_48 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[79]);

        if (unlikely(tmp_called_value_48 == NULL)) {
            tmp_called_value_48 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[79]);
        }

        if (tmp_called_value_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 327;
        tmp_args_element_value_17 = CALL_FUNCTION_NO_ARGS(tmp_called_value_48);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_47);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 327;
        tmp_ass_subvalue_126 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_47, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_47);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_ass_subvalue_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_126 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_126 == NULL)) {
            tmp_ass_subscribed_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_126 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_126);

            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_126 = mod_consts[359];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_126, tmp_ass_subscript_126, tmp_ass_subvalue_126);
        Py_DECREF(tmp_ass_subvalue_126);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_127;
        PyObject *tmp_called_instance_49;
        PyObject *tmp_ass_subscribed_127;
        PyObject *tmp_ass_subscript_127;
        tmp_called_instance_49 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_instance_49 == NULL)) {
            tmp_called_instance_49 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_instance_49 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 328;
        tmp_ass_subvalue_127 = CALL_METHOD_NO_ARGS(tmp_called_instance_49, mod_consts[26]);
        if (tmp_ass_subvalue_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_127 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_127 == NULL)) {
            tmp_ass_subscribed_127 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_127 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_127);

            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_127 = mod_consts[360];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_127, tmp_ass_subscript_127, tmp_ass_subvalue_127);
        Py_DECREF(tmp_ass_subvalue_127);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_128;
        PyObject *tmp_called_value_49;
        PyObject *tmp_ass_subscribed_128;
        PyObject *tmp_ass_subscript_128;
        {
            PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
            tmp_called_value_49 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[361]);
        }
        assert(!(tmp_called_value_49 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 330;
        tmp_ass_subvalue_128 = CALL_FUNCTION_WITH_ARGS1_VECTORCALL(tmp_called_value_49, &PyTuple_GET_ITEM(mod_consts[362], 0), mod_consts[363]);
        Py_DECREF(tmp_called_value_49);
        if (tmp_ass_subvalue_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_128 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_ass_subscribed_128 == NULL)) {
            tmp_ass_subscribed_128 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_ass_subscribed_128 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_128);

            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_128 = mod_consts[364];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_128, tmp_ass_subscript_128, tmp_ass_subvalue_128);
        Py_DECREF(tmp_ass_subvalue_128);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 330;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_34;
        PyObject *tmp_mvar_value_12;
        int tmp_truth_name_15;
        tmp_mvar_value_12 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_mvar_value_12 == NULL)) {
            tmp_mvar_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_mvar_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_15 = CHECK_IF_TRUE(tmp_mvar_value_12);
        if (tmp_truth_name_15 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 331;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_34 = tmp_truth_name_15 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_34 == NUITKA_BOOL_TRUE) {
            goto branch_yes_30;
        } else {
            goto branch_no_30;
        }
    }
    branch_yes_30:;
    {
        PyObject *tmp_ass_subvalue_129;
        PyObject *tmp_called_value_50;
        PyObject *tmp_ass_subscribed_129;
        PyObject *tmp_ass_subscript_129;
        tmp_called_value_50 = (PyObject *)&PyZip_Type;
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 332;
        tmp_ass_subvalue_129 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_50, mod_consts[365]);

        if (tmp_ass_subvalue_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_129 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_129 == NULL)) {
            tmp_ass_subscribed_129 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_129 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_129);

            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_129 = mod_consts[366];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_129, tmp_ass_subscript_129, tmp_ass_subvalue_129);
        Py_DECREF(tmp_ass_subvalue_129);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 332;

            goto frame_exception_exit_1;
        }
    }
    goto branch_end_30;
    branch_no_30:;
    {
        PyObject *tmp_ass_subvalue_130;
        PyObject *tmp_called_instance_50;
        PyObject *tmp_ass_subscribed_130;
        PyObject *tmp_ass_subscript_130;
        tmp_called_instance_50 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_50 == NULL)) {
            tmp_called_instance_50 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 334;
        tmp_ass_subvalue_130 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_50,
            mod_consts[367],
            &PyTuple_GET_ITEM(mod_consts[365], 0)
        );

        if (tmp_ass_subvalue_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_130 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_130 == NULL)) {
            tmp_ass_subscribed_130 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_130 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_130);

            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_130 = mod_consts[366];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_130, tmp_ass_subscript_130, tmp_ass_subvalue_130);
        Py_DECREF(tmp_ass_subvalue_130);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;

            goto frame_exception_exit_1;
        }
    }
    branch_end_30:;
    {
        PyObject *tmp_ass_subvalue_131;
        PyObject *tmp_called_instance_51;
        PyObject *tmp_ass_subscribed_131;
        PyObject *tmp_ass_subscript_131;
        tmp_called_instance_51 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_51 == NULL)) {
            tmp_called_instance_51 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 335;
        tmp_ass_subvalue_131 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_51,
            mod_consts[368],
            &PyTuple_GET_ITEM(mod_consts[365], 0)
        );

        if (tmp_ass_subvalue_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_131 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_131 == NULL)) {
            tmp_ass_subscribed_131 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_131 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_131);

            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_131 = mod_consts[369];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_131, tmp_ass_subscript_131, tmp_ass_subvalue_131);
        Py_DECREF(tmp_ass_subvalue_131);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_132;
        PyObject *tmp_called_instance_52;
        PyObject *tmp_ass_subscribed_132;
        PyObject *tmp_ass_subscript_132;
        tmp_called_instance_52 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_52 == NULL)) {
            tmp_called_instance_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_instance_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 336;
        tmp_ass_subvalue_132 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_52,
            mod_consts[370],
            PyTuple_GET_ITEM(mod_consts[189], 0)
        );

        if (tmp_ass_subvalue_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_132 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_ass_subscribed_132 == NULL)) {
            tmp_ass_subscribed_132 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_ass_subscribed_132 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_132);

            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_132 = mod_consts[371];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_132, tmp_ass_subscript_132, tmp_ass_subvalue_132);
        Py_DECREF(tmp_ass_subvalue_132);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_133;
        PyObject *tmp_called_instance_53;
        PyObject *tmp_ass_subscribed_133;
        PyObject *tmp_ass_subscript_133;
        tmp_called_instance_53 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_53 == NULL)) {
            tmp_called_instance_53 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_instance_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 337;
        tmp_ass_subvalue_133 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_53,
            mod_consts[372],
            PyTuple_GET_ITEM(mod_consts[373], 0)
        );

        if (tmp_ass_subvalue_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_133 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_ass_subscribed_133 == NULL)) {
            tmp_ass_subscribed_133 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_ass_subscribed_133 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_133);

            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_133 = mod_consts[374];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_133, tmp_ass_subscript_133, tmp_ass_subvalue_133);
        Py_DECREF(tmp_ass_subvalue_133);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_35;
        PyObject *tmp_mvar_value_13;
        int tmp_truth_name_16;
        tmp_mvar_value_13 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_mvar_value_13 == NULL)) {
            tmp_mvar_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_mvar_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_16 = CHECK_IF_TRUE(tmp_mvar_value_13);
        if (tmp_truth_name_16 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_35 = tmp_truth_name_16 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_35 == NUITKA_BOOL_TRUE) {
            goto branch_yes_31;
        } else {
            goto branch_no_31;
        }
    }
    branch_yes_31:;
    {
        PyObject *tmp_assign_source_145;
        tmp_assign_source_145 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[347]);

        if (unlikely(tmp_assign_source_145 == NULL)) {
            tmp_assign_source_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[347]);
        }

        if (tmp_assign_source_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_145);
    }
    goto branch_end_31;
    branch_no_31:;
    {
        PyObject *tmp_assign_source_146;
        tmp_assign_source_146 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_assign_source_146 == NULL)) {
            tmp_assign_source_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_assign_source_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[375], tmp_assign_source_146);
    }
    branch_end_31:;
    {
        nuitka_bool tmp_condition_result_36;
        PyObject *tmp_mvar_value_14;
        int tmp_truth_name_17;
        tmp_mvar_value_14 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_mvar_value_14 == NULL)) {
            tmp_mvar_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_mvar_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_17 = CHECK_IF_TRUE(tmp_mvar_value_14);
        if (tmp_truth_name_17 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 342;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_36 = tmp_truth_name_17 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_36 == NUITKA_BOOL_TRUE) {
            goto branch_yes_32;
        } else {
            goto branch_no_32;
        }
    }
    branch_yes_32:;
    // Tried code:
    {
        PyObject *tmp_assign_source_147;
        PyObject *tmp_called_instance_54;
        tmp_called_instance_54 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_instance_54 == NULL)) {
            tmp_called_instance_54 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_instance_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_48;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 343;
        tmp_assign_source_147 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_54,
            mod_consts[376],
            PyTuple_GET_ITEM(mod_consts[377], 0)
        );

        if (tmp_assign_source_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_48;
        }
        assert(tmp_assign_unpack_22__assign_source == NULL);
        tmp_assign_unpack_22__assign_source = tmp_assign_source_147;
    }
    {
        PyObject *tmp_ass_subvalue_134;
        PyObject *tmp_ass_subscribed_134;
        PyObject *tmp_ass_subscript_134;
        CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
        tmp_ass_subvalue_134 = tmp_assign_unpack_22__assign_source;
        tmp_ass_subscribed_134 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_134 == NULL)) {
            tmp_ass_subscribed_134 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_134 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_48;
        }
        tmp_ass_subscript_134 = mod_consts[378];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_134, tmp_ass_subscript_134, tmp_ass_subvalue_134);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 343;

            goto try_except_handler_48;
        }
    }
    goto try_end_38;
    // Exception handler code:
    try_except_handler_48:;
    exception_keeper_type_48 = exception_type;
    exception_keeper_value_48 = exception_value;
    exception_keeper_tb_48 = exception_tb;
    exception_keeper_lineno_48 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_22__assign_source);
    tmp_assign_unpack_22__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_48;
    exception_value = exception_keeper_value_48;
    exception_tb = exception_keeper_tb_48;
    exception_lineno = exception_keeper_lineno_48;

    goto frame_exception_exit_1;
    // End of try:
    try_end_38:;
    {
        PyObject *tmp_assign_source_148;
        CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
        tmp_assign_source_148 = tmp_assign_unpack_22__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[379], tmp_assign_source_148);
    }
    CHECK_OBJECT(tmp_assign_unpack_22__assign_source);
    Py_DECREF(tmp_assign_unpack_22__assign_source);
    tmp_assign_unpack_22__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_135;
        PyObject *tmp_called_instance_55;
        PyObject *tmp_ass_subscribed_135;
        PyObject *tmp_ass_subscript_135;
        tmp_called_instance_55 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[379]);

        if (unlikely(tmp_called_instance_55 == NULL)) {
            tmp_called_instance_55 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[379]);
        }

        if (tmp_called_instance_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 344;
        tmp_ass_subvalue_135 = CALL_METHOD_NO_ARGS(tmp_called_instance_55, mod_consts[380]);
        if (tmp_ass_subvalue_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_135 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_135 == NULL)) {
            tmp_ass_subscribed_135 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_135 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_135);

            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_135 = mod_consts[381];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_135, tmp_ass_subscript_135, tmp_ass_subvalue_135);
        Py_DECREF(tmp_ass_subvalue_135);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
    }
    branch_no_32:;
    {
        PyObject *tmp_ass_subvalue_136;
        PyObject *tmp_called_instance_56;
        PyObject *tmp_call_arg_element_2;
        PyObject *tmp_ass_subscribed_136;
        PyObject *tmp_ass_subscript_136;
        tmp_called_instance_56 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_instance_56 == NULL)) {
            tmp_called_instance_56 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_instance_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_2 = MAKE_DICT_EMPTY();
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 345;
        tmp_ass_subvalue_136 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_56, mod_consts[382], tmp_call_arg_element_2);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_ass_subvalue_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_136 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_136 == NULL)) {
            tmp_ass_subscribed_136 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_136 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_136);

            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_136 = mod_consts[383];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_136, tmp_ass_subscript_136, tmp_ass_subvalue_136);
        Py_DECREF(tmp_ass_subvalue_136);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_37;
        PyObject *tmp_mvar_value_15;
        int tmp_truth_name_18;
        tmp_mvar_value_15 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_mvar_value_15 == NULL)) {
            tmp_mvar_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_mvar_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_18 = CHECK_IF_TRUE(tmp_mvar_value_15);
        if (tmp_truth_name_18 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_37 = tmp_truth_name_18 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_37 == NUITKA_BOOL_TRUE) {
            goto branch_yes_33;
        } else {
            goto branch_no_33;
        }
    }
    branch_yes_33:;
    {
        nuitka_bool tmp_condition_result_38;
        PyObject *tmp_mvar_value_16;
        int tmp_truth_name_19;
        tmp_mvar_value_16 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_mvar_value_16 == NULL)) {
            tmp_mvar_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_mvar_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_19 = CHECK_IF_TRUE(tmp_mvar_value_16);
        if (tmp_truth_name_19 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_38 = tmp_truth_name_19 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_38 == NUITKA_BOOL_TRUE) {
            goto branch_yes_34;
        } else {
            goto branch_no_34;
        }
    }
    branch_yes_34:;
    {
        PyObject *tmp_ass_subvalue_137;
        PyObject *tmp_called_value_51;
        PyObject *tmp_expression_value_70;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_71;
        PyObject *tmp_ass_subscribed_137;
        PyObject *tmp_ass_subscript_137;
        tmp_expression_value_70 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_expression_value_70 == NULL)) {
            tmp_expression_value_70 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_expression_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_called_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_70, mod_consts[384]);
        if (tmp_called_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_71 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_71 == NULL)) {
            tmp_expression_value_71 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_71 == NULL));
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_71, mod_consts[288]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_51);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 349;
        tmp_ass_subvalue_137 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_51, tmp_args_element_value_18);
        Py_DECREF(tmp_called_value_51);
        Py_DECREF(tmp_args_element_value_18);
        if (tmp_ass_subvalue_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_137 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_137 == NULL)) {
            tmp_ass_subscribed_137 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_137 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_137);

            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_137 = mod_consts[385];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_137, tmp_ass_subscript_137, tmp_ass_subvalue_137);
        Py_DECREF(tmp_ass_subvalue_137);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;

            goto frame_exception_exit_1;
        }
    }
    branch_no_34:;
    {
        PyObject *tmp_ass_subvalue_138;
        PyObject *tmp_called_instance_57;
        PyObject *tmp_ass_subscribed_138;
        PyObject *tmp_ass_subscript_138;
        tmp_called_instance_57 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_instance_57 == NULL)) {
            tmp_called_instance_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_instance_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 350;
        tmp_ass_subvalue_138 = CALL_METHOD_NO_ARGS(tmp_called_instance_57, mod_consts[386]);
        if (tmp_ass_subvalue_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_138 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_138 == NULL)) {
            tmp_ass_subscribed_138 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_138 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_138);

            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_138 = mod_consts[387];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_138, tmp_ass_subscript_138, tmp_ass_subvalue_138);
        Py_DECREF(tmp_ass_subvalue_138);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 350;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_139;
        PyObject *tmp_called_instance_58;
        PyObject *tmp_ass_subscribed_139;
        PyObject *tmp_ass_subscript_139;
        tmp_called_instance_58 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_instance_58 == NULL)) {
            tmp_called_instance_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_instance_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 351;
        tmp_ass_subvalue_139 = CALL_METHOD_NO_ARGS(tmp_called_instance_58, mod_consts[388]);
        if (tmp_ass_subvalue_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_139 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_139 == NULL)) {
            tmp_ass_subscribed_139 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_139 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_139);

            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_139 = mod_consts[389];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_139, tmp_ass_subscript_139, tmp_ass_subvalue_139);
        Py_DECREF(tmp_ass_subvalue_139);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;

            goto frame_exception_exit_1;
        }
    }
    branch_no_33:;
    {
        PyObject *tmp_ass_subvalue_140;
        PyObject *tmp_called_value_52;
        PyObject *tmp_expression_value_72;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_ass_subscribed_140;
        PyObject *tmp_ass_subscript_140;
        tmp_expression_value_72 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[51]);

        if (unlikely(tmp_expression_value_72 == NULL)) {
            tmp_expression_value_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[51]);
        }

        if (tmp_expression_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_called_value_52 = LOOKUP_ATTRIBUTE(tmp_expression_value_72, mod_consts[315]);
        if (tmp_called_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[375]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[375]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_52);

            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = mod_consts[390];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 355;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1};

            tmp_ass_subvalue_140 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_52, kw_values, mod_consts[391]);
        }

        Py_DECREF(tmp_called_value_52);
        if (tmp_ass_subvalue_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_140 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_140 == NULL)) {
            tmp_ass_subscribed_140 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_140 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_140);

            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_140 = mod_consts[392];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_140, tmp_ass_subscript_140, tmp_ass_subvalue_140);
        Py_DECREF(tmp_ass_subvalue_140);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 355;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_141;
        PyObject *tmp_called_instance_59;
        PyObject *tmp_ass_subscribed_141;
        PyObject *tmp_ass_subscript_141;
        tmp_called_instance_59 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_called_instance_59 == NULL)) {
            tmp_called_instance_59 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_called_instance_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 357;
        tmp_ass_subvalue_141 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_59,
            mod_consts[393],
            PyTuple_GET_ITEM(mod_consts[394], 0)
        );

        if (tmp_ass_subvalue_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_141 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_141 == NULL)) {
            tmp_ass_subscribed_141 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_141 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_141);

            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_141 = mod_consts[395];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_141, tmp_ass_subscript_141, tmp_ass_subvalue_141);
        Py_DECREF(tmp_ass_subvalue_141);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_142;
        PyObject *tmp_called_instance_60;
        PyObject *tmp_ass_subscribed_142;
        PyObject *tmp_ass_subscript_142;
        tmp_called_instance_60 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_called_instance_60 == NULL)) {
            tmp_called_instance_60 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_called_instance_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 358;
        tmp_ass_subvalue_142 = CALL_METHOD_NO_ARGS(tmp_called_instance_60, mod_consts[396]);
        if (tmp_ass_subvalue_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_142 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_142 == NULL)) {
            tmp_ass_subscribed_142 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_142 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_142);

            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_142 = mod_consts[397];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_142, tmp_ass_subscript_142, tmp_ass_subvalue_142);
        Py_DECREF(tmp_ass_subvalue_142);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_143;
        PyObject *tmp_called_instance_61;
        PyObject *tmp_ass_subscribed_143;
        PyObject *tmp_ass_subscript_143;
        tmp_called_instance_61 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_61 == NULL)) {
            tmp_called_instance_61 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 360;
        tmp_ass_subvalue_143 = CALL_METHOD_NO_ARGS(tmp_called_instance_61, mod_consts[398]);
        if (tmp_ass_subvalue_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_143 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_143 == NULL)) {
            tmp_ass_subscribed_143 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_143 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_143);

            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_143 = mod_consts[399];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_143, tmp_ass_subscript_143, tmp_ass_subvalue_143);
        Py_DECREF(tmp_ass_subvalue_143);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_144;
        PyObject *tmp_called_instance_62;
        PyObject *tmp_ass_subscribed_144;
        PyObject *tmp_ass_subscript_144;
        tmp_called_instance_62 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_instance_62 == NULL)) {
            tmp_called_instance_62 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_instance_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 361;
        tmp_ass_subvalue_144 = CALL_METHOD_NO_ARGS(tmp_called_instance_62, mod_consts[400]);
        if (tmp_ass_subvalue_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_144 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_144 == NULL)) {
            tmp_ass_subscribed_144 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_144 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_144);

            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_144 = mod_consts[401];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_144, tmp_ass_subscript_144, tmp_ass_subvalue_144);
        Py_DECREF(tmp_ass_subvalue_144);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_149;
        PyObject *tmp_called_instance_63;
        tmp_called_instance_63 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_63 == NULL)) {
            tmp_called_instance_63 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_49;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 363;
        tmp_assign_source_149 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_63,
            mod_consts[193],
            PyTuple_GET_ITEM(mod_consts[402], 0)
        );

        if (tmp_assign_source_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_49;
        }
        assert(tmp_assign_unpack_23__assign_source == NULL);
        tmp_assign_unpack_23__assign_source = tmp_assign_source_149;
    }
    {
        PyObject *tmp_ass_subvalue_145;
        PyObject *tmp_ass_subscribed_145;
        PyObject *tmp_ass_subscript_145;
        CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
        tmp_ass_subvalue_145 = tmp_assign_unpack_23__assign_source;
        tmp_ass_subscribed_145 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_145 == NULL)) {
            tmp_ass_subscribed_145 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_145 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_49;
        }
        tmp_ass_subscript_145 = mod_consts[403];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_145, tmp_ass_subscript_145, tmp_ass_subvalue_145);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;

            goto try_except_handler_49;
        }
    }
    goto try_end_39;
    // Exception handler code:
    try_except_handler_49:;
    exception_keeper_type_49 = exception_type;
    exception_keeper_value_49 = exception_value;
    exception_keeper_tb_49 = exception_tb;
    exception_keeper_lineno_49 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_23__assign_source);
    tmp_assign_unpack_23__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_49;
    exception_value = exception_keeper_value_49;
    exception_tb = exception_keeper_tb_49;
    exception_lineno = exception_keeper_lineno_49;

    goto frame_exception_exit_1;
    // End of try:
    try_end_39:;
    {
        PyObject *tmp_assign_source_150;
        CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
        tmp_assign_source_150 = tmp_assign_unpack_23__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[264], tmp_assign_source_150);
    }
    CHECK_OBJECT(tmp_assign_unpack_23__assign_source);
    Py_DECREF(tmp_assign_unpack_23__assign_source);
    tmp_assign_unpack_23__assign_source = NULL;
    {
        nuitka_bool tmp_condition_result_39;
        PyObject *tmp_mvar_value_17;
        int tmp_truth_name_20;
        tmp_mvar_value_17 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_mvar_value_17 == NULL)) {
            tmp_mvar_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_mvar_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_20 = CHECK_IF_TRUE(tmp_mvar_value_17);
        if (tmp_truth_name_20 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_39 = tmp_truth_name_20 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_39 == NUITKA_BOOL_TRUE) {
            goto branch_yes_35;
        } else {
            goto branch_no_35;
        }
    }
    branch_yes_35:;
    // Tried code:
    {
        PyObject *tmp_assign_source_151;
        PyObject *tmp_called_instance_64;
        tmp_called_instance_64 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_instance_64 == NULL)) {
            tmp_called_instance_64 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_instance_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_50;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 367;
        tmp_assign_source_151 = CALL_METHOD_NO_ARGS(tmp_called_instance_64, mod_consts[60]);
        if (tmp_assign_source_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_50;
        }
        assert(tmp_assign_unpack_24__assign_source == NULL);
        tmp_assign_unpack_24__assign_source = tmp_assign_source_151;
    }
    {
        PyObject *tmp_ass_subvalue_146;
        PyObject *tmp_ass_subscribed_146;
        PyObject *tmp_ass_subscript_146;
        CHECK_OBJECT(tmp_assign_unpack_24__assign_source);
        tmp_ass_subvalue_146 = tmp_assign_unpack_24__assign_source;
        tmp_ass_subscribed_146 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_146 == NULL)) {
            tmp_ass_subscribed_146 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_146 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_50;
        }
        tmp_ass_subscript_146 = mod_consts[404];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_146, tmp_ass_subscript_146, tmp_ass_subvalue_146);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;

            goto try_except_handler_50;
        }
    }
    goto try_end_40;
    // Exception handler code:
    try_except_handler_50:;
    exception_keeper_type_50 = exception_type;
    exception_keeper_value_50 = exception_value;
    exception_keeper_tb_50 = exception_tb;
    exception_keeper_lineno_50 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_24__assign_source);
    tmp_assign_unpack_24__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_50;
    exception_value = exception_keeper_value_50;
    exception_tb = exception_keeper_tb_50;
    exception_lineno = exception_keeper_lineno_50;

    goto frame_exception_exit_1;
    // End of try:
    try_end_40:;
    {
        PyObject *tmp_assign_source_152;
        CHECK_OBJECT(tmp_assign_unpack_24__assign_source);
        tmp_assign_source_152 = tmp_assign_unpack_24__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_152);
    }
    CHECK_OBJECT(tmp_assign_unpack_24__assign_source);
    Py_DECREF(tmp_assign_unpack_24__assign_source);
    tmp_assign_unpack_24__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_147;
        PyObject *tmp_expression_value_73;
        PyObject *tmp_called_instance_65;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_ass_subscribed_147;
        PyObject *tmp_ass_subscript_147;
        tmp_called_instance_65 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_instance_65 == NULL)) {
            tmp_called_instance_65 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_instance_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 368;
        tmp_expression_value_73 = CALL_METHOD_NO_ARGS(tmp_called_instance_65, mod_consts[406]);
        if (tmp_expression_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = mod_consts[3];
        tmp_ass_subvalue_147 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_73, tmp_subscript_value_13, 0);
        Py_DECREF(tmp_expression_value_73);
        if (tmp_ass_subvalue_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_147 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_147 == NULL)) {
            tmp_ass_subscribed_147 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_147 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_147);

            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_147 = mod_consts[407];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_147, tmp_ass_subscript_147, tmp_ass_subvalue_147);
        Py_DECREF(tmp_ass_subvalue_147);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;

            goto frame_exception_exit_1;
        }
    }
    goto branch_end_35;
    branch_no_35:;
    // Tried code:
    {
        PyObject *tmp_assign_source_153;
        PyObject *tmp_called_instance_66;
        tmp_called_instance_66 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_instance_66 == NULL)) {
            tmp_called_instance_66 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_instance_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto try_except_handler_51;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 370;
        tmp_assign_source_153 = CALL_METHOD_NO_ARGS(tmp_called_instance_66, mod_consts[60]);
        if (tmp_assign_source_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto try_except_handler_51;
        }
        assert(tmp_assign_unpack_25__assign_source == NULL);
        tmp_assign_unpack_25__assign_source = tmp_assign_source_153;
    }
    {
        PyObject *tmp_ass_subvalue_148;
        PyObject *tmp_ass_subscribed_148;
        PyObject *tmp_ass_subscript_148;
        CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
        tmp_ass_subvalue_148 = tmp_assign_unpack_25__assign_source;
        tmp_ass_subscribed_148 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_148 == NULL)) {
            tmp_ass_subscribed_148 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_148 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto try_except_handler_51;
        }
        tmp_ass_subscript_148 = mod_consts[404];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_148, tmp_ass_subscript_148, tmp_ass_subvalue_148);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;

            goto try_except_handler_51;
        }
    }
    goto try_end_41;
    // Exception handler code:
    try_except_handler_51:;
    exception_keeper_type_51 = exception_type;
    exception_keeper_value_51 = exception_value;
    exception_keeper_tb_51 = exception_tb;
    exception_keeper_lineno_51 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_25__assign_source);
    tmp_assign_unpack_25__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_51;
    exception_value = exception_keeper_value_51;
    exception_tb = exception_keeper_tb_51;
    exception_lineno = exception_keeper_lineno_51;

    goto frame_exception_exit_1;
    // End of try:
    try_end_41:;
    {
        PyObject *tmp_assign_source_154;
        CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
        tmp_assign_source_154 = tmp_assign_unpack_25__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[405], tmp_assign_source_154);
    }
    CHECK_OBJECT(tmp_assign_unpack_25__assign_source);
    Py_DECREF(tmp_assign_unpack_25__assign_source);
    tmp_assign_unpack_25__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_149;
        PyObject *tmp_expression_value_74;
        PyObject *tmp_ass_subscribed_149;
        PyObject *tmp_ass_subscript_149;
        tmp_expression_value_74 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[405]);

        if (unlikely(tmp_expression_value_74 == NULL)) {
            tmp_expression_value_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[405]);
        }

        if (tmp_expression_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_149 = LOOKUP_ATTRIBUTE(tmp_expression_value_74, mod_consts[408]);
        if (tmp_ass_subvalue_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_149 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_149 == NULL)) {
            tmp_ass_subscribed_149 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_149 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_149);

            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_149 = mod_consts[407];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_149, tmp_ass_subscript_149, tmp_ass_subvalue_149);
        Py_DECREF(tmp_ass_subvalue_149);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;

            goto frame_exception_exit_1;
        }
    }
    branch_end_35:;
    {
        nuitka_bool tmp_condition_result_40;
        PyObject *tmp_mvar_value_18;
        int tmp_truth_name_21;
        tmp_mvar_value_18 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_mvar_value_18 == NULL)) {
            tmp_mvar_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_mvar_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_21 = CHECK_IF_TRUE(tmp_mvar_value_18);
        if (tmp_truth_name_21 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_40 = tmp_truth_name_21 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_40 == NUITKA_BOOL_TRUE) {
            goto branch_yes_36;
        } else {
            goto branch_no_36;
        }
    }
    branch_yes_36:;
    {
        PyObject *tmp_ass_subvalue_150;
        PyObject *tmp_called_value_53;
        PyObject *tmp_called_instance_67;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_ass_subscribed_150;
        PyObject *tmp_ass_subscript_150;
        tmp_called_instance_67 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_instance_67 == NULL)) {
            tmp_called_instance_67 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_instance_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 374;
        tmp_called_value_53 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_67,
            mod_consts[409],
            PyTuple_GET_ITEM(mod_consts[410], 0)
        );

        if (tmp_called_value_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_3 = MAKE_LIST1(mod_consts[126]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 374;
        tmp_ass_subvalue_150 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_53, tmp_call_arg_element_3);
        Py_DECREF(tmp_called_value_53);
        Py_DECREF(tmp_call_arg_element_3);
        if (tmp_ass_subvalue_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_150 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_150 == NULL)) {
            tmp_ass_subscribed_150 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_150 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_150);

            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_150 = mod_consts[411];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_150, tmp_ass_subscript_150, tmp_ass_subvalue_150);
        Py_DECREF(tmp_ass_subvalue_150);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;

            goto frame_exception_exit_1;
        }
    }
    goto branch_end_36;
    branch_no_36:;
    {
        PyObject *tmp_ass_subvalue_151;
        PyObject *tmp_called_instance_68;
        PyObject *tmp_ass_subscribed_151;
        PyObject *tmp_ass_subscript_151;
        tmp_called_instance_68 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[61]);

        if (unlikely(tmp_called_instance_68 == NULL)) {
            tmp_called_instance_68 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[61]);
        }

        if (tmp_called_instance_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 376;
        tmp_ass_subvalue_151 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_68,
            mod_consts[412],
            PyTuple_GET_ITEM(mod_consts[410], 0)
        );

        if (tmp_ass_subvalue_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_151 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_151 == NULL)) {
            tmp_ass_subscribed_151 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_151 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_151);

            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_151 = mod_consts[411];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_151, tmp_ass_subscript_151, tmp_ass_subvalue_151);
        Py_DECREF(tmp_ass_subvalue_151);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;

            goto frame_exception_exit_1;
        }
    }
    branch_end_36:;
    // Tried code:
    {
        PyObject *tmp_mvar_value_19;
        tmp_mvar_value_19 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[413]);

        if (unlikely(tmp_mvar_value_19 == NULL)) {
            tmp_mvar_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[413]);
        }

        if (tmp_mvar_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;

            goto try_except_handler_52;
        }
    }
    goto try_end_42;
    // Exception handler code:
    try_except_handler_52:;
    exception_keeper_type_52 = exception_type;
    exception_keeper_value_52 = exception_value;
    exception_keeper_tb_52 = exception_tb;
    exception_keeper_lineno_52 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 10.
    exception_preserved_10 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_52 == NULL) {
        exception_keeper_tb_52 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_52);
    } else if (exception_keeper_lineno_52 != 0) {
        exception_keeper_tb_52 = ADD_TRACEBACK(exception_keeper_tb_52, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_52);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_52, &exception_keeper_value_52, &exception_keeper_tb_52);
    // Tried code:
    {
        bool tmp_condition_result_41;
        PyObject *tmp_cmp_expr_left_12;
        PyObject *tmp_cmp_expr_right_12;
        tmp_cmp_expr_left_12 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_12 = PyExc_NameError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        assert(!(tmp_res == -1));
        tmp_condition_result_41 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_41 != false) {
            goto branch_yes_37;
        } else {
            goto branch_no_37;
        }
    }
    branch_yes_37:;
    {
        PyObject *tmp_ass_subvalue_152;
        PyObject *tmp_ass_subscribed_152;
        PyObject *tmp_ass_subscript_152;
        tmp_ass_subvalue_152 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[414]);

        if (unlikely(tmp_ass_subvalue_152 == NULL)) {
            tmp_ass_subvalue_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[414]);
        }

        if (tmp_ass_subvalue_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto try_except_handler_53;
        }
        tmp_ass_subscribed_152 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_152 == NULL)) {
            tmp_ass_subscribed_152 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_152 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto try_except_handler_53;
        }
        tmp_ass_subscript_152 = mod_consts[415];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_152, tmp_ass_subscript_152, tmp_ass_subvalue_152);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto try_except_handler_53;
        }
    }
    {
        PyObject *tmp_ass_subvalue_153;
        PyObject *tmp_expression_value_75;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_ass_subscribed_153;
        PyObject *tmp_ass_subscript_153;
        tmp_expression_value_75 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_75 == NULL)) {
            tmp_expression_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_53;
        }
        tmp_subscript_value_14 = mod_consts[415];
        tmp_ass_subvalue_153 = LOOKUP_SUBSCRIPT(tmp_expression_value_75, tmp_subscript_value_14);
        if (tmp_ass_subvalue_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_53;
        }
        tmp_ass_subscribed_153 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_ass_subscribed_153 == NULL)) {
            tmp_ass_subscribed_153 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_ass_subscribed_153 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_153);

            exception_lineno = 383;

            goto try_except_handler_53;
        }
        tmp_ass_subscript_153 = mod_consts[416];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_153, tmp_ass_subscript_153, tmp_ass_subvalue_153);
        Py_DECREF(tmp_ass_subvalue_153);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;

            goto try_except_handler_53;
        }
    }
    goto branch_end_37;
    branch_no_37:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 378;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_53;
    branch_end_37:;
    goto try_end_43;
    // Exception handler code:
    try_except_handler_53:;
    exception_keeper_type_53 = exception_type;
    exception_keeper_value_53 = exception_value;
    exception_keeper_tb_53 = exception_tb;
    exception_keeper_lineno_53 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(&exception_preserved_10);

    // Re-raise.
    exception_type = exception_keeper_type_53;
    exception_value = exception_keeper_value_53;
    exception_tb = exception_keeper_tb_53;
    exception_lineno = exception_keeper_lineno_53;

    goto frame_exception_exit_1;
    // End of try:
    try_end_43:;
    // Restore previous exception id 10.
    SET_CURRENT_EXCEPTION(&exception_preserved_10);

    goto try_end_42;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_42:;
    // Tried code:
    {
        PyObject *tmp_assign_source_155;
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_42;
        PyObject *tmp_globals_arg_value_42;
        PyObject *tmp_locals_arg_value_42;
        PyObject *tmp_fromlist_value_42;
        PyObject *tmp_level_value_42;
        tmp_name_value_42 = mod_consts[417];
        tmp_globals_arg_value_42 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_42 = Py_None;
        tmp_fromlist_value_42 = mod_consts[418];
        tmp_level_value_42 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 385;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_42, tmp_globals_arg_value_42, tmp_locals_arg_value_42, tmp_fromlist_value_42, tmp_level_value_42);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_54;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_155 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[419],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_155 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[419]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 385;

            goto try_except_handler_54;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[420], tmp_assign_source_155);
    }
    {
        PyObject *tmp_assign_source_156;
        PyObject *tmp_import_name_from_8;
        PyObject *tmp_name_value_43;
        PyObject *tmp_globals_arg_value_43;
        PyObject *tmp_locals_arg_value_43;
        PyObject *tmp_fromlist_value_43;
        PyObject *tmp_level_value_43;
        tmp_name_value_43 = mod_consts[417];
        tmp_globals_arg_value_43 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_43 = Py_None;
        tmp_fromlist_value_43 = mod_consts[421];
        tmp_level_value_43 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 386;
        tmp_import_name_from_8 = IMPORT_MODULE5(tmp_name_value_43, tmp_globals_arg_value_43, tmp_locals_arg_value_43, tmp_fromlist_value_43, tmp_level_value_43);
        if (tmp_import_name_from_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto try_except_handler_54;
        }
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_156 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[34],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_156 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[34]);
        }

        Py_DECREF(tmp_import_name_from_8);
        if (tmp_assign_source_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 386;

            goto try_except_handler_54;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[422], tmp_assign_source_156);
    }
    {
        PyObject *tmp_assign_source_157;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_44;
        PyObject *tmp_globals_arg_value_44;
        PyObject *tmp_locals_arg_value_44;
        PyObject *tmp_fromlist_value_44;
        PyObject *tmp_level_value_44;
        tmp_name_value_44 = mod_consts[417];
        tmp_globals_arg_value_44 = (PyObject *)moduledict_dill$_objects;
        tmp_locals_arg_value_44 = Py_None;
        tmp_fromlist_value_44 = mod_consts[423];
        tmp_level_value_44 = mod_consts[3];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 387;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_44, tmp_globals_arg_value_44, tmp_locals_arg_value_44, tmp_fromlist_value_44, tmp_level_value_44);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto try_except_handler_54;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_157 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_dill$_objects,
                mod_consts[424],
                mod_consts[3]
            );
        } else {
            tmp_assign_source_157 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[424]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;

            goto try_except_handler_54;
        }
        UPDATE_STRING_DICT1(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[425], tmp_assign_source_157);
    }
    {
        PyObject *tmp_ass_subvalue_154;
        PyObject *tmp_ass_subscribed_154;
        PyObject *tmp_ass_subscript_154;
        tmp_ass_subvalue_154 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[420]);

        if (unlikely(tmp_ass_subvalue_154 == NULL)) {
            tmp_ass_subvalue_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[420]);
        }

        if (tmp_ass_subvalue_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto try_except_handler_54;
        }
        tmp_ass_subscribed_154 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_154 == NULL)) {
            tmp_ass_subscribed_154 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_154 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto try_except_handler_54;
        }
        tmp_ass_subscript_154 = mod_consts[426];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_154, tmp_ass_subscript_154, tmp_ass_subvalue_154);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;

            goto try_except_handler_54;
        }
    }
    {
        PyObject *tmp_ass_subvalue_155;
        PyObject *tmp_ass_subscribed_155;
        PyObject *tmp_ass_subscript_155;
        tmp_ass_subvalue_155 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[422]);

        if (unlikely(tmp_ass_subvalue_155 == NULL)) {
            tmp_ass_subvalue_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[422]);
        }

        if (tmp_ass_subvalue_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_54;
        }
        tmp_ass_subscribed_155 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_155 == NULL)) {
            tmp_ass_subscribed_155 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_155 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_54;
        }
        tmp_ass_subscript_155 = mod_consts[427];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_155, tmp_ass_subscript_155, tmp_ass_subvalue_155);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;

            goto try_except_handler_54;
        }
    }
    {
        PyObject *tmp_ass_subvalue_156;
        PyObject *tmp_ass_subscribed_156;
        PyObject *tmp_ass_subscript_156;
        tmp_ass_subvalue_156 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[425]);

        if (unlikely(tmp_ass_subvalue_156 == NULL)) {
            tmp_ass_subvalue_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[425]);
        }

        if (tmp_ass_subvalue_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto try_except_handler_54;
        }
        tmp_ass_subscribed_156 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_156 == NULL)) {
            tmp_ass_subscribed_156 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_156 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto try_except_handler_54;
        }
        tmp_ass_subscript_156 = mod_consts[428];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_156, tmp_ass_subscript_156, tmp_ass_subvalue_156);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto try_except_handler_54;
        }
    }
    goto try_end_44;
    // Exception handler code:
    try_except_handler_54:;
    exception_keeper_type_54 = exception_type;
    exception_keeper_value_54 = exception_value;
    exception_keeper_tb_54 = exception_tb;
    exception_keeper_lineno_54 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 11.
    exception_preserved_11 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_54 == NULL) {
        exception_keeper_tb_54 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_54);
    } else if (exception_keeper_lineno_54 != 0) {
        exception_keeper_tb_54 = ADD_TRACEBACK(exception_keeper_tb_54, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_54);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_54, &exception_keeper_value_54, &exception_keeper_tb_54);
    // Tried code:
    {
        bool tmp_condition_result_42;
        PyObject *tmp_cmp_expr_left_13;
        PyObject *tmp_cmp_expr_right_13;
        tmp_cmp_expr_left_13 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_13 = PyExc_ImportError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_13, tmp_cmp_expr_right_13);
        assert(!(tmp_res == -1));
        tmp_condition_result_42 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_42 != false) {
            goto branch_yes_38;
        } else {
            goto branch_no_38;
        }
    }
    branch_yes_38:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 384;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_55;
    branch_no_38:;
    goto try_end_45;
    // Exception handler code:
    try_except_handler_55:;
    exception_keeper_type_55 = exception_type;
    exception_keeper_value_55 = exception_value;
    exception_keeper_tb_55 = exception_tb;
    exception_keeper_lineno_55 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(&exception_preserved_11);

    // Re-raise.
    exception_type = exception_keeper_type_55;
    exception_value = exception_keeper_value_55;
    exception_tb = exception_keeper_tb_55;
    exception_lineno = exception_keeper_lineno_55;

    goto frame_exception_exit_1;
    // End of try:
    try_end_45:;
    // Restore previous exception id 11.
    SET_CURRENT_EXCEPTION(&exception_preserved_11);

    goto try_end_44;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_44:;
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_157;
        PyObject *tmp_called_instance_69;
        PyObject *tmp_ass_subscribed_157;
        PyObject *tmp_ass_subscript_157;
        tmp_called_instance_69 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_69 == NULL)) {
            tmp_called_instance_69 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto try_except_handler_56;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 395;
        tmp_ass_subvalue_157 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_69,
            mod_consts[429],
            &PyTuple_GET_ITEM(mod_consts[365], 0)
        );

        if (tmp_ass_subvalue_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto try_except_handler_56;
        }
        tmp_ass_subscribed_157 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_157 == NULL)) {
            tmp_ass_subscribed_157 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_157 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_157);

            exception_lineno = 395;

            goto try_except_handler_56;
        }
        tmp_ass_subscript_157 = mod_consts[430];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_157, tmp_ass_subscript_157, tmp_ass_subvalue_157);
        Py_DECREF(tmp_ass_subvalue_157);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;

            goto try_except_handler_56;
        }
    }
    {
        PyObject *tmp_ass_subvalue_158;
        PyObject *tmp_called_value_54;
        PyObject *tmp_expression_value_76;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_expression_value_77;
        PyObject *tmp_ass_subscribed_158;
        PyObject *tmp_ass_subscript_158;
        tmp_expression_value_76 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_76 == NULL)) {
            tmp_expression_value_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_56;
        }
        tmp_called_value_54 = LOOKUP_ATTRIBUTE(tmp_expression_value_76, mod_consts[431]);
        if (tmp_called_value_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_56;
        }
        tmp_expression_value_77 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_77 == NULL)) {
            tmp_expression_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_77 == NULL));
        tmp_args_element_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_77, mod_consts[288]);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_54);

            exception_lineno = 397;

            goto try_except_handler_56;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 397;
        tmp_ass_subvalue_158 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_54, tmp_args_element_value_19);
        Py_DECREF(tmp_called_value_54);
        Py_DECREF(tmp_args_element_value_19);
        if (tmp_ass_subvalue_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_56;
        }
        tmp_ass_subscribed_158 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_158 == NULL)) {
            tmp_ass_subscribed_158 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_158);

            exception_lineno = 397;

            goto try_except_handler_56;
        }
        tmp_ass_subscript_158 = mod_consts[432];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_158, tmp_ass_subscript_158, tmp_ass_subvalue_158);
        Py_DECREF(tmp_ass_subvalue_158);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 397;

            goto try_except_handler_56;
        }
    }
    {
        PyObject *tmp_ass_subvalue_159;
        PyObject *tmp_called_value_55;
        PyObject *tmp_expression_value_78;
        PyObject *tmp_expression_value_79;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_80;
        PyObject *tmp_ass_subscribed_159;
        PyObject *tmp_ass_subscript_159;
        tmp_expression_value_79 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_79 == NULL)) {
            tmp_expression_value_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_56;
        }
        tmp_expression_value_78 = LOOKUP_ATTRIBUTE(tmp_expression_value_79, mod_consts[433]);
        if (tmp_expression_value_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_56;
        }
        tmp_called_value_55 = LOOKUP_ATTRIBUTE(tmp_expression_value_78, mod_consts[434]);
        Py_DECREF(tmp_expression_value_78);
        if (tmp_called_value_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_56;
        }
        tmp_expression_value_80 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_80 == NULL)) {
            tmp_expression_value_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_80 == NULL));
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_80, mod_consts[288]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_55);

            exception_lineno = 398;

            goto try_except_handler_56;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 398;
        tmp_ass_subvalue_159 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_55, tmp_args_element_value_20);
        Py_DECREF(tmp_called_value_55);
        Py_DECREF(tmp_args_element_value_20);
        if (tmp_ass_subvalue_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_56;
        }
        tmp_ass_subscribed_159 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_159 == NULL)) {
            tmp_ass_subscribed_159 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_159 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_159);

            exception_lineno = 398;

            goto try_except_handler_56;
        }
        tmp_ass_subscript_159 = mod_consts[435];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_159, tmp_ass_subscript_159, tmp_ass_subvalue_159);
        Py_DECREF(tmp_ass_subvalue_159);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;

            goto try_except_handler_56;
        }
    }
    {
        PyObject *tmp_ass_subvalue_160;
        PyObject *tmp_called_instance_70;
        PyObject *tmp_expression_value_81;
        PyObject *tmp_ass_subscribed_160;
        PyObject *tmp_ass_subscript_160;
        tmp_expression_value_81 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_81 == NULL)) {
            tmp_expression_value_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_56;
        }
        tmp_called_instance_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_81, mod_consts[433]);
        if (tmp_called_instance_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_56;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 399;
        tmp_ass_subvalue_160 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_70,
            mod_consts[436],
            &PyTuple_GET_ITEM(mod_consts[437], 0)
        );

        Py_DECREF(tmp_called_instance_70);
        if (tmp_ass_subvalue_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_56;
        }
        tmp_ass_subscribed_160 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_160 == NULL)) {
            tmp_ass_subscribed_160 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_160);

            exception_lineno = 399;

            goto try_except_handler_56;
        }
        tmp_ass_subscript_160 = mod_consts[438];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_160, tmp_ass_subscript_160, tmp_ass_subvalue_160);
        Py_DECREF(tmp_ass_subvalue_160);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 399;

            goto try_except_handler_56;
        }
    }
    {
        PyObject *tmp_ass_subvalue_161;
        PyObject *tmp_called_instance_71;
        PyObject *tmp_expression_value_82;
        PyObject *tmp_ass_subscribed_161;
        PyObject *tmp_ass_subscript_161;
        tmp_expression_value_82 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_expression_value_82 == NULL)) {
            tmp_expression_value_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_expression_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto try_except_handler_56;
        }
        tmp_called_instance_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_82, mod_consts[433]);
        if (tmp_called_instance_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto try_except_handler_56;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 400;
        tmp_ass_subvalue_161 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_71,
            mod_consts[439],
            PyTuple_GET_ITEM(mod_consts[151], 0)
        );

        Py_DECREF(tmp_called_instance_71);
        if (tmp_ass_subvalue_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto try_except_handler_56;
        }
        tmp_ass_subscribed_161 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_161 == NULL)) {
            tmp_ass_subscribed_161 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_161 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_161);

            exception_lineno = 400;

            goto try_except_handler_56;
        }
        tmp_ass_subscript_161 = mod_consts[440];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_161, tmp_ass_subscript_161, tmp_ass_subvalue_161);
        Py_DECREF(tmp_ass_subvalue_161);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;

            goto try_except_handler_56;
        }
    }
    goto try_end_46;
    // Exception handler code:
    try_except_handler_56:;
    exception_keeper_type_56 = exception_type;
    exception_keeper_value_56 = exception_value;
    exception_keeper_tb_56 = exception_tb;
    exception_keeper_lineno_56 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 12.
    exception_preserved_12 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_56 == NULL) {
        exception_keeper_tb_56 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_56);
    } else if (exception_keeper_lineno_56 != 0) {
        exception_keeper_tb_56 = ADD_TRACEBACK(exception_keeper_tb_56, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_56);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_56, &exception_keeper_value_56, &exception_keeper_tb_56);
    // Tried code:
    {
        bool tmp_condition_result_43;
        PyObject *tmp_cmp_expr_left_14;
        PyObject *tmp_cmp_expr_right_14;
        tmp_cmp_expr_left_14 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_14 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_14, tmp_cmp_expr_right_14);
        assert(!(tmp_res == -1));
        tmp_condition_result_43 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_43 != false) {
            goto branch_yes_39;
        } else {
            goto branch_no_39;
        }
    }
    branch_yes_39:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 393;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_57;
    branch_no_39:;
    goto try_end_47;
    // Exception handler code:
    try_except_handler_57:;
    exception_keeper_type_57 = exception_type;
    exception_keeper_value_57 = exception_value;
    exception_keeper_tb_57 = exception_tb;
    exception_keeper_lineno_57 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(&exception_preserved_12);

    // Re-raise.
    exception_type = exception_keeper_type_57;
    exception_value = exception_keeper_value_57;
    exception_tb = exception_keeper_tb_57;
    exception_lineno = exception_keeper_lineno_57;

    goto frame_exception_exit_1;
    // End of try:
    try_end_47:;
    // Restore previous exception id 12.
    SET_CURRENT_EXCEPTION(&exception_preserved_12);

    goto try_end_46;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_46:;
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_162;
        PyObject *tmp_called_instance_72;
        PyObject *tmp_ass_subscribed_162;
        PyObject *tmp_ass_subscript_162;
        tmp_called_instance_72 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[40]);

        if (unlikely(tmp_called_instance_72 == NULL)) {
            tmp_called_instance_72 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[40]);
        }

        if (tmp_called_instance_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto try_except_handler_58;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 405;
        tmp_ass_subvalue_162 = CALL_METHOD_NO_ARGS(tmp_called_instance_72, mod_consts[441]);
        if (tmp_ass_subvalue_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto try_except_handler_58;
        }
        tmp_ass_subscribed_162 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_162 == NULL)) {
            tmp_ass_subscribed_162 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_162);

            exception_lineno = 405;

            goto try_except_handler_58;
        }
        tmp_ass_subscript_162 = mod_consts[442];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_162, tmp_ass_subscript_162, tmp_ass_subvalue_162);
        Py_DECREF(tmp_ass_subvalue_162);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;

            goto try_except_handler_58;
        }
    }
    goto try_end_48;
    // Exception handler code:
    try_except_handler_58:;
    exception_keeper_type_58 = exception_type;
    exception_keeper_value_58 = exception_value;
    exception_keeper_tb_58 = exception_tb;
    exception_keeper_lineno_58 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 13.
    exception_preserved_13 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_58 == NULL) {
        exception_keeper_tb_58 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_58);
    } else if (exception_keeper_lineno_58 != 0) {
        exception_keeper_tb_58 = ADD_TRACEBACK(exception_keeper_tb_58, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_58);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_58, &exception_keeper_value_58, &exception_keeper_tb_58);
    // Tried code:
    {
        bool tmp_condition_result_44;
        PyObject *tmp_cmp_expr_left_15;
        PyObject *tmp_cmp_expr_right_15;
        tmp_cmp_expr_left_15 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_15 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_15, tmp_cmp_expr_right_15);
        assert(!(tmp_res == -1));
        tmp_condition_result_44 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_44 != false) {
            goto branch_yes_40;
        } else {
            goto branch_no_40;
        }
    }
    branch_yes_40:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 403;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_59;
    branch_no_40:;
    goto try_end_49;
    // Exception handler code:
    try_except_handler_59:;
    exception_keeper_type_59 = exception_type;
    exception_keeper_value_59 = exception_value;
    exception_keeper_tb_59 = exception_tb;
    exception_keeper_lineno_59 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(&exception_preserved_13);

    // Re-raise.
    exception_type = exception_keeper_type_59;
    exception_value = exception_keeper_value_59;
    exception_tb = exception_keeper_tb_59;
    exception_lineno = exception_keeper_lineno_59;

    goto frame_exception_exit_1;
    // End of try:
    try_end_49:;
    // Restore previous exception id 13.
    SET_CURRENT_EXCEPTION(&exception_preserved_13);

    goto try_end_48;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_48:;
    {
        PyObject *tmp_ass_subvalue_163;
        PyObject *tmp_open_filename_6;
        PyObject *tmp_expression_value_83;
        PyObject *tmp_open_mode_6;
        PyObject *tmp_open_buffering_2;
        PyObject *tmp_ass_subscribed_163;
        PyObject *tmp_ass_subscript_163;
        tmp_expression_value_83 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_83 == NULL)) {
            tmp_expression_value_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_83 == NULL));
        tmp_open_filename_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_83, mod_consts[288]);
        if (tmp_open_filename_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_open_mode_6 = mod_consts[310];
        tmp_open_buffering_2 = mod_consts[3];
        tmp_ass_subvalue_163 = BUILTIN_OPEN(tmp_open_filename_6, tmp_open_mode_6, tmp_open_buffering_2, NULL, NULL, NULL, NULL, NULL);
        Py_DECREF(tmp_open_filename_6);
        if (tmp_ass_subvalue_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_163 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_163 == NULL)) {
            tmp_ass_subscribed_163 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_163 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_163);

            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_163 = mod_consts[278];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_163, tmp_ass_subscript_163, tmp_ass_subvalue_163);
        Py_DECREF(tmp_ass_subvalue_163);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_164;
        PyObject *tmp_iter_arg_2;
        PyObject *tmp_ass_subscribed_164;
        PyObject *tmp_ass_subscript_164;
        tmp_iter_arg_2 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[139]);

        if (unlikely(tmp_iter_arg_2 == NULL)) {
            tmp_iter_arg_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[139]);
        }

        if (tmp_iter_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_164 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_ass_subvalue_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_164 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_164 == NULL)) {
            tmp_ass_subscribed_164 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_164);

            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_164 = mod_consts[443];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_164, tmp_ass_subscript_164, tmp_ass_subvalue_164);
        Py_DECREF(tmp_ass_subvalue_164);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_165;
        PyObject *tmp_iter_arg_3;
        PyObject *tmp_ass_subscribed_165;
        PyObject *tmp_ass_subscript_165;
        tmp_iter_arg_3 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[146]);

        if (unlikely(tmp_iter_arg_3 == NULL)) {
            tmp_iter_arg_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[146]);
        }

        if (tmp_iter_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_165 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_ass_subvalue_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_165 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_165 == NULL)) {
            tmp_ass_subscribed_165 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_165 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_165);

            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_165 = mod_consts[444];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_165, tmp_ass_subscript_165, tmp_ass_subvalue_165);
        Py_DECREF(tmp_ass_subvalue_165);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 421;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_166;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_ass_subscribed_166;
        PyObject *tmp_ass_subscript_166;
        tmp_iter_arg_4 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[326]);

        if (unlikely(tmp_iter_arg_4 == NULL)) {
            tmp_iter_arg_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[326]);
        }

        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_166 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_ass_subvalue_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_166 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_166 == NULL)) {
            tmp_ass_subscribed_166 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_166);

            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_166 = mod_consts[445];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_166, tmp_ass_subscript_166, tmp_ass_subvalue_166);
        Py_DECREF(tmp_ass_subvalue_166);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 422;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_167;
        PyObject *tmp_called_instance_73;
        PyObject *tmp_ass_subscribed_167;
        PyObject *tmp_ass_subscript_167;
        tmp_called_instance_73 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_instance_73 == NULL)) {
            tmp_called_instance_73 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_instance_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 424;
        tmp_ass_subvalue_167 = CALL_METHOD_NO_ARGS(tmp_called_instance_73, mod_consts[446]);
        if (tmp_ass_subvalue_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_167 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_167 == NULL)) {
            tmp_ass_subscribed_167 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_167 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_167);

            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_167 = mod_consts[447];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_167, tmp_ass_subscript_167, tmp_ass_subvalue_167);
        Py_DECREF(tmp_ass_subvalue_167);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 424;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_168;
        PyObject *tmp_called_instance_74;
        PyObject *tmp_ass_subscribed_168;
        PyObject *tmp_ass_subscript_168;
        tmp_called_instance_74 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_74 == NULL)) {
            tmp_called_instance_74 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 426;
        tmp_ass_subvalue_168 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_74,
            mod_consts[448],
            PyTuple_GET_ITEM(mod_consts[449], 0)
        );

        if (tmp_ass_subvalue_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_168 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_168 == NULL)) {
            tmp_ass_subscribed_168 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_168);

            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_168 = mod_consts[450];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_168, tmp_ass_subscript_168, tmp_ass_subvalue_168);
        Py_DECREF(tmp_ass_subvalue_168);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 426;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_169;
        PyObject *tmp_ass_subscribed_169;
        PyObject *tmp_ass_subscript_169;
        tmp_ass_subvalue_169 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_ass_subvalue_169 == NULL)) {
            tmp_ass_subvalue_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_ass_subvalue_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_169 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_169 == NULL)) {
            tmp_ass_subscribed_169 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_169 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_169 = mod_consts[451];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_169, tmp_ass_subscript_169, tmp_ass_subvalue_169);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 428;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_170;
        PyObject *tmp_called_value_56;
        PyObject *tmp_expression_value_84;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_ass_subscribed_170;
        PyObject *tmp_ass_subscript_170;
        tmp_expression_value_84 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_expression_value_84 == NULL)) {
            tmp_expression_value_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_expression_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_called_value_56 = LOOKUP_ATTRIBUTE(tmp_expression_value_84, mod_consts[452]);
        if (tmp_called_value_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[375]);

        if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
            tmp_kw_call_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[375]);
        }

        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_56);

            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 430;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_3};

            tmp_ass_subvalue_170 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_56, kw_values, mod_consts[453]);
        }

        Py_DECREF(tmp_called_value_56);
        if (tmp_ass_subvalue_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_170 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_170 == NULL)) {
            tmp_ass_subscribed_170 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_170);

            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_170 = mod_consts[454];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_170, tmp_ass_subscript_170, tmp_ass_subvalue_170);
        Py_DECREF(tmp_ass_subvalue_170);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_171;
        PyObject *tmp_called_instance_75;
        PyObject *tmp_ass_subscribed_171;
        PyObject *tmp_ass_subscript_171;
        tmp_called_instance_75 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_called_instance_75 == NULL)) {
            tmp_called_instance_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_called_instance_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 432;
        tmp_ass_subvalue_171 = CALL_METHOD_NO_ARGS(tmp_called_instance_75, mod_consts[455]);
        if (tmp_ass_subvalue_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_171 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_171 == NULL)) {
            tmp_ass_subscribed_171 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_171 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_171);

            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_171 = mod_consts[456];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_171, tmp_ass_subscript_171, tmp_ass_subvalue_171);
        Py_DECREF(tmp_ass_subvalue_171);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 432;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_172;
        PyObject *tmp_called_instance_76;
        PyObject *tmp_ass_subscribed_172;
        PyObject *tmp_ass_subscript_172;
        tmp_called_instance_76 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_76 == NULL)) {
            tmp_called_instance_76 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_60;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 435;
        tmp_ass_subvalue_172 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_76,
            mod_consts[457],
            PyTuple_GET_ITEM(mod_consts[449], 0)
        );

        if (tmp_ass_subvalue_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_60;
        }
        tmp_ass_subscribed_172 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_172 == NULL)) {
            tmp_ass_subscribed_172 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_172 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_172);

            exception_lineno = 435;

            goto try_except_handler_60;
        }
        tmp_ass_subscript_172 = mod_consts[458];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_172, tmp_ass_subscript_172, tmp_ass_subvalue_172);
        Py_DECREF(tmp_ass_subvalue_172);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;

            goto try_except_handler_60;
        }
    }
    {
        PyObject *tmp_ass_subvalue_173;
        PyObject *tmp_called_instance_77;
        PyObject *tmp_ass_subscribed_173;
        PyObject *tmp_ass_subscript_173;
        tmp_called_instance_77 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_77 == NULL)) {
            tmp_called_instance_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto try_except_handler_60;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 436;
        tmp_ass_subvalue_173 = CALL_METHOD_WITH_ARGS2(
            tmp_called_instance_77,
            mod_consts[459],
            &PyTuple_GET_ITEM(mod_consts[460], 0)
        );

        if (tmp_ass_subvalue_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto try_except_handler_60;
        }
        tmp_ass_subscribed_173 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_173 == NULL)) {
            tmp_ass_subscribed_173 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_173 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_173);

            exception_lineno = 436;

            goto try_except_handler_60;
        }
        tmp_ass_subscript_173 = mod_consts[461];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_173, tmp_ass_subscript_173, tmp_ass_subvalue_173);
        Py_DECREF(tmp_ass_subvalue_173);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;

            goto try_except_handler_60;
        }
    }
    goto try_end_50;
    // Exception handler code:
    try_except_handler_60:;
    exception_keeper_type_60 = exception_type;
    exception_keeper_value_60 = exception_value;
    exception_keeper_tb_60 = exception_tb;
    exception_keeper_lineno_60 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 14.
    exception_preserved_14 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_60 == NULL) {
        exception_keeper_tb_60 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_60);
    } else if (exception_keeper_lineno_60 != 0) {
        exception_keeper_tb_60 = ADD_TRACEBACK(exception_keeper_tb_60, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_60);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_60, &exception_keeper_value_60, &exception_keeper_tb_60);
    // Tried code:
    {
        bool tmp_condition_result_45;
        PyObject *tmp_cmp_expr_left_16;
        PyObject *tmp_cmp_expr_right_16;
        tmp_cmp_expr_left_16 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_16 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_16, tmp_cmp_expr_right_16);
        assert(!(tmp_res == -1));
        tmp_condition_result_45 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_45 != false) {
            goto branch_yes_41;
        } else {
            goto branch_no_41;
        }
    }
    branch_yes_41:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 433;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_61;
    branch_no_41:;
    goto try_end_51;
    // Exception handler code:
    try_except_handler_61:;
    exception_keeper_type_61 = exception_type;
    exception_keeper_value_61 = exception_value;
    exception_keeper_tb_61 = exception_tb;
    exception_keeper_lineno_61 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(&exception_preserved_14);

    // Re-raise.
    exception_type = exception_keeper_type_61;
    exception_value = exception_keeper_value_61;
    exception_tb = exception_keeper_tb_61;
    exception_lineno = exception_keeper_lineno_61;

    goto frame_exception_exit_1;
    // End of try:
    try_end_51:;
    // Restore previous exception id 14.
    SET_CURRENT_EXCEPTION(&exception_preserved_14);

    goto try_end_50;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_50:;
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_174;
        PyObject *tmp_called_instance_78;
        PyObject *tmp_ass_subscribed_174;
        PyObject *tmp_ass_subscript_174;
        tmp_called_instance_78 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_78 == NULL)) {
            tmp_called_instance_78 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_78 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto try_except_handler_62;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 441;
        tmp_ass_subvalue_174 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_78,
            mod_consts[462],
            PyTuple_GET_ITEM(mod_consts[189], 0)
        );

        if (tmp_ass_subvalue_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto try_except_handler_62;
        }
        tmp_ass_subscribed_174 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_174 == NULL)) {
            tmp_ass_subscribed_174 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_174 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_174);

            exception_lineno = 441;

            goto try_except_handler_62;
        }
        tmp_ass_subscript_174 = mod_consts[463];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_174, tmp_ass_subscript_174, tmp_ass_subvalue_174);
        Py_DECREF(tmp_ass_subvalue_174);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;

            goto try_except_handler_62;
        }
    }
    {
        PyObject *tmp_ass_subvalue_175;
        PyObject *tmp_called_instance_79;
        PyObject *tmp_call_arg_element_4;
        PyObject *tmp_call_arg_element_5;
        PyObject *tmp_ass_subscribed_175;
        PyObject *tmp_ass_subscript_175;
        tmp_called_instance_79 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_called_instance_79 == NULL)) {
            tmp_called_instance_79 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_called_instance_79 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_62;
        }
        tmp_call_arg_element_4 = mod_consts[465];
        tmp_call_arg_element_5 = MAKE_LIST1(mod_consts[126]);
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 442;
        {
            PyObject *call_args[] = {tmp_call_arg_element_4, tmp_call_arg_element_5};
            tmp_ass_subvalue_175 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_79,
                mod_consts[464],
                call_args
            );
        }

        Py_DECREF(tmp_call_arg_element_5);
        if (tmp_ass_subvalue_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_62;
        }
        tmp_ass_subscribed_175 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_ass_subscribed_175 == NULL)) {
            tmp_ass_subscribed_175 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_ass_subscribed_175 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_175);

            exception_lineno = 442;

            goto try_except_handler_62;
        }
        tmp_ass_subscript_175 = mod_consts[466];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_175, tmp_ass_subscript_175, tmp_ass_subvalue_175);
        Py_DECREF(tmp_ass_subvalue_175);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 442;

            goto try_except_handler_62;
        }
    }
    goto try_end_52;
    // Exception handler code:
    try_except_handler_62:;
    exception_keeper_type_62 = exception_type;
    exception_keeper_value_62 = exception_value;
    exception_keeper_tb_62 = exception_tb;
    exception_keeper_lineno_62 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 15.
    exception_preserved_15 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_62 == NULL) {
        exception_keeper_tb_62 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_62);
    } else if (exception_keeper_lineno_62 != 0) {
        exception_keeper_tb_62 = ADD_TRACEBACK(exception_keeper_tb_62, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_62);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_62, &exception_keeper_value_62, &exception_keeper_tb_62);
    // Tried code:
    {
        bool tmp_condition_result_46;
        PyObject *tmp_cmp_expr_left_17;
        PyObject *tmp_cmp_expr_right_17;
        tmp_cmp_expr_left_17 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_17 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_17, tmp_cmp_expr_right_17);
        assert(!(tmp_res == -1));
        tmp_condition_result_46 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_46 != false) {
            goto branch_yes_42;
        } else {
            goto branch_no_42;
        }
    }
    branch_yes_42:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 439;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_63;
    branch_no_42:;
    goto try_end_53;
    // Exception handler code:
    try_except_handler_63:;
    exception_keeper_type_63 = exception_type;
    exception_keeper_value_63 = exception_value;
    exception_keeper_tb_63 = exception_tb;
    exception_keeper_lineno_63 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(&exception_preserved_15);

    // Re-raise.
    exception_type = exception_keeper_type_63;
    exception_value = exception_keeper_value_63;
    exception_tb = exception_keeper_tb_63;
    exception_lineno = exception_keeper_lineno_63;

    goto frame_exception_exit_1;
    // End of try:
    try_end_53:;
    // Restore previous exception id 15.
    SET_CURRENT_EXCEPTION(&exception_preserved_15);

    goto try_end_52;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_52:;
    // Tried code:
    {
        PyObject *tmp_assign_source_158;
        PyObject *tmp_called_value_57;
        tmp_called_value_57 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_called_value_57 == NULL)) {
            tmp_called_value_57 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_called_value_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto try_except_handler_64;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 449;
        tmp_assign_source_158 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_57, mod_consts[151]);

        if (tmp_assign_source_158 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto try_except_handler_64;
        }
        assert(tmp_assign_unpack_26__assign_source == NULL);
        tmp_assign_unpack_26__assign_source = tmp_assign_source_158;
    }
    {
        PyObject *tmp_ass_subvalue_176;
        PyObject *tmp_ass_subscribed_176;
        PyObject *tmp_ass_subscript_176;
        CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
        tmp_ass_subvalue_176 = tmp_assign_unpack_26__assign_source;
        tmp_ass_subscribed_176 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_176 == NULL)) {
            tmp_ass_subscribed_176 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_176 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto try_except_handler_64;
        }
        tmp_ass_subscript_176 = mod_consts[467];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_176, tmp_ass_subscript_176, tmp_ass_subvalue_176);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;

            goto try_except_handler_64;
        }
    }
    goto try_end_54;
    // Exception handler code:
    try_except_handler_64:;
    exception_keeper_type_64 = exception_type;
    exception_keeper_value_64 = exception_value;
    exception_keeper_tb_64 = exception_tb;
    exception_keeper_lineno_64 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_26__assign_source);
    tmp_assign_unpack_26__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_64;
    exception_value = exception_keeper_value_64;
    exception_tb = exception_keeper_tb_64;
    exception_lineno = exception_keeper_lineno_64;

    goto frame_exception_exit_1;
    // End of try:
    try_end_54:;
    {
        PyObject *tmp_assign_source_159;
        CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
        tmp_assign_source_159 = tmp_assign_unpack_26__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[468], tmp_assign_source_159);
    }
    CHECK_OBJECT(tmp_assign_unpack_26__assign_source);
    Py_DECREF(tmp_assign_unpack_26__assign_source);
    tmp_assign_unpack_26__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_177;
        PyObject *tmp_expression_value_85;
        PyObject *tmp_ass_subscribed_177;
        PyObject *tmp_ass_subscript_177;
        tmp_expression_value_85 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[468]);

        if (unlikely(tmp_expression_value_85 == NULL)) {
            tmp_expression_value_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[468]);
        }

        if (tmp_expression_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_177 = LOOKUP_ATTRIBUTE(tmp_expression_value_85, mod_consts[469]);
        if (tmp_ass_subvalue_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_177 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_177 == NULL)) {
            tmp_ass_subscribed_177 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_177 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_177);

            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_177 = mod_consts[470];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_177, tmp_ass_subscript_177, tmp_ass_subvalue_177);
        Py_DECREF(tmp_ass_subvalue_177);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_178;
        PyObject *tmp_expression_value_86;
        PyObject *tmp_called_value_58;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_ass_subscribed_178;
        PyObject *tmp_ass_subscript_178;
        tmp_called_value_58 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_58 == NULL)) {
            tmp_called_value_58 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 451;
        tmp_expression_value_86 = CALL_FUNCTION_NO_ARGS(tmp_called_value_58);
        if (tmp_expression_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = mod_consts[126];
        tmp_ass_subvalue_178 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_86, tmp_subscript_value_15, 1);
        Py_DECREF(tmp_expression_value_86);
        if (tmp_ass_subvalue_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_178 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_178 == NULL)) {
            tmp_ass_subscribed_178 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_178 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_178);

            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_178 = mod_consts[471];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_178, tmp_ass_subscript_178, tmp_ass_subvalue_178);
        Py_DECREF(tmp_ass_subvalue_178);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_179;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_ass_subscribed_179;
        PyObject *tmp_ass_subscript_179;
        tmp_iter_arg_5 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[158]);

        if (unlikely(tmp_iter_arg_5 == NULL)) {
            tmp_iter_arg_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[158]);
        }

        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_179 = MAKE_ITERATOR(tmp_iter_arg_5);
        if (tmp_ass_subvalue_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_179 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_179 == NULL)) {
            tmp_ass_subscribed_179 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_179 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_179);

            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_179 = mod_consts[472];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_179, tmp_ass_subscript_179, tmp_ass_subvalue_179);
        Py_DECREF(tmp_ass_subvalue_179);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_47;
        PyObject *tmp_mvar_value_20;
        int tmp_truth_name_22;
        tmp_mvar_value_20 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_mvar_value_20 == NULL)) {
            tmp_mvar_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_mvar_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_22 = CHECK_IF_TRUE(tmp_mvar_value_20);
        if (tmp_truth_name_22 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_47 = tmp_truth_name_22 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_47 == NUITKA_BOOL_TRUE) {
            goto branch_yes_43;
        } else {
            goto branch_no_43;
        }
    }
    branch_yes_43:;
    {
        PyObject *tmp_ass_subvalue_180;
        PyObject *tmp_iter_arg_6;
        PyObject *tmp_called_value_59;
        PyObject *tmp_expression_value_87;
        PyObject *tmp_expression_value_88;
        PyObject *tmp_ass_subscribed_180;
        PyObject *tmp_ass_subscript_180;
        tmp_expression_value_88 = (PyObject *)&PyType_Type;
        tmp_expression_value_87 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_88);
        assert(!(tmp_expression_value_87 == NULL));
        tmp_called_value_59 = LOOKUP_ATTRIBUTE(tmp_expression_value_87, mod_consts[473]);
        Py_DECREF(tmp_expression_value_87);
        if (tmp_called_value_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 458;
        tmp_iter_arg_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_59);
        Py_DECREF(tmp_called_value_59);
        if (tmp_iter_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_180 = MAKE_ITERATOR(tmp_iter_arg_6);
        Py_DECREF(tmp_iter_arg_6);
        if (tmp_ass_subvalue_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_180 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_180 == NULL)) {
            tmp_ass_subscribed_180 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_180 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_180);

            exception_lineno = 458;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_180 = mod_consts[474];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_180, tmp_ass_subscript_180, tmp_ass_subvalue_180);
        Py_DECREF(tmp_ass_subvalue_180);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_181;
        PyObject *tmp_iter_arg_7;
        PyObject *tmp_called_value_60;
        PyObject *tmp_expression_value_89;
        PyObject *tmp_expression_value_90;
        PyObject *tmp_ass_subscribed_181;
        PyObject *tmp_ass_subscript_181;
        tmp_expression_value_90 = (PyObject *)&PyType_Type;
        tmp_expression_value_89 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_90);
        assert(!(tmp_expression_value_89 == NULL));
        tmp_called_value_60 = LOOKUP_ATTRIBUTE(tmp_expression_value_89, mod_consts[475]);
        Py_DECREF(tmp_expression_value_89);
        if (tmp_called_value_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 459;
        tmp_iter_arg_7 = CALL_FUNCTION_NO_ARGS(tmp_called_value_60);
        Py_DECREF(tmp_called_value_60);
        if (tmp_iter_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_181 = MAKE_ITERATOR(tmp_iter_arg_7);
        Py_DECREF(tmp_iter_arg_7);
        if (tmp_ass_subvalue_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_181 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_181 == NULL)) {
            tmp_ass_subscribed_181 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_181 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_181);

            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_181 = mod_consts[476];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_181, tmp_ass_subscript_181, tmp_ass_subvalue_181);
        Py_DECREF(tmp_ass_subvalue_181);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 459;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_182;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_called_value_61;
        PyObject *tmp_expression_value_91;
        PyObject *tmp_expression_value_92;
        PyObject *tmp_ass_subscribed_182;
        PyObject *tmp_ass_subscript_182;
        tmp_expression_value_92 = (PyObject *)&PyType_Type;
        tmp_expression_value_91 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_92);
        assert(!(tmp_expression_value_91 == NULL));
        tmp_called_value_61 = LOOKUP_ATTRIBUTE(tmp_expression_value_91, mod_consts[477]);
        Py_DECREF(tmp_expression_value_91);
        if (tmp_called_value_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 460;
        tmp_iter_arg_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_61);
        Py_DECREF(tmp_called_value_61);
        if (tmp_iter_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
        tmp_ass_subvalue_182 = MAKE_ITERATOR(tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_ass_subvalue_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_182 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_182 == NULL)) {
            tmp_ass_subscribed_182 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_182 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_182);

            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_182 = mod_consts[478];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_182, tmp_ass_subscript_182, tmp_ass_subvalue_182);
        Py_DECREF(tmp_ass_subvalue_182);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;

            goto frame_exception_exit_1;
        }
    }
    goto branch_end_43;
    branch_no_43:;
    {
        PyObject *tmp_ass_subvalue_183;
        PyObject *tmp_called_value_62;
        PyObject *tmp_expression_value_93;
        PyObject *tmp_expression_value_94;
        PyObject *tmp_ass_subscribed_183;
        PyObject *tmp_ass_subscript_183;
        tmp_expression_value_94 = (PyObject *)&PyType_Type;
        tmp_expression_value_93 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_94);
        assert(!(tmp_expression_value_93 == NULL));
        tmp_called_value_62 = LOOKUP_ATTRIBUTE(tmp_expression_value_93, mod_consts[479]);
        Py_DECREF(tmp_expression_value_93);
        if (tmp_called_value_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 462;
        tmp_ass_subvalue_183 = CALL_FUNCTION_NO_ARGS(tmp_called_value_62);
        Py_DECREF(tmp_called_value_62);
        if (tmp_ass_subvalue_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_183 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_183 == NULL)) {
            tmp_ass_subscribed_183 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_183 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_183);

            exception_lineno = 462;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_183 = mod_consts[474];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_183, tmp_ass_subscript_183, tmp_ass_subvalue_183);
        Py_DECREF(tmp_ass_subvalue_183);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_184;
        PyObject *tmp_called_value_63;
        PyObject *tmp_expression_value_95;
        PyObject *tmp_expression_value_96;
        PyObject *tmp_ass_subscribed_184;
        PyObject *tmp_ass_subscript_184;
        tmp_expression_value_96 = (PyObject *)&PyType_Type;
        tmp_expression_value_95 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_96);
        assert(!(tmp_expression_value_95 == NULL));
        tmp_called_value_63 = LOOKUP_ATTRIBUTE(tmp_expression_value_95, mod_consts[480]);
        Py_DECREF(tmp_expression_value_95);
        if (tmp_called_value_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 463;
        tmp_ass_subvalue_184 = CALL_FUNCTION_NO_ARGS(tmp_called_value_63);
        Py_DECREF(tmp_called_value_63);
        if (tmp_ass_subvalue_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_184 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_184 == NULL)) {
            tmp_ass_subscribed_184 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_184 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_184);

            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_184 = mod_consts[476];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_184, tmp_ass_subscript_184, tmp_ass_subvalue_184);
        Py_DECREF(tmp_ass_subvalue_184);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_185;
        PyObject *tmp_called_value_64;
        PyObject *tmp_expression_value_97;
        PyObject *tmp_expression_value_98;
        PyObject *tmp_ass_subscribed_185;
        PyObject *tmp_ass_subscript_185;
        tmp_expression_value_98 = (PyObject *)&PyType_Type;
        tmp_expression_value_97 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_98);
        assert(!(tmp_expression_value_97 == NULL));
        tmp_called_value_64 = LOOKUP_ATTRIBUTE(tmp_expression_value_97, mod_consts[481]);
        Py_DECREF(tmp_expression_value_97);
        if (tmp_called_value_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 464;
        tmp_ass_subvalue_185 = CALL_FUNCTION_NO_ARGS(tmp_called_value_64);
        Py_DECREF(tmp_called_value_64);
        if (tmp_ass_subvalue_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_185 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_185 == NULL)) {
            tmp_ass_subscribed_185 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_185 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_185);

            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_185 = mod_consts[478];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_185, tmp_ass_subscript_185, tmp_ass_subvalue_185);
        Py_DECREF(tmp_ass_subvalue_185);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;

            goto frame_exception_exit_1;
        }
    }
    branch_end_43:;
    {
        PyObject *tmp_ass_subvalue_186;
        PyObject *tmp_called_instance_80;
        PyObject *tmp_ass_subscribed_186;
        PyObject *tmp_ass_subscript_186;
        tmp_called_instance_80 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_instance_80 == NULL)) {
            tmp_called_instance_80 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_instance_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 466;
        tmp_ass_subvalue_186 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_80,
            mod_consts[482],
            PyTuple_GET_ITEM(mod_consts[483], 0)
        );

        if (tmp_ass_subvalue_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_186 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_186 == NULL)) {
            tmp_ass_subscribed_186 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_186 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_186);

            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_186 = mod_consts[484];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_186, tmp_ass_subscript_186, tmp_ass_subvalue_186);
        Py_DECREF(tmp_ass_subvalue_186);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 466;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_187;
        PyObject *tmp_called_instance_81;
        PyObject *tmp_ass_subscribed_187;
        PyObject *tmp_ass_subscript_187;
        tmp_called_instance_81 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_instance_81 == NULL)) {
            tmp_called_instance_81 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_called_instance_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 467;
        tmp_ass_subvalue_187 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_81,
            mod_consts[485],
            PyTuple_GET_ITEM(mod_consts[164], 0)
        );

        if (tmp_ass_subvalue_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_187 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_187 == NULL)) {
            tmp_ass_subscribed_187 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_187 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_187);

            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_187 = mod_consts[486];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_187, tmp_ass_subscript_187, tmp_ass_subvalue_187);
        Py_DECREF(tmp_ass_subvalue_187);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_188;
        PyObject *tmp_called_instance_82;
        PyObject *tmp_ass_subscribed_188;
        PyObject *tmp_ass_subscript_188;
        tmp_called_instance_82 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_instance_82 == NULL)) {
            tmp_called_instance_82 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_called_instance_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 468;
        tmp_ass_subvalue_188 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_82,
            mod_consts[487],
            PyTuple_GET_ITEM(mod_consts[164], 0)
        );

        if (tmp_ass_subvalue_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_188 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_188 == NULL)) {
            tmp_ass_subscribed_188 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_188 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_188);

            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_188 = mod_consts[488];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_188, tmp_ass_subscript_188, tmp_ass_subvalue_188);
        Py_DECREF(tmp_ass_subvalue_188);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_189;
        PyObject *tmp_called_instance_83;
        PyObject *tmp_ass_subscribed_189;
        PyObject *tmp_ass_subscript_189;
        tmp_called_instance_83 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[166]);

        if (unlikely(tmp_called_instance_83 == NULL)) {
            tmp_called_instance_83 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[166]);
        }

        if (tmp_called_instance_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 469;
        tmp_ass_subvalue_189 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_83,
            mod_consts[489],
            PyTuple_GET_ITEM(mod_consts[164], 0)
        );

        if (tmp_ass_subvalue_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_189 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_189 == NULL)) {
            tmp_ass_subscribed_189 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_189 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_189);

            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_189 = mod_consts[490];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_189, tmp_ass_subscript_189, tmp_ass_subvalue_189);
        Py_DECREF(tmp_ass_subvalue_189);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 469;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_190;
        PyObject *tmp_called_value_65;
        PyObject *tmp_expression_value_99;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_ass_subscribed_190;
        PyObject *tmp_ass_subscript_190;
        tmp_expression_value_99 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[36]);

        if (unlikely(tmp_expression_value_99 == NULL)) {
            tmp_expression_value_99 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[36]);
        }

        if (tmp_expression_value_99 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        tmp_called_value_65 = LOOKUP_ATTRIBUTE(tmp_expression_value_99, mod_consts[491]);
        if (tmp_called_value_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_21 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[345]);

        if (unlikely(tmp_args_element_value_21 == NULL)) {
            tmp_args_element_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[345]);
        }

        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_65);

            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 470;
        tmp_ass_subvalue_190 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_65, tmp_args_element_value_21);
        Py_DECREF(tmp_called_value_65);
        if (tmp_ass_subvalue_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_190 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_190 == NULL)) {
            tmp_ass_subscribed_190 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_190 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_190);

            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_190 = mod_consts[491];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_190, tmp_ass_subscript_190, tmp_ass_subvalue_190);
        Py_DECREF(tmp_ass_subvalue_190);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 470;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_48;
        PyObject *tmp_mvar_value_21;
        int tmp_truth_name_23;
        tmp_mvar_value_21 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_mvar_value_21 == NULL)) {
            tmp_mvar_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_mvar_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_23 = CHECK_IF_TRUE(tmp_mvar_value_21);
        if (tmp_truth_name_23 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_48 = tmp_truth_name_23 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_48 == NUITKA_BOOL_TRUE) {
            goto branch_yes_44;
        } else {
            goto branch_no_44;
        }
    }
    branch_yes_44:;
    {
        PyObject *tmp_ass_subvalue_191;
        PyObject *tmp_called_value_66;
        PyObject *tmp_expression_value_100;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_ass_subscribed_191;
        PyObject *tmp_ass_subscript_191;
        tmp_expression_value_100 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_expression_value_100 == NULL)) {
            tmp_expression_value_100 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_expression_value_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        tmp_called_value_66 = LOOKUP_ATTRIBUTE(tmp_expression_value_100, mod_consts[315]);
        if (tmp_called_value_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_22 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_args_element_value_22 == NULL)) {
            tmp_args_element_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_66);

            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_23 = mod_consts[492];
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 474;
        {
            PyObject *call_args[] = {tmp_args_element_value_22, tmp_args_element_value_23};
            tmp_ass_subvalue_191 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_66, call_args);
        }

        Py_DECREF(tmp_called_value_66);
        if (tmp_ass_subvalue_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_191 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_191 == NULL)) {
            tmp_ass_subscribed_191 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_191 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_191);

            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_191 = mod_consts[493];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_191, tmp_ass_subscript_191, tmp_ass_subvalue_191);
        Py_DECREF(tmp_ass_subvalue_191);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;

            goto frame_exception_exit_1;
        }
    }
    branch_no_44:;
    {
        PyObject *tmp_ass_subvalue_192;
        PyObject *tmp_called_instance_84;
        PyObject *tmp_ass_subscribed_192;
        PyObject *tmp_ass_subscript_192;
        tmp_called_instance_84 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_84 == NULL)) {
            tmp_called_instance_84 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_instance_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 478;
        tmp_ass_subvalue_192 = CALL_METHOD_NO_ARGS(tmp_called_instance_84, mod_consts[494]);
        if (tmp_ass_subvalue_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_192 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_192 == NULL)) {
            tmp_ass_subscribed_192 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_192 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_192);

            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_192 = mod_consts[495];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_192, tmp_ass_subscript_192, tmp_ass_subvalue_192);
        Py_DECREF(tmp_ass_subvalue_192);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 478;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_193;
        PyObject *tmp_called_instance_85;
        PyObject *tmp_ass_subscribed_193;
        PyObject *tmp_ass_subscript_193;
        tmp_called_instance_85 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[48]);

        if (unlikely(tmp_called_instance_85 == NULL)) {
            tmp_called_instance_85 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[48]);
        }

        if (tmp_called_instance_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 479;
        tmp_ass_subvalue_193 = CALL_METHOD_NO_ARGS(tmp_called_instance_85, mod_consts[496]);
        if (tmp_ass_subvalue_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_193 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_193 == NULL)) {
            tmp_ass_subscribed_193 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_193 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_193);

            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_193 = mod_consts[497];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_193, tmp_ass_subscript_193, tmp_ass_subvalue_193);
        Py_DECREF(tmp_ass_subvalue_193);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 479;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_194;
        PyObject *tmp_called_value_67;
        PyObject *tmp_expression_value_101;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_ass_subscribed_194;
        PyObject *tmp_ass_subscript_194;
        tmp_expression_value_101 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_101 == NULL)) {
            tmp_expression_value_101 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_value_101 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_called_value_67 = LOOKUP_ATTRIBUTE(tmp_expression_value_101, mod_consts[498]);
        if (tmp_called_value_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_24 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[345]);

        if (unlikely(tmp_args_element_value_24 == NULL)) {
            tmp_args_element_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[345]);
        }

        if (tmp_args_element_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_67);

            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 481;
        tmp_ass_subvalue_194 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_67, tmp_args_element_value_24);
        Py_DECREF(tmp_called_value_67);
        if (tmp_ass_subvalue_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_194 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_194 == NULL)) {
            tmp_ass_subscribed_194 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_194 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_194);

            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_194 = mod_consts[499];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_194, tmp_ass_subscript_194, tmp_ass_subvalue_194);
        Py_DECREF(tmp_ass_subvalue_194);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 481;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_195;
        PyObject *tmp_called_value_68;
        PyObject *tmp_expression_value_102;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_ass_subscribed_195;
        PyObject *tmp_ass_subscript_195;
        tmp_expression_value_102 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_102 == NULL)) {
            tmp_expression_value_102 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_value_102 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_called_value_68 = LOOKUP_ATTRIBUTE(tmp_expression_value_102, mod_consts[500]);
        if (tmp_called_value_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_25 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[347]);

        if (unlikely(tmp_args_element_value_25 == NULL)) {
            tmp_args_element_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[347]);
        }

        if (tmp_args_element_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_68);

            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 482;
        tmp_ass_subvalue_195 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_68, tmp_args_element_value_25);
        Py_DECREF(tmp_called_value_68);
        if (tmp_ass_subvalue_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_195 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_195 == NULL)) {
            tmp_ass_subscribed_195 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_195 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_195);

            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_195 = mod_consts[501];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_195, tmp_ass_subscript_195, tmp_ass_subvalue_195);
        Py_DECREF(tmp_ass_subvalue_195);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_196;
        PyObject *tmp_called_value_69;
        PyObject *tmp_expression_value_103;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_ass_subscribed_196;
        PyObject *tmp_ass_subscript_196;
        tmp_expression_value_103 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_103 == NULL)) {
            tmp_expression_value_103 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_value_103 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        tmp_called_value_69 = LOOKUP_ATTRIBUTE(tmp_expression_value_103, mod_consts[502]);
        if (tmp_called_value_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_26 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[345]);

        if (unlikely(tmp_args_element_value_26 == NULL)) {
            tmp_args_element_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[345]);
        }

        if (tmp_args_element_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_69);

            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 483;
        tmp_ass_subvalue_196 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_69, tmp_args_element_value_26);
        Py_DECREF(tmp_called_value_69);
        if (tmp_ass_subvalue_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_196 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_196 == NULL)) {
            tmp_ass_subscribed_196 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_196 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_196);

            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_196 = mod_consts[503];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_196, tmp_ass_subscript_196, tmp_ass_subvalue_196);
        Py_DECREF(tmp_ass_subvalue_196);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_197;
        PyObject *tmp_called_value_70;
        PyObject *tmp_expression_value_104;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_ass_subscribed_197;
        PyObject *tmp_ass_subscript_197;
        tmp_expression_value_104 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_expression_value_104 == NULL)) {
            tmp_expression_value_104 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_expression_value_104 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_called_value_70 = LOOKUP_ATTRIBUTE(tmp_expression_value_104, mod_consts[504]);
        if (tmp_called_value_70 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_27 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[347]);

        if (unlikely(tmp_args_element_value_27 == NULL)) {
            tmp_args_element_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[347]);
        }

        if (tmp_args_element_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_70);

            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_28 = MAKE_DICT_EMPTY();
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 484;
        {
            PyObject *call_args[] = {tmp_args_element_value_27, tmp_args_element_value_28};
            tmp_ass_subvalue_197 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_70, call_args);
        }

        Py_DECREF(tmp_called_value_70);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_ass_subvalue_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_197 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_197 == NULL)) {
            tmp_ass_subscribed_197 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_197 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_197);

            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_197 = mod_consts[505];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_197, tmp_ass_subscript_197, tmp_ass_subvalue_197);
        Py_DECREF(tmp_ass_subvalue_197);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 484;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_198;
        PyObject *tmp_called_instance_86;
        PyObject *tmp_ass_subscribed_198;
        PyObject *tmp_ass_subscript_198;
        tmp_called_instance_86 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_called_instance_86 == NULL)) {
            tmp_called_instance_86 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_called_instance_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 486;
        tmp_ass_subvalue_198 = CALL_METHOD_NO_ARGS(tmp_called_instance_86, mod_consts[506]);
        if (tmp_ass_subvalue_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_198 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_198 == NULL)) {
            tmp_ass_subscribed_198 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_198 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_198);

            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_198 = mod_consts[507];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_198, tmp_ass_subscript_198, tmp_ass_subvalue_198);
        Py_DECREF(tmp_ass_subvalue_198);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_199;
        PyObject *tmp_called_value_71;
        PyObject *tmp_expression_value_105;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_ass_subscribed_199;
        PyObject *tmp_ass_subscript_199;
        tmp_expression_value_105 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[55]);

        if (unlikely(tmp_expression_value_105 == NULL)) {
            tmp_expression_value_105 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[55]);
        }

        if (tmp_expression_value_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        tmp_called_value_71 = LOOKUP_ATTRIBUTE(tmp_expression_value_105, mod_consts[508]);
        if (tmp_called_value_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_29 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[343]);

        if (unlikely(tmp_args_element_value_29 == NULL)) {
            tmp_args_element_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[343]);
        }

        if (tmp_args_element_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_71);

            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 488;
        tmp_ass_subvalue_199 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_71, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_71);
        if (tmp_ass_subvalue_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_199 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_199 == NULL)) {
            tmp_ass_subscribed_199 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_199 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_199);

            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_199 = mod_consts[509];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_199, tmp_ass_subscript_199, tmp_ass_subvalue_199);
        Py_DECREF(tmp_ass_subvalue_199);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_operand_value_8;
        tmp_operand_value_8 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[67]);

        if (unlikely(tmp_operand_value_8 == NULL)) {
            tmp_operand_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[67]);
        }

        if (tmp_operand_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 492;

            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_49;
        PyObject *tmp_mvar_value_22;
        int tmp_truth_name_24;
        tmp_mvar_value_22 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[69]);

        if (unlikely(tmp_mvar_value_22 == NULL)) {
            tmp_mvar_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[69]);
        }

        if (tmp_mvar_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_24 = CHECK_IF_TRUE(tmp_mvar_value_22);
        if (tmp_truth_name_24 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_49 = tmp_truth_name_24 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_49 == NUITKA_BOOL_TRUE) {
            goto branch_yes_45;
        } else {
            goto branch_no_45;
        }
    }
    branch_yes_45:;
    {
        PyObject *tmp_ass_subvalue_200;
        PyObject *tmp_called_instance_87;
        PyObject *tmp_ass_subscribed_200;
        PyObject *tmp_ass_subscript_200;
        tmp_called_instance_87 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_87 == NULL)) {
            tmp_called_instance_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_87 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 497;
        tmp_ass_subvalue_200 = CALL_METHOD_NO_ARGS(tmp_called_instance_87, mod_consts[510]);
        if (tmp_ass_subvalue_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_200 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_200 == NULL)) {
            tmp_ass_subscribed_200 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_200 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_200);

            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_200 = mod_consts[511];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_200, tmp_ass_subscript_200, tmp_ass_subvalue_200);
        Py_DECREF(tmp_ass_subvalue_200);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 497;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_201;
        PyObject *tmp_called_instance_88;
        PyObject *tmp_ass_subscribed_201;
        PyObject *tmp_ass_subscript_201;
        tmp_called_instance_88 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_88 == NULL)) {
            tmp_called_instance_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_88 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 498;
        tmp_ass_subvalue_201 = CALL_METHOD_NO_ARGS(tmp_called_instance_88, mod_consts[512]);
        if (tmp_ass_subvalue_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_201 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_201 == NULL)) {
            tmp_ass_subscribed_201 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_201 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_201);

            exception_lineno = 498;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_201 = mod_consts[513];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_201, tmp_ass_subscript_201, tmp_ass_subvalue_201);
        Py_DECREF(tmp_ass_subvalue_201);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 498;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_202;
        PyObject *tmp_called_instance_89;
        PyObject *tmp_ass_subscribed_202;
        PyObject *tmp_ass_subscript_202;
        tmp_called_instance_89 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_89 == NULL)) {
            tmp_called_instance_89 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_89 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 499;
        tmp_ass_subvalue_202 = CALL_METHOD_NO_ARGS(tmp_called_instance_89, mod_consts[514]);
        if (tmp_ass_subvalue_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_202 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_202 == NULL)) {
            tmp_ass_subscribed_202 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_202 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_202);

            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_202 = mod_consts[515];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_202, tmp_ass_subscript_202, tmp_ass_subvalue_202);
        Py_DECREF(tmp_ass_subvalue_202);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 499;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_160;
        PyObject *tmp_expression_value_106;
        PyObject *tmp_expression_value_107;
        tmp_expression_value_107 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_107 == NULL)) {
            tmp_expression_value_107 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_expression_value_107 == NULL));
        tmp_expression_value_106 = LOOKUP_ATTRIBUTE(tmp_expression_value_107, mod_consts[240]);
        if (tmp_expression_value_106 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;

            goto try_except_handler_65;
        }
        tmp_assign_source_160 = LOOKUP_ATTRIBUTE(tmp_expression_value_106, mod_consts[516]);
        Py_DECREF(tmp_expression_value_106);
        if (tmp_assign_source_160 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;

            goto try_except_handler_65;
        }
        assert(tmp_assign_unpack_27__assign_source == NULL);
        tmp_assign_unpack_27__assign_source = tmp_assign_source_160;
    }
    {
        PyObject *tmp_ass_subvalue_203;
        PyObject *tmp_ass_subscribed_203;
        PyObject *tmp_ass_subscript_203;
        CHECK_OBJECT(tmp_assign_unpack_27__assign_source);
        tmp_ass_subvalue_203 = tmp_assign_unpack_27__assign_source;
        tmp_ass_subscribed_203 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_203 == NULL)) {
            tmp_ass_subscribed_203 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_203 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;

            goto try_except_handler_65;
        }
        tmp_ass_subscript_203 = mod_consts[517];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_203, tmp_ass_subscript_203, tmp_ass_subvalue_203);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 501;

            goto try_except_handler_65;
        }
    }
    goto try_end_55;
    // Exception handler code:
    try_except_handler_65:;
    exception_keeper_type_65 = exception_type;
    exception_keeper_value_65 = exception_value;
    exception_keeper_tb_65 = exception_tb;
    exception_keeper_lineno_65 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_27__assign_source);
    tmp_assign_unpack_27__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_65;
    exception_value = exception_keeper_value_65;
    exception_tb = exception_keeper_tb_65;
    exception_lineno = exception_keeper_lineno_65;

    goto frame_exception_exit_1;
    // End of try:
    try_end_55:;
    {
        PyObject *tmp_assign_source_161;
        CHECK_OBJECT(tmp_assign_unpack_27__assign_source);
        tmp_assign_source_161 = tmp_assign_unpack_27__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[518], tmp_assign_source_161);
    }
    CHECK_OBJECT(tmp_assign_unpack_27__assign_source);
    Py_DECREF(tmp_assign_unpack_27__assign_source);
    tmp_assign_unpack_27__assign_source = NULL;
    {
        bool tmp_condition_result_50;
        PyObject *tmp_operand_value_9;
        tmp_operand_value_9 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[71]);

        if (unlikely(tmp_operand_value_9 == NULL)) {
            tmp_operand_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[71]);
        }

        if (tmp_operand_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_9);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 504;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_50 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_50 != false) {
            goto branch_yes_46;
        } else {
            goto branch_no_46;
        }
    }
    branch_yes_46:;
    // Tried code:
    {
        PyObject *tmp_assign_source_162;
        PyObject *tmp_expression_value_108;
        tmp_expression_value_108 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_108 == NULL)) {
            tmp_expression_value_108 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_expression_value_108 == NULL));
        tmp_assign_source_162 = LOOKUP_ATTRIBUTE(tmp_expression_value_108, mod_consts[70]);
        if (tmp_assign_source_162 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_66;
        }
        assert(tmp_assign_unpack_29__assign_source == NULL);
        tmp_assign_unpack_29__assign_source = tmp_assign_source_162;
    }
    {
        PyObject *tmp_ass_subvalue_204;
        PyObject *tmp_ass_subscribed_204;
        PyObject *tmp_ass_subscript_204;
        CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
        tmp_ass_subvalue_204 = tmp_assign_unpack_29__assign_source;
        tmp_ass_subscribed_204 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_204 == NULL)) {
            tmp_ass_subscribed_204 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_204 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_66;
        }
        tmp_ass_subscript_204 = mod_consts[519];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_204, tmp_ass_subscript_204, tmp_ass_subvalue_204);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 505;

            goto try_except_handler_66;
        }
    }
    goto try_end_56;
    // Exception handler code:
    try_except_handler_66:;
    exception_keeper_type_66 = exception_type;
    exception_keeper_value_66 = exception_value;
    exception_keeper_tb_66 = exception_tb;
    exception_keeper_lineno_66 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_29__assign_source);
    tmp_assign_unpack_29__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_66;
    exception_value = exception_keeper_value_66;
    exception_tb = exception_keeper_tb_66;
    exception_lineno = exception_keeper_lineno_66;

    goto frame_exception_exit_1;
    // End of try:
    try_end_56:;
    {
        PyObject *tmp_assign_source_163;
        CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
        tmp_assign_source_163 = tmp_assign_unpack_29__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[520], tmp_assign_source_163);
    }
    CHECK_OBJECT(tmp_assign_unpack_29__assign_source);
    Py_DECREF(tmp_assign_unpack_29__assign_source);
    tmp_assign_unpack_29__assign_source = NULL;
    branch_no_46:;
    {
        PyObject *tmp_ass_subvalue_205;
        PyObject *tmp_called_instance_90;
        PyObject *tmp_ass_subscribed_205;
        PyObject *tmp_ass_subscript_205;
        tmp_called_instance_90 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[518]);

        if (unlikely(tmp_called_instance_90 == NULL)) {
            tmp_called_instance_90 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[518]);
        }

        if (tmp_called_instance_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 506;
        tmp_ass_subvalue_205 = CALL_METHOD_NO_ARGS(tmp_called_instance_90, mod_consts[521]);
        if (tmp_ass_subvalue_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_205 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_205 == NULL)) {
            tmp_ass_subscribed_205 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_205 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_205);

            exception_lineno = 506;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_205 = mod_consts[522];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_205, tmp_ass_subscript_205, tmp_ass_subvalue_205);
        Py_DECREF(tmp_ass_subvalue_205);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 506;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_206;
        PyObject *tmp_called_instance_91;
        PyObject *tmp_ass_subscribed_206;
        PyObject *tmp_ass_subscript_206;
        tmp_called_instance_91 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_91 == NULL)) {
            tmp_called_instance_91 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_91 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 507;
        tmp_ass_subvalue_206 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_91,
            mod_consts[523],
            PyTuple_GET_ITEM(mod_consts[151], 0)
        );

        if (tmp_ass_subvalue_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_206 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_206 == NULL)) {
            tmp_ass_subscribed_206 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_206 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_206);

            exception_lineno = 507;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_206 = mod_consts[524];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_206, tmp_ass_subscript_206, tmp_ass_subvalue_206);
        Py_DECREF(tmp_ass_subvalue_206);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 507;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_207;
        PyObject *tmp_called_instance_92;
        PyObject *tmp_ass_subscribed_207;
        PyObject *tmp_ass_subscript_207;
        tmp_called_instance_92 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_92 == NULL)) {
            tmp_called_instance_92 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_92 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 508;
        tmp_ass_subvalue_207 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_92,
            mod_consts[525],
            PyTuple_GET_ITEM(mod_consts[151], 0)
        );

        if (tmp_ass_subvalue_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_207 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_207 == NULL)) {
            tmp_ass_subscribed_207 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_207 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_207);

            exception_lineno = 508;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_207 = mod_consts[526];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_207, tmp_ass_subscript_207, tmp_ass_subvalue_207);
        Py_DECREF(tmp_ass_subvalue_207);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_208;
        PyObject *tmp_called_value_72;
        PyObject *tmp_expression_value_109;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_ass_subscribed_208;
        PyObject *tmp_ass_subscript_208;
        tmp_expression_value_109 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_109 == NULL)) {
            tmp_expression_value_109 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_expression_value_109 == NULL));
        tmp_called_value_72 = LOOKUP_ATTRIBUTE(tmp_expression_value_109, mod_consts[527]);
        if (tmp_called_value_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_30 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_args_element_value_30 == NULL)) {
            tmp_args_element_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        if (tmp_args_element_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_72);

            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 509;
        tmp_ass_subvalue_208 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_72, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_72);
        if (tmp_ass_subvalue_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_208 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_208 == NULL)) {
            tmp_ass_subscribed_208 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_208 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_208);

            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_208 = mod_consts[528];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_208, tmp_ass_subscript_208, tmp_ass_subvalue_208);
        Py_DECREF(tmp_ass_subvalue_208);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_209;
        PyObject *tmp_called_value_73;
        PyObject *tmp_expression_value_110;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_ass_subscribed_209;
        PyObject *tmp_ass_subscript_209;
        tmp_expression_value_110 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_110 == NULL)) {
            tmp_expression_value_110 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_expression_value_110 == NULL));
        tmp_called_value_73 = LOOKUP_ATTRIBUTE(tmp_expression_value_110, mod_consts[529]);
        if (tmp_called_value_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_31 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[212]);

        if (unlikely(tmp_args_element_value_31 == NULL)) {
            tmp_args_element_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[212]);
        }

        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_73);

            exception_lineno = 510;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 510;
        tmp_ass_subvalue_209 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_73, tmp_args_element_value_31);
        Py_DECREF(tmp_called_value_73);
        if (tmp_ass_subvalue_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_209 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_209 == NULL)) {
            tmp_ass_subscribed_209 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_209 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_209);

            exception_lineno = 510;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_209 = mod_consts[530];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_209, tmp_ass_subscript_209, tmp_ass_subvalue_209);
        Py_DECREF(tmp_ass_subvalue_209);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_164;
        PyObject *tmp_called_value_74;
        PyObject *tmp_expression_value_111;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_expression_value_112;
        tmp_expression_value_111 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_111 == NULL)) {
            tmp_expression_value_111 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_expression_value_111 == NULL));
        tmp_called_value_74 = LOOKUP_ATTRIBUTE(tmp_expression_value_111, mod_consts[101]);
        if (tmp_called_value_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;

            goto try_except_handler_67;
        }
        tmp_expression_value_112 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_112 == NULL)) {
            tmp_expression_value_112 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_expression_value_112 == NULL));
        tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_112, mod_consts[210]);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_74);

            exception_lineno = 511;

            goto try_except_handler_67;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 511;
        tmp_assign_source_164 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_74, tmp_args_element_value_32);
        Py_DECREF(tmp_called_value_74);
        Py_DECREF(tmp_args_element_value_32);
        if (tmp_assign_source_164 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;

            goto try_except_handler_67;
        }
        assert(tmp_assign_unpack_30__assign_source == NULL);
        tmp_assign_unpack_30__assign_source = tmp_assign_source_164;
    }
    {
        PyObject *tmp_ass_subvalue_210;
        PyObject *tmp_ass_subscribed_210;
        PyObject *tmp_ass_subscript_210;
        CHECK_OBJECT(tmp_assign_unpack_30__assign_source);
        tmp_ass_subvalue_210 = tmp_assign_unpack_30__assign_source;
        tmp_ass_subscribed_210 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_210 == NULL)) {
            tmp_ass_subscribed_210 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_210 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;

            goto try_except_handler_67;
        }
        tmp_ass_subscript_210 = mod_consts[531];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_210, tmp_ass_subscript_210, tmp_ass_subvalue_210);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;

            goto try_except_handler_67;
        }
    }
    goto try_end_57;
    // Exception handler code:
    try_except_handler_67:;
    exception_keeper_type_67 = exception_type;
    exception_keeper_value_67 = exception_value;
    exception_keeper_tb_67 = exception_tb;
    exception_keeper_lineno_67 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_30__assign_source);
    tmp_assign_unpack_30__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_67;
    exception_value = exception_keeper_value_67;
    exception_tb = exception_keeper_tb_67;
    exception_lineno = exception_keeper_lineno_67;

    goto frame_exception_exit_1;
    // End of try:
    try_end_57:;
    {
        PyObject *tmp_assign_source_165;
        CHECK_OBJECT(tmp_assign_unpack_30__assign_source);
        tmp_assign_source_165 = tmp_assign_unpack_30__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[532], tmp_assign_source_165);
    }
    CHECK_OBJECT(tmp_assign_unpack_30__assign_source);
    Py_DECREF(tmp_assign_unpack_30__assign_source);
    tmp_assign_unpack_30__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_211;
        PyObject *tmp_called_value_75;
        PyObject *tmp_ass_subscribed_211;
        PyObject *tmp_ass_subscript_211;
        tmp_called_value_75 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[532]);

        if (unlikely(tmp_called_value_75 == NULL)) {
            tmp_called_value_75 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[532]);
        }

        if (tmp_called_value_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 512;
        tmp_ass_subvalue_211 = CALL_FUNCTION_NO_ARGS(tmp_called_value_75);
        if (tmp_ass_subvalue_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_211 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_211 == NULL)) {
            tmp_ass_subscribed_211 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_211 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_211);

            exception_lineno = 512;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_211 = mod_consts[533];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_211, tmp_ass_subscript_211, tmp_ass_subvalue_211);
        Py_DECREF(tmp_ass_subvalue_211);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_212;
        PyObject *tmp_called_instance_93;
        PyObject *tmp_ass_subscribed_212;
        PyObject *tmp_ass_subscript_212;
        tmp_called_instance_93 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_93 == NULL)) {
            tmp_called_instance_93 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_93 == NULL));
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 513;
        tmp_ass_subvalue_212 = CALL_METHOD_NO_ARGS(tmp_called_instance_93, mod_consts[534]);
        if (tmp_ass_subvalue_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_212 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_212 == NULL)) {
            tmp_ass_subscribed_212 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_212 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_212);

            exception_lineno = 513;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_212 = mod_consts[535];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_212, tmp_ass_subscript_212, tmp_ass_subvalue_212);
        Py_DECREF(tmp_ass_subvalue_212);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 513;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_213;
        PyObject *tmp_called_instance_94;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_ass_subscribed_213;
        PyObject *tmp_ass_subscript_213;
        tmp_called_instance_94 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_called_instance_94 == NULL)) {
            tmp_called_instance_94 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_called_instance_94 == NULL));


        tmp_args_element_value_33 = MAKE_FUNCTION_dill$_objects$$$function__7_lambda();

        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 514;
        tmp_ass_subvalue_213 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_94, mod_consts[534], tmp_args_element_value_33);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_ass_subvalue_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_213 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_213 == NULL)) {
            tmp_ass_subscribed_213 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_213 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_213);

            exception_lineno = 514;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_213 = mod_consts[536];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_213, tmp_ass_subscript_213, tmp_ass_subvalue_213);
        Py_DECREF(tmp_ass_subvalue_213);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_166;
        PyObject *tmp_expression_value_113;
        tmp_expression_value_113 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[97]);

        if (unlikely(tmp_expression_value_113 == NULL)) {
            tmp_expression_value_113 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
        }

        if (tmp_expression_value_113 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;

            goto try_except_handler_68;
        }
        tmp_assign_source_166 = LOOKUP_ATTRIBUTE(tmp_expression_value_113, mod_consts[98]);
        if (tmp_assign_source_166 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;

            goto try_except_handler_68;
        }
        assert(tmp_assign_unpack_31__assign_source == NULL);
        tmp_assign_unpack_31__assign_source = tmp_assign_source_166;
    }
    {
        PyObject *tmp_ass_subvalue_214;
        PyObject *tmp_ass_subscribed_214;
        PyObject *tmp_ass_subscript_214;
        CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
        tmp_ass_subvalue_214 = tmp_assign_unpack_31__assign_source;
        tmp_ass_subscribed_214 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_214 == NULL)) {
            tmp_ass_subscribed_214 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_214 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;

            goto try_except_handler_68;
        }
        tmp_ass_subscript_214 = mod_consts[537];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_214, tmp_ass_subscript_214, tmp_ass_subvalue_214);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;

            goto try_except_handler_68;
        }
    }
    goto try_end_58;
    // Exception handler code:
    try_except_handler_68:;
    exception_keeper_type_68 = exception_type;
    exception_keeper_value_68 = exception_value;
    exception_keeper_tb_68 = exception_tb;
    exception_keeper_lineno_68 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_31__assign_source);
    tmp_assign_unpack_31__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_68;
    exception_value = exception_keeper_value_68;
    exception_tb = exception_keeper_tb_68;
    exception_lineno = exception_keeper_lineno_68;

    goto frame_exception_exit_1;
    // End of try:
    try_end_58:;
    {
        PyObject *tmp_assign_source_167;
        CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
        tmp_assign_source_167 = tmp_assign_unpack_31__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_167);
    }
    CHECK_OBJECT(tmp_assign_unpack_31__assign_source);
    Py_DECREF(tmp_assign_unpack_31__assign_source);
    tmp_assign_unpack_31__assign_source = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_168;
        PyObject *tmp_called_value_76;
        PyObject *tmp_expression_value_114;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_expression_value_115;
        tmp_expression_value_114 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_114 == NULL)) {
            tmp_expression_value_114 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_expression_value_114 == NULL));
        tmp_called_value_76 = LOOKUP_ATTRIBUTE(tmp_expression_value_114, mod_consts[538]);
        if (tmp_called_value_76 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;

            goto try_except_handler_69;
        }
        tmp_expression_value_115 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[68]);

        if (unlikely(tmp_expression_value_115 == NULL)) {
            tmp_expression_value_115 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[68]);
        }

        assert(!(tmp_expression_value_115 == NULL));
        tmp_args_element_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_115, mod_consts[210]);
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_76);

            exception_lineno = 516;

            goto try_except_handler_69;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 516;
        tmp_assign_source_168 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_76, tmp_args_element_value_34);
        Py_DECREF(tmp_called_value_76);
        Py_DECREF(tmp_args_element_value_34);
        if (tmp_assign_source_168 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;

            goto try_except_handler_69;
        }
        assert(tmp_assign_unpack_32__assign_source == NULL);
        tmp_assign_unpack_32__assign_source = tmp_assign_source_168;
    }
    {
        PyObject *tmp_ass_subvalue_215;
        PyObject *tmp_ass_subscribed_215;
        PyObject *tmp_ass_subscript_215;
        CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
        tmp_ass_subvalue_215 = tmp_assign_unpack_32__assign_source;
        tmp_ass_subscribed_215 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_215 == NULL)) {
            tmp_ass_subscribed_215 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_215 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;

            goto try_except_handler_69;
        }
        tmp_ass_subscript_215 = mod_consts[539];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_215, tmp_ass_subscript_215, tmp_ass_subvalue_215);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;

            goto try_except_handler_69;
        }
    }
    goto try_end_59;
    // Exception handler code:
    try_except_handler_69:;
    exception_keeper_type_69 = exception_type;
    exception_keeper_value_69 = exception_value;
    exception_keeper_tb_69 = exception_tb;
    exception_keeper_lineno_69 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_32__assign_source);
    tmp_assign_unpack_32__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_69;
    exception_value = exception_keeper_value_69;
    exception_tb = exception_keeper_tb_69;
    exception_lineno = exception_keeper_lineno_69;

    goto frame_exception_exit_1;
    // End of try:
    try_end_59:;
    {
        PyObject *tmp_assign_source_169;
        CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
        tmp_assign_source_169 = tmp_assign_unpack_32__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[540], tmp_assign_source_169);
    }
    CHECK_OBJECT(tmp_assign_unpack_32__assign_source);
    Py_DECREF(tmp_assign_unpack_32__assign_source);
    tmp_assign_unpack_32__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_216;
        PyObject *tmp_called_value_77;
        PyObject *tmp_ass_subscribed_216;
        PyObject *tmp_ass_subscript_216;
        tmp_called_value_77 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[540]);

        if (unlikely(tmp_called_value_77 == NULL)) {
            tmp_called_value_77 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[540]);
        }

        if (tmp_called_value_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 517;
        tmp_ass_subvalue_216 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_77, mod_consts[541]);

        if (tmp_ass_subvalue_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_216 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_216 == NULL)) {
            tmp_ass_subscribed_216 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_216 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_216);

            exception_lineno = 517;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_216 = mod_consts[542];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_216, tmp_ass_subscript_216, tmp_ass_subvalue_216);
        Py_DECREF(tmp_ass_subvalue_216);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;

            goto frame_exception_exit_1;
        }
    }
    branch_no_45:;
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_217;
        PyObject *tmp_called_instance_95;
        PyObject *tmp_ass_subscribed_217;
        PyObject *tmp_ass_subscript_217;
        tmp_called_instance_95 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_called_instance_95 == NULL)) {
            tmp_called_instance_95 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_called_instance_95 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;

            goto try_except_handler_70;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 520;
        tmp_ass_subvalue_217 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_95,
            mod_consts[543],
            PyTuple_GET_ITEM(mod_consts[544], 0)
        );

        if (tmp_ass_subvalue_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;

            goto try_except_handler_70;
        }
        tmp_ass_subscribed_217 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_217 == NULL)) {
            tmp_ass_subscribed_217 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_217 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_217);

            exception_lineno = 520;

            goto try_except_handler_70;
        }
        tmp_ass_subscript_217 = mod_consts[545];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_217, tmp_ass_subscript_217, tmp_ass_subvalue_217);
        Py_DECREF(tmp_ass_subvalue_217);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 520;

            goto try_except_handler_70;
        }
    }
    goto try_end_60;
    // Exception handler code:
    try_except_handler_70:;
    exception_keeper_type_70 = exception_type;
    exception_keeper_value_70 = exception_value;
    exception_keeper_tb_70 = exception_tb;
    exception_keeper_lineno_70 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 16.
    exception_preserved_16 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_70 == NULL) {
        exception_keeper_tb_70 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_70);
    } else if (exception_keeper_lineno_70 != 0) {
        exception_keeper_tb_70 = ADD_TRACEBACK(exception_keeper_tb_70, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_70);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_70, &exception_keeper_value_70, &exception_keeper_tb_70);
    // Tried code:
    {
        bool tmp_condition_result_51;
        PyObject *tmp_cmp_expr_left_18;
        PyObject *tmp_cmp_expr_right_18;
        tmp_cmp_expr_left_18 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_18 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_18, tmp_cmp_expr_right_18);
        assert(!(tmp_res == -1));
        tmp_condition_result_51 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_51 != false) {
            goto branch_yes_47;
        } else {
            goto branch_no_47;
        }
    }
    branch_yes_47:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 518;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_71;
    branch_no_47:;
    goto try_end_61;
    // Exception handler code:
    try_except_handler_71:;
    exception_keeper_type_71 = exception_type;
    exception_keeper_value_71 = exception_value;
    exception_keeper_tb_71 = exception_tb;
    exception_keeper_lineno_71 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(&exception_preserved_16);

    // Re-raise.
    exception_type = exception_keeper_type_71;
    exception_value = exception_keeper_value_71;
    exception_tb = exception_keeper_tb_71;
    exception_lineno = exception_keeper_lineno_71;

    goto frame_exception_exit_1;
    // End of try:
    try_end_61:;
    // Restore previous exception id 16.
    SET_CURRENT_EXCEPTION(&exception_preserved_16);

    goto try_end_60;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_60:;
    // Tried code:
    {
        PyObject *tmp_ass_subvalue_218;
        PyObject *tmp_called_value_78;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_ass_subscribed_218;
        PyObject *tmp_ass_subscript_218;
        tmp_called_value_78 = (PyObject *)&PyMemoryView_Type;
        tmp_args_element_value_35 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[343]);

        if (unlikely(tmp_args_element_value_35 == NULL)) {
            tmp_args_element_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[343]);
        }

        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_72;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 525;
        tmp_ass_subvalue_218 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_78, tmp_args_element_value_35);
        if (tmp_ass_subvalue_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_72;
        }
        tmp_ass_subscribed_218 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_218 == NULL)) {
            tmp_ass_subscribed_218 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_218 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_218);

            exception_lineno = 525;

            goto try_except_handler_72;
        }
        tmp_ass_subscript_218 = mod_consts[546];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_218, tmp_ass_subscript_218, tmp_ass_subvalue_218);
        Py_DECREF(tmp_ass_subvalue_218);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 525;

            goto try_except_handler_72;
        }
    }
    {
        PyObject *tmp_ass_subvalue_219;
        PyObject *tmp_called_value_79;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_bytearray_arg_1;
        PyObject *tmp_ass_subscribed_219;
        PyObject *tmp_ass_subscript_219;
        tmp_called_value_79 = (PyObject *)&PyMemoryView_Type;
        tmp_bytearray_arg_1 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[343]);

        if (unlikely(tmp_bytearray_arg_1 == NULL)) {
            tmp_bytearray_arg_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[343]);
        }

        if (tmp_bytearray_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto try_except_handler_72;
        }
        tmp_args_element_value_36 = BUILTIN_BYTEARRAY1(tmp_bytearray_arg_1);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto try_except_handler_72;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 526;
        tmp_ass_subvalue_219 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_79, tmp_args_element_value_36);
        Py_DECREF(tmp_args_element_value_36);
        if (tmp_ass_subvalue_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto try_except_handler_72;
        }
        tmp_ass_subscribed_219 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_219 == NULL)) {
            tmp_ass_subscribed_219 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_219 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_219);

            exception_lineno = 526;

            goto try_except_handler_72;
        }
        tmp_ass_subscript_219 = mod_consts[547];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_219, tmp_ass_subscript_219, tmp_ass_subvalue_219);
        Py_DECREF(tmp_ass_subvalue_219);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 526;

            goto try_except_handler_72;
        }
    }
    {
        nuitka_bool tmp_condition_result_52;
        PyObject *tmp_mvar_value_23;
        int tmp_truth_name_25;
        tmp_mvar_value_23 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_mvar_value_23 == NULL)) {
            tmp_mvar_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_mvar_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto try_except_handler_72;
        }
        tmp_truth_name_25 = CHECK_IF_TRUE(tmp_mvar_value_23);
        if (tmp_truth_name_25 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;

            goto try_except_handler_72;
        }
        tmp_condition_result_52 = tmp_truth_name_25 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_52 == NUITKA_BOOL_TRUE) {
            goto branch_yes_48;
        } else {
            goto branch_no_48;
        }
    }
    branch_yes_48:;
    {
        PyObject *tmp_ass_subvalue_220;
        PyObject *tmp_called_value_80;
        PyObject *tmp_expression_value_116;
        PyObject *tmp_ass_subscribed_220;
        PyObject *tmp_ass_subscript_220;
        tmp_expression_value_116 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_expression_value_116 == NULL)) {
            tmp_expression_value_116 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_expression_value_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto try_except_handler_72;
        }
        tmp_called_value_80 = LOOKUP_ATTRIBUTE(tmp_expression_value_116, mod_consts[473]);
        if (tmp_called_value_80 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto try_except_handler_72;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 528;
        tmp_ass_subvalue_220 = CALL_FUNCTION_NO_ARGS(tmp_called_value_80);
        Py_DECREF(tmp_called_value_80);
        if (tmp_ass_subvalue_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto try_except_handler_72;
        }
        tmp_ass_subscribed_220 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_220 == NULL)) {
            tmp_ass_subscribed_220 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_220 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_220);

            exception_lineno = 528;

            goto try_except_handler_72;
        }
        tmp_ass_subscript_220 = mod_consts[548];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_220, tmp_ass_subscript_220, tmp_ass_subvalue_220);
        Py_DECREF(tmp_ass_subvalue_220);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 528;

            goto try_except_handler_72;
        }
    }
    {
        PyObject *tmp_ass_subvalue_221;
        PyObject *tmp_called_value_81;
        PyObject *tmp_expression_value_117;
        PyObject *tmp_ass_subscribed_221;
        PyObject *tmp_ass_subscript_221;
        tmp_expression_value_117 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_expression_value_117 == NULL)) {
            tmp_expression_value_117 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_expression_value_117 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_72;
        }
        tmp_called_value_81 = LOOKUP_ATTRIBUTE(tmp_expression_value_117, mod_consts[475]);
        if (tmp_called_value_81 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_72;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 529;
        tmp_ass_subvalue_221 = CALL_FUNCTION_NO_ARGS(tmp_called_value_81);
        Py_DECREF(tmp_called_value_81);
        if (tmp_ass_subvalue_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_72;
        }
        tmp_ass_subscribed_221 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_221 == NULL)) {
            tmp_ass_subscribed_221 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_221 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_221);

            exception_lineno = 529;

            goto try_except_handler_72;
        }
        tmp_ass_subscript_221 = mod_consts[549];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_221, tmp_ass_subscript_221, tmp_ass_subvalue_221);
        Py_DECREF(tmp_ass_subvalue_221);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 529;

            goto try_except_handler_72;
        }
    }
    {
        PyObject *tmp_ass_subvalue_222;
        PyObject *tmp_called_value_82;
        PyObject *tmp_expression_value_118;
        PyObject *tmp_ass_subscribed_222;
        PyObject *tmp_ass_subscript_222;
        tmp_expression_value_118 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_expression_value_118 == NULL)) {
            tmp_expression_value_118 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_expression_value_118 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_72;
        }
        tmp_called_value_82 = LOOKUP_ATTRIBUTE(tmp_expression_value_118, mod_consts[477]);
        if (tmp_called_value_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_72;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 530;
        tmp_ass_subvalue_222 = CALL_FUNCTION_NO_ARGS(tmp_called_value_82);
        Py_DECREF(tmp_called_value_82);
        if (tmp_ass_subvalue_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_72;
        }
        tmp_ass_subscribed_222 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_222 == NULL)) {
            tmp_ass_subscribed_222 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_222 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_222);

            exception_lineno = 530;

            goto try_except_handler_72;
        }
        tmp_ass_subscript_222 = mod_consts[550];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_222, tmp_ass_subscript_222, tmp_ass_subvalue_222);
        Py_DECREF(tmp_ass_subvalue_222);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;

            goto try_except_handler_72;
        }
    }
    goto branch_end_48;
    branch_no_48:;
    {
        PyObject *tmp_ass_subvalue_223;
        PyObject *tmp_called_value_83;
        PyObject *tmp_expression_value_119;
        PyObject *tmp_ass_subscribed_223;
        PyObject *tmp_ass_subscript_223;
        tmp_expression_value_119 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_expression_value_119 == NULL)) {
            tmp_expression_value_119 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_expression_value_119 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto try_except_handler_72;
        }
        tmp_called_value_83 = LOOKUP_ATTRIBUTE(tmp_expression_value_119, mod_consts[551]);
        if (tmp_called_value_83 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto try_except_handler_72;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 532;
        tmp_ass_subvalue_223 = CALL_FUNCTION_NO_ARGS(tmp_called_value_83);
        Py_DECREF(tmp_called_value_83);
        if (tmp_ass_subvalue_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto try_except_handler_72;
        }
        tmp_ass_subscribed_223 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_223 == NULL)) {
            tmp_ass_subscribed_223 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_223 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_223);

            exception_lineno = 532;

            goto try_except_handler_72;
        }
        tmp_ass_subscript_223 = mod_consts[548];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_223, tmp_ass_subscript_223, tmp_ass_subvalue_223);
        Py_DECREF(tmp_ass_subvalue_223);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;

            goto try_except_handler_72;
        }
    }
    {
        PyObject *tmp_ass_subvalue_224;
        PyObject *tmp_called_value_84;
        PyObject *tmp_expression_value_120;
        PyObject *tmp_ass_subscribed_224;
        PyObject *tmp_ass_subscript_224;
        tmp_expression_value_120 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_expression_value_120 == NULL)) {
            tmp_expression_value_120 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_expression_value_120 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_72;
        }
        tmp_called_value_84 = LOOKUP_ATTRIBUTE(tmp_expression_value_120, mod_consts[552]);
        if (tmp_called_value_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_72;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 533;
        tmp_ass_subvalue_224 = CALL_FUNCTION_NO_ARGS(tmp_called_value_84);
        Py_DECREF(tmp_called_value_84);
        if (tmp_ass_subvalue_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_72;
        }
        tmp_ass_subscribed_224 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_224 == NULL)) {
            tmp_ass_subscribed_224 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_224 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_224);

            exception_lineno = 533;

            goto try_except_handler_72;
        }
        tmp_ass_subscript_224 = mod_consts[549];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_224, tmp_ass_subscript_224, tmp_ass_subvalue_224);
        Py_DECREF(tmp_ass_subvalue_224);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 533;

            goto try_except_handler_72;
        }
    }
    {
        PyObject *tmp_ass_subvalue_225;
        PyObject *tmp_called_value_85;
        PyObject *tmp_expression_value_121;
        PyObject *tmp_ass_subscribed_225;
        PyObject *tmp_ass_subscript_225;
        tmp_expression_value_121 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[129]);

        if (unlikely(tmp_expression_value_121 == NULL)) {
            tmp_expression_value_121 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[129]);
        }

        if (tmp_expression_value_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;

            goto try_except_handler_72;
        }
        tmp_called_value_85 = LOOKUP_ATTRIBUTE(tmp_expression_value_121, mod_consts[553]);
        if (tmp_called_value_85 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;

            goto try_except_handler_72;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 534;
        tmp_ass_subvalue_225 = CALL_FUNCTION_NO_ARGS(tmp_called_value_85);
        Py_DECREF(tmp_called_value_85);
        if (tmp_ass_subvalue_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;

            goto try_except_handler_72;
        }
        tmp_ass_subscribed_225 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_225 == NULL)) {
            tmp_ass_subscribed_225 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_225 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_225);

            exception_lineno = 534;

            goto try_except_handler_72;
        }
        tmp_ass_subscript_225 = mod_consts[550];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_225, tmp_ass_subscript_225, tmp_ass_subvalue_225);
        Py_DECREF(tmp_ass_subvalue_225);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 534;

            goto try_except_handler_72;
        }
    }
    branch_end_48:;
    {
        PyObject *tmp_ass_subvalue_226;
        PyObject *tmp_called_instance_96;
        PyObject *tmp_ass_subscribed_226;
        PyObject *tmp_ass_subscript_226;
        tmp_called_instance_96 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[270]);

        if (unlikely(tmp_called_instance_96 == NULL)) {
            tmp_called_instance_96 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[270]);
        }

        if (tmp_called_instance_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto try_except_handler_72;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 536;
        tmp_ass_subvalue_226 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_96,
            mod_consts[554],
            PyTuple_GET_ITEM(mod_consts[555], 0)
        );

        if (tmp_ass_subvalue_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto try_except_handler_72;
        }
        tmp_ass_subscribed_226 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_226 == NULL)) {
            tmp_ass_subscribed_226 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_226 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_226);

            exception_lineno = 536;

            goto try_except_handler_72;
        }
        tmp_ass_subscript_226 = mod_consts[556];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_226, tmp_ass_subscript_226, tmp_ass_subvalue_226);
        Py_DECREF(tmp_ass_subvalue_226);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 536;

            goto try_except_handler_72;
        }
    }
    {
        PyObject *tmp_ass_subvalue_227;
        PyObject *tmp_called_instance_97;
        PyObject *tmp_ass_subscribed_227;
        PyObject *tmp_ass_subscript_227;
        tmp_called_instance_97 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[270]);

        if (unlikely(tmp_called_instance_97 == NULL)) {
            tmp_called_instance_97 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[270]);
        }

        if (tmp_called_instance_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_72;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 537;
        tmp_ass_subvalue_227 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_97,
            mod_consts[557],
            PyTuple_GET_ITEM(mod_consts[555], 0)
        );

        if (tmp_ass_subvalue_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_72;
        }
        tmp_ass_subscribed_227 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_227 == NULL)) {
            tmp_ass_subscribed_227 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_227 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_227);

            exception_lineno = 537;

            goto try_except_handler_72;
        }
        tmp_ass_subscript_227 = mod_consts[558];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_227, tmp_ass_subscript_227, tmp_ass_subvalue_227);
        Py_DECREF(tmp_ass_subvalue_227);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 537;

            goto try_except_handler_72;
        }
    }
    {
        PyObject *tmp_ass_subvalue_228;
        PyObject *tmp_called_instance_98;
        PyObject *tmp_ass_subscribed_228;
        PyObject *tmp_ass_subscript_228;
        tmp_called_instance_98 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[270]);

        if (unlikely(tmp_called_instance_98 == NULL)) {
            tmp_called_instance_98 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[270]);
        }

        if (tmp_called_instance_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto try_except_handler_72;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 538;
        tmp_ass_subvalue_228 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_98,
            mod_consts[559],
            PyTuple_GET_ITEM(mod_consts[555], 0)
        );

        if (tmp_ass_subvalue_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto try_except_handler_72;
        }
        tmp_ass_subscribed_228 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_228 == NULL)) {
            tmp_ass_subscribed_228 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_228 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_228);

            exception_lineno = 538;

            goto try_except_handler_72;
        }
        tmp_ass_subscript_228 = mod_consts[560];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_228, tmp_ass_subscript_228, tmp_ass_subvalue_228);
        Py_DECREF(tmp_ass_subvalue_228);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 538;

            goto try_except_handler_72;
        }
    }
    goto try_end_62;
    // Exception handler code:
    try_except_handler_72:;
    exception_keeper_type_72 = exception_type;
    exception_keeper_value_72 = exception_value;
    exception_keeper_tb_72 = exception_tb;
    exception_keeper_lineno_72 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 17.
    exception_preserved_17 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_72 == NULL) {
        exception_keeper_tb_72 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_72);
    } else if (exception_keeper_lineno_72 != 0) {
        exception_keeper_tb_72 = ADD_TRACEBACK(exception_keeper_tb_72, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_72);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_72, &exception_keeper_value_72, &exception_keeper_tb_72);
    // Tried code:
    {
        bool tmp_condition_result_53;
        PyObject *tmp_cmp_expr_left_19;
        PyObject *tmp_cmp_expr_right_19;
        tmp_cmp_expr_left_19 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_19 = PyExc_NameError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_19, tmp_cmp_expr_right_19);
        assert(!(tmp_res == -1));
        tmp_condition_result_53 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_53 != false) {
            goto branch_yes_49;
        } else {
            goto branch_no_49;
        }
    }
    branch_yes_49:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 523;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_73;
    branch_no_49:;
    goto try_end_63;
    // Exception handler code:
    try_except_handler_73:;
    exception_keeper_type_73 = exception_type;
    exception_keeper_value_73 = exception_value;
    exception_keeper_tb_73 = exception_tb;
    exception_keeper_lineno_73 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(&exception_preserved_17);

    // Re-raise.
    exception_type = exception_keeper_type_73;
    exception_value = exception_keeper_value_73;
    exception_tb = exception_keeper_tb_73;
    exception_lineno = exception_keeper_lineno_73;

    goto frame_exception_exit_1;
    // End of try:
    try_end_63:;
    // Restore previous exception id 17.
    SET_CURRENT_EXCEPTION(&exception_preserved_17);

    goto try_end_62;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_62:;
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_170;
        PyObject *tmp_called_value_86;
        PyObject *tmp_expression_value_122;
        PyObject *tmp_args_element_value_37;
        tmp_expression_value_122 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[43]);

        if (unlikely(tmp_expression_value_122 == NULL)) {
            tmp_expression_value_122 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[43]);
        }

        assert(!(tmp_expression_value_122 == NULL));
        tmp_called_value_86 = LOOKUP_ATTRIBUTE(tmp_expression_value_122, mod_consts[561]);
        if (tmp_called_value_86 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto try_except_handler_75;
        }
        tmp_args_element_value_37 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[336]);

        if (unlikely(tmp_args_element_value_37 == NULL)) {
            tmp_args_element_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[336]);
        }

        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_86);

            exception_lineno = 542;

            goto try_except_handler_75;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 542;
        tmp_assign_source_170 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_86, tmp_args_element_value_37);
        Py_DECREF(tmp_called_value_86);
        if (tmp_assign_source_170 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto try_except_handler_75;
        }
        assert(tmp_assign_unpack_33__assign_source == NULL);
        tmp_assign_unpack_33__assign_source = tmp_assign_source_170;
    }
    {
        PyObject *tmp_ass_subvalue_229;
        PyObject *tmp_ass_subscribed_229;
        PyObject *tmp_ass_subscript_229;
        CHECK_OBJECT(tmp_assign_unpack_33__assign_source);
        tmp_ass_subvalue_229 = tmp_assign_unpack_33__assign_source;
        tmp_ass_subscribed_229 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_229 == NULL)) {
            tmp_ass_subscribed_229 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_229 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto try_except_handler_75;
        }
        tmp_ass_subscript_229 = mod_consts[562];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_229, tmp_ass_subscript_229, tmp_ass_subvalue_229);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 542;

            goto try_except_handler_75;
        }
    }
    goto try_end_64;
    // Exception handler code:
    try_except_handler_75:;
    exception_keeper_type_74 = exception_type;
    exception_keeper_value_74 = exception_value;
    exception_keeper_tb_74 = exception_tb;
    exception_keeper_lineno_74 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_assign_unpack_33__assign_source);
    tmp_assign_unpack_33__assign_source = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_74;
    exception_value = exception_keeper_value_74;
    exception_tb = exception_keeper_tb_74;
    exception_lineno = exception_keeper_lineno_74;

    goto try_except_handler_74;
    // End of try:
    try_end_64:;
    {
        PyObject *tmp_assign_source_171;
        CHECK_OBJECT(tmp_assign_unpack_33__assign_source);
        tmp_assign_source_171 = tmp_assign_unpack_33__assign_source;
        UPDATE_STRING_DICT0(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[563], tmp_assign_source_171);
    }
    CHECK_OBJECT(tmp_assign_unpack_33__assign_source);
    Py_DECREF(tmp_assign_unpack_33__assign_source);
    tmp_assign_unpack_33__assign_source = NULL;
    {
        PyObject *tmp_ass_subvalue_230;
        PyObject *tmp_called_value_87;
        PyObject *tmp_ass_subscribed_230;
        PyObject *tmp_ass_subscript_230;
        tmp_called_value_87 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[563]);

        if (unlikely(tmp_called_value_87 == NULL)) {
            tmp_called_value_87 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[563]);
        }

        if (tmp_called_value_87 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto try_except_handler_74;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 543;
        tmp_ass_subvalue_230 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_87, mod_consts[449]);

        if (tmp_ass_subvalue_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto try_except_handler_74;
        }
        tmp_ass_subscribed_230 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_230 == NULL)) {
            tmp_ass_subscribed_230 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_230 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_230);

            exception_lineno = 543;

            goto try_except_handler_74;
        }
        tmp_ass_subscript_230 = mod_consts[564];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_230, tmp_ass_subscript_230, tmp_ass_subvalue_230);
        Py_DECREF(tmp_ass_subvalue_230);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 543;

            goto try_except_handler_74;
        }
    }
    goto try_end_65;
    // Exception handler code:
    try_except_handler_74:;
    exception_keeper_type_75 = exception_type;
    exception_keeper_value_75 = exception_value;
    exception_keeper_tb_75 = exception_tb;
    exception_keeper_lineno_75 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 18.
    exception_preserved_18 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_75 == NULL) {
        exception_keeper_tb_75 = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_75);
    } else if (exception_keeper_lineno_75 != 0) {
        exception_keeper_tb_75 = ADD_TRACEBACK(exception_keeper_tb_75, frame_055af561147bc398dec138c5e48a8193, exception_keeper_lineno_75);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_75, &exception_keeper_value_75, &exception_keeper_tb_75);
    // Tried code:
    {
        bool tmp_condition_result_54;
        PyObject *tmp_cmp_expr_left_20;
        PyObject *tmp_cmp_expr_right_20;
        tmp_cmp_expr_left_20 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_20 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_20, tmp_cmp_expr_right_20);
        assert(!(tmp_res == -1));
        tmp_condition_result_54 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_54 != false) {
            goto branch_yes_50;
        } else {
            goto branch_no_50;
        }
    }
    branch_yes_50:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 541;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_055af561147bc398dec138c5e48a8193->m_frame) frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = exception_tb->tb_lineno;

    goto try_except_handler_76;
    branch_no_50:;
    goto try_end_66;
    // Exception handler code:
    try_except_handler_76:;
    exception_keeper_type_76 = exception_type;
    exception_keeper_value_76 = exception_value;
    exception_keeper_tb_76 = exception_tb;
    exception_keeper_lineno_76 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 18.
    SET_CURRENT_EXCEPTION(&exception_preserved_18);

    // Re-raise.
    exception_type = exception_keeper_type_76;
    exception_value = exception_keeper_value_76;
    exception_tb = exception_keeper_tb_76;
    exception_lineno = exception_keeper_lineno_76;

    goto frame_exception_exit_1;
    // End of try:
    try_end_66:;
    // Restore previous exception id 18.
    SET_CURRENT_EXCEPTION(&exception_preserved_18);

    goto try_end_65;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_65:;
    {
        nuitka_bool tmp_condition_result_55;
        PyObject *tmp_mvar_value_24;
        int tmp_truth_name_26;
        tmp_mvar_value_24 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[24]);

        if (unlikely(tmp_mvar_value_24 == NULL)) {
            tmp_mvar_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[24]);
        }

        if (tmp_mvar_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_26 = CHECK_IF_TRUE(tmp_mvar_value_24);
        if (tmp_truth_name_26 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 546;

            goto frame_exception_exit_1;
        }
        tmp_condition_result_55 = tmp_truth_name_26 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_55 == NUITKA_BOOL_TRUE) {
            goto branch_yes_51;
        } else {
            goto branch_no_51;
        }
    }
    branch_yes_51:;
    {
        PyObject *tmp_ass_subvalue_231;
        PyObject *tmp_expression_value_123;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_ass_subscribed_231;
        PyObject *tmp_ass_subscript_231;
        tmp_expression_value_123 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_123 == NULL)) {
            tmp_expression_value_123 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_123 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = mod_consts[546];
        tmp_ass_subvalue_231 = LOOKUP_SUBSCRIPT(tmp_expression_value_123, tmp_subscript_value_16);
        if (tmp_ass_subvalue_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_231 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_231 == NULL)) {
            tmp_ass_subscribed_231 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_231 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_231);

            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_231 = mod_consts[565];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_231, tmp_ass_subscript_231, tmp_ass_subvalue_231);
        Py_DECREF(tmp_ass_subvalue_231);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 547;

            goto frame_exception_exit_1;
        }
    }
    goto branch_end_51;
    branch_no_51:;
    {
        PyObject *tmp_ass_subvalue_232;
        PyObject *tmp_called_value_88;
        PyObject *tmp_ass_subscribed_232;
        PyObject *tmp_ass_subscript_232;
        tmp_called_value_88 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[566]);

        if (unlikely(tmp_called_value_88 == NULL)) {
            tmp_called_value_88 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[566]);
        }

        if (tmp_called_value_88 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 549;
        tmp_ass_subvalue_232 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_88, mod_consts[164]);

        if (tmp_ass_subvalue_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_232 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_ass_subscribed_232 == NULL)) {
            tmp_ass_subscribed_232 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_ass_subscribed_232 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_232);

            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_232 = mod_consts[565];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_232, tmp_ass_subscript_232, tmp_ass_subvalue_232);
        Py_DECREF(tmp_ass_subvalue_232);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;

            goto frame_exception_exit_1;
        }
    }
    branch_end_51:;
    {
        PyObject *tmp_called_value_89;
        PyObject *tmp_expression_value_124;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_38;
        tmp_expression_value_124 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[116]);

        if (unlikely(tmp_expression_value_124 == NULL)) {
            tmp_expression_value_124 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[116]);
        }

        if (tmp_expression_value_124 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        tmp_called_value_89 = LOOKUP_ATTRIBUTE(tmp_expression_value_124, mod_consts[567]);
        if (tmp_called_value_89 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_38 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[115]);

        if (unlikely(tmp_args_element_value_38 == NULL)) {
            tmp_args_element_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[115]);
        }

        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_89);

            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 552;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_89, tmp_args_element_value_38);
        Py_DECREF(tmp_called_value_89);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_90;
        PyObject *tmp_expression_value_125;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_39;
        tmp_expression_value_125 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_125 == NULL)) {
            tmp_expression_value_125 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_125 == NULL));
        tmp_called_value_90 = LOOKUP_ATTRIBUTE(tmp_expression_value_125, mod_consts[290]);
        if (tmp_called_value_90 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_39 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_args_element_value_39 == NULL)) {
            tmp_args_element_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_90);

            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 554;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_90, tmp_args_element_value_39);
        Py_DECREF(tmp_called_value_90);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_91;
        PyObject *tmp_expression_value_126;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_40;
        tmp_expression_value_126 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_expression_value_126 == NULL)) {
            tmp_expression_value_126 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        assert(!(tmp_expression_value_126 == NULL));
        tmp_called_value_91 = LOOKUP_ATTRIBUTE(tmp_expression_value_126, mod_consts[568]);
        if (tmp_called_value_91 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        tmp_args_element_value_40 = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_args_element_value_40 == NULL)) {
            tmp_args_element_value_40 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_91);

            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        frame_055af561147bc398dec138c5e48a8193->m_frame.f_lineno = 555;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_91, tmp_args_element_value_40);
        Py_DECREF(tmp_called_value_91);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_055af561147bc398dec138c5e48a8193, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_055af561147bc398dec138c5e48a8193->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_055af561147bc398dec138c5e48a8193, exception_lineno);
    }



    assertFrameObject(frame_055af561147bc398dec138c5e48a8193);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("dill._objects", false);

    Py_INCREF(module_dill$_objects);
    return module_dill$_objects;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_dill$_objects, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("dill$_objects", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
