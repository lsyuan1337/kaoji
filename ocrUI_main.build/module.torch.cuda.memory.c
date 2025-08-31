/* Generated code for Python module 'torch.cuda.memory'
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

/* The "module_torch$cuda$memory" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$cuda$memory;
PyDictObject *moduledict_torch$cuda$memory;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[226];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[226];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.cuda.memory"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 226; i++) {
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
void checkModuleConstants_torch$cuda$memory(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 226; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_a89183868ec6c4a9b3163bb21dba6c70;
static PyCodeObject *codeobj_9b01c6a3c156bbd1faa8b2e94e5cbb6a;
static PyCodeObject *codeobj_d898b395e40aade1a5a27887bea69b20;
static PyCodeObject *codeobj_3de5bf49ba6ec714f973f5c7ad86ee26;
static PyCodeObject *codeobj_a35d42b0db6bc32dca241931eaeb168b;
static PyCodeObject *codeobj_332eb2ea07be8e7aaa8af99f1b8ca89b;
static PyCodeObject *codeobj_1cba36943a38ffc870dffcc1825332ae;
static PyCodeObject *codeobj_afa86c711dea91c9e1d6410fce267ef8;
static PyCodeObject *codeobj_62bba457d8816b9085b3adfb39724084;
static PyCodeObject *codeobj_3001ecbc79ef1c6c3410e0943ea42aa2;
static PyCodeObject *codeobj_51fda82fd106e8adeb18c10d8d14ae84;
static PyCodeObject *codeobj_9374f11d4fb219bead56c61def889899;
static PyCodeObject *codeobj_7ea7d2779fdd83b7ae99f0766785b1c6;
static PyCodeObject *codeobj_2527a3b036b6b1c5f122c3f2f5a768a6;
static PyCodeObject *codeobj_96d6c1663afd5c7a5d3b27726e72b943;
static PyCodeObject *codeobj_4359ab8c95ba5e3b81f8d66c1c768aa2;
static PyCodeObject *codeobj_0d57d043c6cbee785af58faf4f30c737;
static PyCodeObject *codeobj_9926cd8d58436d5697cf9c752aa6c258;
static PyCodeObject *codeobj_32bd772a9bba891bedefa36ee3f2efea;
static PyCodeObject *codeobj_6d364416215ad06fd3a561569ec45a2d;
static PyCodeObject *codeobj_495e4b88070b38cd85d2db03484dc528;
static PyCodeObject *codeobj_e82c378766e4d00f9edec2de99143278;
static PyCodeObject *codeobj_a0b75cb3e1ab971511b779ef580c2098;
static PyCodeObject *codeobj_5ffebc824dde1b53f1d1bc65538959d2;
static PyCodeObject *codeobj_0385088e5dda6a58b54d4ebdcf74f085;
static PyCodeObject *codeobj_fbaf025b306f1b103c3db18d6086095b;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[214]); CHECK_OBJECT(module_filename_obj);
    codeobj_a89183868ec6c4a9b3163bb21dba6c70 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[215], mod_consts[215], NULL, NULL, 0, 0, 0);
    codeobj_9b01c6a3c156bbd1faa8b2e94e5cbb6a = MAKE_CODE_OBJECT(module_filename_obj, 443, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[216], NULL, 2, 0, 0);
    codeobj_d898b395e40aade1a5a27887bea69b20 = MAKE_CODE_OBJECT(module_filename_obj, 432, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[80], mod_consts[80], mod_consts[217], NULL, 2, 0, 0);
    codeobj_3de5bf49ba6ec714f973f5c7ad86ee26 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[6], mod_consts[6], NULL, NULL, 0, 0, 0);
    codeobj_a35d42b0db6bc32dca241931eaeb168b = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[191], mod_consts[191], NULL, NULL, 0, 0, 0);
    codeobj_332eb2ea07be8e7aaa8af99f1b8ca89b = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[32], mod_consts[32], mod_consts[218], mod_consts[219], 2, 0, 0);
    codeobj_1cba36943a38ffc870dffcc1825332ae = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[194], mod_consts[194], mod_consts[220], NULL, 3, 0, 0);
    codeobj_afa86c711dea91c9e1d6410fce267ef8 = MAKE_CODE_OBJECT(module_filename_obj, 58, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[195], mod_consts[195], mod_consts[221], NULL, 1, 0, 0);
    codeobj_62bba457d8816b9085b3adfb39724084 = MAKE_CODE_OBJECT(module_filename_obj, 102, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[200], mod_consts[200], NULL, NULL, 0, 0, 0);
    codeobj_3001ecbc79ef1c6c3410e0943ea42aa2 = MAKE_CODE_OBJECT(module_filename_obj, 535, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[212], mod_consts[212], mod_consts[222], NULL, 1, 0, 0);
    codeobj_51fda82fd106e8adeb18c10d8d14ae84 = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[205], mod_consts[205], mod_consts[35], NULL, 1, 0, 0);
    codeobj_9374f11d4fb219bead56c61def889899 = MAKE_CODE_OBJECT(module_filename_obj, 390, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[207], mod_consts[207], mod_consts[35], NULL, 1, 0, 0);
    codeobj_7ea7d2779fdd83b7ae99f0766785b1c6 = MAKE_CODE_OBJECT(module_filename_obj, 360, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[76], mod_consts[76], mod_consts[35], NULL, 1, 0, 0);
    codeobj_2527a3b036b6b1c5f122c3f2f5a768a6 = MAKE_CODE_OBJECT(module_filename_obj, 569, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[213], mod_consts[213], mod_consts[35], NULL, 1, 0, 0);
    codeobj_96d6c1663afd5c7a5d3b27726e72b943 = MAKE_CODE_OBJECT(module_filename_obj, 304, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[204], mod_consts[204], mod_consts[35], NULL, 1, 0, 0);
    codeobj_4359ab8c95ba5e3b81f8d66c1c768aa2 = MAKE_CODE_OBJECT(module_filename_obj, 382, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[206], mod_consts[206], mod_consts[35], NULL, 1, 0, 0);
    codeobj_0d57d043c6cbee785af58faf4f30c737 = MAKE_CODE_OBJECT(module_filename_obj, 344, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[73], mod_consts[73], mod_consts[35], NULL, 1, 0, 0);
    codeobj_9926cd8d58436d5697cf9c752aa6c258 = MAKE_CODE_OBJECT(module_filename_obj, 398, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[208], mod_consts[208], NULL, NULL, 0, 0, 0);
    codeobj_32bd772a9bba891bedefa36ee3f2efea = MAKE_CODE_OBJECT(module_filename_obj, 117, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[223], NULL, 1, 0, 0);
    codeobj_6d364416215ad06fd3a561569ec45a2d = MAKE_CODE_OBJECT(module_filename_obj, 205, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[35], NULL, 1, 0, 0);
    codeobj_495e4b88070b38cd85d2db03484dc528 = MAKE_CODE_OBJECT(module_filename_obj, 411, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[211], mod_consts[211], mod_consts[224], NULL, 2, 0, 0);
    codeobj_e82c378766e4d00f9edec2de99143278 = MAKE_CODE_OBJECT(module_filename_obj, 213, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[201], mod_consts[201], mod_consts[35], NULL, 1, 0, 0);
    codeobj_a0b75cb3e1ab971511b779ef580c2098 = MAKE_CODE_OBJECT(module_filename_obj, 252, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[202], mod_consts[202], mod_consts[35], NULL, 1, 0, 0);
    codeobj_5ffebc824dde1b53f1d1bc65538959d2 = MAKE_CODE_OBJECT(module_filename_obj, 278, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[203], mod_consts[203], mod_consts[35], NULL, 1, 0, 0);
    codeobj_0385088e5dda6a58b54d4ebdcf74f085 = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[58], mod_consts[58], mod_consts[35], NULL, 1, 0, 0);
    codeobj_fbaf025b306f1b103c3db18d6086095b = MAKE_CODE_OBJECT(module_filename_obj, 75, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[198], mod_consts[198], mod_consts[225], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_torch$cuda$memory$$$function__2__free_mutex$$$genobj__1__free_mutex();


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__10_reset_peak_memory_stats(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__11_reset_max_memory_allocated(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__12_reset_max_memory_cached(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__13_memory_allocated(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__14_max_memory_allocated(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__15_memory_reserved(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__16_max_memory_reserved(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__17_memory_cached(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__18_max_memory_cached(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__19_memory_snapshot();


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__1__host_allocator();


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__20_memory_summary(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__20_memory_summary$$$function__1__format_size();


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__20_memory_summary$$$function__2__format_count();


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__21_list_gpu_processes(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__22_mem_get_info(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__2__free_mutex();


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__3_caching_allocator_alloc(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__4_caching_allocator_delete();


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__5_set_per_process_memory_fraction(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__6_empty_cache(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__7_memory_stats(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__7_memory_stats$$$function__1__recurse_add_to_result(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__8_memory_stats_as_nested_dict(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__9_reset_accumulated_memory_stats(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_torch$cuda$memory$$$function__1__host_allocator(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_a35d42b0db6bc32dca241931eaeb168b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a35d42b0db6bc32dca241931eaeb168b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a35d42b0db6bc32dca241931eaeb168b)) {
        Py_XDECREF(cache_frame_a35d42b0db6bc32dca241931eaeb168b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a35d42b0db6bc32dca241931eaeb168b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a35d42b0db6bc32dca241931eaeb168b = MAKE_FUNCTION_FRAME(codeobj_a35d42b0db6bc32dca241931eaeb168b, module_torch$cuda$memory, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a35d42b0db6bc32dca241931eaeb168b->m_type_description == NULL);
    frame_a35d42b0db6bc32dca241931eaeb168b = cache_frame_a35d42b0db6bc32dca241931eaeb168b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a35d42b0db6bc32dca241931eaeb168b);
    assert(Py_REFCNT(frame_a35d42b0db6bc32dca241931eaeb168b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        frame_a35d42b0db6bc32dca241931eaeb168b->m_frame.f_lineno = 11;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        frame_a35d42b0db6bc32dca241931eaeb168b->m_frame.f_lineno = 12;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[3]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

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
        exception_tb = MAKE_TRACEBACK(frame_a35d42b0db6bc32dca241931eaeb168b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a35d42b0db6bc32dca241931eaeb168b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a35d42b0db6bc32dca241931eaeb168b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a35d42b0db6bc32dca241931eaeb168b,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_a35d42b0db6bc32dca241931eaeb168b == cache_frame_a35d42b0db6bc32dca241931eaeb168b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a35d42b0db6bc32dca241931eaeb168b);
        cache_frame_a35d42b0db6bc32dca241931eaeb168b = NULL;
    }

    assertFrameObject(frame_a35d42b0db6bc32dca241931eaeb168b);

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


static PyObject *impl_torch$cuda$memory$$$function__2__free_mutex(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *tmp_return_value = NULL;

    // Actual function body.


    tmp_return_value = MAKE_GENERATOR_torch$cuda$memory$$$function__2__free_mutex$$$genobj__1__free_mutex();

    goto function_return_exit;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.


   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct torch$cuda$memory$$$function__2__free_mutex$$$genobj__1__free_mutex_locals {
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *torch$cuda$memory$$$function__2__free_mutex$$$genobj__1__free_mutex_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$cuda$memory$$$function__2__free_mutex$$$genobj__1__free_mutex_locals *generator_heap = (struct torch$cuda$memory$$$function__2__free_mutex$$$genobj__1__free_mutex_locals *)generator->m_heap_storage;

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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_3de5bf49ba6ec714f973f5c7ad86ee26, module_torch$cuda$memory, 0);
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 17;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 17;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_expression_value_2 = Py_None;
        Py_INCREF(tmp_expression_value_2);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_2;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 19;

            goto try_except_handler_1;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    goto try_end_1;
    // Exception handler code:
    try_except_handler_1:;
    generator_heap->exception_keeper_type_1 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_1 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_1 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_1 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Preserve existing published exception id 1.
    generator_heap->exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (generator_heap->exception_keeper_tb_1 == NULL) {
        generator_heap->exception_keeper_tb_1 = MAKE_TRACEBACK(generator->m_frame, generator_heap->exception_keeper_lineno_1);
    } else if (generator_heap->exception_keeper_lineno_1 != 0) {
        generator_heap->exception_keeper_tb_1 = ADD_TRACEBACK(generator_heap->exception_keeper_tb_1, generator->m_frame, generator_heap->exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&generator_heap->exception_keeper_type_1, &generator_heap->exception_keeper_value_1, &generator_heap->exception_keeper_tb_1);
    // Tried code:
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 21;

            goto try_except_handler_2;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[2]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 21;

            goto try_except_handler_2;
        }
        generator->m_frame->m_frame.f_lineno = 21;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[5]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 21;

            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    generator_heap->tmp_result = RERAISE_EXCEPTION(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
    if (unlikely(generator_heap->tmp_result == false)) {
        generator_heap->exception_lineno = 18;
    }

    if (generator_heap->exception_tb && generator_heap->exception_tb->tb_frame == &generator->m_frame->m_frame) generator->m_frame->m_frame.f_lineno = generator_heap->exception_tb->tb_lineno;

    goto try_except_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Exception handler code:
    try_except_handler_2:;
    generator_heap->exception_keeper_type_2 = generator_heap->exception_type;
    generator_heap->exception_keeper_value_2 = generator_heap->exception_value;
    generator_heap->exception_keeper_tb_2 = generator_heap->exception_tb;
    generator_heap->exception_keeper_lineno_2 = generator_heap->exception_lineno;
    generator_heap->exception_type = NULL;
    generator_heap->exception_value = NULL;
    generator_heap->exception_tb = NULL;
    generator_heap->exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&generator_heap->exception_preserved_1);

    // Re-raise.
    generator_heap->exception_type = generator_heap->exception_keeper_type_2;
    generator_heap->exception_value = generator_heap->exception_keeper_value_2;
    generator_heap->exception_tb = generator_heap->exception_keeper_tb_2;
    generator_heap->exception_lineno = generator_heap->exception_keeper_lineno_2;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_1:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[2]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        generator->m_frame->m_frame.f_lineno = 21;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[5]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
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
            generator_heap->type_description_1
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

static PyObject *MAKE_GENERATOR_torch$cuda$memory$$$function__2__free_mutex$$$genobj__1__free_mutex() {
    return Nuitka_Generator_New(
        torch$cuda$memory$$$function__2__free_mutex$$$genobj__1__free_mutex_context,
        module_torch$cuda$memory,
        mod_consts[6],
#if PYTHON_VERSION >= 0x350
        NULL,
#endif
        codeobj_3de5bf49ba6ec714f973f5c7ad86ee26,
        NULL,
        0,
        sizeof(struct torch$cuda$memory$$$function__2__free_mutex$$$genobj__1__free_mutex_locals)
    );
}


static PyObject *impl_torch$cuda$memory$$$function__3_caching_allocator_alloc(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_size = python_pars[0];
    PyObject *par_device = python_pars[1];
    PyObject *par_stream = python_pars[2];
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_1cba36943a38ffc870dffcc1825332ae;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_1cba36943a38ffc870dffcc1825332ae = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1cba36943a38ffc870dffcc1825332ae)) {
        Py_XDECREF(cache_frame_1cba36943a38ffc870dffcc1825332ae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1cba36943a38ffc870dffcc1825332ae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1cba36943a38ffc870dffcc1825332ae = MAKE_FUNCTION_FRAME(codeobj_1cba36943a38ffc870dffcc1825332ae, module_torch$cuda$memory, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1cba36943a38ffc870dffcc1825332ae->m_type_description == NULL);
    frame_1cba36943a38ffc870dffcc1825332ae = cache_frame_1cba36943a38ffc870dffcc1825332ae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1cba36943a38ffc870dffcc1825332ae);
    assert(Py_REFCNT(frame_1cba36943a38ffc870dffcc1825332ae) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_device);
        tmp_cmp_expr_left_1 = par_device;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_1cba36943a38ffc870dffcc1825332ae->m_frame.f_lineno = 44;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[8]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_device;
            assert(old != NULL);
            par_device = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_args_element_value_1 = par_device;
        frame_1cba36943a38ffc870dffcc1825332ae->m_frame.f_lineno = 45;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_device;
            assert(old != NULL);
            par_device = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_stream);
        tmp_cmp_expr_left_2 = par_stream;
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
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_args_element_value_2 = par_device;
        frame_1cba36943a38ffc870dffcc1825332ae->m_frame.f_lineno = 47;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[10], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 47;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_stream;
            assert(old != NULL);
            par_stream = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_stream);
        tmp_isinstance_inst_1 = par_stream;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[7]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[12]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_stream);
        tmp_expression_value_6 = par_stream;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[13]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_stream;
            assert(old != NULL);
            par_stream = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(par_stream);
        tmp_isinstance_inst_2 = par_stream;
        tmp_isinstance_cls_2 = (PyObject *)&PyLong_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[14];
        frame_1cba36943a38ffc870dffcc1825332ae->m_frame.f_lineno = 51;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 51;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[7]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[15]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        if (par_device == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[15]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 54;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_args_element_value_3 = par_device;
        frame_1cba36943a38ffc870dffcc1825332ae->m_frame.f_lineno = 54;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_9 = tmp_with_1__source;
        tmp_called_value_3 = LOOKUP_SPECIAL(tmp_expression_value_9, mod_consts[16]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_1cba36943a38ffc870dffcc1825332ae->m_frame.f_lineno = 54;
        tmp_assign_source_6 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_10 = tmp_with_1__source;
        tmp_assign_source_7 = LOOKUP_SPECIAL(tmp_expression_value_10, mod_consts[17]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_assign_source_8;
        tmp_assign_source_8 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_8;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[2]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        CHECK_OBJECT(par_size);
        tmp_args_element_value_4 = par_size;
        CHECK_OBJECT(par_stream);
        tmp_args_element_value_5 = par_stream;
        frame_1cba36943a38ffc870dffcc1825332ae->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_return_value = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_3,
                mod_consts[18],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        goto try_return_handler_3;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_1 == NULL) {
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_1cba36943a38ffc870dffcc1825332ae, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_1cba36943a38ffc870dffcc1825332ae, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        tmp_cmp_expr_left_3 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_3 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        tmp_args_element_value_6 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_7 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_8 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_1cba36943a38ffc870dffcc1825332ae->m_frame.f_lineno = 55;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_operand_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 55;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1cba36943a38ffc870dffcc1825332ae->m_frame) frame_1cba36943a38ffc870dffcc1825332ae->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_5;
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 54;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_1cba36943a38ffc870dffcc1825332ae->m_frame) frame_1cba36943a38ffc870dffcc1825332ae->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_5;
    branch_end_5:;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    try_end_1:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_2;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_2:;
    goto try_end_3;
    // Return handler code:
    try_return_handler_3:;
    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_1cba36943a38ffc870dffcc1825332ae->m_frame.f_lineno = 55;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[19]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_7:;
    goto try_return_handler_2;
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

    {
        bool tmp_condition_result_8;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_with_1__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_8 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_1cba36943a38ffc870dffcc1825332ae->m_frame.f_lineno = 55;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[19]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 55;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_8:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_9;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_1__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_9 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_1cba36943a38ffc870dffcc1825332ae->m_frame.f_lineno = 55;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[19]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_9:;
    goto try_end_4;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    goto frame_return_exit_1;
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

    Py_XDECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    Py_XDECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1cba36943a38ffc870dffcc1825332ae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1cba36943a38ffc870dffcc1825332ae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1cba36943a38ffc870dffcc1825332ae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1cba36943a38ffc870dffcc1825332ae,
        type_description_1,
        par_size,
        par_device,
        par_stream
    );


    // Release cached frame if used for exception.
    if (frame_1cba36943a38ffc870dffcc1825332ae == cache_frame_1cba36943a38ffc870dffcc1825332ae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1cba36943a38ffc870dffcc1825332ae);
        cache_frame_1cba36943a38ffc870dffcc1825332ae = NULL;
    }

    assertFrameObject(frame_1cba36943a38ffc870dffcc1825332ae);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_device);
    par_device = NULL;
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    par_stream = NULL;
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

    Py_XDECREF(par_device);
    par_device = NULL;
    Py_XDECREF(par_stream);
    par_stream = NULL;
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
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$memory$$$function__4_caching_allocator_delete(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_mem_ptr = python_pars[0];
    struct Nuitka_FrameObject *frame_afa86c711dea91c9e1d6410fce267ef8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_afa86c711dea91c9e1d6410fce267ef8 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_afa86c711dea91c9e1d6410fce267ef8)) {
        Py_XDECREF(cache_frame_afa86c711dea91c9e1d6410fce267ef8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_afa86c711dea91c9e1d6410fce267ef8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_afa86c711dea91c9e1d6410fce267ef8 = MAKE_FUNCTION_FRAME(codeobj_afa86c711dea91c9e1d6410fce267ef8, module_torch$cuda$memory, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_afa86c711dea91c9e1d6410fce267ef8->m_type_description == NULL);
    frame_afa86c711dea91c9e1d6410fce267ef8 = cache_frame_afa86c711dea91c9e1d6410fce267ef8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_afa86c711dea91c9e1d6410fce267ef8);
    assert(Py_REFCNT(frame_afa86c711dea91c9e1d6410fce267ef8) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_mem_ptr);
        tmp_args_element_value_1 = par_mem_ptr;
        frame_afa86c711dea91c9e1d6410fce267ef8->m_frame.f_lineno = 72;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[21], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_afa86c711dea91c9e1d6410fce267ef8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_afa86c711dea91c9e1d6410fce267ef8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_afa86c711dea91c9e1d6410fce267ef8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_afa86c711dea91c9e1d6410fce267ef8,
        type_description_1,
        par_mem_ptr
    );


    // Release cached frame if used for exception.
    if (frame_afa86c711dea91c9e1d6410fce267ef8 == cache_frame_afa86c711dea91c9e1d6410fce267ef8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_afa86c711dea91c9e1d6410fce267ef8);
        cache_frame_afa86c711dea91c9e1d6410fce267ef8 = NULL;
    }

    assertFrameObject(frame_afa86c711dea91c9e1d6410fce267ef8);

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
    CHECK_OBJECT(par_mem_ptr);
    Py_DECREF(par_mem_ptr);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_mem_ptr);
    Py_DECREF(par_mem_ptr);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$memory$$$function__5_set_per_process_memory_fraction(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fraction = python_pars[0];
    PyObject *par_device = python_pars[1];
    struct Nuitka_FrameObject *frame_fbaf025b306f1b103c3db18d6086095b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_fbaf025b306f1b103c3db18d6086095b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_fbaf025b306f1b103c3db18d6086095b)) {
        Py_XDECREF(cache_frame_fbaf025b306f1b103c3db18d6086095b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fbaf025b306f1b103c3db18d6086095b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fbaf025b306f1b103c3db18d6086095b = MAKE_FUNCTION_FRAME(codeobj_fbaf025b306f1b103c3db18d6086095b, module_torch$cuda$memory, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fbaf025b306f1b103c3db18d6086095b->m_type_description == NULL);
    frame_fbaf025b306f1b103c3db18d6086095b = cache_frame_fbaf025b306f1b103c3db18d6086095b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fbaf025b306f1b103c3db18d6086095b);
    assert(Py_REFCNT(frame_fbaf025b306f1b103c3db18d6086095b) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fbaf025b306f1b103c3db18d6086095b->m_frame.f_lineno = 89;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_device);
        tmp_cmp_expr_left_1 = par_device;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fbaf025b306f1b103c3db18d6086095b->m_frame.f_lineno = 91;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[8]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_device;
            assert(old != NULL);
            par_device = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_args_element_value_1 = par_device;
        frame_fbaf025b306f1b103c3db18d6086095b->m_frame.f_lineno = 92;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_device;
            assert(old != NULL);
            par_device = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_fraction);
        tmp_isinstance_inst_1 = par_fraction;
        tmp_isinstance_cls_1 = (PyObject *)&PyFloat_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[23];
        frame_fbaf025b306f1b103c3db18d6086095b->m_frame.f_lineno = 94;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 94;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_fraction);
        tmp_cmp_expr_left_2 = par_fraction;
        tmp_cmp_expr_right_2 = mod_consts[24];
        tmp_or_left_value_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_or_left_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_fraction);
        tmp_cmp_expr_left_3 = par_fraction;
        tmp_cmp_expr_right_3 = mod_consts[25];
        tmp_or_right_value_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_or_right_value_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_3 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[26];
        CHECK_OBJECT(par_fraction);
        tmp_kw_call_arg_value_1_1 = par_fraction;
        frame_fbaf025b306f1b103c3db18d6086095b->m_frame.f_lineno = 96;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            tmp_make_exception_arg_2 = CALL_FUNCTION_WITH_ARGS2(unicode_builtin_format, call_args);
        }

        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_fbaf025b306f1b103c3db18d6086095b->m_frame.f_lineno = 96;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 96;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[2]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fraction);
        tmp_args_element_value_2 = par_fraction;
        CHECK_OBJECT(par_device);
        tmp_args_element_value_3 = par_device;
        frame_fbaf025b306f1b103c3db18d6086095b->m_frame.f_lineno = 99;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[27],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fbaf025b306f1b103c3db18d6086095b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fbaf025b306f1b103c3db18d6086095b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fbaf025b306f1b103c3db18d6086095b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fbaf025b306f1b103c3db18d6086095b,
        type_description_1,
        par_fraction,
        par_device
    );


    // Release cached frame if used for exception.
    if (frame_fbaf025b306f1b103c3db18d6086095b == cache_frame_fbaf025b306f1b103c3db18d6086095b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fbaf025b306f1b103c3db18d6086095b);
        cache_frame_fbaf025b306f1b103c3db18d6086095b = NULL;
    }

    assertFrameObject(frame_fbaf025b306f1b103c3db18d6086095b);

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
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    par_device = NULL;
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

    Py_XDECREF(par_device);
    par_device = NULL;
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
    CHECK_OBJECT(par_fraction);
    Py_DECREF(par_fraction);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fraction);
    Py_DECREF(par_fraction);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$memory$$$function__6_empty_cache(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_62bba457d8816b9085b3adfb39724084;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_62bba457d8816b9085b3adfb39724084 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_62bba457d8816b9085b3adfb39724084)) {
        Py_XDECREF(cache_frame_62bba457d8816b9085b3adfb39724084);

#if _DEBUG_REFCOUNTS
        if (cache_frame_62bba457d8816b9085b3adfb39724084 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_62bba457d8816b9085b3adfb39724084 = MAKE_FUNCTION_FRAME(codeobj_62bba457d8816b9085b3adfb39724084, module_torch$cuda$memory, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_62bba457d8816b9085b3adfb39724084->m_type_description == NULL);
    frame_62bba457d8816b9085b3adfb39724084 = cache_frame_62bba457d8816b9085b3adfb39724084;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_62bba457d8816b9085b3adfb39724084);
    assert(Py_REFCNT(frame_62bba457d8816b9085b3adfb39724084) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        int tmp_truth_name_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        frame_62bba457d8816b9085b3adfb39724084->m_frame.f_lineno = 113;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;

            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_call_result_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_call_result_1);

            exception_lineno = 113;

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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        frame_62bba457d8816b9085b3adfb39724084->m_frame.f_lineno = 114;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[30]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;

            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_62bba457d8816b9085b3adfb39724084, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_62bba457d8816b9085b3adfb39724084->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_62bba457d8816b9085b3adfb39724084, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_62bba457d8816b9085b3adfb39724084,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_62bba457d8816b9085b3adfb39724084 == cache_frame_62bba457d8816b9085b3adfb39724084) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_62bba457d8816b9085b3adfb39724084);
        cache_frame_62bba457d8816b9085b3adfb39724084 = NULL;
    }

    assertFrameObject(frame_62bba457d8816b9085b3adfb39724084);

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


static PyObject *impl_torch$cuda$memory$$$function__7_memory_stats(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    struct Nuitka_CellObject *var_result = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *var__recurse_add_to_result = Nuitka_Cell_Empty();
    PyObject *var_stats = NULL;
    struct Nuitka_FrameObject *frame_32bd772a9bba891bedefa36ee3f2efea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_32bd772a9bba891bedefa36ee3f2efea = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(Nuitka_Cell_GET(var_result) == NULL);
        PyCell_SET(var_result, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = var__recurse_add_to_result;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = var_result;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_2 = MAKE_FUNCTION_torch$cuda$memory$$$function__7_memory_stats$$$function__1__recurse_add_to_result(tmp_closure_1);

        assert(Nuitka_Cell_GET(var__recurse_add_to_result) == NULL);
        PyCell_SET(var__recurse_add_to_result, tmp_assign_source_2);

    }
    // Tried code:
    if (isFrameUnusable(cache_frame_32bd772a9bba891bedefa36ee3f2efea)) {
        Py_XDECREF(cache_frame_32bd772a9bba891bedefa36ee3f2efea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_32bd772a9bba891bedefa36ee3f2efea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_32bd772a9bba891bedefa36ee3f2efea = MAKE_FUNCTION_FRAME(codeobj_32bd772a9bba891bedefa36ee3f2efea, module_torch$cuda$memory, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_32bd772a9bba891bedefa36ee3f2efea->m_type_description == NULL);
    frame_32bd772a9bba891bedefa36ee3f2efea = cache_frame_32bd772a9bba891bedefa36ee3f2efea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_32bd772a9bba891bedefa36ee3f2efea);
    assert(Py_REFCNT(frame_32bd772a9bba891bedefa36ee3f2efea) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_kw_call_value_0_1 = par_device;
        frame_32bd772a9bba891bedefa36ee3f2efea->m_frame.f_lineno = 198;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[35]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        assert(var_stats == NULL);
        var_stats = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(Nuitka_Cell_GET(var__recurse_add_to_result));
        tmp_called_value_2 = Nuitka_Cell_GET(var__recurse_add_to_result);
        tmp_args_element_value_1 = mod_consts[36];
        CHECK_OBJECT(var_stats);
        tmp_args_element_value_2 = var_stats;
        frame_32bd772a9bba891bedefa36ee3f2efea->m_frame.f_lineno = 199;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(Nuitka_Cell_GET(var_result));
        tmp_expression_value_1 = Nuitka_Cell_GET(var_result);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        assert(!(tmp_called_value_3 == NULL));
        frame_32bd772a9bba891bedefa36ee3f2efea->m_frame.f_lineno = 200;
        tmp_call_result_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "occo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(var_result));
        tmp_args_element_value_3 = Nuitka_Cell_GET(var_result);
        frame_32bd772a9bba891bedefa36ee3f2efea->m_frame.f_lineno = 202;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[39], tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "occo";
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
        exception_tb = MAKE_TRACEBACK(frame_32bd772a9bba891bedefa36ee3f2efea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_32bd772a9bba891bedefa36ee3f2efea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_32bd772a9bba891bedefa36ee3f2efea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_32bd772a9bba891bedefa36ee3f2efea,
        type_description_1,
        par_device,
        var_result,
        var__recurse_add_to_result,
        var_stats
    );


    // Release cached frame if used for exception.
    if (frame_32bd772a9bba891bedefa36ee3f2efea == cache_frame_32bd772a9bba891bedefa36ee3f2efea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_32bd772a9bba891bedefa36ee3f2efea);
        cache_frame_32bd772a9bba891bedefa36ee3f2efea = NULL;
    }

    assertFrameObject(frame_32bd772a9bba891bedefa36ee3f2efea);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    CHECK_OBJECT(var__recurse_add_to_result);
    Py_DECREF(var__recurse_add_to_result);
    var__recurse_add_to_result = NULL;
    CHECK_OBJECT(var_stats);
    Py_DECREF(var_stats);
    var_stats = NULL;
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

    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
    CHECK_OBJECT(var__recurse_add_to_result);
    Py_DECREF(var__recurse_add_to_result);
    var__recurse_add_to_result = NULL;
    Py_XDECREF(var_stats);
    var_stats = NULL;
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
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$memory$$$function__7_memory_stats$$$function__1__recurse_add_to_result(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_prefix = python_pars[0];
    PyObject *par_obj = python_pars[1];
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_332eb2ea07be8e7aaa8af99f1b8ca89b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_iterator_attempt;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_332eb2ea07be8e7aaa8af99f1b8ca89b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_332eb2ea07be8e7aaa8af99f1b8ca89b)) {
        Py_XDECREF(cache_frame_332eb2ea07be8e7aaa8af99f1b8ca89b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_332eb2ea07be8e7aaa8af99f1b8ca89b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_332eb2ea07be8e7aaa8af99f1b8ca89b = MAKE_FUNCTION_FRAME(codeobj_332eb2ea07be8e7aaa8af99f1b8ca89b, module_torch$cuda$memory, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_332eb2ea07be8e7aaa8af99f1b8ca89b->m_type_description == NULL);
    frame_332eb2ea07be8e7aaa8af99f1b8ca89b = cache_frame_332eb2ea07be8e7aaa8af99f1b8ca89b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_332eb2ea07be8e7aaa8af99f1b8ca89b);
    assert(Py_REFCNT(frame_332eb2ea07be8e7aaa8af99f1b8ca89b) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_obj);
        tmp_isinstance_inst_1 = par_obj;
        tmp_isinstance_cls_1 = (PyObject *)&PyDict_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooocc";
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_prefix);
        tmp_len_arg_1 = par_prefix;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_2 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(par_prefix);
        tmp_iadd_expr_left_1 = par_prefix;
        tmp_iadd_expr_right_1 = mod_consts[41];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = tmp_iadd_expr_left_1;
        par_prefix = tmp_assign_source_1;

    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_obj);
        tmp_expression_value_1 = par_obj;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[42]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        frame_332eb2ea07be8e7aaa8af99f1b8ca89b->m_frame.f_lineno = 193;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooocc";
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
                type_description_1 = "oooocc";
                exception_lineno = 193;
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


            exception_lineno = 193;
            type_description_1 = "oooocc";
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


            type_description_1 = "oooocc";
            exception_lineno = 193;
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


            type_description_1 = "oooocc";
            exception_lineno = 193;
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

                    type_description_1 = "oooocc";
                    exception_lineno = 193;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooocc";
            exception_lineno = 193;
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
            PyObject *old = var_k;
            var_k = tmp_assign_source_7;
            Py_INCREF(var_k);
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
            PyObject *old = var_v;
            var_v = tmp_assign_source_8;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_args_element_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[32]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 194;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }

        tmp_called_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        if (par_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 194;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }

        tmp_add_expr_left_1 = par_prefix;
        CHECK_OBJECT(var_k);
        tmp_add_expr_right_1 = var_k;
        tmp_args_element_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_v);
        tmp_args_element_value_2 = var_v;
        frame_332eb2ea07be8e7aaa8af99f1b8ca89b->m_frame.f_lineno = 194;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooocc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 193;
        type_description_1 = "oooocc";
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
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_tuple_element_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[45]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 196;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[46]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_prefix);
        tmp_tuple_element_1 = par_prefix;
        tmp_args_element_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_obj);
        tmp_tuple_element_1 = par_obj;
        PyTuple_SET_ITEM0(tmp_args_element_value_3, 1, tmp_tuple_element_1);
        frame_332eb2ea07be8e7aaa8af99f1b8ca89b->m_frame.f_lineno = 196;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooocc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_332eb2ea07be8e7aaa8af99f1b8ca89b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_332eb2ea07be8e7aaa8af99f1b8ca89b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_332eb2ea07be8e7aaa8af99f1b8ca89b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_332eb2ea07be8e7aaa8af99f1b8ca89b,
        type_description_1,
        par_prefix,
        par_obj,
        var_k,
        var_v,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_332eb2ea07be8e7aaa8af99f1b8ca89b == cache_frame_332eb2ea07be8e7aaa8af99f1b8ca89b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_332eb2ea07be8e7aaa8af99f1b8ca89b);
        cache_frame_332eb2ea07be8e7aaa8af99f1b8ca89b = NULL;
    }

    assertFrameObject(frame_332eb2ea07be8e7aaa8af99f1b8ca89b);

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
    Py_XDECREF(par_prefix);
    par_prefix = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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

    Py_XDECREF(par_prefix);
    par_prefix = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_obj);
    Py_DECREF(par_obj);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$memory$$$function__8_memory_stats_as_nested_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    struct Nuitka_FrameObject *frame_6d364416215ad06fd3a561569ec45a2d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6d364416215ad06fd3a561569ec45a2d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6d364416215ad06fd3a561569ec45a2d)) {
        Py_XDECREF(cache_frame_6d364416215ad06fd3a561569ec45a2d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6d364416215ad06fd3a561569ec45a2d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6d364416215ad06fd3a561569ec45a2d = MAKE_FUNCTION_FRAME(codeobj_6d364416215ad06fd3a561569ec45a2d, module_torch$cuda$memory, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6d364416215ad06fd3a561569ec45a2d->m_type_description == NULL);
    frame_6d364416215ad06fd3a561569ec45a2d = cache_frame_6d364416215ad06fd3a561569ec45a2d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6d364416215ad06fd3a561569ec45a2d);
    assert(Py_REFCNT(frame_6d364416215ad06fd3a561569ec45a2d) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_6d364416215ad06fd3a561569ec45a2d->m_frame.f_lineno = 207;
        tmp_operand_value_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;
            type_description_1 = "o";
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
    tmp_return_value = MAKE_DICT_EMPTY();
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_tuple_element_1 = par_device;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[47]);
        frame_6d364416215ad06fd3a561569ec45a2d->m_frame.f_lineno = 209;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_device;
            assert(old != NULL);
            par_device = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_args_element_value_1 = par_device;
        frame_6d364416215ad06fd3a561569ec45a2d->m_frame.f_lineno = 210;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[48], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
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
        exception_tb = MAKE_TRACEBACK(frame_6d364416215ad06fd3a561569ec45a2d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6d364416215ad06fd3a561569ec45a2d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6d364416215ad06fd3a561569ec45a2d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6d364416215ad06fd3a561569ec45a2d,
        type_description_1,
        par_device
    );


    // Release cached frame if used for exception.
    if (frame_6d364416215ad06fd3a561569ec45a2d == cache_frame_6d364416215ad06fd3a561569ec45a2d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6d364416215ad06fd3a561569ec45a2d);
        cache_frame_6d364416215ad06fd3a561569ec45a2d = NULL;
    }

    assertFrameObject(frame_6d364416215ad06fd3a561569ec45a2d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_device);
    par_device = NULL;
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

    Py_XDECREF(par_device);
    par_device = NULL;
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


static PyObject *impl_torch$cuda$memory$$$function__9_reset_accumulated_memory_stats(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    struct Nuitka_FrameObject *frame_e82c378766e4d00f9edec2de99143278;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_e82c378766e4d00f9edec2de99143278 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e82c378766e4d00f9edec2de99143278)) {
        Py_XDECREF(cache_frame_e82c378766e4d00f9edec2de99143278);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e82c378766e4d00f9edec2de99143278 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e82c378766e4d00f9edec2de99143278 = MAKE_FUNCTION_FRAME(codeobj_e82c378766e4d00f9edec2de99143278, module_torch$cuda$memory, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e82c378766e4d00f9edec2de99143278->m_type_description == NULL);
    frame_e82c378766e4d00f9edec2de99143278 = cache_frame_e82c378766e4d00f9edec2de99143278;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e82c378766e4d00f9edec2de99143278);
    assert(Py_REFCNT(frame_e82c378766e4d00f9edec2de99143278) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_tuple_element_1 = par_device;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[47]);
        frame_e82c378766e4d00f9edec2de99143278->m_frame.f_lineno = 229;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_device;
            assert(old != NULL);
            par_device = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_args_element_value_1 = par_device;
        frame_e82c378766e4d00f9edec2de99143278->m_frame.f_lineno = 230;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[50], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
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
        exception_tb = MAKE_TRACEBACK(frame_e82c378766e4d00f9edec2de99143278, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e82c378766e4d00f9edec2de99143278->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e82c378766e4d00f9edec2de99143278, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e82c378766e4d00f9edec2de99143278,
        type_description_1,
        par_device
    );


    // Release cached frame if used for exception.
    if (frame_e82c378766e4d00f9edec2de99143278 == cache_frame_e82c378766e4d00f9edec2de99143278) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e82c378766e4d00f9edec2de99143278);
        cache_frame_e82c378766e4d00f9edec2de99143278 = NULL;
    }

    assertFrameObject(frame_e82c378766e4d00f9edec2de99143278);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    par_device = NULL;
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

    Py_XDECREF(par_device);
    par_device = NULL;
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


static PyObject *impl_torch$cuda$memory$$$function__10_reset_peak_memory_stats(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    struct Nuitka_FrameObject *frame_0385088e5dda6a58b54d4ebdcf74f085;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0385088e5dda6a58b54d4ebdcf74f085 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0385088e5dda6a58b54d4ebdcf74f085)) {
        Py_XDECREF(cache_frame_0385088e5dda6a58b54d4ebdcf74f085);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0385088e5dda6a58b54d4ebdcf74f085 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0385088e5dda6a58b54d4ebdcf74f085 = MAKE_FUNCTION_FRAME(codeobj_0385088e5dda6a58b54d4ebdcf74f085, module_torch$cuda$memory, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0385088e5dda6a58b54d4ebdcf74f085->m_type_description == NULL);
    frame_0385088e5dda6a58b54d4ebdcf74f085 = cache_frame_0385088e5dda6a58b54d4ebdcf74f085;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0385088e5dda6a58b54d4ebdcf74f085);
    assert(Py_REFCNT(frame_0385088e5dda6a58b54d4ebdcf74f085) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_tuple_element_1 = par_device;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[47]);
        frame_0385088e5dda6a58b54d4ebdcf74f085->m_frame.f_lineno = 248;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_device;
            assert(old != NULL);
            par_device = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_args_element_value_1 = par_device;
        frame_0385088e5dda6a58b54d4ebdcf74f085->m_frame.f_lineno = 249;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[52], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
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
        exception_tb = MAKE_TRACEBACK(frame_0385088e5dda6a58b54d4ebdcf74f085, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0385088e5dda6a58b54d4ebdcf74f085->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0385088e5dda6a58b54d4ebdcf74f085, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0385088e5dda6a58b54d4ebdcf74f085,
        type_description_1,
        par_device
    );


    // Release cached frame if used for exception.
    if (frame_0385088e5dda6a58b54d4ebdcf74f085 == cache_frame_0385088e5dda6a58b54d4ebdcf74f085) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0385088e5dda6a58b54d4ebdcf74f085);
        cache_frame_0385088e5dda6a58b54d4ebdcf74f085 = NULL;
    }

    assertFrameObject(frame_0385088e5dda6a58b54d4ebdcf74f085);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    par_device = NULL;
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

    Py_XDECREF(par_device);
    par_device = NULL;
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


static PyObject *impl_torch$cuda$memory$$$function__11_reset_max_memory_allocated(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    struct Nuitka_FrameObject *frame_a0b75cb3e1ab971511b779ef580c2098;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a0b75cb3e1ab971511b779ef580c2098 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a0b75cb3e1ab971511b779ef580c2098)) {
        Py_XDECREF(cache_frame_a0b75cb3e1ab971511b779ef580c2098);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a0b75cb3e1ab971511b779ef580c2098 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a0b75cb3e1ab971511b779ef580c2098 = MAKE_FUNCTION_FRAME(codeobj_a0b75cb3e1ab971511b779ef580c2098, module_torch$cuda$memory, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a0b75cb3e1ab971511b779ef580c2098->m_type_description == NULL);
    frame_a0b75cb3e1ab971511b779ef580c2098 = cache_frame_a0b75cb3e1ab971511b779ef580c2098;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a0b75cb3e1ab971511b779ef580c2098);
    assert(Py_REFCNT(frame_a0b75cb3e1ab971511b779ef580c2098) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[56];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 274;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_a0b75cb3e1ab971511b779ef580c2098->m_frame.f_lineno = 271;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_kw_call_value_0_1 = par_device;
        frame_a0b75cb3e1ab971511b779ef580c2098->m_frame.f_lineno = 275;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[35]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
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
        exception_tb = MAKE_TRACEBACK(frame_a0b75cb3e1ab971511b779ef580c2098, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a0b75cb3e1ab971511b779ef580c2098->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a0b75cb3e1ab971511b779ef580c2098, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a0b75cb3e1ab971511b779ef580c2098,
        type_description_1,
        par_device
    );


    // Release cached frame if used for exception.
    if (frame_a0b75cb3e1ab971511b779ef580c2098 == cache_frame_a0b75cb3e1ab971511b779ef580c2098) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a0b75cb3e1ab971511b779ef580c2098);
        cache_frame_a0b75cb3e1ab971511b779ef580c2098 = NULL;
    }

    assertFrameObject(frame_a0b75cb3e1ab971511b779ef580c2098);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$memory$$$function__12_reset_max_memory_cached(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    struct Nuitka_FrameObject *frame_5ffebc824dde1b53f1d1bc65538959d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5ffebc824dde1b53f1d1bc65538959d2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5ffebc824dde1b53f1d1bc65538959d2)) {
        Py_XDECREF(cache_frame_5ffebc824dde1b53f1d1bc65538959d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5ffebc824dde1b53f1d1bc65538959d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5ffebc824dde1b53f1d1bc65538959d2 = MAKE_FUNCTION_FRAME(codeobj_5ffebc824dde1b53f1d1bc65538959d2, module_torch$cuda$memory, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5ffebc824dde1b53f1d1bc65538959d2->m_type_description == NULL);
    frame_5ffebc824dde1b53f1d1bc65538959d2 = cache_frame_5ffebc824dde1b53f1d1bc65538959d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5ffebc824dde1b53f1d1bc65538959d2);
    assert(Py_REFCNT(frame_5ffebc824dde1b53f1d1bc65538959d2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[60];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 300;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5ffebc824dde1b53f1d1bc65538959d2->m_frame.f_lineno = 297;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[58]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[58]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_kw_call_value_0_1 = par_device;
        frame_5ffebc824dde1b53f1d1bc65538959d2->m_frame.f_lineno = 301;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[35]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
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
        exception_tb = MAKE_TRACEBACK(frame_5ffebc824dde1b53f1d1bc65538959d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5ffebc824dde1b53f1d1bc65538959d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5ffebc824dde1b53f1d1bc65538959d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5ffebc824dde1b53f1d1bc65538959d2,
        type_description_1,
        par_device
    );


    // Release cached frame if used for exception.
    if (frame_5ffebc824dde1b53f1d1bc65538959d2 == cache_frame_5ffebc824dde1b53f1d1bc65538959d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5ffebc824dde1b53f1d1bc65538959d2);
        cache_frame_5ffebc824dde1b53f1d1bc65538959d2 = NULL;
    }

    assertFrameObject(frame_5ffebc824dde1b53f1d1bc65538959d2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$memory$$$function__13_memory_allocated(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    struct Nuitka_FrameObject *frame_96d6c1663afd5c7a5d3b27726e72b943;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_96d6c1663afd5c7a5d3b27726e72b943 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_96d6c1663afd5c7a5d3b27726e72b943)) {
        Py_XDECREF(cache_frame_96d6c1663afd5c7a5d3b27726e72b943);

#if _DEBUG_REFCOUNTS
        if (cache_frame_96d6c1663afd5c7a5d3b27726e72b943 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_96d6c1663afd5c7a5d3b27726e72b943 = MAKE_FUNCTION_FRAME(codeobj_96d6c1663afd5c7a5d3b27726e72b943, module_torch$cuda$memory, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_96d6c1663afd5c7a5d3b27726e72b943->m_type_description == NULL);
    frame_96d6c1663afd5c7a5d3b27726e72b943 = cache_frame_96d6c1663afd5c7a5d3b27726e72b943;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_96d6c1663afd5c7a5d3b27726e72b943);
    assert(Py_REFCNT(frame_96d6c1663afd5c7a5d3b27726e72b943) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_kw_call_value_0_1 = par_device;
        frame_96d6c1663afd5c7a5d3b27726e72b943->m_frame.f_lineno = 319;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[35]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_96d6c1663afd5c7a5d3b27726e72b943->m_frame.f_lineno = 319;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[64]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
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
        exception_tb = MAKE_TRACEBACK(frame_96d6c1663afd5c7a5d3b27726e72b943, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_96d6c1663afd5c7a5d3b27726e72b943->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_96d6c1663afd5c7a5d3b27726e72b943, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_96d6c1663afd5c7a5d3b27726e72b943,
        type_description_1,
        par_device
    );


    // Release cached frame if used for exception.
    if (frame_96d6c1663afd5c7a5d3b27726e72b943 == cache_frame_96d6c1663afd5c7a5d3b27726e72b943) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_96d6c1663afd5c7a5d3b27726e72b943);
        cache_frame_96d6c1663afd5c7a5d3b27726e72b943 = NULL;
    }

    assertFrameObject(frame_96d6c1663afd5c7a5d3b27726e72b943);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$memory$$$function__14_max_memory_allocated(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    struct Nuitka_FrameObject *frame_51fda82fd106e8adeb18c10d8d14ae84;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_51fda82fd106e8adeb18c10d8d14ae84 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_51fda82fd106e8adeb18c10d8d14ae84)) {
        Py_XDECREF(cache_frame_51fda82fd106e8adeb18c10d8d14ae84);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51fda82fd106e8adeb18c10d8d14ae84 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51fda82fd106e8adeb18c10d8d14ae84 = MAKE_FUNCTION_FRAME(codeobj_51fda82fd106e8adeb18c10d8d14ae84, module_torch$cuda$memory, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_51fda82fd106e8adeb18c10d8d14ae84->m_type_description == NULL);
    frame_51fda82fd106e8adeb18c10d8d14ae84 = cache_frame_51fda82fd106e8adeb18c10d8d14ae84;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_51fda82fd106e8adeb18c10d8d14ae84);
    assert(Py_REFCNT(frame_51fda82fd106e8adeb18c10d8d14ae84) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_kw_call_value_0_1 = par_device;
        frame_51fda82fd106e8adeb18c10d8d14ae84->m_frame.f_lineno = 341;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[35]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_51fda82fd106e8adeb18c10d8d14ae84->m_frame.f_lineno = 341;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[66]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 341;
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
        exception_tb = MAKE_TRACEBACK(frame_51fda82fd106e8adeb18c10d8d14ae84, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51fda82fd106e8adeb18c10d8d14ae84->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51fda82fd106e8adeb18c10d8d14ae84, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51fda82fd106e8adeb18c10d8d14ae84,
        type_description_1,
        par_device
    );


    // Release cached frame if used for exception.
    if (frame_51fda82fd106e8adeb18c10d8d14ae84 == cache_frame_51fda82fd106e8adeb18c10d8d14ae84) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_51fda82fd106e8adeb18c10d8d14ae84);
        cache_frame_51fda82fd106e8adeb18c10d8d14ae84 = NULL;
    }

    assertFrameObject(frame_51fda82fd106e8adeb18c10d8d14ae84);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$memory$$$function__15_memory_reserved(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    struct Nuitka_FrameObject *frame_0d57d043c6cbee785af58faf4f30c737;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0d57d043c6cbee785af58faf4f30c737 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0d57d043c6cbee785af58faf4f30c737)) {
        Py_XDECREF(cache_frame_0d57d043c6cbee785af58faf4f30c737);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0d57d043c6cbee785af58faf4f30c737 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0d57d043c6cbee785af58faf4f30c737 = MAKE_FUNCTION_FRAME(codeobj_0d57d043c6cbee785af58faf4f30c737, module_torch$cuda$memory, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0d57d043c6cbee785af58faf4f30c737->m_type_description == NULL);
    frame_0d57d043c6cbee785af58faf4f30c737 = cache_frame_0d57d043c6cbee785af58faf4f30c737;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0d57d043c6cbee785af58faf4f30c737);
    assert(Py_REFCNT(frame_0d57d043c6cbee785af58faf4f30c737) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_kw_call_value_0_1 = par_device;
        frame_0d57d043c6cbee785af58faf4f30c737->m_frame.f_lineno = 357;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[35]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_0d57d043c6cbee785af58faf4f30c737->m_frame.f_lineno = 357;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[68]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
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
        exception_tb = MAKE_TRACEBACK(frame_0d57d043c6cbee785af58faf4f30c737, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0d57d043c6cbee785af58faf4f30c737->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0d57d043c6cbee785af58faf4f30c737, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0d57d043c6cbee785af58faf4f30c737,
        type_description_1,
        par_device
    );


    // Release cached frame if used for exception.
    if (frame_0d57d043c6cbee785af58faf4f30c737 == cache_frame_0d57d043c6cbee785af58faf4f30c737) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0d57d043c6cbee785af58faf4f30c737);
        cache_frame_0d57d043c6cbee785af58faf4f30c737 = NULL;
    }

    assertFrameObject(frame_0d57d043c6cbee785af58faf4f30c737);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$memory$$$function__16_max_memory_reserved(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    struct Nuitka_FrameObject *frame_7ea7d2779fdd83b7ae99f0766785b1c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7ea7d2779fdd83b7ae99f0766785b1c6 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7ea7d2779fdd83b7ae99f0766785b1c6)) {
        Py_XDECREF(cache_frame_7ea7d2779fdd83b7ae99f0766785b1c6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ea7d2779fdd83b7ae99f0766785b1c6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ea7d2779fdd83b7ae99f0766785b1c6 = MAKE_FUNCTION_FRAME(codeobj_7ea7d2779fdd83b7ae99f0766785b1c6, module_torch$cuda$memory, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ea7d2779fdd83b7ae99f0766785b1c6->m_type_description == NULL);
    frame_7ea7d2779fdd83b7ae99f0766785b1c6 = cache_frame_7ea7d2779fdd83b7ae99f0766785b1c6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7ea7d2779fdd83b7ae99f0766785b1c6);
    assert(Py_REFCNT(frame_7ea7d2779fdd83b7ae99f0766785b1c6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_kw_call_value_0_1 = par_device;
        frame_7ea7d2779fdd83b7ae99f0766785b1c6->m_frame.f_lineno = 379;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_expression_value_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[35]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_7ea7d2779fdd83b7ae99f0766785b1c6->m_frame.f_lineno = 379;
        tmp_return_value = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_1, mod_consts[70]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
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
        exception_tb = MAKE_TRACEBACK(frame_7ea7d2779fdd83b7ae99f0766785b1c6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ea7d2779fdd83b7ae99f0766785b1c6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ea7d2779fdd83b7ae99f0766785b1c6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ea7d2779fdd83b7ae99f0766785b1c6,
        type_description_1,
        par_device
    );


    // Release cached frame if used for exception.
    if (frame_7ea7d2779fdd83b7ae99f0766785b1c6 == cache_frame_7ea7d2779fdd83b7ae99f0766785b1c6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ea7d2779fdd83b7ae99f0766785b1c6);
        cache_frame_7ea7d2779fdd83b7ae99f0766785b1c6 = NULL;
    }

    assertFrameObject(frame_7ea7d2779fdd83b7ae99f0766785b1c6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$memory$$$function__17_memory_cached(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    struct Nuitka_FrameObject *frame_4359ab8c95ba5e3b81f8d66c1c768aa2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4359ab8c95ba5e3b81f8d66c1c768aa2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4359ab8c95ba5e3b81f8d66c1c768aa2)) {
        Py_XDECREF(cache_frame_4359ab8c95ba5e3b81f8d66c1c768aa2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4359ab8c95ba5e3b81f8d66c1c768aa2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4359ab8c95ba5e3b81f8d66c1c768aa2 = MAKE_FUNCTION_FRAME(codeobj_4359ab8c95ba5e3b81f8d66c1c768aa2, module_torch$cuda$memory, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4359ab8c95ba5e3b81f8d66c1c768aa2->m_type_description == NULL);
    frame_4359ab8c95ba5e3b81f8d66c1c768aa2 = cache_frame_4359ab8c95ba5e3b81f8d66c1c768aa2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4359ab8c95ba5e3b81f8d66c1c768aa2);
    assert(Py_REFCNT(frame_4359ab8c95ba5e3b81f8d66c1c768aa2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[72];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 386;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_4359ab8c95ba5e3b81f8d66c1c768aa2->m_frame.f_lineno = 384;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_kw_call_value_0_1 = par_device;
        frame_4359ab8c95ba5e3b81f8d66c1c768aa2->m_frame.f_lineno = 387;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[35]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 387;
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
        exception_tb = MAKE_TRACEBACK(frame_4359ab8c95ba5e3b81f8d66c1c768aa2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4359ab8c95ba5e3b81f8d66c1c768aa2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4359ab8c95ba5e3b81f8d66c1c768aa2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4359ab8c95ba5e3b81f8d66c1c768aa2,
        type_description_1,
        par_device
    );


    // Release cached frame if used for exception.
    if (frame_4359ab8c95ba5e3b81f8d66c1c768aa2 == cache_frame_4359ab8c95ba5e3b81f8d66c1c768aa2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4359ab8c95ba5e3b81f8d66c1c768aa2);
        cache_frame_4359ab8c95ba5e3b81f8d66c1c768aa2 = NULL;
    }

    assertFrameObject(frame_4359ab8c95ba5e3b81f8d66c1c768aa2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$memory$$$function__18_max_memory_cached(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    struct Nuitka_FrameObject *frame_9374f11d4fb219bead56c61def889899;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9374f11d4fb219bead56c61def889899 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9374f11d4fb219bead56c61def889899)) {
        Py_XDECREF(cache_frame_9374f11d4fb219bead56c61def889899);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9374f11d4fb219bead56c61def889899 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9374f11d4fb219bead56c61def889899 = MAKE_FUNCTION_FRAME(codeobj_9374f11d4fb219bead56c61def889899, module_torch$cuda$memory, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9374f11d4fb219bead56c61def889899->m_type_description == NULL);
    frame_9374f11d4fb219bead56c61def889899 = cache_frame_9374f11d4fb219bead56c61def889899;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9374f11d4fb219bead56c61def889899);
    assert(Py_REFCNT(frame_9374f11d4fb219bead56c61def889899) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[54]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[54]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = mod_consts[75];
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[57]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[57]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 394;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9374f11d4fb219bead56c61def889899->m_frame.f_lineno = 392;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 392;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[76]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[76]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_kw_call_value_0_1 = par_device;
        frame_9374f11d4fb219bead56c61def889899->m_frame.f_lineno = 395;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[35]);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
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
        exception_tb = MAKE_TRACEBACK(frame_9374f11d4fb219bead56c61def889899, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9374f11d4fb219bead56c61def889899->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9374f11d4fb219bead56c61def889899, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9374f11d4fb219bead56c61def889899,
        type_description_1,
        par_device
    );


    // Release cached frame if used for exception.
    if (frame_9374f11d4fb219bead56c61def889899 == cache_frame_9374f11d4fb219bead56c61def889899) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9374f11d4fb219bead56c61def889899);
        cache_frame_9374f11d4fb219bead56c61def889899 = NULL;
    }

    assertFrameObject(frame_9374f11d4fb219bead56c61def889899);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$memory$$$function__19_memory_snapshot(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_9926cd8d58436d5697cf9c752aa6c258;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9926cd8d58436d5697cf9c752aa6c258 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9926cd8d58436d5697cf9c752aa6c258)) {
        Py_XDECREF(cache_frame_9926cd8d58436d5697cf9c752aa6c258);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9926cd8d58436d5697cf9c752aa6c258 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9926cd8d58436d5697cf9c752aa6c258 = MAKE_FUNCTION_FRAME(codeobj_9926cd8d58436d5697cf9c752aa6c258, module_torch$cuda$memory, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9926cd8d58436d5697cf9c752aa6c258->m_type_description == NULL);
    frame_9926cd8d58436d5697cf9c752aa6c258 = cache_frame_9926cd8d58436d5697cf9c752aa6c258;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9926cd8d58436d5697cf9c752aa6c258);
    assert(Py_REFCNT(frame_9926cd8d58436d5697cf9c752aa6c258) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;

            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;

            goto frame_exception_exit_1;
        }
        frame_9926cd8d58436d5697cf9c752aa6c258->m_frame.f_lineno = 408;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[78]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;

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
        exception_tb = MAKE_TRACEBACK(frame_9926cd8d58436d5697cf9c752aa6c258, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9926cd8d58436d5697cf9c752aa6c258->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9926cd8d58436d5697cf9c752aa6c258, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9926cd8d58436d5697cf9c752aa6c258,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_9926cd8d58436d5697cf9c752aa6c258 == cache_frame_9926cd8d58436d5697cf9c752aa6c258) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9926cd8d58436d5697cf9c752aa6c258);
        cache_frame_9926cd8d58436d5697cf9c752aa6c258 = NULL;
    }

    assertFrameObject(frame_9926cd8d58436d5697cf9c752aa6c258);

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


static PyObject *impl_torch$cuda$memory$$$function__20_memory_summary(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    PyObject *par_abbreviated = python_pars[1];
    PyObject *var_stats = NULL;
    PyObject *var__format_size = NULL;
    PyObject *var__format_count = NULL;
    PyObject *var_metrics_to_display = NULL;
    PyObject *var_lines = NULL;
    PyObject *var_metric_key = NULL;
    PyObject *var_metric_name = NULL;
    PyObject *var_formatter = NULL;
    PyObject *var_submetrics = NULL;
    PyObject *var_current_prefval = NULL;
    PyObject *var_peak_prefval = NULL;
    PyObject *var_allocated_prefval = NULL;
    PyObject *var_freed_prefval = NULL;
    PyObject *var_submetric_key = NULL;
    PyObject *var_submetric_name = NULL;
    PyObject *var_prefix = NULL;
    PyObject *var_current = NULL;
    PyObject *var_peak = NULL;
    PyObject *var_allocated = NULL;
    PyObject *var_freed = NULL;
    PyObject *var_fmt_dict = NULL;
    PyObject *var_k = NULL;
    PyObject *var_v = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__element_4 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    struct Nuitka_FrameObject *frame_495e4b88070b38cd85d2db03484dc528;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_495e4b88070b38cd85d2db03484dc528 = NULL;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_495e4b88070b38cd85d2db03484dc528)) {
        Py_XDECREF(cache_frame_495e4b88070b38cd85d2db03484dc528);

#if _DEBUG_REFCOUNTS
        if (cache_frame_495e4b88070b38cd85d2db03484dc528 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_495e4b88070b38cd85d2db03484dc528 = MAKE_FUNCTION_FRAME(codeobj_495e4b88070b38cd85d2db03484dc528, module_torch$cuda$memory, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_495e4b88070b38cd85d2db03484dc528->m_type_description == NULL);
    frame_495e4b88070b38cd85d2db03484dc528 = cache_frame_495e4b88070b38cd85d2db03484dc528;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_495e4b88070b38cd85d2db03484dc528);
    assert(Py_REFCNT(frame_495e4b88070b38cd85d2db03484dc528) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_tuple_element_1 = par_device;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[47]);
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 429;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 429;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_device;
            assert(old != NULL);
            par_device = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_kw_call_value_0_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[62]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[62]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_kw_call_value_0_1 = par_device;
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 430;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[35]);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 430;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_stats == NULL);
        var_stats = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;


        tmp_assign_source_3 = MAKE_FUNCTION_torch$cuda$memory$$$function__20_memory_summary$$$function__1__format_size();

        assert(var__format_size == NULL);
        var__format_size = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;


        tmp_assign_source_4 = MAKE_FUNCTION_torch$cuda$memory$$$function__20_memory_summary$$$function__2__format_count();

        assert(var__format_count == NULL);
        var__format_count = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[84];
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = mod_consts[85];
        PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var__format_size);
        tmp_tuple_element_2 = var__format_size;
        PyTuple_SET_ITEM0(tmp_list_element_1, 2, tmp_tuple_element_2);
        tmp_assign_source_5 = MAKE_LIST_EMPTY(8);
        {
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_tuple_element_9;
            PyList_SET_ITEM(tmp_assign_source_5, 0, tmp_list_element_1);
            tmp_tuple_element_3 = mod_consts[86];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[87];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var__format_size);
            tmp_tuple_element_3 = var__format_size;
            PyTuple_SET_ITEM0(tmp_list_element_1, 2, tmp_tuple_element_3);
            PyList_SET_ITEM(tmp_assign_source_5, 1, tmp_list_element_1);
            tmp_tuple_element_4 = mod_consts[88];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[89];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_4);
            CHECK_OBJECT(var__format_size);
            tmp_tuple_element_4 = var__format_size;
            PyTuple_SET_ITEM0(tmp_list_element_1, 2, tmp_tuple_element_4);
            PyList_SET_ITEM(tmp_assign_source_5, 2, tmp_list_element_1);
            tmp_tuple_element_5 = mod_consts[90];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[91];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_5);
            CHECK_OBJECT(var__format_size);
            tmp_tuple_element_5 = var__format_size;
            PyTuple_SET_ITEM0(tmp_list_element_1, 2, tmp_tuple_element_5);
            PyList_SET_ITEM(tmp_assign_source_5, 3, tmp_list_element_1);
            tmp_tuple_element_6 = mod_consts[92];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[93];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_6);
            CHECK_OBJECT(var__format_count);
            tmp_tuple_element_6 = var__format_count;
            PyTuple_SET_ITEM0(tmp_list_element_1, 2, tmp_tuple_element_6);
            PyList_SET_ITEM(tmp_assign_source_5, 4, tmp_list_element_1);
            tmp_tuple_element_7 = mod_consts[94];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_7);
            tmp_tuple_element_7 = mod_consts[95];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_7);
            CHECK_OBJECT(var__format_count);
            tmp_tuple_element_7 = var__format_count;
            PyTuple_SET_ITEM0(tmp_list_element_1, 2, tmp_tuple_element_7);
            PyList_SET_ITEM(tmp_assign_source_5, 5, tmp_list_element_1);
            tmp_tuple_element_8 = mod_consts[96];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[97];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_8);
            CHECK_OBJECT(var__format_count);
            tmp_tuple_element_8 = var__format_count;
            PyTuple_SET_ITEM0(tmp_list_element_1, 2, tmp_tuple_element_8);
            PyList_SET_ITEM(tmp_assign_source_5, 6, tmp_list_element_1);
            tmp_tuple_element_9 = mod_consts[98];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_9);
            tmp_tuple_element_9 = mod_consts[99];
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_9);
            CHECK_OBJECT(var__format_count);
            tmp_tuple_element_9 = var__format_count;
            PyTuple_SET_ITEM0(tmp_list_element_1, 2, tmp_tuple_element_9);
            PyList_SET_ITEM(tmp_assign_source_5, 7, tmp_list_element_1);
        }
        assert(var_metrics_to_display == NULL);
        var_metrics_to_display = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_LIST_EMPTY(0);
        assert(var_lines == NULL);
        var_lines = tmp_assign_source_6;
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        CHECK_OBJECT(var_lines);
        tmp_list_arg_value_1 = var_lines;
        tmp_item_value_1 = mod_consts[100];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        CHECK_OBJECT(var_lines);
        tmp_list_arg_value_2 = var_lines;
        tmp_item_value_2 = mod_consts[101];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_list_arg_value_3;
        PyObject *tmp_item_value_3;
        CHECK_OBJECT(var_lines);
        tmp_list_arg_value_3 = var_lines;
        tmp_item_value_3 = mod_consts[102];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_3, tmp_item_value_3);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_list_arg_value_4;
        PyObject *tmp_item_value_4;
        CHECK_OBJECT(var_lines);
        tmp_list_arg_value_4 = var_lines;
        tmp_item_value_4 = mod_consts[103];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_4, tmp_item_value_4);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_list_arg_value_5;
        PyObject *tmp_item_value_5;
        CHECK_OBJECT(var_lines);
        tmp_list_arg_value_5 = var_lines;
        tmp_item_value_5 = mod_consts[100];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_5, tmp_item_value_5);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_list_arg_value_6;
        PyObject *tmp_item_value_6;
        CHECK_OBJECT(var_lines);
        tmp_list_arg_value_6 = var_lines;
        tmp_item_value_6 = mod_consts[104];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_6, tmp_item_value_6);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_metrics_to_display);
        tmp_iter_arg_1 = var_metrics_to_display;
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 473;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_9 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 473;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_1, 0, 3);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 473;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_11 = UNPACK_NEXT(tmp_unpack_2, 1, 3);
        if (tmp_assign_source_11 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 473;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_11;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_12 = UNPACK_NEXT(tmp_unpack_3, 2, 3);
        if (tmp_assign_source_12 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 473;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_3;
            tmp_tuple_unpack_1__element_3 = tmp_assign_source_12;
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

                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 473;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[105];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 473;
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
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;
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
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_metric_key;
            var_metric_key = tmp_assign_source_13;
            Py_INCREF(var_metric_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_metric_name;
            var_metric_name = tmp_assign_source_14;
            Py_INCREF(var_metric_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_15;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_15 = tmp_tuple_unpack_1__element_3;
        {
            PyObject *old = var_formatter;
            var_formatter = tmp_assign_source_15;
            Py_INCREF(var_formatter);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        if (var_lines == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = var_lines;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[46]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 474;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[107]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 474;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_list_element_2;
        PyObject *tmp_tuple_element_10;
        tmp_tuple_element_10 = mod_consts[108];
        tmp_list_element_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_2, 0, tmp_tuple_element_10);
        CHECK_OBJECT(var_metric_name);
        tmp_tuple_element_10 = var_metric_name;
        PyTuple_SET_ITEM0(tmp_list_element_2, 1, tmp_tuple_element_10);
        tmp_assign_source_16 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_16, 0, tmp_list_element_2);
        {
            PyObject *old = var_submetrics;
            var_submetrics = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_abbreviated);
        tmp_operand_value_1 = par_abbreviated;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 476;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_list_arg_value_7;
        PyObject *tmp_item_value_7;
        CHECK_OBJECT(var_submetrics);
        tmp_list_arg_value_7 = var_submetrics;
        tmp_item_value_7 = mod_consts[109];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_7, tmp_item_value_7);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_list_arg_value_8;
        PyObject *tmp_item_value_8;
        CHECK_OBJECT(var_submetrics);
        tmp_list_arg_value_8 = var_submetrics;
        tmp_item_value_8 = mod_consts[110];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_8, tmp_item_value_8);
        assert(!(tmp_result == false));
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_iter_arg_3;
        tmp_iter_arg_3 = mod_consts[111];
        tmp_assign_source_17 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_3);
        assert(!(tmp_assign_source_17 == NULL));
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_18 = UNPACK_NEXT(tmp_unpack_4, 0, 4);
        if (tmp_assign_source_18 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 480;
            goto try_except_handler_6;
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
        tmp_assign_source_19 = UNPACK_NEXT(tmp_unpack_5, 1, 4);
        if (tmp_assign_source_19 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 480;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_20 = UNPACK_NEXT(tmp_unpack_6, 2, 4);
        if (tmp_assign_source_20 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 480;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_20;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_21 = UNPACK_NEXT(tmp_unpack_7, 3, 4);
        if (tmp_assign_source_21 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 480;
            goto try_except_handler_6;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_4;
            tmp_tuple_unpack_2__element_4 = tmp_assign_source_21;
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

                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 480;
                    goto try_except_handler_6;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[112];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 480;
            goto try_except_handler_6;
        }
    }
    goto try_end_3;
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

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_5;
    // End of try:
    try_end_3:;
    goto try_end_4;
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

    goto try_except_handler_2;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_22;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_22 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_current_prefval;
            var_current_prefval = tmp_assign_source_22;
            Py_INCREF(var_current_prefval);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_23;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_23 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_peak_prefval;
            var_peak_prefval = tmp_assign_source_23;
            Py_INCREF(var_peak_prefval);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_24 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_allocated_prefval;
            var_allocated_prefval = tmp_assign_source_24;
            Py_INCREF(var_allocated_prefval);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_4);
        tmp_assign_source_25 = tmp_tuple_unpack_2__element_4;
        {
            PyObject *old = var_freed_prefval;
            var_freed_prefval = tmp_assign_source_25;
            Py_INCREF(var_freed_prefval);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_4);
    tmp_tuple_unpack_2__element_4 = NULL;

    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_iter_arg_4;
        if (var_submetrics == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 482;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_iter_arg_4 = var_submetrics;
        tmp_assign_source_26 = MAKE_ITERATOR(tmp_iter_arg_4);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_26;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_27;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_2 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_27 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 482;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_27;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_iter_arg_5;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_5 = tmp_for_loop_2__iter_value;
        tmp_assign_source_28 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_5);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 482;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_8;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_28;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_29 = UNPACK_NEXT(tmp_unpack_8, 0, 2);
        if (tmp_assign_source_29 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 482;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_29;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_30 = UNPACK_NEXT(tmp_unpack_9, 1, 2);
        if (tmp_assign_source_30 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 482;
            goto try_except_handler_9;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_30;
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

                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 482;
                    goto try_except_handler_9;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 482;
            goto try_except_handler_9;
        }
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_8;
    // End of try:
    try_end_5:;
    goto try_end_6;
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

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto try_except_handler_7;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_31;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_31 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_submetric_key;
            var_submetric_key = tmp_assign_source_31;
            Py_INCREF(var_submetric_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_32;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_32 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_submetric_name;
            var_submetric_name = tmp_assign_source_32;
            Py_INCREF(var_submetric_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        if (var_metric_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 483;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_add_expr_left_3 = var_metric_key;
        tmp_add_expr_right_3 = mod_consts[41];
        tmp_add_expr_left_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_3, tmp_add_expr_right_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_submetric_key);
        tmp_add_expr_right_2 = var_submetric_key;
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_add_expr_right_1 = mod_consts[41];
        tmp_assign_source_33 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 483;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_prefix;
            var_prefix = tmp_assign_source_33;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        CHECK_OBJECT(var_stats);
        tmp_expression_value_2 = var_stats;
        CHECK_OBJECT(var_prefix);
        tmp_add_expr_left_4 = var_prefix;
        tmp_add_expr_right_4 = mod_consts[115];
        tmp_subscript_value_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 485;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_current;
            var_current = tmp_assign_source_34;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        CHECK_OBJECT(var_stats);
        tmp_expression_value_3 = var_stats;
        CHECK_OBJECT(var_prefix);
        tmp_add_expr_left_5 = var_prefix;
        tmp_add_expr_right_5 = mod_consts[116];
        tmp_subscript_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 486;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_peak;
            var_peak = tmp_assign_source_35;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        CHECK_OBJECT(var_stats);
        tmp_expression_value_4 = var_stats;
        CHECK_OBJECT(var_prefix);
        tmp_add_expr_left_6 = var_prefix;
        tmp_add_expr_right_6 = mod_consts[117];
        tmp_subscript_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 487;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_allocated;
            var_allocated = tmp_assign_source_36;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_add_expr_left_7;
        PyObject *tmp_add_expr_right_7;
        CHECK_OBJECT(var_stats);
        tmp_expression_value_5 = var_stats;
        CHECK_OBJECT(var_prefix);
        tmp_add_expr_left_7 = var_prefix;
        tmp_add_expr_right_7 = mod_consts[118];
        tmp_subscript_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_7, tmp_add_expr_right_7);
        if (tmp_subscript_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_assign_source_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_4);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 488;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        {
            PyObject *old = var_freed;
            var_freed = tmp_assign_source_37;
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_current_prefval == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 490;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_cmp_expr_left_1 = var_current_prefval;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_38;
        CHECK_OBJECT(var_current);
        tmp_assign_source_38 = var_current;
        {
            PyObject *old = var_current_prefval;
            var_current_prefval = tmp_assign_source_38;
            Py_INCREF(var_current_prefval);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_39;
        CHECK_OBJECT(var_peak);
        tmp_assign_source_39 = var_peak;
        {
            PyObject *old = var_peak_prefval;
            var_peak_prefval = tmp_assign_source_39;
            Py_INCREF(var_peak_prefval);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_40;
        CHECK_OBJECT(var_allocated);
        tmp_assign_source_40 = var_allocated;
        {
            PyObject *old = var_allocated_prefval;
            var_allocated_prefval = tmp_assign_source_40;
            Py_INCREF(var_allocated_prefval);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_41;
        CHECK_OBJECT(var_freed);
        tmp_assign_source_41 = var_freed;
        {
            PyObject *old = var_freed_prefval;
            var_freed_prefval = tmp_assign_source_41;
            Py_INCREF(var_freed_prefval);
            Py_XDECREF(old);
        }

    }
    branch_no_2:;
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_called_value_8;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        if (var_lines == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_expression_value_6 = var_lines;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[46]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[120];
        CHECK_OBJECT(var_submetric_name);
        tmp_kw_call_arg_value_1_1 = var_submetric_name;
        if (var_formatter == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 498;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_value_5 = var_formatter;
        if (var_current == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[115]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 498;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_2 = var_current;
        if (var_current_prefval == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 498;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_3 = var_current_prefval;
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 498;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_kw_call_arg_value_2_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_kw_call_arg_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 498;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_formatter == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 499;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_value_6 = var_formatter;
        if (var_peak == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 499;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_4 = var_peak;
        if (var_peak_prefval == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[122]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 499;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_5 = var_peak_prefval;
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 499;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_kw_call_arg_value_3_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_6, call_args);
        }

        if (tmp_kw_call_arg_value_3_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_2_1);

            exception_lineno = 499;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_formatter == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 500;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_value_7 = var_formatter;
        if (var_allocated == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 500;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_6 = var_allocated;
        if (var_allocated_prefval == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[123]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 500;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_7 = var_allocated_prefval;
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 500;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_kw_call_arg_value_4_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_7, call_args);
        }

        if (tmp_kw_call_arg_value_4_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);

            exception_lineno = 500;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        if (var_formatter == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[121]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 501;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_called_value_8 = var_formatter;
        if (var_freed == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 501;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_8 = var_freed;
        if (var_freed_prefval == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[124]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 501;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }

        tmp_args_element_value_9 = var_freed_prefval;
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 501;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_kw_call_arg_value_5_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        if (tmp_kw_call_arg_value_5_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_arg_value_2_1);
            Py_DECREF(tmp_kw_call_arg_value_3_1);
            Py_DECREF(tmp_kw_call_arg_value_4_1);

            exception_lineno = 501;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 496;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS6(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_1);
        Py_DECREF(tmp_kw_call_arg_value_3_1);
        Py_DECREF(tmp_kw_call_arg_value_4_1);
        Py_DECREF(tmp_kw_call_arg_value_5_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 496;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 496;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 482;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_7;
    }
    goto loop_start_2;
    loop_end_2:;
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

    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto try_except_handler_2;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 473;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
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
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_8:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_list_element_3;
        PyObject *tmp_tuple_element_11;
        tmp_tuple_element_11 = mod_consts[125];
        tmp_list_element_3 = MAKE_TUPLE_EMPTY(3);
        PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_11);
        tmp_tuple_element_11 = mod_consts[126];
        PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_11);
        CHECK_OBJECT(var__format_count);
        tmp_tuple_element_11 = var__format_count;
        PyTuple_SET_ITEM0(tmp_list_element_3, 2, tmp_tuple_element_11);
        tmp_assign_source_42 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_tuple_element_12;
            PyList_SET_ITEM(tmp_assign_source_42, 0, tmp_list_element_3);
            tmp_tuple_element_12 = mod_consts[127];
            tmp_list_element_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_list_element_3, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[128];
            PyTuple_SET_ITEM0(tmp_list_element_3, 1, tmp_tuple_element_12);
            CHECK_OBJECT(var__format_count);
            tmp_tuple_element_12 = var__format_count;
            PyTuple_SET_ITEM0(tmp_list_element_3, 2, tmp_tuple_element_12);
            PyList_SET_ITEM(tmp_assign_source_42, 1, tmp_list_element_3);
        }
        {
            PyObject *old = var_metrics_to_display;
            assert(old != NULL);
            var_metrics_to_display = tmp_assign_source_42;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_iter_arg_6;
        CHECK_OBJECT(var_metrics_to_display);
        tmp_iter_arg_6 = var_metrics_to_display;
        tmp_assign_source_43 = MAKE_ITERATOR(tmp_iter_arg_6);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_43;
    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_44;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_3 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_44 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_44 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 509;
                goto try_except_handler_10;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_44;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_45;
        PyObject *tmp_iter_arg_7;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_iter_arg_7 = tmp_for_loop_3__iter_value;
        tmp_assign_source_45 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_7);
        if (tmp_assign_source_45 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_11;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_46 = UNPACK_NEXT(tmp_unpack_10, 0, 3);
        if (tmp_assign_source_46 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 509;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_47 = UNPACK_NEXT(tmp_unpack_11, 1, 3);
        if (tmp_assign_source_47 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 509;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_47;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_48 = UNPACK_NEXT(tmp_unpack_12, 2, 3);
        if (tmp_assign_source_48 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 509;
            goto try_except_handler_12;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_3;
            tmp_tuple_unpack_4__element_3 = tmp_assign_source_48;
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

                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 509;
                    goto try_except_handler_12;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[105];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 509;
            goto try_except_handler_12;
        }
    }
    goto try_end_9;
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
    try_end_9:;
    goto try_end_10;
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
    Py_XDECREF(tmp_tuple_unpack_4__element_3);
    tmp_tuple_unpack_4__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto try_except_handler_10;
    // End of try:
    try_end_10:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_49;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_49 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_metric_key;
            var_metric_key = tmp_assign_source_49;
            Py_INCREF(var_metric_key);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_50 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_metric_name;
            var_metric_name = tmp_assign_source_50;
            Py_INCREF(var_metric_name);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
        tmp_assign_source_51 = tmp_tuple_unpack_4__element_3;
        {
            PyObject *old = var_formatter;
            var_formatter = tmp_assign_source_51;
            Py_INCREF(var_formatter);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_3);
    tmp_tuple_unpack_4__element_3 = NULL;

    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_3;
        if (var_lines == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 510;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_expression_value_7 = var_lines;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[46]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 510;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_9, mod_consts[107]);

        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 510;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_add_expr_left_8;
        PyObject *tmp_add_expr_right_8;
        CHECK_OBJECT(var_metric_key);
        tmp_add_expr_left_8 = var_metric_key;
        tmp_add_expr_right_8 = mod_consts[41];
        tmp_assign_source_52 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_8, tmp_add_expr_right_8);
        if (tmp_assign_source_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_prefix;
            var_prefix = tmp_assign_source_52;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_add_expr_left_9;
        PyObject *tmp_add_expr_right_9;
        CHECK_OBJECT(var_stats);
        tmp_expression_value_8 = var_stats;
        CHECK_OBJECT(var_prefix);
        tmp_add_expr_left_9 = var_prefix;
        tmp_add_expr_right_9 = mod_consts[115];
        tmp_subscript_value_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_9, tmp_add_expr_right_9);
        if (tmp_subscript_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_53 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_current;
            var_current = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_54;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_add_expr_left_10;
        PyObject *tmp_add_expr_right_10;
        CHECK_OBJECT(var_stats);
        tmp_expression_value_9 = var_stats;
        CHECK_OBJECT(var_prefix);
        tmp_add_expr_left_10 = var_prefix;
        tmp_add_expr_right_10 = mod_consts[116];
        tmp_subscript_value_6 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_10, tmp_add_expr_right_10);
        if (tmp_subscript_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_54 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_6);
        Py_DECREF(tmp_subscript_value_6);
        if (tmp_assign_source_54 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_peak;
            var_peak = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_add_expr_left_11;
        PyObject *tmp_add_expr_right_11;
        CHECK_OBJECT(var_stats);
        tmp_expression_value_10 = var_stats;
        CHECK_OBJECT(var_prefix);
        tmp_add_expr_left_11 = var_prefix;
        tmp_add_expr_right_11 = mod_consts[117];
        tmp_subscript_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_11, tmp_add_expr_right_11);
        if (tmp_subscript_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_55 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_7);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 516;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_allocated;
            var_allocated = tmp_assign_source_55;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_add_expr_left_12;
        PyObject *tmp_add_expr_right_12;
        CHECK_OBJECT(var_stats);
        tmp_expression_value_11 = var_stats;
        CHECK_OBJECT(var_prefix);
        tmp_add_expr_left_12 = var_prefix;
        tmp_add_expr_right_12 = mod_consts[118];
        tmp_subscript_value_8 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_12, tmp_add_expr_right_12);
        if (tmp_subscript_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_assign_source_56 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 517;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        {
            PyObject *old = var_freed;
            var_freed = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_arg_value_1_2;
        PyObject *tmp_kw_call_arg_value_2_2;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_kw_call_arg_value_3_2;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_kw_call_arg_value_4_2;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_kw_call_arg_value_5_2;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        if (var_lines == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 519;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }

        tmp_expression_value_12 = var_lines;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[46]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        tmp_kw_call_arg_value_0_2 = mod_consts[120];
        CHECK_OBJECT(var_metric_name);
        tmp_kw_call_arg_value_1_2 = var_metric_name;
        CHECK_OBJECT(var_formatter);
        tmp_called_value_11 = var_formatter;
        CHECK_OBJECT(var_current);
        tmp_args_element_value_11 = var_current;
        CHECK_OBJECT(var_current);
        tmp_args_element_value_12 = var_current;
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 521;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_kw_call_arg_value_2_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        if (tmp_kw_call_arg_value_2_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 521;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_formatter);
        tmp_called_value_12 = var_formatter;
        CHECK_OBJECT(var_peak);
        tmp_args_element_value_13 = var_peak;
        CHECK_OBJECT(var_peak);
        tmp_args_element_value_14 = var_peak;
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 522;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_kw_call_arg_value_3_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
        }

        if (tmp_kw_call_arg_value_3_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_2_2);

            exception_lineno = 522;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_formatter);
        tmp_called_value_13 = var_formatter;
        CHECK_OBJECT(var_allocated);
        tmp_args_element_value_15 = var_allocated;
        CHECK_OBJECT(var_allocated);
        tmp_args_element_value_16 = var_allocated;
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 523;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_kw_call_arg_value_4_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
        }

        if (tmp_kw_call_arg_value_4_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_2_2);
            Py_DECREF(tmp_kw_call_arg_value_3_2);

            exception_lineno = 523;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        CHECK_OBJECT(var_formatter);
        tmp_called_value_14 = var_formatter;
        CHECK_OBJECT(var_freed);
        tmp_args_element_value_17 = var_freed;
        CHECK_OBJECT(var_freed);
        tmp_args_element_value_18 = var_freed;
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 524;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_kw_call_arg_value_5_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_14, call_args);
        }

        if (tmp_kw_call_arg_value_5_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);
            Py_DECREF(tmp_kw_call_arg_value_2_2);
            Py_DECREF(tmp_kw_call_arg_value_3_2);
            Py_DECREF(tmp_kw_call_arg_value_4_2);

            exception_lineno = 524;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 519;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_2, tmp_kw_call_arg_value_1_2, tmp_kw_call_arg_value_2_2, tmp_kw_call_arg_value_3_2, tmp_kw_call_arg_value_4_2, tmp_kw_call_arg_value_5_2};
            tmp_args_element_value_10 = CALL_FUNCTION_WITH_ARGS6(unicode_builtin_format, call_args);
        }

        Py_DECREF(tmp_kw_call_arg_value_2_2);
        Py_DECREF(tmp_kw_call_arg_value_3_2);
        Py_DECREF(tmp_kw_call_arg_value_4_2);
        Py_DECREF(tmp_kw_call_arg_value_5_2);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 519;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 519;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_10);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 519;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_10;
        }
        Py_DECREF(tmp_call_result_4);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 509;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_10;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_10:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
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
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_call_result_5;
        if (var_lines == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 527;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = var_lines;
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[46]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 527;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_15, mod_consts[129]);

        Py_DECREF(tmp_called_value_15);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 527;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[130];
        tmp_dict_value_1 = mod_consts[36];
        tmp_assign_source_57 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_assign_source_57, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        tmp_dict_key_1 = mod_consts[15];
        CHECK_OBJECT(par_device);
        tmp_dict_value_1 = par_device;
        tmp_res = PyDict_SetItem(tmp_assign_source_57, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        assert(var_fmt_dict == NULL);
        var_fmt_dict = tmp_assign_source_57;
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_iter_arg_8;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_14;
        CHECK_OBJECT(var_stats);
        tmp_expression_value_14 = var_stats;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[42]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 530;
        tmp_iter_arg_8 = CALL_FUNCTION_NO_ARGS(tmp_called_value_16);
        Py_DECREF(tmp_called_value_16);
        if (tmp_iter_arg_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_58 = MAKE_ITERATOR(tmp_iter_arg_8);
        Py_DECREF(tmp_iter_arg_8);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_58;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_59;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_4 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_59 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_59 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooooooooooooooooooooooo";
                exception_lineno = 530;
                goto try_except_handler_13;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_59;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_iter_arg_9;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_iter_arg_9 = tmp_for_loop_4__iter_value;
        tmp_assign_source_60 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_9);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 530;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_14;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_60;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_61 = UNPACK_NEXT(tmp_unpack_13, 0, 2);
        if (tmp_assign_source_61 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 530;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_61;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_62 = UNPACK_NEXT(tmp_unpack_14, 1, 2);
        if (tmp_assign_source_62 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 530;
            goto try_except_handler_15;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_2;
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_62;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_5;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_iterator_name_5 = tmp_tuple_unpack_5__source_iter;
        // Check if iterator has left-over elements.
        CHECK_OBJECT(tmp_iterator_name_5); assert(HAS_ITERNEXT(tmp_iterator_name_5));

        tmp_iterator_attempt = (*Py_TYPE(tmp_iterator_name_5)->tp_iternext)(tmp_iterator_name_5);

        if (likely(tmp_iterator_attempt == NULL)) {
            PyObject *error = GET_ERROR_OCCURRED();

            if (error != NULL) {
                if (EXCEPTION_MATCH_BOOL_SINGLE(error, PyExc_StopIteration)) {
                    CLEAR_ERROR_OCCURRED();
                } else {
                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

                    type_description_1 = "ooooooooooooooooooooooooo";
                    exception_lineno = 530;
                    goto try_except_handler_15;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[43];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooooooo";
            exception_lineno = 530;
            goto try_except_handler_15;
        }
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_12 = exception_type;
    exception_keeper_value_12 = exception_value;
    exception_keeper_tb_12 = exception_tb;
    exception_keeper_lineno_12 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_12;
    exception_value = exception_keeper_value_12;
    exception_tb = exception_keeper_tb_12;
    exception_lineno = exception_keeper_lineno_12;

    goto try_except_handler_14;
    // End of try:
    try_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_14:;
    exception_keeper_type_13 = exception_type;
    exception_keeper_value_13 = exception_value;
    exception_keeper_tb_13 = exception_tb;
    exception_keeper_lineno_13 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_13;
    exception_value = exception_keeper_value_13;
    exception_tb = exception_keeper_tb_13;
    exception_lineno = exception_keeper_lineno_13;

    goto try_except_handler_13;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_63;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_63 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_k;
            var_k = tmp_assign_source_63;
            Py_INCREF(var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_64;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_64 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_v;
            var_v = tmp_assign_source_64;
            Py_INCREF(var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_v);
        tmp_ass_subvalue_1 = var_v;
        if (var_fmt_dict == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[131]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 531;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }

        tmp_ass_subscribed_1 = var_fmt_dict;
        CHECK_OBJECT(var_k);
        tmp_expression_value_15 = var_k;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[132]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        frame_495e4b88070b38cd85d2db03484dc528->m_frame.f_lineno = 531;
        tmp_ass_subscript_1 = CALL_FUNCTION_WITH_POSARGS2(tmp_called_value_17, mod_consts[133]);

        Py_DECREF(tmp_called_value_17);
        if (tmp_ass_subscript_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscript_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 531;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto try_except_handler_13;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 530;
        type_description_1 = "ooooooooooooooooooooooooo";
        goto try_except_handler_13;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_14;
    // Exception handler code:
    try_except_handler_13:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_14:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_add_expr_left_13;
        PyObject *tmp_add_expr_right_13;
        PyObject *tmp_add_expr_left_14;
        PyObject *tmp_add_expr_right_14;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_dircall_arg2_1;
        tmp_add_expr_left_14 = mod_consts[134];
        tmp_str_arg_value_1 = mod_consts[135];
        if (var_lines == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 532;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_1 = var_lines;
        tmp_expression_value_16 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[136]);
        Py_DECREF(tmp_expression_value_16);
        assert(!(tmp_dircall_arg1_1 == NULL));
        if (var_fmt_dict == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[131]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 532;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_1 = var_fmt_dict;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_add_expr_right_14 = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_add_expr_right_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_13 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_14, tmp_add_expr_right_14);
        Py_DECREF(tmp_add_expr_right_14);
        if (tmp_add_expr_left_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_13 = mod_consts[137];
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_13, tmp_add_expr_right_13);
        Py_DECREF(tmp_add_expr_left_13);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 532;
            type_description_1 = "ooooooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_495e4b88070b38cd85d2db03484dc528, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_495e4b88070b38cd85d2db03484dc528->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_495e4b88070b38cd85d2db03484dc528, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_495e4b88070b38cd85d2db03484dc528,
        type_description_1,
        par_device,
        par_abbreviated,
        var_stats,
        var__format_size,
        var__format_count,
        var_metrics_to_display,
        var_lines,
        var_metric_key,
        var_metric_name,
        var_formatter,
        var_submetrics,
        var_current_prefval,
        var_peak_prefval,
        var_allocated_prefval,
        var_freed_prefval,
        var_submetric_key,
        var_submetric_name,
        var_prefix,
        var_current,
        var_peak,
        var_allocated,
        var_freed,
        var_fmt_dict,
        var_k,
        var_v
    );


    // Release cached frame if used for exception.
    if (frame_495e4b88070b38cd85d2db03484dc528 == cache_frame_495e4b88070b38cd85d2db03484dc528) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_495e4b88070b38cd85d2db03484dc528);
        cache_frame_495e4b88070b38cd85d2db03484dc528 = NULL;
    }

    assertFrameObject(frame_495e4b88070b38cd85d2db03484dc528);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    par_device = NULL;
    CHECK_OBJECT(var_stats);
    Py_DECREF(var_stats);
    var_stats = NULL;
    CHECK_OBJECT(var__format_size);
    Py_DECREF(var__format_size);
    var__format_size = NULL;
    CHECK_OBJECT(var__format_count);
    Py_DECREF(var__format_count);
    var__format_count = NULL;
    CHECK_OBJECT(var_metrics_to_display);
    Py_DECREF(var_metrics_to_display);
    var_metrics_to_display = NULL;
    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_metric_key);
    var_metric_key = NULL;
    Py_XDECREF(var_metric_name);
    var_metric_name = NULL;
    Py_XDECREF(var_formatter);
    var_formatter = NULL;
    Py_XDECREF(var_submetrics);
    var_submetrics = NULL;
    Py_XDECREF(var_current_prefval);
    var_current_prefval = NULL;
    Py_XDECREF(var_peak_prefval);
    var_peak_prefval = NULL;
    Py_XDECREF(var_allocated_prefval);
    var_allocated_prefval = NULL;
    Py_XDECREF(var_freed_prefval);
    var_freed_prefval = NULL;
    Py_XDECREF(var_submetric_key);
    var_submetric_key = NULL;
    Py_XDECREF(var_submetric_name);
    var_submetric_name = NULL;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_current);
    var_current = NULL;
    Py_XDECREF(var_peak);
    var_peak = NULL;
    Py_XDECREF(var_allocated);
    var_allocated = NULL;
    Py_XDECREF(var_freed);
    var_freed = NULL;
    Py_XDECREF(var_fmt_dict);
    var_fmt_dict = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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

    Py_XDECREF(par_device);
    par_device = NULL;
    Py_XDECREF(var_stats);
    var_stats = NULL;
    Py_XDECREF(var__format_size);
    var__format_size = NULL;
    Py_XDECREF(var__format_count);
    var__format_count = NULL;
    Py_XDECREF(var_metrics_to_display);
    var_metrics_to_display = NULL;
    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_metric_key);
    var_metric_key = NULL;
    Py_XDECREF(var_metric_name);
    var_metric_name = NULL;
    Py_XDECREF(var_formatter);
    var_formatter = NULL;
    Py_XDECREF(var_submetrics);
    var_submetrics = NULL;
    Py_XDECREF(var_current_prefval);
    var_current_prefval = NULL;
    Py_XDECREF(var_peak_prefval);
    var_peak_prefval = NULL;
    Py_XDECREF(var_allocated_prefval);
    var_allocated_prefval = NULL;
    Py_XDECREF(var_freed_prefval);
    var_freed_prefval = NULL;
    Py_XDECREF(var_submetric_key);
    var_submetric_key = NULL;
    Py_XDECREF(var_submetric_name);
    var_submetric_name = NULL;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_current);
    var_current = NULL;
    Py_XDECREF(var_peak);
    var_peak = NULL;
    Py_XDECREF(var_allocated);
    var_allocated = NULL;
    Py_XDECREF(var_freed);
    var_freed = NULL;
    Py_XDECREF(var_fmt_dict);
    var_fmt_dict = NULL;
    Py_XDECREF(var_k);
    var_k = NULL;
    Py_XDECREF(var_v);
    var_v = NULL;
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
    CHECK_OBJECT(par_abbreviated);
    Py_DECREF(par_abbreviated);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_abbreviated);
    Py_DECREF(par_abbreviated);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$memory$$$function__20_memory_summary$$$function__1__format_size(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_sz = python_pars[0];
    PyObject *par_pref_sz = python_pars[1];
    PyObject *var_prefixes = NULL;
    PyObject *var_prefix = NULL;
    PyObject *var_new_prefix = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_d898b395e40aade1a5a27887bea69b20;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d898b395e40aade1a5a27887bea69b20 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST6(mod_consts[139]);
        assert(var_prefixes == NULL);
        var_prefixes = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_d898b395e40aade1a5a27887bea69b20)) {
        Py_XDECREF(cache_frame_d898b395e40aade1a5a27887bea69b20);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d898b395e40aade1a5a27887bea69b20 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d898b395e40aade1a5a27887bea69b20 = MAKE_FUNCTION_FRAME(codeobj_d898b395e40aade1a5a27887bea69b20, module_torch$cuda$memory, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d898b395e40aade1a5a27887bea69b20->m_type_description == NULL);
    frame_d898b395e40aade1a5a27887bea69b20 = cache_frame_d898b395e40aade1a5a27887bea69b20;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d898b395e40aade1a5a27887bea69b20);
    assert(Py_REFCNT(frame_d898b395e40aade1a5a27887bea69b20) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_prefixes);
        tmp_expression_value_1 = var_prefixes;
        tmp_subscript_value_1 = mod_consts[24];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 434;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prefix == NULL);
        var_prefix = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_prefixes);
        tmp_expression_value_2 = var_prefixes;
        tmp_subscript_value_2 = mod_consts[140];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 435;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_new_prefix;
            var_new_prefix = tmp_assign_source_5;
            Py_INCREF(var_new_prefix);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (par_pref_sz == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[141]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 436;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = par_pref_sz;
        tmp_cmp_expr_right_1 = mod_consts[142];
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 436;
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
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(var_new_prefix);
        tmp_assign_source_6 = var_new_prefix;
        {
            PyObject *old = var_prefix;
            var_prefix = tmp_assign_source_6;
            Py_INCREF(var_prefix);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_ifloordiv_expr_left_1;
        PyObject *tmp_ifloordiv_expr_right_1;
        if (par_sz == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 439;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_ifloordiv_expr_left_1 = par_sz;
        tmp_ifloordiv_expr_right_1 = mod_consts[144];
        tmp_result = INPLACE_OPERATION_FLOORDIV_OBJECT_LONG(&tmp_ifloordiv_expr_left_1, tmp_ifloordiv_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = tmp_ifloordiv_expr_left_1;
        par_sz = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_itruediv_expr_left_1;
        PyObject *tmp_itruediv_expr_right_1;
        if (par_pref_sz == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[141]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 440;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_itruediv_expr_left_1 = par_pref_sz;
        tmp_itruediv_expr_right_1 = mod_consts[144];
        tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_LONG(&tmp_itruediv_expr_left_1, tmp_itruediv_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = tmp_itruediv_expr_left_1;
        par_pref_sz = tmp_assign_source_8;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 435;
        type_description_1 = "ooooo";
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
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[145];
        if (par_sz == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[143]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 441;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = par_sz;
        if (var_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 441;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_2_1 = var_prefix;
        frame_d898b395e40aade1a5a27887bea69b20->m_frame.f_lineno = 441;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
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
        exception_tb = MAKE_TRACEBACK(frame_d898b395e40aade1a5a27887bea69b20, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d898b395e40aade1a5a27887bea69b20->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d898b395e40aade1a5a27887bea69b20, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d898b395e40aade1a5a27887bea69b20,
        type_description_1,
        par_sz,
        par_pref_sz,
        var_prefixes,
        var_prefix,
        var_new_prefix
    );


    // Release cached frame if used for exception.
    if (frame_d898b395e40aade1a5a27887bea69b20 == cache_frame_d898b395e40aade1a5a27887bea69b20) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d898b395e40aade1a5a27887bea69b20);
        cache_frame_d898b395e40aade1a5a27887bea69b20 = NULL;
    }

    assertFrameObject(frame_d898b395e40aade1a5a27887bea69b20);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_sz);
    par_sz = NULL;
    Py_XDECREF(par_pref_sz);
    par_pref_sz = NULL;
    CHECK_OBJECT(var_prefixes);
    Py_DECREF(var_prefixes);
    var_prefixes = NULL;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_new_prefix);
    var_new_prefix = NULL;
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

    Py_XDECREF(par_sz);
    par_sz = NULL;
    Py_XDECREF(par_pref_sz);
    par_pref_sz = NULL;
    CHECK_OBJECT(var_prefixes);
    Py_DECREF(var_prefixes);
    var_prefixes = NULL;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_new_prefix);
    var_new_prefix = NULL;
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


static PyObject *impl_torch$cuda$memory$$$function__20_memory_summary$$$function__2__format_count(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cnt = python_pars[0];
    PyObject *par_pref_cnt = python_pars[1];
    PyObject *var_prefixes = NULL;
    PyObject *var_prefix = NULL;
    PyObject *var_new_prefix = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST3(mod_consts[146],mod_consts[147],mod_consts[148]);
        assert(var_prefixes == NULL);
        var_prefixes = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a)) {
        Py_XDECREF(cache_frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a = MAKE_FUNCTION_FRAME(codeobj_9b01c6a3c156bbd1faa8b2e94e5cbb6a, module_torch$cuda$memory, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a->m_type_description == NULL);
    frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a = cache_frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a);
    assert(Py_REFCNT(frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_prefixes);
        tmp_expression_value_1 = var_prefixes;
        tmp_subscript_value_1 = mod_consts[24];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_prefix == NULL);
        var_prefix = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_prefixes);
        tmp_expression_value_2 = var_prefixes;
        tmp_subscript_value_2 = mod_consts[140];
        tmp_iter_arg_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 446;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_3;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_4 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooooo";
                exception_lineno = 446;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_5 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_new_prefix;
            var_new_prefix = tmp_assign_source_5;
            Py_INCREF(var_new_prefix);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (par_pref_cnt == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[149]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 447;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_cmp_expr_left_1 = par_pref_cnt;
        tmp_cmp_expr_right_1 = mod_consts[150];
        tmp_condition_result_1 = RICH_COMPARE_LT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 447;
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
    goto loop_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(var_new_prefix);
        tmp_assign_source_6 = var_new_prefix;
        {
            PyObject *old = var_prefix;
            var_prefix = tmp_assign_source_6;
            Py_INCREF(var_prefix);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_ifloordiv_expr_left_1;
        PyObject *tmp_ifloordiv_expr_right_1;
        if (par_cnt == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 450;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_ifloordiv_expr_left_1 = par_cnt;
        tmp_ifloordiv_expr_right_1 = mod_consts[152];
        tmp_result = INPLACE_OPERATION_FLOORDIV_OBJECT_LONG(&tmp_ifloordiv_expr_left_1, tmp_ifloordiv_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 450;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_7 = tmp_ifloordiv_expr_left_1;
        par_cnt = tmp_assign_source_7;

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_itruediv_expr_left_1;
        PyObject *tmp_itruediv_expr_right_1;
        if (par_pref_cnt == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[149]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 451;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_itruediv_expr_left_1 = par_pref_cnt;
        tmp_itruediv_expr_right_1 = mod_consts[152];
        tmp_result = INPLACE_OPERATION_TRUEDIV_OBJECT_LONG(&tmp_itruediv_expr_left_1, tmp_itruediv_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 451;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = tmp_itruediv_expr_left_1;
        par_pref_cnt = tmp_assign_source_8;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 446;
        type_description_1 = "ooooo";
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
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        tmp_kw_call_arg_value_0_1 = mod_consts[153];
        if (par_cnt == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[151]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 452;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_1_1 = par_cnt;
        if (var_prefix == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[44]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 452;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }

        tmp_kw_call_arg_value_2_1 = var_prefix;
        frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a->m_frame.f_lineno = 452;
        {
            PyObject *call_args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(unicode_builtin_format, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 452;
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
        exception_tb = MAKE_TRACEBACK(frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a,
        type_description_1,
        par_cnt,
        par_pref_cnt,
        var_prefixes,
        var_prefix,
        var_new_prefix
    );


    // Release cached frame if used for exception.
    if (frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a == cache_frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a);
        cache_frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a = NULL;
    }

    assertFrameObject(frame_9b01c6a3c156bbd1faa8b2e94e5cbb6a);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_cnt);
    par_cnt = NULL;
    Py_XDECREF(par_pref_cnt);
    par_pref_cnt = NULL;
    CHECK_OBJECT(var_prefixes);
    Py_DECREF(var_prefixes);
    var_prefixes = NULL;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_new_prefix);
    var_new_prefix = NULL;
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

    Py_XDECREF(par_cnt);
    par_cnt = NULL;
    Py_XDECREF(par_pref_cnt);
    par_pref_cnt = NULL;
    CHECK_OBJECT(var_prefixes);
    Py_DECREF(var_prefixes);
    var_prefixes = NULL;
    Py_XDECREF(var_prefix);
    var_prefix = NULL;
    Py_XDECREF(var_new_prefix);
    var_new_prefix = NULL;
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


static PyObject *impl_torch$cuda$memory$$$function__21_list_gpu_processes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    PyObject *var_pynvml = NULL;
    PyObject *var_NVMLError_DriverNotLoaded = NULL;
    PyObject *var_handle = NULL;
    PyObject *var_procs = NULL;
    PyObject *var_lines = NULL;
    PyObject *var_p = NULL;
    PyObject *var_mem = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_3001ecbc79ef1c6c3410e0943ea42aa2;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
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
    static struct Nuitka_FrameObject *cache_frame_3001ecbc79ef1c6c3410e0943ea42aa2 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3001ecbc79ef1c6c3410e0943ea42aa2)) {
        Py_XDECREF(cache_frame_3001ecbc79ef1c6c3410e0943ea42aa2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3001ecbc79ef1c6c3410e0943ea42aa2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3001ecbc79ef1c6c3410e0943ea42aa2 = MAKE_FUNCTION_FRAME(codeobj_3001ecbc79ef1c6c3410e0943ea42aa2, module_torch$cuda$memory, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3001ecbc79ef1c6c3410e0943ea42aa2->m_type_description == NULL);
    frame_3001ecbc79ef1c6c3410e0943ea42aa2 = cache_frame_3001ecbc79ef1c6c3410e0943ea42aa2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3001ecbc79ef1c6c3410e0943ea42aa2);
    assert(Py_REFCNT(frame_3001ecbc79ef1c6c3410e0943ea42aa2) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[154];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$cuda$memory;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[24];
        frame_3001ecbc79ef1c6c3410e0943ea42aa2->m_frame.f_lineno = 549;
        tmp_assign_source_1 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 549;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        assert(var_pynvml == NULL);
        var_pynvml = tmp_assign_source_1;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_3001ecbc79ef1c6c3410e0943ea42aa2, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_3001ecbc79ef1c6c3410e0943ea42aa2, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ModuleNotFoundError;
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
    tmp_return_value = mod_consts[155];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 548;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3001ecbc79ef1c6c3410e0943ea42aa2->m_frame) frame_3001ecbc79ef1c6c3410e0943ea42aa2->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
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
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[154];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$cuda$memory;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[156];
        tmp_level_value_2 = mod_consts[24];
        frame_3001ecbc79ef1c6c3410e0943ea42aa2->m_frame.f_lineno = 552;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_2 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$cuda$memory,
                mod_consts[157],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_2 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[157]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 552;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_NVMLError_DriverNotLoaded == NULL);
        var_NVMLError_DriverNotLoaded = tmp_assign_source_2;
    }
    // Tried code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_pynvml);
        tmp_called_instance_1 = var_pynvml;
        frame_3001ecbc79ef1c6c3410e0943ea42aa2->m_frame.f_lineno = 554;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[158]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 554;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        Py_DECREF(tmp_call_result_1);
    }
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

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_3001ecbc79ef1c6c3410e0943ea42aa2, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_3001ecbc79ef1c6c3410e0943ea42aa2, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        CHECK_OBJECT(var_NVMLError_DriverNotLoaded);
        tmp_cmp_expr_right_2 = var_NVMLError_DriverNotLoaded;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 555;
            type_description_1 = "oooooooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    tmp_return_value = mod_consts[159];
    Py_INCREF(tmp_return_value);
    goto try_return_handler_5;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 553;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_3001ecbc79ef1c6c3410e0943ea42aa2->m_frame) frame_3001ecbc79ef1c6c3410e0943ea42aa2->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooooo";
    goto try_except_handler_5;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_5:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto frame_return_exit_1;
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

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    // End of try:
    try_end_2:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_tuple_element_1 = par_device;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[47]);
        frame_3001ecbc79ef1c6c3410e0943ea42aa2->m_frame.f_lineno = 557;
        tmp_assign_source_3 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 557;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_device;
            assert(old != NULL);
            par_device = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_pynvml);
        tmp_called_instance_2 = var_pynvml;
        CHECK_OBJECT(par_device);
        tmp_args_element_value_1 = par_device;
        frame_3001ecbc79ef1c6c3410e0943ea42aa2->m_frame.f_lineno = 558;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[160], tmp_args_element_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_handle == NULL);
        var_handle = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var_pynvml);
        tmp_called_instance_3 = var_pynvml;
        CHECK_OBJECT(var_handle);
        tmp_args_element_value_2 = var_handle;
        frame_3001ecbc79ef1c6c3410e0943ea42aa2->m_frame.f_lineno = 559;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[161], tmp_args_element_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 559;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_procs == NULL);
        var_procs = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_LIST_EMPTY(0);
        assert(var_lines == NULL);
        var_lines = tmp_assign_source_6;
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(var_lines);
        tmp_list_arg_value_1 = var_lines;
        tmp_tuple_element_2 = mod_consts[162];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_device);
            tmp_format_value_1 = par_device;
            tmp_format_spec_1 = mod_consts[36];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 561;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_1, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_string_concat_values_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_item_value_1 = PyUnicode_Join(mod_consts[36], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_procs);
        tmp_len_arg_1 = var_procs;
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 562;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = 0;
        tmp_condition_result_3 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        CHECK_OBJECT(var_lines);
        tmp_list_arg_value_2 = var_lines;
        tmp_item_value_2 = mod_consts[163];
        tmp_result = LIST_APPEND0(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(var_procs);
        tmp_iter_arg_1 = var_procs;
        tmp_assign_source_7 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_7;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_8 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 564;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_9 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_p;
            var_p = tmp_assign_source_9;
            Py_INCREF(var_p);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(var_p);
        tmp_expression_value_1 = var_p;
        tmp_truediv_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[164]);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oooooooo";
            goto try_except_handler_6;
        }
        tmp_truediv_expr_right_1 = mod_consts[165];
        tmp_assign_source_10 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_LONG(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oooooooo";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_mem;
            var_mem = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_string_concat_values_2;
        PyObject *tmp_tuple_element_3;
        if (var_lines == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 566;
            type_description_1 = "oooooooo";
            goto try_except_handler_6;
        }

        tmp_expression_value_2 = var_lines;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[46]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "oooooooo";
            goto try_except_handler_6;
        }
        tmp_tuple_element_3 = mod_consts[166];
        tmp_string_concat_values_2 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_format_value_2;
            PyObject *tmp_expression_value_3;
            PyObject *tmp_format_spec_2;
            PyObject *tmp_format_value_3;
            PyObject *tmp_format_spec_3;
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_p);
            tmp_expression_value_3 = var_p;
            tmp_format_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[167]);
            if (tmp_format_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_2;
            }
            tmp_format_spec_2 = mod_consts[168];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_2, tmp_format_spec_2);
            Py_DECREF(tmp_format_value_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[169];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(var_mem);
            tmp_format_value_3 = var_mem;
            tmp_format_spec_3 = mod_consts[170];
            tmp_tuple_element_3 = BUILTIN_FORMAT(tmp_format_value_3, tmp_format_spec_3);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 566;
                type_description_1 = "oooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_string_concat_values_2, 3, tmp_tuple_element_3);
            tmp_tuple_element_3 = mod_consts[171];
            PyTuple_SET_ITEM0(tmp_string_concat_values_2, 4, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_string_concat_values_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_args_element_value_3 = PyUnicode_Join(mod_consts[36], tmp_string_concat_values_2);
        Py_DECREF(tmp_string_concat_values_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 566;
            type_description_1 = "oooooooo";
            goto try_except_handler_6;
        }
        frame_3001ecbc79ef1c6c3410e0943ea42aa2->m_frame.f_lineno = 566;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 566;
            type_description_1 = "oooooooo";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 564;
        type_description_1 = "oooooooo";
        goto try_except_handler_6;
    }
    goto loop_start_1;
    loop_end_1:;
    goto try_end_3;
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
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[172];
        if (var_lines == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[106]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 567;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_iterable_value_1 = var_lines;
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "oooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_3001ecbc79ef1c6c3410e0943ea42aa2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3001ecbc79ef1c6c3410e0943ea42aa2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3001ecbc79ef1c6c3410e0943ea42aa2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3001ecbc79ef1c6c3410e0943ea42aa2,
        type_description_1,
        par_device,
        var_pynvml,
        var_NVMLError_DriverNotLoaded,
        var_handle,
        var_procs,
        var_lines,
        var_p,
        var_mem
    );


    // Release cached frame if used for exception.
    if (frame_3001ecbc79ef1c6c3410e0943ea42aa2 == cache_frame_3001ecbc79ef1c6c3410e0943ea42aa2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3001ecbc79ef1c6c3410e0943ea42aa2);
        cache_frame_3001ecbc79ef1c6c3410e0943ea42aa2 = NULL;
    }

    assertFrameObject(frame_3001ecbc79ef1c6c3410e0943ea42aa2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_device);
    par_device = NULL;
    Py_XDECREF(var_pynvml);
    var_pynvml = NULL;
    Py_XDECREF(var_NVMLError_DriverNotLoaded);
    var_NVMLError_DriverNotLoaded = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
    Py_XDECREF(var_procs);
    var_procs = NULL;
    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_mem);
    var_mem = NULL;
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

    Py_XDECREF(par_device);
    par_device = NULL;
    Py_XDECREF(var_pynvml);
    var_pynvml = NULL;
    Py_XDECREF(var_NVMLError_DriverNotLoaded);
    var_NVMLError_DriverNotLoaded = NULL;
    Py_XDECREF(var_handle);
    var_handle = NULL;
    Py_XDECREF(var_procs);
    var_procs = NULL;
    Py_XDECREF(var_lines);
    var_lines = NULL;
    Py_XDECREF(var_p);
    var_p = NULL;
    Py_XDECREF(var_mem);
    var_mem = NULL;
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


static PyObject *impl_torch$cuda$memory$$$function__22_mem_get_info(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_device = python_pars[0];
    struct Nuitka_FrameObject *frame_2527a3b036b6b1c5f122c3f2f5a768a6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2527a3b036b6b1c5f122c3f2f5a768a6 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2527a3b036b6b1c5f122c3f2f5a768a6)) {
        Py_XDECREF(cache_frame_2527a3b036b6b1c5f122c3f2f5a768a6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2527a3b036b6b1c5f122c3f2f5a768a6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2527a3b036b6b1c5f122c3f2f5a768a6 = MAKE_FUNCTION_FRAME(codeobj_2527a3b036b6b1c5f122c3f2f5a768a6, module_torch$cuda$memory, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2527a3b036b6b1c5f122c3f2f5a768a6->m_type_description == NULL);
    frame_2527a3b036b6b1c5f122c3f2f5a768a6 = cache_frame_2527a3b036b6b1c5f122c3f2f5a768a6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2527a3b036b6b1c5f122c3f2f5a768a6);
    assert(Py_REFCNT(frame_2527a3b036b6b1c5f122c3f2f5a768a6) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_device);
        tmp_cmp_expr_left_1 = par_device;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[7]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2527a3b036b6b1c5f122c3f2f5a768a6->m_frame.f_lineno = 583;
        tmp_assign_source_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[8]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 583;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_device;
            assert(old != NULL);
            par_device = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_args_element_value_1 = par_device;
        frame_2527a3b036b6b1c5f122c3f2f5a768a6->m_frame.f_lineno = 584;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 584;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_device;
            assert(old != NULL);
            par_device = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[1]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_2527a3b036b6b1c5f122c3f2f5a768a6->m_frame.f_lineno = 585;
        tmp_called_instance_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[174]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_device);
        tmp_args_element_value_2 = par_device;
        frame_2527a3b036b6b1c5f122c3f2f5a768a6->m_frame.f_lineno = 585;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[175], tmp_args_element_value_2);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 585;
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
        exception_tb = MAKE_TRACEBACK(frame_2527a3b036b6b1c5f122c3f2f5a768a6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2527a3b036b6b1c5f122c3f2f5a768a6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2527a3b036b6b1c5f122c3f2f5a768a6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2527a3b036b6b1c5f122c3f2f5a768a6,
        type_description_1,
        par_device
    );


    // Release cached frame if used for exception.
    if (frame_2527a3b036b6b1c5f122c3f2f5a768a6 == cache_frame_2527a3b036b6b1c5f122c3f2f5a768a6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2527a3b036b6b1c5f122c3f2f5a768a6);
        cache_frame_2527a3b036b6b1c5f122c3f2f5a768a6 = NULL;
    }

    assertFrameObject(frame_2527a3b036b6b1c5f122c3f2f5a768a6);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_device);
    Py_DECREF(par_device);
    par_device = NULL;
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

    Py_XDECREF(par_device);
    par_device = NULL;
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



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__10_reset_peak_memory_stats(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__10_reset_peak_memory_stats,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0385088e5dda6a58b54d4ebdcf74f085,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[53],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__11_reset_max_memory_allocated(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__11_reset_max_memory_allocated,
        mod_consts[202],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a0b75cb3e1ab971511b779ef580c2098,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[59],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__12_reset_max_memory_cached(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__12_reset_max_memory_cached,
        mod_consts[203],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5ffebc824dde1b53f1d1bc65538959d2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__13_memory_allocated(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__13_memory_allocated,
        mod_consts[204],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_96d6c1663afd5c7a5d3b27726e72b943,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[65],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__14_max_memory_allocated(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__14_max_memory_allocated,
        mod_consts[205],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_51fda82fd106e8adeb18c10d8d14ae84,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__15_memory_reserved(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__15_memory_reserved,
        mod_consts[73],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0d57d043c6cbee785af58faf4f30c737,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[69],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__16_max_memory_reserved(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__16_max_memory_reserved,
        mod_consts[76],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7ea7d2779fdd83b7ae99f0766785b1c6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[71],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__17_memory_cached(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__17_memory_cached,
        mod_consts[206],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4359ab8c95ba5e3b81f8d66c1c768aa2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[74],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__18_max_memory_cached(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__18_max_memory_cached,
        mod_consts[207],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9374f11d4fb219bead56c61def889899,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__19_memory_snapshot() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__19_memory_snapshot,
        mod_consts[208],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9926cd8d58436d5697cf9c752aa6c258,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$memory,
        mod_consts[79],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__1__host_allocator() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__1__host_allocator,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a35d42b0db6bc32dca241931eaeb168b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$memory,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__20_memory_summary(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__20_memory_summary,
        mod_consts[211],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_495e4b88070b38cd85d2db03484dc528,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[138],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__20_memory_summary$$$function__1__format_size() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__20_memory_summary$$$function__1__format_size,
        mod_consts[80],
#if PYTHON_VERSION >= 0x300
        mod_consts[81],
#endif
        codeobj_d898b395e40aade1a5a27887bea69b20,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$memory,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__20_memory_summary$$$function__2__format_count() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__20_memory_summary$$$function__2__format_count,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        mod_consts[83],
#endif
        codeobj_9b01c6a3c156bbd1faa8b2e94e5cbb6a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$memory,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__21_list_gpu_processes(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__21_list_gpu_processes,
        mod_consts[212],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3001ecbc79ef1c6c3410e0943ea42aa2,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[173],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__22_mem_get_info(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__22_mem_get_info,
        mod_consts[213],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_2527a3b036b6b1c5f122c3f2f5a768a6,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[176],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__2__free_mutex() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__2__free_mutex,
        mod_consts[6],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3de5bf49ba6ec714f973f5c7ad86ee26,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$memory,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__3_caching_allocator_alloc(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__3_caching_allocator_alloc,
        mod_consts[194],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1cba36943a38ffc870dffcc1825332ae,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[20],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__4_caching_allocator_delete() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__4_caching_allocator_delete,
        mod_consts[195],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_afa86c711dea91c9e1d6410fce267ef8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$memory,
        mod_consts[22],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__5_set_per_process_memory_fraction(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__5_set_per_process_memory_fraction,
        mod_consts[198],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_fbaf025b306f1b103c3db18d6086095b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[28],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__6_empty_cache(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__6_empty_cache,
        mod_consts[200],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_62bba457d8816b9085b3adfb39724084,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[31],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__7_memory_stats(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__7_memory_stats,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_32bd772a9bba891bedefa36ee3f2efea,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[40],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__7_memory_stats$$$function__1__recurse_add_to_result(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__7_memory_stats$$$function__1__recurse_add_to_result,
        mod_consts[32],
#if PYTHON_VERSION >= 0x300
        mod_consts[33],
#endif
        codeobj_332eb2ea07be8e7aaa8af99f1b8ca89b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$memory,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__8_memory_stats_as_nested_dict(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__8_memory_stats_as_nested_dict,
        mod_consts[34],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6d364416215ad06fd3a561569ec45a2d,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[49],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$memory$$$function__9_reset_accumulated_memory_stats(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$memory$$$function__9_reset_accumulated_memory_stats,
        mod_consts[201],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e82c378766e4d00f9edec2de99143278,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$cuda$memory,
        mod_consts[51],
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

function_impl_code functable_torch$cuda$memory[] = {
    impl_torch$cuda$memory$$$function__7_memory_stats$$$function__1__recurse_add_to_result,
    impl_torch$cuda$memory$$$function__20_memory_summary$$$function__1__format_size,
    impl_torch$cuda$memory$$$function__20_memory_summary$$$function__2__format_count,
    impl_torch$cuda$memory$$$function__1__host_allocator,
    impl_torch$cuda$memory$$$function__2__free_mutex,
    impl_torch$cuda$memory$$$function__3_caching_allocator_alloc,
    impl_torch$cuda$memory$$$function__4_caching_allocator_delete,
    impl_torch$cuda$memory$$$function__5_set_per_process_memory_fraction,
    impl_torch$cuda$memory$$$function__6_empty_cache,
    impl_torch$cuda$memory$$$function__7_memory_stats,
    impl_torch$cuda$memory$$$function__8_memory_stats_as_nested_dict,
    impl_torch$cuda$memory$$$function__9_reset_accumulated_memory_stats,
    impl_torch$cuda$memory$$$function__10_reset_peak_memory_stats,
    impl_torch$cuda$memory$$$function__11_reset_max_memory_allocated,
    impl_torch$cuda$memory$$$function__12_reset_max_memory_cached,
    impl_torch$cuda$memory$$$function__13_memory_allocated,
    impl_torch$cuda$memory$$$function__14_max_memory_allocated,
    impl_torch$cuda$memory$$$function__15_memory_reserved,
    impl_torch$cuda$memory$$$function__16_max_memory_reserved,
    impl_torch$cuda$memory$$$function__17_memory_cached,
    impl_torch$cuda$memory$$$function__18_max_memory_cached,
    impl_torch$cuda$memory$$$function__19_memory_snapshot,
    impl_torch$cuda$memory$$$function__20_memory_summary,
    impl_torch$cuda$memory$$$function__21_list_gpu_processes,
    impl_torch$cuda$memory$$$function__22_mem_get_info,
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

    function_impl_code *current = functable_torch$cuda$memory;
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

    if (offset > sizeof(functable_torch$cuda$memory) || offset < 0) {
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
        functable_torch$cuda$memory[offset],
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
        module_torch$cuda$memory,
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
PyObject *modulecode_torch$cuda$memory(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.cuda.memory");

    // Store the module for future use.
    module_torch$cuda$memory = module;

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
        PRINT_STRING("torch.cuda.memory: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.cuda.memory: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.cuda.memory: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$cuda$memory\n");

    moduledict_torch$cuda$memory = MODULE_DICT(module_torch$cuda$memory);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$cuda$memory,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$cuda$memory,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[36]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$cuda$memory,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$cuda$memory,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$cuda$memory,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$cuda$memory);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$cuda$memory, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$cuda$memory, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$cuda$memory, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$cuda$memory);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_a89183868ec6c4a9b3163bb21dba6c70;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[178], tmp_assign_source_2);
    }
    frame_a89183868ec6c4a9b3163bb21dba6c70 = MAKE_MODULE_FRAME(codeobj_a89183868ec6c4a9b3163bb21dba6c70, module_torch$cuda$memory);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a89183868ec6c4a9b3163bb21dba6c70);
    assert(Py_REFCNT(frame_a89183868ec6c4a9b3163bb21dba6c70) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[180], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[179]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[179]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[181], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[182], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[38];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$cuda$memory;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[24];
        frame_a89183868ec6c4a9b3163bb21dba6c70->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[183];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$cuda$memory;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[24];
        frame_a89183868ec6c4a9b3163bb21dba6c70->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[183], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[54];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$cuda$memory;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[24];
        frame_a89183868ec6c4a9b3163bb21dba6c70->m_frame.f_lineno = 3;
        tmp_assign_source_6 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[54], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_7 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_7);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_1;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_1 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$cuda$memory,
                mod_consts[184],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[184]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$cuda$memory,
                mod_consts[185],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[185]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[185], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$cuda$memory,
                mod_consts[186],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[186]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186], tmp_assign_source_10);
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
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[1];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$cuda$memory;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = Py_None;
        tmp_level_value_4 = mod_consts[24];
        frame_a89183868ec6c4a9b3163bb21dba6c70->m_frame.f_lineno = 6;
        tmp_assign_source_11 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[1], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[36];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$cuda$memory;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[187];
        tmp_level_value_5 = mod_consts[25];
        frame_a89183868ec6c4a9b3163bb21dba6c70->m_frame.f_lineno = 7;
        tmp_assign_source_12 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_12;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$cuda$memory,
                mod_consts[29],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[29]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$cuda$memory,
                mod_consts[9],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[9]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$cuda$memory,
                mod_consts[0],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[0]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_15);
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
        PyObject *tmp_import_name_from_7;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[188];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torch$cuda$memory;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[189];
        tmp_level_value_6 = mod_consts[24];
        frame_a89183868ec6c4a9b3163bb21dba6c70->m_frame.f_lineno = 8;
        tmp_import_name_from_7 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torch$cuda$memory,
                mod_consts[190],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[190]);
        }

        Py_DECREF(tmp_import_name_from_7);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;


        tmp_assign_source_17 = MAKE_FUNCTION_torch$cuda$memory$$$function__1__host_allocator();

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[183]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[183]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }


        tmp_args_element_value_1 = MAKE_FUNCTION_torch$cuda$memory$$$function__2__free_mutex();

        frame_a89183868ec6c4a9b3163bb21dba6c70->m_frame.f_lineno = 15;
        tmp_assign_source_18 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[192], tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 15;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_1;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        tmp_defaults_1 = mod_consts[193];
        tmp_dict_key_1 = mod_consts[15];
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
        tmp_tuple_element_1 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
        Py_DECREF(tmp_dict_value_1);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_19 = MAKE_FUNCTION_torch$cuda$memory$$$function__3_caching_allocator_alloc(tmp_defaults_1, tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;


        tmp_assign_source_20 = MAKE_FUNCTION_torch$cuda$memory$$$function__4_caching_allocator_delete();

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[195], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_2;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_tuple_element_2;
        tmp_defaults_2 = mod_consts[196];
        tmp_dict_key_2 = mod_consts[15];
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_2 == NULL)) {
            tmp_tuple_element_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_2, 0, tmp_tuple_element_2);
        tmp_tuple_element_2 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_2, 1, tmp_tuple_element_2);
        tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;

            goto frame_exception_exit_1;
        }
        tmp_annotations_2 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        Py_DECREF(tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[197];
        tmp_dict_value_2 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_21 = MAKE_FUNCTION_torch$cuda$memory$$$function__5_set_per_process_memory_fraction(tmp_defaults_2, tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[198], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_annotations_3;
        tmp_annotations_3 = DICT_COPY(mod_consts[199]);


        tmp_assign_source_22 = MAKE_FUNCTION_torch$cuda$memory$$$function__6_empty_cache(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[200], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_defaults_3;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_tuple_element_3;
        tmp_defaults_3 = mod_consts[196];
        tmp_dict_key_3 = mod_consts[15];
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_3 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_3 == NULL)) {
            tmp_tuple_element_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 0, tmp_tuple_element_3);
        tmp_tuple_element_3 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_3, 1, tmp_tuple_element_3);
        tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_4;
            PyObject *tmp_subscript_value_4;
            PyObject *tmp_tuple_element_4;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[197];
            tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[185]);

            if (unlikely(tmp_expression_value_4 == NULL)) {
                tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
            }

            if (tmp_expression_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            tmp_tuple_element_4 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_4 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_4, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[184]);

            if (unlikely(tmp_tuple_element_4 == NULL)) {
                tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
            }

            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_4, 1, tmp_tuple_element_4);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_subscript_value_4);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
            Py_DECREF(tmp_subscript_value_4);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 117;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_4);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_23 = MAKE_FUNCTION_torch$cuda$memory$$$function__7_memory_stats(tmp_defaults_3, tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[62], tmp_assign_source_23);
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_defaults_4;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_tuple_element_5;
        tmp_defaults_4 = mod_consts[196];
        tmp_dict_key_4 = mod_consts[15];
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_5 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_5 == NULL)) {
            tmp_tuple_element_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_5, 0, tmp_tuple_element_5);
        tmp_tuple_element_5 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_5, 1, tmp_tuple_element_5);
        tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_6;
            PyObject *tmp_tuple_element_6;
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[197];
            tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[185]);

            if (unlikely(tmp_expression_value_6 == NULL)) {
                tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[185]);
            }

            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_2;
            }
            tmp_tuple_element_6 = (PyObject *)&PyUnicode_Type;
            tmp_subscript_value_6 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_subscript_value_6, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[184]);

            if (unlikely(tmp_tuple_element_6 == NULL)) {
                tmp_tuple_element_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[184]);
            }

            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM0(tmp_subscript_value_6, 1, tmp_tuple_element_6);
            goto tuple_build_noexception_2;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_2:;
            Py_DECREF(tmp_subscript_value_6);
            goto dict_build_exception_2;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_2:;
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
            Py_DECREF(tmp_subscript_value_6);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 205;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_5);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_24 = MAKE_FUNCTION_torch$cuda$memory$$$function__8_memory_stats_as_nested_dict(tmp_defaults_4, tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_defaults_5;
        PyObject *tmp_annotations_6;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_tuple_element_7;
        tmp_defaults_5 = mod_consts[196];
        tmp_dict_key_5 = mod_consts[15];
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_7 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_7, 0, tmp_tuple_element_7);
        tmp_tuple_element_7 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_7, 1, tmp_tuple_element_7);
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
        Py_DECREF(tmp_subscript_value_7);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;

            goto frame_exception_exit_1;
        }
        tmp_annotations_6 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));
        tmp_dict_key_5 = mod_consts[197];
        tmp_dict_value_5 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_25 = MAKE_FUNCTION_torch$cuda$memory$$$function__9_reset_accumulated_memory_stats(tmp_defaults_5, tmp_annotations_6);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[201], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_defaults_6;
        PyObject *tmp_annotations_7;
        PyObject *tmp_dict_key_6;
        PyObject *tmp_dict_value_6;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_tuple_element_8;
        tmp_defaults_6 = mod_consts[196];
        tmp_dict_key_6 = mod_consts[15];
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_8 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_8 == NULL)) {
            tmp_tuple_element_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_8);
        tmp_tuple_element_8 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_8, 1, tmp_tuple_element_8);
        tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
        Py_DECREF(tmp_subscript_value_8);
        if (tmp_dict_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;

            goto frame_exception_exit_1;
        }
        tmp_annotations_7 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
        Py_DECREF(tmp_dict_value_6);
        assert(!(tmp_res != 0));
        tmp_dict_key_6 = mod_consts[197];
        tmp_dict_value_6 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_26 = MAKE_FUNCTION_torch$cuda$memory$$$function__10_reset_peak_memory_stats(tmp_defaults_6, tmp_annotations_7);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[58], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_defaults_7;
        PyObject *tmp_annotations_8;
        PyObject *tmp_dict_key_7;
        PyObject *tmp_dict_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_tuple_element_9;
        tmp_defaults_7 = mod_consts[196];
        tmp_dict_key_7 = mod_consts[15];
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_9 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_9 == NULL)) {
            tmp_tuple_element_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_9 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_9, 0, tmp_tuple_element_9);
        tmp_tuple_element_9 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_9, 1, tmp_tuple_element_9);
        tmp_dict_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_9);
        Py_DECREF(tmp_subscript_value_9);
        if (tmp_dict_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;

            goto frame_exception_exit_1;
        }
        tmp_annotations_8 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
        Py_DECREF(tmp_dict_value_7);
        assert(!(tmp_res != 0));
        tmp_dict_key_7 = mod_consts[197];
        tmp_dict_value_7 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_7);


        tmp_assign_source_27 = MAKE_FUNCTION_torch$cuda$memory$$$function__11_reset_max_memory_allocated(tmp_defaults_7, tmp_annotations_8);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[202], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_defaults_8;
        PyObject *tmp_annotations_9;
        PyObject *tmp_dict_key_8;
        PyObject *tmp_dict_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_tuple_element_10;
        tmp_defaults_8 = mod_consts[196];
        tmp_dict_key_8 = mod_consts[15];
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_10 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_10 == NULL)) {
            tmp_tuple_element_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_10 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_10, 0, tmp_tuple_element_10);
        tmp_tuple_element_10 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_10, 1, tmp_tuple_element_10);
        tmp_dict_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_10);
        Py_DECREF(tmp_subscript_value_10);
        if (tmp_dict_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;

            goto frame_exception_exit_1;
        }
        tmp_annotations_9 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
        Py_DECREF(tmp_dict_value_8);
        assert(!(tmp_res != 0));
        tmp_dict_key_8 = mod_consts[197];
        tmp_dict_value_8 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_8);


        tmp_assign_source_28 = MAKE_FUNCTION_torch$cuda$memory$$$function__12_reset_max_memory_cached(tmp_defaults_8, tmp_annotations_9);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[203], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_defaults_9;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_tuple_element_11;
        tmp_defaults_9 = mod_consts[196];
        tmp_dict_key_9 = mod_consts[15];
        tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_11 == NULL)) {
            tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_11 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_11 == NULL)) {
            tmp_tuple_element_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_11 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_11, 0, tmp_tuple_element_11);
        tmp_tuple_element_11 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_11, 1, tmp_tuple_element_11);
        tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_11);
        Py_DECREF(tmp_subscript_value_11);
        if (tmp_dict_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;

            goto frame_exception_exit_1;
        }
        tmp_annotations_10 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
        Py_DECREF(tmp_dict_value_9);
        assert(!(tmp_res != 0));
        tmp_dict_key_9 = mod_consts[197];
        tmp_dict_value_9 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_9);


        tmp_assign_source_29 = MAKE_FUNCTION_torch$cuda$memory$$$function__13_memory_allocated(tmp_defaults_9, tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[204], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_defaults_10;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_12;
        PyObject *tmp_tuple_element_12;
        tmp_defaults_10 = mod_consts[196];
        tmp_dict_key_10 = mod_consts[15];
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_12 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_12 == NULL)) {
            tmp_tuple_element_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_12 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_12, 0, tmp_tuple_element_12);
        tmp_tuple_element_12 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_12, 1, tmp_tuple_element_12);
        tmp_dict_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_12);
        Py_DECREF(tmp_subscript_value_12);
        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 322;

            goto frame_exception_exit_1;
        }
        tmp_annotations_11 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
        Py_DECREF(tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[197];
        tmp_dict_value_10 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_10);


        tmp_assign_source_30 = MAKE_FUNCTION_torch$cuda$memory$$$function__14_max_memory_allocated(tmp_defaults_10, tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[205], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_defaults_11;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_tuple_element_13;
        tmp_defaults_11 = mod_consts[196];
        tmp_dict_key_11 = mod_consts[15];
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_13 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_13 == NULL)) {
            tmp_tuple_element_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_13 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_13, 0, tmp_tuple_element_13);
        tmp_tuple_element_13 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_13, 1, tmp_tuple_element_13);
        tmp_dict_value_11 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_13);
        Py_DECREF(tmp_subscript_value_13);
        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;

            goto frame_exception_exit_1;
        }
        tmp_annotations_12 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
        Py_DECREF(tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[197];
        tmp_dict_value_11 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_11);


        tmp_assign_source_31 = MAKE_FUNCTION_torch$cuda$memory$$$function__15_memory_reserved(tmp_defaults_11, tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[73], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_12;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_tuple_element_14;
        tmp_defaults_12 = mod_consts[196];
        tmp_dict_key_12 = mod_consts[15];
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_14 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_14 == NULL)) {
            tmp_tuple_element_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_14 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_14, 0, tmp_tuple_element_14);
        tmp_tuple_element_14 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_14, 1, tmp_tuple_element_14);
        tmp_dict_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_14);
        Py_DECREF(tmp_subscript_value_14);
        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;

            goto frame_exception_exit_1;
        }
        tmp_annotations_13 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
        Py_DECREF(tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[197];
        tmp_dict_value_12 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_12);


        tmp_assign_source_32 = MAKE_FUNCTION_torch$cuda$memory$$$function__16_max_memory_reserved(tmp_defaults_12, tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_defaults_13;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_tuple_element_15;
        tmp_defaults_13 = mod_consts[196];
        tmp_dict_key_13 = mod_consts[15];
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_15 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_15 == NULL)) {
            tmp_tuple_element_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_15);
        tmp_tuple_element_15 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_15, 1, tmp_tuple_element_15);
        tmp_dict_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_15);
        Py_DECREF(tmp_subscript_value_15);
        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 382;

            goto frame_exception_exit_1;
        }
        tmp_annotations_14 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
        Py_DECREF(tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[197];
        tmp_dict_value_13 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_13);


        tmp_assign_source_33 = MAKE_FUNCTION_torch$cuda$memory$$$function__17_memory_cached(tmp_defaults_13, tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[206], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_defaults_14;
        PyObject *tmp_annotations_15;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_tuple_element_16;
        tmp_defaults_14 = mod_consts[196];
        tmp_dict_key_14 = mod_consts[15];
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_16 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_16 == NULL)) {
            tmp_tuple_element_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_16 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_16, 0, tmp_tuple_element_16);
        tmp_tuple_element_16 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_16, 1, tmp_tuple_element_16);
        tmp_dict_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_16);
        Py_DECREF(tmp_subscript_value_16);
        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;

            goto frame_exception_exit_1;
        }
        tmp_annotations_15 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_14, tmp_dict_value_14);
        Py_DECREF(tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[197];
        tmp_dict_value_14 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_14);


        tmp_assign_source_34 = MAKE_FUNCTION_torch$cuda$memory$$$function__18_max_memory_cached(tmp_defaults_14, tmp_annotations_15);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[207], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;


        tmp_assign_source_35 = MAKE_FUNCTION_torch$cuda$memory$$$function__19_memory_snapshot();

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[208], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_defaults_15;
        PyObject *tmp_annotations_16;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_17;
        PyObject *tmp_tuple_element_17;
        tmp_defaults_15 = mod_consts[209];
        tmp_dict_key_15 = mod_consts[15];
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_17 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_17 == NULL)) {
            tmp_tuple_element_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_17 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_17, 0, tmp_tuple_element_17);
        tmp_tuple_element_17 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_17, 1, tmp_tuple_element_17);
        tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_17, tmp_subscript_value_17);
        Py_DECREF(tmp_subscript_value_17);
        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;

            goto frame_exception_exit_1;
        }
        tmp_annotations_16 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_15, tmp_dict_value_15);
        Py_DECREF(tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[210];
        tmp_dict_value_15 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        tmp_dict_key_15 = mod_consts[197];
        tmp_dict_value_15 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_15, tmp_dict_value_15);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_15);


        tmp_assign_source_36 = MAKE_FUNCTION_torch$cuda$memory$$$function__20_memory_summary(tmp_defaults_15, tmp_annotations_16);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[211], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_defaults_16;
        PyObject *tmp_annotations_17;
        PyObject *tmp_dict_key_16;
        PyObject *tmp_dict_value_16;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_18;
        PyObject *tmp_tuple_element_18;
        tmp_defaults_16 = mod_consts[196];
        tmp_dict_key_16 = mod_consts[15];
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_18 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_18 == NULL)) {
            tmp_tuple_element_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_18 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_18, 0, tmp_tuple_element_18);
        tmp_tuple_element_18 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_18, 1, tmp_tuple_element_18);
        tmp_dict_value_16 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_18);
        Py_DECREF(tmp_subscript_value_18);
        if (tmp_dict_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 535;

            goto frame_exception_exit_1;
        }
        tmp_annotations_17 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_16, tmp_dict_value_16);
        Py_DECREF(tmp_dict_value_16);
        assert(!(tmp_res != 0));
        tmp_dict_key_16 = mod_consts[197];
        tmp_dict_value_16 = (PyObject *)&PyUnicode_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_16, tmp_dict_value_16);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_16);


        tmp_assign_source_37 = MAKE_FUNCTION_torch$cuda$memory$$$function__21_list_gpu_processes(tmp_defaults_16, tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[212], tmp_assign_source_37);
    }
    {
        PyObject *tmp_assign_source_38;
        PyObject *tmp_defaults_17;
        PyObject *tmp_annotations_18;
        PyObject *tmp_dict_key_17;
        PyObject *tmp_dict_value_17;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_19;
        PyObject *tmp_tuple_element_19;
        tmp_defaults_17 = mod_consts[196];
        tmp_dict_key_17 = mod_consts[15];
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[186]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[186]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_19 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[190]);

        if (unlikely(tmp_tuple_element_19 == NULL)) {
            tmp_tuple_element_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[190]);
        }

        if (tmp_tuple_element_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_19 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_subscript_value_19, 0, tmp_tuple_element_19);
        tmp_tuple_element_19 = (PyObject *)&PyLong_Type;
        PyTuple_SET_ITEM0(tmp_subscript_value_19, 1, tmp_tuple_element_19);
        tmp_dict_value_17 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_19);
        Py_DECREF(tmp_subscript_value_19);
        if (tmp_dict_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 569;

            goto frame_exception_exit_1;
        }
        tmp_annotations_18 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_17, tmp_dict_value_17);
        Py_DECREF(tmp_dict_value_17);
        assert(!(tmp_res != 0));
        tmp_dict_key_17 = mod_consts[197];
        tmp_dict_value_17 = (PyObject *)&PyLong_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_17, tmp_dict_value_17);
        assert(!(tmp_res != 0));
        Py_INCREF(tmp_defaults_17);


        tmp_assign_source_38 = MAKE_FUNCTION_torch$cuda$memory$$$function__22_mem_get_info(tmp_defaults_17, tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$memory, (Nuitka_StringObject *)mod_consts[213], tmp_assign_source_38);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a89183868ec6c4a9b3163bb21dba6c70, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a89183868ec6c4a9b3163bb21dba6c70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a89183868ec6c4a9b3163bb21dba6c70, exception_lineno);
    }



    assertFrameObject(frame_a89183868ec6c4a9b3163bb21dba6c70);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.cuda.memory", false);

    Py_INCREF(module_torch$cuda$memory);
    return module_torch$cuda$memory;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$cuda$memory, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$cuda$memory", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
