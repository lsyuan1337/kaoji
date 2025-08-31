/* Generated code for Python module 'torch.cuda.graphs'
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

/* The "module_torch$cuda$graphs" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$cuda$graphs;
PyDictObject *moduledict_torch$cuda$graphs;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[180];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[180];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.cuda.graphs"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 180; i++) {
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
void checkModuleConstants_torch$cuda$graphs(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 180; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d27feb4d205520e568bfcd01c8cfc852;
static PyCodeObject *codeobj_fe7cc6221267805c7edd6ee202a27ec2;
static PyCodeObject *codeobj_3ed500f5523a780b19e8793e42120a96;
static PyCodeObject *codeobj_6ee39d71dae04cd7e17ad193fe7ac28a;
static PyCodeObject *codeobj_6c34bb4aec569cb3190ce37d69e02c56;
static PyCodeObject *codeobj_5876ce8292eeb8ca947aee3d58ee8b4c;
static PyCodeObject *codeobj_4baf60e269ca9b4b7e5fdde9dc0aafc3;
static PyCodeObject *codeobj_f6eda97b3d17363a7e7c2583af22323d;
static PyCodeObject *codeobj_221b768c24f0e76130591514b67f2225;
static PyCodeObject *codeobj_926c0a6279b383333ebdcf4c1789c4c0;
static PyCodeObject *codeobj_c16e8409f43221ab2e05293a8e9137aa;
static PyCodeObject *codeobj_b53657d5267c7a5084c13c72b38addba;
static PyCodeObject *codeobj_7d0833c0207d21a106a8570db4218dda;
static PyCodeObject *codeobj_4b7090bd38eac6246418b8f0409145de;
static PyCodeObject *codeobj_1c065047205175a68f0ac58fdff96175;
static PyCodeObject *codeobj_46e6898cc7892d4ef7fd86b775f0831c;
static PyCodeObject *codeobj_7dc6a8ab6ae53548752394ea6c0252ea;
static PyCodeObject *codeobj_ccde814fdc69e4685260fbd53c282e88;
static PyCodeObject *codeobj_fc29b57acdf4ea3f8a417e521d0ec5ba;
static PyCodeObject *codeobj_809efb40ee000dba97bca4f4a701fccd;
static PyCodeObject *codeobj_e59565c32d692db0112f7a89bbfc324f;
static PyCodeObject *codeobj_760b9bbfcedc12c3acfb9f38f2b495f9;
static PyCodeObject *codeobj_2777b0d29517b375370749f3a26382ed;
static PyCodeObject *codeobj_20039a2cd4eb41ecd98f7c7661194452;
static PyCodeObject *codeobj_ec0c573a9d0baa158d61397967dc7d43;
static PyCodeObject *codeobj_21fbc8783738d00f77d307534d8add13;
static PyCodeObject *codeobj_d8ca04567ce2ad706e7361feda014024;
static PyCodeObject *codeobj_23e1aaca7f38cb1478722d198a4eb16c;
static PyCodeObject *codeobj_331d386572653cb334227adbed415e8e;
static PyCodeObject *codeobj_8727ea592fb53f38d2d6ed6dbfcb8fcc;
static PyCodeObject *codeobj_a9896e06fd4535a0a62329d089d9f077;
static PyCodeObject *codeobj_198f0a59f74de1b6e7a6bb4d4bb1ff47;
static PyCodeObject *codeobj_660ed100bbb0b33fcce69aef8ffbec67;
static PyCodeObject *codeobj_e2ce858174d29af789b3c085a4b8e525;
static PyCodeObject *codeobj_0e649e3b0e26039ac4d2619ca878b586;
static PyCodeObject *codeobj_1a252b31b39308858ae83a9b5772ec24;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[150]); CHECK_OBJECT(module_filename_obj);
    codeobj_d27feb4d205520e568bfcd01c8cfc852 = MAKE_CODE_OBJECT(module_filename_obj, 232, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[151], NULL, 1, 0, 0);
    codeobj_fe7cc6221267805c7edd6ee202a27ec2 = MAKE_CODE_OBJECT(module_filename_obj, 229, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[152], NULL, 1, 0, 0);
    codeobj_3ed500f5523a780b19e8793e42120a96 = MAKE_CODE_OBJECT(module_filename_obj, 366, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[78], mod_consts[78], mod_consts[152], mod_consts[153], 1, 0, 0);
    codeobj_6ee39d71dae04cd7e17ad193fe7ac28a = MAKE_CODE_OBJECT(module_filename_obj, 261, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[154], NULL, 1, 0, 0);
    codeobj_6c34bb4aec569cb3190ce37d69e02c56 = MAKE_CODE_OBJECT(module_filename_obj, 305, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[154], NULL, 1, 0, 0);
    codeobj_5876ce8292eeb8ca947aee3d58ee8b4c = MAKE_CODE_OBJECT(module_filename_obj, 262, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[155], NULL, 1, 0, 0);
    codeobj_4baf60e269ca9b4b7e5fdde9dc0aafc3 = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[155], NULL, 1, 0, 0);
    codeobj_f6eda97b3d17363a7e7c2583af22323d = MAKE_CODE_OBJECT(module_filename_obj, 301, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[155], NULL, 1, 0, 0);
    codeobj_221b768c24f0e76130591514b67f2225 = MAKE_CODE_OBJECT(module_filename_obj, 349, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[78], mod_consts[78], mod_consts[155], mod_consts[156], 1, 0, 0);
    codeobj_926c0a6279b383333ebdcf4c1789c4c0 = MAKE_CODE_OBJECT(module_filename_obj, 244, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[158], NULL, 1, 0, 0);
    codeobj_c16e8409f43221ab2e05293a8e9137aa = MAKE_CODE_OBJECT(module_filename_obj, 245, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[158], NULL, 1, 0, 0);
    codeobj_b53657d5267c7a5084c13c72b38addba = MAKE_CODE_OBJECT(module_filename_obj, 238, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[159], NULL, 1, 0, 0);
    codeobj_7d0833c0207d21a106a8570db4218dda = MAKE_CODE_OBJECT(module_filename_obj, 239, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[160], NULL, 1, 0, 0);
    codeobj_4b7090bd38eac6246418b8f0409145de = MAKE_CODE_OBJECT(module_filename_obj, 241, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[161], NULL, 1, 0, 0);
    codeobj_1c065047205175a68f0ac58fdff96175 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[162], mod_consts[162], NULL, NULL, 0, 0, 0);
    codeobj_46e6898cc7892d4ef7fd86b775f0831c = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_NOFREE, mod_consts[2], mod_consts[2], mod_consts[163], NULL, 0, 0, 0);
    codeobj_7dc6a8ab6ae53548752394ea6c0252ea = MAKE_CODE_OBJECT(module_filename_obj, 340, CO_OPTIMIZED | CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[163], NULL, 0, 0, 0);
    codeobj_ccde814fdc69e4685260fbd53c282e88 = MAKE_CODE_OBJECT(module_filename_obj, 135, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[28], mod_consts[28], mod_consts[164], NULL, 1, 0, 0);
    codeobj_fc29b57acdf4ea3f8a417e521d0ec5ba = MAKE_CODE_OBJECT(module_filename_obj, 148, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[29], mod_consts[29], mod_consts[165], NULL, 4, 0, 0);
    codeobj_809efb40ee000dba97bca4f4a701fccd = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[166], NULL, 1, 0, 0);
    codeobj_e59565c32d692db0112f7a89bbfc324f = MAKE_CODE_OBJECT(module_filename_obj, 119, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[167], NULL, 4, 0, 0);
    codeobj_760b9bbfcedc12c3acfb9f38f2b495f9 = MAKE_CODE_OBJECT(module_filename_obj, 36, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[168], NULL, 1, 0, 0);
    codeobj_2777b0d29517b375370749f3a26382ed = MAKE_CODE_OBJECT(module_filename_obj, 351, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[96], mod_consts[96], mod_consts[169], mod_consts[153], 1, 0, 0);
    codeobj_20039a2cd4eb41ecd98f7c7661194452 = MAKE_CODE_OBJECT(module_filename_obj, 42, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[5], mod_consts[5], mod_consts[170], NULL, 2, 0, 0);
    codeobj_ec0c573a9d0baa158d61397967dc7d43 = MAKE_CODE_OBJECT(module_filename_obj, 62, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[7], mod_consts[7], mod_consts[166], NULL, 1, 0, 0);
    codeobj_21fbc8783738d00f77d307534d8add13 = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[75], mod_consts[75], mod_consts[171], mod_consts[156], 1, 0, 0);
    codeobj_d8ca04567ce2ad706e7361feda014024 = MAKE_CODE_OBJECT(module_filename_obj, 368, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[99], mod_consts[99], mod_consts[172], mod_consts[173], 0, 0, 0);
    codeobj_23e1aaca7f38cb1478722d198a4eb16c = MAKE_CODE_OBJECT(module_filename_obj, 94, CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[163], NULL, 0, 0, 0);
    codeobj_331d386572653cb334227adbed415e8e = MAKE_CODE_OBJECT(module_filename_obj, 17, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[41], mod_consts[41], NULL, NULL, 0, 0, 0);
    codeobj_8727ea592fb53f38d2d6ed6dbfcb8fcc = MAKE_CODE_OBJECT(module_filename_obj, 331, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[70], mod_consts[70], mod_consts[174], NULL, 9, 0, 0);
    codeobj_a9896e06fd4535a0a62329d089d9f077 = MAKE_CODE_OBJECT(module_filename_obj, 154, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[175], NULL, 2, 0, 0);
    codeobj_198f0a59f74de1b6e7a6bb4d4bb1ff47 = MAKE_CODE_OBJECT(module_filename_obj, 391, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[72], mod_consts[72], mod_consts[176], NULL, 4, 0, 0);
    codeobj_660ed100bbb0b33fcce69aef8ffbec67 = MAKE_CODE_OBJECT(module_filename_obj, 392, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARARGS, mod_consts[114], mod_consts[114], mod_consts[177], mod_consts[178], 0, 0, 0);
    codeobj_e2ce858174d29af789b3c085a4b8e525 = MAKE_CODE_OBJECT(module_filename_obj, 85, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[13], mod_consts[13], mod_consts[166], NULL, 1, 0, 0);
    codeobj_0e649e3b0e26039ac4d2619ca878b586 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[166], NULL, 1, 0, 0);
    codeobj_1a252b31b39308858ae83a9b5772ec24 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[11], mod_consts[11], mod_consts[166], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__3_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__4_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__5_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__6_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__7_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__10___enter__();


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__11___exit__();


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables();


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function();


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__3_functionalized(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__2_make_graphed_forward();


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__2_make_graphed_forward$$$function__1_new_fwd(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__1_graph_pool_handle();


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__2___new__();


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__3___init__();


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__4_capture_begin(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__5_capture_end();


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__6_replay();


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__7_reset();


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__8_pool();


static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__9___init__(PyObject *defaults);


// The module function definitions.
static PyObject *impl_torch$cuda$graphs$$$function__1_graph_pool_handle(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_FrameObject *frame_331d386572653cb334227adbed415e8e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_331d386572653cb334227adbed415e8e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_331d386572653cb334227adbed415e8e)) {
        Py_XDECREF(cache_frame_331d386572653cb334227adbed415e8e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_331d386572653cb334227adbed415e8e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_331d386572653cb334227adbed415e8e = MAKE_FUNCTION_FRAME(codeobj_331d386572653cb334227adbed415e8e, module_torch$cuda$graphs, 0);
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_331d386572653cb334227adbed415e8e->m_type_description == NULL);
    frame_331d386572653cb334227adbed415e8e = cache_frame_331d386572653cb334227adbed415e8e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_331d386572653cb334227adbed415e8e);
    assert(Py_REFCNT(frame_331d386572653cb334227adbed415e8e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        frame_331d386572653cb334227adbed415e8e->m_frame.f_lineno = 25;
        tmp_return_value = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

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
        exception_tb = MAKE_TRACEBACK(frame_331d386572653cb334227adbed415e8e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_331d386572653cb334227adbed415e8e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_331d386572653cb334227adbed415e8e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_331d386572653cb334227adbed415e8e,
        type_description_1
    );


    // Release cached frame if used for exception.
    if (frame_331d386572653cb334227adbed415e8e == cache_frame_331d386572653cb334227adbed415e8e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_331d386572653cb334227adbed415e8e);
        cache_frame_331d386572653cb334227adbed415e8e = NULL;
    }

    assertFrameObject(frame_331d386572653cb334227adbed415e8e);

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


static PyObject *impl_torch$cuda$graphs$$$function__2___new__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    struct Nuitka_FrameObject *frame_760b9bbfcedc12c3acfb9f38f2b495f9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_760b9bbfcedc12c3acfb9f38f2b495f9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_760b9bbfcedc12c3acfb9f38f2b495f9)) {
        Py_XDECREF(cache_frame_760b9bbfcedc12c3acfb9f38f2b495f9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_760b9bbfcedc12c3acfb9f38f2b495f9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_760b9bbfcedc12c3acfb9f38f2b495f9 = MAKE_FUNCTION_FRAME(codeobj_760b9bbfcedc12c3acfb9f38f2b495f9, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_760b9bbfcedc12c3acfb9f38f2b495f9->m_type_description == NULL);
    frame_760b9bbfcedc12c3acfb9f38f2b495f9 = cache_frame_760b9bbfcedc12c3acfb9f38f2b495f9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_760b9bbfcedc12c3acfb9f38f2b495f9);
    assert(Py_REFCNT(frame_760b9bbfcedc12c3acfb9f38f2b495f9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_object_arg_value_1 = par_cls;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$cuda$graphs, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_1 = par_cls;
        frame_760b9bbfcedc12c3acfb9f38f2b495f9->m_frame.f_lineno = 37;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[3], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;
            type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_760b9bbfcedc12c3acfb9f38f2b495f9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_760b9bbfcedc12c3acfb9f38f2b495f9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_760b9bbfcedc12c3acfb9f38f2b495f9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_760b9bbfcedc12c3acfb9f38f2b495f9,
        type_description_1,
        par_cls,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_760b9bbfcedc12c3acfb9f38f2b495f9 == cache_frame_760b9bbfcedc12c3acfb9f38f2b495f9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_760b9bbfcedc12c3acfb9f38f2b495f9);
        cache_frame_760b9bbfcedc12c3acfb9f38f2b495f9 = NULL;
    }

    assertFrameObject(frame_760b9bbfcedc12c3acfb9f38f2b495f9);

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
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$graphs$$$function__3___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_809efb40ee000dba97bca4f4a701fccd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_809efb40ee000dba97bca4f4a701fccd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_809efb40ee000dba97bca4f4a701fccd)) {
        Py_XDECREF(cache_frame_809efb40ee000dba97bca4f4a701fccd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_809efb40ee000dba97bca4f4a701fccd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_809efb40ee000dba97bca4f4a701fccd = MAKE_FUNCTION_FRAME(codeobj_809efb40ee000dba97bca4f4a701fccd, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_809efb40ee000dba97bca4f4a701fccd->m_type_description == NULL);
    frame_809efb40ee000dba97bca4f4a701fccd = cache_frame_809efb40ee000dba97bca4f4a701fccd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_809efb40ee000dba97bca4f4a701fccd);
    assert(Py_REFCNT(frame_809efb40ee000dba97bca4f4a701fccd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$cuda$graphs, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_809efb40ee000dba97bca4f4a701fccd->m_frame.f_lineno = 40;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[4]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_809efb40ee000dba97bca4f4a701fccd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_809efb40ee000dba97bca4f4a701fccd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_809efb40ee000dba97bca4f4a701fccd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_809efb40ee000dba97bca4f4a701fccd,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_809efb40ee000dba97bca4f4a701fccd == cache_frame_809efb40ee000dba97bca4f4a701fccd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_809efb40ee000dba97bca4f4a701fccd);
        cache_frame_809efb40ee000dba97bca4f4a701fccd = NULL;
    }

    assertFrameObject(frame_809efb40ee000dba97bca4f4a701fccd);

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


static PyObject *impl_torch$cuda$graphs$$$function__4_capture_begin(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_pool = python_pars[1];
    struct Nuitka_FrameObject *frame_20039a2cd4eb41ecd98f7c7661194452;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_20039a2cd4eb41ecd98f7c7661194452 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_20039a2cd4eb41ecd98f7c7661194452)) {
        Py_XDECREF(cache_frame_20039a2cd4eb41ecd98f7c7661194452);

#if _DEBUG_REFCOUNTS
        if (cache_frame_20039a2cd4eb41ecd98f7c7661194452 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_20039a2cd4eb41ecd98f7c7661194452 = MAKE_FUNCTION_FRAME(codeobj_20039a2cd4eb41ecd98f7c7661194452, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_20039a2cd4eb41ecd98f7c7661194452->m_type_description == NULL);
    frame_20039a2cd4eb41ecd98f7c7661194452 = cache_frame_20039a2cd4eb41ecd98f7c7661194452;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_20039a2cd4eb41ecd98f7c7661194452);
    assert(Py_REFCNT(frame_20039a2cd4eb41ecd98f7c7661194452) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_pool);
        tmp_cmp_expr_left_1 = par_pool;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$cuda$graphs, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        frame_20039a2cd4eb41ecd98f7c7661194452->m_frame.f_lineno = 58;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[5]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_arg_value_2;
        PyObject *tmp_object_arg_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        tmp_type_arg_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_type_arg_value_2 == NULL)) {
            tmp_type_arg_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_type_arg_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_2 = par_self;
        tmp_called_instance_2 = BUILTIN_SUPER2(moduledict_torch$cuda$graphs, tmp_type_arg_value_2, tmp_object_arg_value_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_pool);
        tmp_args_element_value_1 = par_pool;
        frame_20039a2cd4eb41ecd98f7c7661194452->m_frame.f_lineno = 60;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[5], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "ooN";
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
        exception_tb = MAKE_TRACEBACK(frame_20039a2cd4eb41ecd98f7c7661194452, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_20039a2cd4eb41ecd98f7c7661194452->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_20039a2cd4eb41ecd98f7c7661194452, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_20039a2cd4eb41ecd98f7c7661194452,
        type_description_1,
        par_self,
        par_pool,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_20039a2cd4eb41ecd98f7c7661194452 == cache_frame_20039a2cd4eb41ecd98f7c7661194452) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_20039a2cd4eb41ecd98f7c7661194452);
        cache_frame_20039a2cd4eb41ecd98f7c7661194452 = NULL;
    }

    assertFrameObject(frame_20039a2cd4eb41ecd98f7c7661194452);

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
    CHECK_OBJECT(par_pool);
    Py_DECREF(par_pool);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_pool);
    Py_DECREF(par_pool);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$graphs$$$function__5_capture_end(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ec0c573a9d0baa158d61397967dc7d43;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ec0c573a9d0baa158d61397967dc7d43 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ec0c573a9d0baa158d61397967dc7d43)) {
        Py_XDECREF(cache_frame_ec0c573a9d0baa158d61397967dc7d43);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ec0c573a9d0baa158d61397967dc7d43 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ec0c573a9d0baa158d61397967dc7d43 = MAKE_FUNCTION_FRAME(codeobj_ec0c573a9d0baa158d61397967dc7d43, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ec0c573a9d0baa158d61397967dc7d43->m_type_description == NULL);
    frame_ec0c573a9d0baa158d61397967dc7d43 = cache_frame_ec0c573a9d0baa158d61397967dc7d43;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ec0c573a9d0baa158d61397967dc7d43);
    assert(Py_REFCNT(frame_ec0c573a9d0baa158d61397967dc7d43) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$cuda$graphs, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_ec0c573a9d0baa158d61397967dc7d43->m_frame.f_lineno = 71;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ec0c573a9d0baa158d61397967dc7d43, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ec0c573a9d0baa158d61397967dc7d43->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ec0c573a9d0baa158d61397967dc7d43, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ec0c573a9d0baa158d61397967dc7d43,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_ec0c573a9d0baa158d61397967dc7d43 == cache_frame_ec0c573a9d0baa158d61397967dc7d43) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ec0c573a9d0baa158d61397967dc7d43);
        cache_frame_ec0c573a9d0baa158d61397967dc7d43 = NULL;
    }

    assertFrameObject(frame_ec0c573a9d0baa158d61397967dc7d43);

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


static PyObject *impl_torch$cuda$graphs$$$function__6_replay(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_0e649e3b0e26039ac4d2619ca878b586;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_0e649e3b0e26039ac4d2619ca878b586 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_0e649e3b0e26039ac4d2619ca878b586)) {
        Py_XDECREF(cache_frame_0e649e3b0e26039ac4d2619ca878b586);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0e649e3b0e26039ac4d2619ca878b586 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0e649e3b0e26039ac4d2619ca878b586 = MAKE_FUNCTION_FRAME(codeobj_0e649e3b0e26039ac4d2619ca878b586, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0e649e3b0e26039ac4d2619ca878b586->m_type_description == NULL);
    frame_0e649e3b0e26039ac4d2619ca878b586 = cache_frame_0e649e3b0e26039ac4d2619ca878b586;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0e649e3b0e26039ac4d2619ca878b586);
    assert(Py_REFCNT(frame_0e649e3b0e26039ac4d2619ca878b586) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$cuda$graphs, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_0e649e3b0e26039ac4d2619ca878b586->m_frame.f_lineno = 77;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[9]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0e649e3b0e26039ac4d2619ca878b586, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0e649e3b0e26039ac4d2619ca878b586->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0e649e3b0e26039ac4d2619ca878b586, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0e649e3b0e26039ac4d2619ca878b586,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_0e649e3b0e26039ac4d2619ca878b586 == cache_frame_0e649e3b0e26039ac4d2619ca878b586) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0e649e3b0e26039ac4d2619ca878b586);
        cache_frame_0e649e3b0e26039ac4d2619ca878b586 = NULL;
    }

    assertFrameObject(frame_0e649e3b0e26039ac4d2619ca878b586);

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


static PyObject *impl_torch$cuda$graphs$$$function__7_reset(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1a252b31b39308858ae83a9b5772ec24;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1a252b31b39308858ae83a9b5772ec24 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1a252b31b39308858ae83a9b5772ec24)) {
        Py_XDECREF(cache_frame_1a252b31b39308858ae83a9b5772ec24);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1a252b31b39308858ae83a9b5772ec24 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1a252b31b39308858ae83a9b5772ec24 = MAKE_FUNCTION_FRAME(codeobj_1a252b31b39308858ae83a9b5772ec24, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1a252b31b39308858ae83a9b5772ec24->m_type_description == NULL);
    frame_1a252b31b39308858ae83a9b5772ec24 = cache_frame_1a252b31b39308858ae83a9b5772ec24;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1a252b31b39308858ae83a9b5772ec24);
    assert(Py_REFCNT(frame_1a252b31b39308858ae83a9b5772ec24) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$cuda$graphs, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_1a252b31b39308858ae83a9b5772ec24->m_frame.f_lineno = 83;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[11]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1a252b31b39308858ae83a9b5772ec24, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1a252b31b39308858ae83a9b5772ec24->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1a252b31b39308858ae83a9b5772ec24, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1a252b31b39308858ae83a9b5772ec24,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_1a252b31b39308858ae83a9b5772ec24 == cache_frame_1a252b31b39308858ae83a9b5772ec24) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1a252b31b39308858ae83a9b5772ec24);
        cache_frame_1a252b31b39308858ae83a9b5772ec24 = NULL;
    }

    assertFrameObject(frame_1a252b31b39308858ae83a9b5772ec24);

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


static PyObject *impl_torch$cuda$graphs$$$function__8_pool(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_e2ce858174d29af789b3c085a4b8e525;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_e2ce858174d29af789b3c085a4b8e525 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e2ce858174d29af789b3c085a4b8e525)) {
        Py_XDECREF(cache_frame_e2ce858174d29af789b3c085a4b8e525);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e2ce858174d29af789b3c085a4b8e525 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e2ce858174d29af789b3c085a4b8e525 = MAKE_FUNCTION_FRAME(codeobj_e2ce858174d29af789b3c085a4b8e525, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e2ce858174d29af789b3c085a4b8e525->m_type_description == NULL);
    frame_e2ce858174d29af789b3c085a4b8e525 = cache_frame_e2ce858174d29af789b3c085a4b8e525;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e2ce858174d29af789b3c085a4b8e525);
    assert(Py_REFCNT(frame_e2ce858174d29af789b3c085a4b8e525) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$cuda$graphs, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oN";
            goto frame_exception_exit_1;
        }
        frame_e2ce858174d29af789b3c085a4b8e525->m_frame.f_lineno = 91;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[13]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oN";
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
        exception_tb = MAKE_TRACEBACK(frame_e2ce858174d29af789b3c085a4b8e525, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e2ce858174d29af789b3c085a4b8e525->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e2ce858174d29af789b3c085a4b8e525, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e2ce858174d29af789b3c085a4b8e525,
        type_description_1,
        par_self,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_e2ce858174d29af789b3c085a4b8e525 == cache_frame_e2ce858174d29af789b3c085a4b8e525) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e2ce858174d29af789b3c085a4b8e525);
        cache_frame_e2ce858174d29af789b3c085a4b8e525 = NULL;
    }

    assertFrameObject(frame_e2ce858174d29af789b3c085a4b8e525);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

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


static PyObject *impl_torch$cuda$graphs$$$function__9___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_cuda_graph = python_pars[1];
    PyObject *par_pool = python_pars[2];
    PyObject *par_stream = python_pars[3];
    struct Nuitka_FrameObject *frame_e59565c32d692db0112f7a89bbfc324f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_e59565c32d692db0112f7a89bbfc324f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_e59565c32d692db0112f7a89bbfc324f)) {
        Py_XDECREF(cache_frame_e59565c32d692db0112f7a89bbfc324f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e59565c32d692db0112f7a89bbfc324f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e59565c32d692db0112f7a89bbfc324f = MAKE_FUNCTION_FRAME(codeobj_e59565c32d692db0112f7a89bbfc324f, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e59565c32d692db0112f7a89bbfc324f->m_type_description == NULL);
    frame_e59565c32d692db0112f7a89bbfc324f = cache_frame_e59565c32d692db0112f7a89bbfc324f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e59565c32d692db0112f7a89bbfc324f);
    assert(Py_REFCNT(frame_e59565c32d692db0112f7a89bbfc324f) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 126;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_assattr_target_1;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[17]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_e59565c32d692db0112f7a89bbfc324f->m_frame.f_lineno = 127;
        tmp_assattr_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[18]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_assattr_target_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_4);
        if (tmp_assattr_target_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_assattr_value_1);

            exception_lineno = 127;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[15], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_target_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 127;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_2;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_pool);
        tmp_cmp_expr_left_2 = par_pool;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_assattr_value_2 = mod_consts[19];
        Py_INCREF(tmp_assattr_value_2);
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(par_pool);
        tmp_tuple_element_1 = par_pool;
        tmp_assattr_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assattr_value_2, 0, tmp_tuple_element_1);
        condexpr_end_1:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[13], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_stream);
        tmp_cmp_expr_left_3 = par_stream;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(par_stream);
        tmp_assattr_value_3 = par_stream;
        Py_INCREF(tmp_assattr_value_3);
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_6);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[15]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        condexpr_end_2:;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[20], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[20]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 131;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 131;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_assattr_target_4;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[17]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[21]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[20]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_e59565c32d692db0112f7a89bbfc324f->m_frame.f_lineno = 132;
        tmp_assattr_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assattr_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[22], tmp_assattr_value_4);
        Py_DECREF(tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 132;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_cuda_graph);
        tmp_assattr_value_5 = par_cuda_graph;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[23], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 133;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_e59565c32d692db0112f7a89bbfc324f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e59565c32d692db0112f7a89bbfc324f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e59565c32d692db0112f7a89bbfc324f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e59565c32d692db0112f7a89bbfc324f,
        type_description_1,
        par_self,
        par_cuda_graph,
        par_pool,
        par_stream
    );


    // Release cached frame if used for exception.
    if (frame_e59565c32d692db0112f7a89bbfc324f == cache_frame_e59565c32d692db0112f7a89bbfc324f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e59565c32d692db0112f7a89bbfc324f);
        cache_frame_e59565c32d692db0112f7a89bbfc324f = NULL;
    }

    assertFrameObject(frame_e59565c32d692db0112f7a89bbfc324f);

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
    CHECK_OBJECT(par_cuda_graph);
    Py_DECREF(par_cuda_graph);
    CHECK_OBJECT(par_pool);
    Py_DECREF(par_pool);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_cuda_graph);
    Py_DECREF(par_cuda_graph);
    CHECK_OBJECT(par_pool);
    Py_DECREF(par_pool);
    CHECK_OBJECT(par_stream);
    Py_DECREF(par_stream);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$graphs$$$function__10___enter__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_ccde814fdc69e4685260fbd53c282e88;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ccde814fdc69e4685260fbd53c282e88 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ccde814fdc69e4685260fbd53c282e88)) {
        Py_XDECREF(cache_frame_ccde814fdc69e4685260fbd53c282e88);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ccde814fdc69e4685260fbd53c282e88 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ccde814fdc69e4685260fbd53c282e88 = MAKE_FUNCTION_FRAME(codeobj_ccde814fdc69e4685260fbd53c282e88, module_torch$cuda$graphs, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ccde814fdc69e4685260fbd53c282e88->m_type_description == NULL);
    frame_ccde814fdc69e4685260fbd53c282e88 = cache_frame_ccde814fdc69e4685260fbd53c282e88;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ccde814fdc69e4685260fbd53c282e88);
    assert(Py_REFCNT(frame_ccde814fdc69e4685260fbd53c282e88) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[17]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ccde814fdc69e4685260fbd53c282e88->m_frame.f_lineno = 137;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[24]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 137;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[25]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[25]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ccde814fdc69e4685260fbd53c282e88->m_frame.f_lineno = 138;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[26]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 138;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_3;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ccde814fdc69e4685260fbd53c282e88->m_frame.f_lineno = 139;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[27]);
        Py_DECREF(tmp_called_instance_3);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[22]);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_ccde814fdc69e4685260fbd53c282e88->m_frame.f_lineno = 143;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[28]);
        Py_DECREF(tmp_called_instance_4);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[23]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[5]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[13]);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_call_result_5 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ccde814fdc69e4685260fbd53c282e88, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ccde814fdc69e4685260fbd53c282e88->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ccde814fdc69e4685260fbd53c282e88, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ccde814fdc69e4685260fbd53c282e88,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_ccde814fdc69e4685260fbd53c282e88 == cache_frame_ccde814fdc69e4685260fbd53c282e88) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ccde814fdc69e4685260fbd53c282e88);
        cache_frame_ccde814fdc69e4685260fbd53c282e88 = NULL;
    }

    assertFrameObject(frame_ccde814fdc69e4685260fbd53c282e88);

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


static PyObject *impl_torch$cuda$graphs$$$function__11___exit__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_exc_type = python_pars[1];
    PyObject *par_exc_value = python_pars[2];
    PyObject *par_traceback = python_pars[3];
    struct Nuitka_FrameObject *frame_fc29b57acdf4ea3f8a417e521d0ec5ba;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_fc29b57acdf4ea3f8a417e521d0ec5ba = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_fc29b57acdf4ea3f8a417e521d0ec5ba)) {
        Py_XDECREF(cache_frame_fc29b57acdf4ea3f8a417e521d0ec5ba);

#if _DEBUG_REFCOUNTS
        if (cache_frame_fc29b57acdf4ea3f8a417e521d0ec5ba == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_fc29b57acdf4ea3f8a417e521d0ec5ba = MAKE_FUNCTION_FRAME(codeobj_fc29b57acdf4ea3f8a417e521d0ec5ba, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_fc29b57acdf4ea3f8a417e521d0ec5ba->m_type_description == NULL);
    frame_fc29b57acdf4ea3f8a417e521d0ec5ba = cache_frame_fc29b57acdf4ea3f8a417e521d0ec5ba;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_fc29b57acdf4ea3f8a417e521d0ec5ba);
    assert(Py_REFCNT(frame_fc29b57acdf4ea3f8a417e521d0ec5ba) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[23]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_fc29b57acdf4ea3f8a417e521d0ec5ba->m_frame.f_lineno = 149;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[7]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[22]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_exc_type);
        tmp_args_element_value_1 = par_exc_type;
        CHECK_OBJECT(par_exc_value);
        tmp_args_element_value_2 = par_exc_value;
        CHECK_OBJECT(par_traceback);
        tmp_args_element_value_3 = par_traceback;
        frame_fc29b57acdf4ea3f8a417e521d0ec5ba->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_2 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_2,
                mod_consts[29],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_fc29b57acdf4ea3f8a417e521d0ec5ba, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_fc29b57acdf4ea3f8a417e521d0ec5ba->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_fc29b57acdf4ea3f8a417e521d0ec5ba, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_fc29b57acdf4ea3f8a417e521d0ec5ba,
        type_description_1,
        par_self,
        par_exc_type,
        par_exc_value,
        par_traceback
    );


    // Release cached frame if used for exception.
    if (frame_fc29b57acdf4ea3f8a417e521d0ec5ba == cache_frame_fc29b57acdf4ea3f8a417e521d0ec5ba) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_fc29b57acdf4ea3f8a417e521d0ec5ba);
        cache_frame_fc29b57acdf4ea3f8a417e521d0ec5ba = NULL;
    }

    assertFrameObject(frame_fc29b57acdf4ea3f8a417e521d0ec5ba);

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
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_value);
    Py_DECREF(par_exc_value);
    CHECK_OBJECT(par_traceback);
    Py_DECREF(par_traceback);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_exc_type);
    Py_DECREF(par_exc_type);
    CHECK_OBJECT(par_exc_value);
    Py_DECREF(par_exc_value);
    CHECK_OBJECT(par_traceback);
    Py_DECREF(par_traceback);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$graphs$$$function__12_make_graphed_callables(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_callables = python_pars[0];
    PyObject *par_sample_args = python_pars[1];
    nuitka_bool var_just_one_callable = NUITKA_BOOL_UNASSIGNED;
    PyObject *var_c = NULL;
    PyObject *var_args = NULL;
    PyObject *var_per_callable_len_user_args = NULL;
    PyObject *var_per_callable_module_params = NULL;
    PyObject *var_per_callable_static_input_surfaces = NULL;
    PyObject *var_fwd_graphs = NULL;
    PyObject *var_bwd_graphs = NULL;
    PyObject *var_mempool = NULL;
    PyObject *var_func = NULL;
    PyObject *var_static_input_surface = NULL;
    PyObject *var__ = NULL;
    PyObject *var_outputs = NULL;
    PyObject *var_grad_inputs = NULL;
    PyObject *var_per_callable_static_outputs = NULL;
    PyObject *var_per_callable_output_was_tensor = NULL;
    PyObject *var_fwd_graph = NULL;
    PyObject *var_per_callable_static_grad_outputs = NULL;
    PyObject *var_per_callable_static_grad_inputs = NULL;
    PyObject *var_static_outputs = NULL;
    PyObject *var_bwd_graph = NULL;
    PyObject *var_module_params = NULL;
    PyObject *var_static_grad_outputs = NULL;
    PyObject *var_static_grad_inputs = NULL;
    PyObject *var_grad_idx = NULL;
    PyObject *var_arg = NULL;
    PyObject *var_make_graphed_autograd_function = NULL;
    PyObject *var_ret = NULL;
    PyObject *var_i = NULL;
    PyObject *var_graphed = NULL;
    PyObject *var_make_graphed_forward = NULL;
    PyObject *outline_0_var_args = NULL;
    PyObject *outline_1_var_c = NULL;
    PyObject *outline_2_var_i = NULL;
    PyObject *outline_3_var__ = NULL;
    PyObject *outline_4_var__ = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_for_loop_4__for_iterator = NULL;
    PyObject *tmp_for_loop_4__iter_value = NULL;
    PyObject *tmp_for_loop_5__for_iterator = NULL;
    PyObject *tmp_for_loop_5__iter_value = NULL;
    PyObject *tmp_for_loop_6__for_iterator = NULL;
    PyObject *tmp_for_loop_6__iter_value = NULL;
    PyObject *tmp_for_loop_7__for_iterator = NULL;
    PyObject *tmp_for_loop_7__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_genexpr_2__$0 = NULL;
    PyObject *tmp_genexpr_3__$0 = NULL;
    PyObject *tmp_genexpr_4__$0 = NULL;
    PyObject *tmp_genexpr_5__$0 = NULL;
    PyObject *tmp_genexpr_6__$0 = NULL;
    PyObject *tmp_genexpr_7__$0 = NULL;
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
    PyObject *tmp_listcomp_5__$0 = NULL;
    PyObject *tmp_listcomp_5__contraction = NULL;
    PyObject *tmp_listcomp_5__iter_value_0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_tuple_unpack_2__element_3 = NULL;
    PyObject *tmp_tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_tuple_unpack_3__element_3 = NULL;
    PyObject *tmp_tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_tuple_unpack_4__element_1 = NULL;
    PyObject *tmp_tuple_unpack_4__element_2 = NULL;
    PyObject *tmp_tuple_unpack_4__element_3 = NULL;
    PyObject *tmp_tuple_unpack_4__element_4 = NULL;
    PyObject *tmp_tuple_unpack_4__source_iter = NULL;
    PyObject *tmp_tuple_unpack_5__element_1 = NULL;
    PyObject *tmp_tuple_unpack_5__element_2 = NULL;
    PyObject *tmp_tuple_unpack_5__source_iter = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    PyObject *tmp_with_2__enter = NULL;
    PyObject *tmp_with_2__exit = NULL;
    nuitka_bool tmp_with_2__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_2__source = NULL;
    PyObject *tmp_with_3__enter = NULL;
    PyObject *tmp_with_3__exit = NULL;
    nuitka_bool tmp_with_3__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_3__source = NULL;
    struct Nuitka_FrameObject *frame_a9896e06fd4535a0a62329d089d9f077;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
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
    struct Nuitka_FrameObject *frame_b53657d5267c7a5084c13c72b38addba_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_b53657d5267c7a5084c13c72b38addba_2 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;
    struct Nuitka_FrameObject *frame_7d0833c0207d21a106a8570db4218dda_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;
    static struct Nuitka_FrameObject *cache_frame_7d0833c0207d21a106a8570db4218dda_3 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;
    struct Nuitka_FrameObject *frame_4b7090bd38eac6246418b8f0409145de_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
    PyObject *exception_keeper_type_8;
    PyObject *exception_keeper_value_8;
    PyTracebackObject *exception_keeper_tb_8;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_8;
    static struct Nuitka_FrameObject *cache_frame_4b7090bd38eac6246418b8f0409145de_4 = NULL;
    PyObject *exception_keeper_type_9;
    PyObject *exception_keeper_value_9;
    PyTracebackObject *exception_keeper_tb_9;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_9;
    struct Nuitka_FrameObject *frame_926c0a6279b383333ebdcf4c1789c4c0_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
    PyObject *exception_keeper_type_10;
    PyObject *exception_keeper_value_10;
    PyTracebackObject *exception_keeper_tb_10;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_10;
    static struct Nuitka_FrameObject *cache_frame_926c0a6279b383333ebdcf4c1789c4c0_5 = NULL;
    PyObject *exception_keeper_type_11;
    PyObject *exception_keeper_value_11;
    PyTracebackObject *exception_keeper_tb_11;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_11;
    struct Nuitka_FrameObject *frame_c16e8409f43221ab2e05293a8e9137aa_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
    PyObject *exception_keeper_type_12;
    PyObject *exception_keeper_value_12;
    PyTracebackObject *exception_keeper_tb_12;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_12;
    static struct Nuitka_FrameObject *cache_frame_c16e8409f43221ab2e05293a8e9137aa_6 = NULL;
    PyObject *exception_keeper_type_13;
    PyObject *exception_keeper_value_13;
    PyTracebackObject *exception_keeper_tb_13;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_13;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    PyObject *exception_keeper_type_15;
    PyObject *exception_keeper_value_15;
    PyTracebackObject *exception_keeper_tb_15;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_15;
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
    struct Nuitka_ExceptionStackItem exception_preserved_1;
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
    struct Nuitka_ExceptionStackItem exception_preserved_2;
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
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
    struct Nuitka_ExceptionStackItem exception_preserved_3;
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
    PyObject *exception_keeper_type_38;
    PyObject *exception_keeper_value_38;
    PyTracebackObject *exception_keeper_tb_38;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_38;
    PyObject *exception_keeper_type_39;
    PyObject *exception_keeper_value_39;
    PyTracebackObject *exception_keeper_tb_39;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_39;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a9896e06fd4535a0a62329d089d9f077 = NULL;
    PyObject *exception_keeper_type_40;
    PyObject *exception_keeper_value_40;
    PyTracebackObject *exception_keeper_tb_40;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_40;

    // Actual function body.
    {
        nuitka_bool tmp_assign_source_1;
        tmp_assign_source_1 = NUITKA_BOOL_FALSE;
        var_just_one_callable = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_a9896e06fd4535a0a62329d089d9f077)) {
        Py_XDECREF(cache_frame_a9896e06fd4535a0a62329d089d9f077);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a9896e06fd4535a0a62329d089d9f077 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a9896e06fd4535a0a62329d089d9f077 = MAKE_FUNCTION_FRAME(codeobj_a9896e06fd4535a0a62329d089d9f077, module_torch$cuda$graphs, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a9896e06fd4535a0a62329d089d9f077->m_type_description == NULL);
    frame_a9896e06fd4535a0a62329d089d9f077 = cache_frame_a9896e06fd4535a0a62329d089d9f077;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a9896e06fd4535a0a62329d089d9f077);
    assert(Py_REFCNT(frame_a9896e06fd4535a0a62329d089d9f077) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_callables);
        tmp_isinstance_inst_1 = par_callables;
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
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
        nuitka_bool tmp_assign_source_2;
        tmp_assign_source_2 = NUITKA_BOOL_TRUE;
        var_just_one_callable = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_tuple_element_1;
        CHECK_OBJECT(par_callables);
        tmp_tuple_element_1 = par_callables;
        tmp_assign_source_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_3, 0, tmp_tuple_element_1);
        {
            PyObject *old = par_callables;
            assert(old != NULL);
            par_callables = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_tuple_element_2;
        CHECK_OBJECT(par_sample_args);
        tmp_tuple_element_2 = par_sample_args;
        tmp_assign_source_4 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_4, 0, tmp_tuple_element_2);
        {
            PyObject *old = par_sample_args;
            assert(old != NULL);
            par_sample_args = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_callables);
        tmp_args_element_value_1 = par_callables;
        CHECK_OBJECT(par_sample_args);
        tmp_args_element_value_2 = par_sample_args;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 224;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_5;
    }
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_1 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_6 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_6 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                exception_lineno = 224;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_iter_arg_2 = tmp_for_loop_1__iter_value;
        tmp_assign_source_7 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__source_iter;
            tmp_tuple_unpack_1__source_iter = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 224;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_1;
            tmp_tuple_unpack_1__element_1 = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 224;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_tuple_unpack_1__element_2;
            tmp_tuple_unpack_1__element_2 = tmp_assign_source_9;
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

                    type_description_1 = "ooboooooooooooooooooooooooooooooo";
                    exception_lineno = 224;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[30];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 224;
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
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_10 = tmp_tuple_unpack_1__element_1;
        {
            PyObject *old = var_c;
            var_c = tmp_assign_source_10;
            Py_INCREF(var_c);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_2;
        {
            PyObject *old = var_args;
            var_args = tmp_assign_source_11;
            Py_INCREF(var_args);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_c);
        tmp_isinstance_inst_2 = var_c;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[31]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[32]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
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
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_expression_value_3;
        bool tmp_tmp_and_left_value_1_cbool_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_expression_value_4;
        bool tmp_tmp_and_left_value_2_cbool_1;
        PyObject *tmp_cmp_expr_left_3;
        nuitka_digit tmp_cmp_expr_right_3;
        PyObject *tmp_len_arg_3;
        PyObject *tmp_expression_value_5;
        bool tmp_tmp_and_right_value_2_cbool_1;
        CHECK_OBJECT(var_c);
        tmp_expression_value_3 = var_c;
        tmp_len_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[33]);
        if (tmp_len_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        Py_DECREF(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_tmp_and_left_value_1_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        tmp_and_left_value_1 = (tmp_tmp_and_left_value_1_cbool_1 != false) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_c);
        tmp_expression_value_4 = var_c;
        tmp_len_arg_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[34]);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_2 = 0;
        tmp_tmp_and_left_value_2_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        tmp_and_left_value_2 = (tmp_tmp_and_left_value_2_cbool_1 != false) ? Py_True : Py_False;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_c);
        tmp_expression_value_5 = var_c;
        tmp_len_arg_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[35]);
        if (tmp_len_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_left_3 = BUILTIN_LEN(tmp_len_arg_3);
        Py_DECREF(tmp_len_arg_3);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 226;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_3 = 0;
        tmp_tmp_and_right_value_2_cbool_1 = RICH_COMPARE_EQ_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        tmp_and_right_value_2 = (tmp_tmp_and_right_value_2_cbool_1 != false) ? Py_True : Py_False;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_operand_value_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_operand_value_2 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[36];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 226;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_all_arg_1;
        {
            PyObject *tmp_assign_source_12;
            PyObject *tmp_iter_arg_3;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(var_c);
            tmp_called_instance_1 = var_c;
            frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 229;
            tmp_iter_arg_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[37]);
            if (tmp_iter_arg_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_3);
            Py_DECREF(tmp_iter_arg_3);
            if (tmp_assign_source_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 229;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_genexpr_1__$0;
                tmp_genexpr_1__$0 = tmp_assign_source_12;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_all_arg_1 = MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_5;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_operand_value_3 = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        assert(!(tmp_res == -1));
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        tmp_raise_value_2 = mod_consts[38];
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        Py_INCREF(tmp_raise_value_2);
        exception_lineno = 229;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_4:;
    branch_no_2:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_all_arg_2;
        {
            PyObject *tmp_assign_source_13;
            PyObject *tmp_iter_arg_4;
            CHECK_OBJECT(var_args);
            tmp_iter_arg_4 = var_args;
            tmp_assign_source_13 = MAKE_ITERATOR(tmp_iter_arg_4);
            if (tmp_assign_source_13 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_2;
            }
            {
                PyObject *old = tmp_genexpr_2__$0;
                tmp_genexpr_2__$0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_2[1];

            tmp_closure_2[0] = Nuitka_Cell_New0(tmp_genexpr_2__$0);

            tmp_all_arg_2 = MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__2_genexpr(tmp_closure_2);

            goto try_return_handler_6;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(tmp_genexpr_2__$0);
        Py_DECREF(tmp_genexpr_2__$0);
        tmp_genexpr_2__$0 = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_operand_value_4 = BUILTIN_ALL(tmp_all_arg_2);
        Py_DECREF(tmp_all_arg_2);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        tmp_raise_type_3 = PyExc_AssertionError;
        tmp_raise_value_3 = mod_consts[39];
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        Py_INCREF(tmp_raise_value_3);
        exception_lineno = 232;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_2;
    }
    branch_no_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 224;
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
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
    {
        PyObject *tmp_assign_source_14;
        // Tried code:
        {
            PyObject *tmp_assign_source_15;
            PyObject *tmp_iter_arg_5;
            CHECK_OBJECT(par_sample_args);
            tmp_iter_arg_5 = par_sample_args;
            tmp_assign_source_15 = MAKE_ITERATOR(tmp_iter_arg_5);
            if (tmp_assign_source_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_7;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_15;
        }
        {
            PyObject *tmp_assign_source_16;
            tmp_assign_source_16 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_16;
        }
        if (isFrameUnusable(cache_frame_b53657d5267c7a5084c13c72b38addba_2)) {
            Py_XDECREF(cache_frame_b53657d5267c7a5084c13c72b38addba_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b53657d5267c7a5084c13c72b38addba_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b53657d5267c7a5084c13c72b38addba_2 = MAKE_FUNCTION_FRAME(codeobj_b53657d5267c7a5084c13c72b38addba, module_torch$cuda$graphs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_b53657d5267c7a5084c13c72b38addba_2->m_type_description == NULL);
        frame_b53657d5267c7a5084c13c72b38addba_2 = cache_frame_b53657d5267c7a5084c13c72b38addba_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b53657d5267c7a5084c13c72b38addba_2);
        assert(Py_REFCNT(frame_b53657d5267c7a5084c13c72b38addba_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_17;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_2 = tmp_listcomp_1__$0;
            tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_17 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 238;
                    goto try_except_handler_8;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_17;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_18;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_18 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_args;
                outline_0_var_args = tmp_assign_source_18;
                Py_INCREF(outline_0_var_args);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_len_arg_4;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_args);
            tmp_len_arg_4 = outline_0_var_args;
            tmp_append_value_1 = BUILTIN_LEN(tmp_len_arg_4);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 238;
                type_description_2 = "o";
                goto try_except_handler_8;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_2 = "o";
            goto try_except_handler_8;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_14 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_14);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
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
        try_except_handler_8:;
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

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_7;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b53657d5267c7a5084c13c72b38addba_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b53657d5267c7a5084c13c72b38addba_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b53657d5267c7a5084c13c72b38addba_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b53657d5267c7a5084c13c72b38addba_2,
            type_description_2,
            outline_0_var_args
        );


        // Release cached frame if used for exception.
        if (frame_b53657d5267c7a5084c13c72b38addba_2 == cache_frame_b53657d5267c7a5084c13c72b38addba_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_b53657d5267c7a5084c13c72b38addba_2);
            cache_frame_b53657d5267c7a5084c13c72b38addba_2 = NULL;
        }

        assertFrameObject(frame_b53657d5267c7a5084c13c72b38addba_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_7;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_XDECREF(outline_0_var_args);
        outline_0_var_args = NULL;
        goto outline_result_3;
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

        Py_XDECREF(outline_0_var_args);
        outline_0_var_args = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 238;
        goto frame_exception_exit_1;
        outline_result_3:;
        assert(var_per_callable_len_user_args == NULL);
        var_per_callable_len_user_args = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_19;
        // Tried code:
        {
            PyObject *tmp_assign_source_20;
            PyObject *tmp_iter_arg_6;
            CHECK_OBJECT(par_callables);
            tmp_iter_arg_6 = par_callables;
            tmp_assign_source_20 = MAKE_ITERATOR(tmp_iter_arg_6);
            if (tmp_assign_source_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_9;
            }
            assert(tmp_listcomp_2__$0 == NULL);
            tmp_listcomp_2__$0 = tmp_assign_source_20;
        }
        {
            PyObject *tmp_assign_source_21;
            tmp_assign_source_21 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_2__contraction == NULL);
            tmp_listcomp_2__contraction = tmp_assign_source_21;
        }
        if (isFrameUnusable(cache_frame_7d0833c0207d21a106a8570db4218dda_3)) {
            Py_XDECREF(cache_frame_7d0833c0207d21a106a8570db4218dda_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7d0833c0207d21a106a8570db4218dda_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7d0833c0207d21a106a8570db4218dda_3 = MAKE_FUNCTION_FRAME(codeobj_7d0833c0207d21a106a8570db4218dda, module_torch$cuda$graphs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_7d0833c0207d21a106a8570db4218dda_3->m_type_description == NULL);
        frame_7d0833c0207d21a106a8570db4218dda_3 = cache_frame_7d0833c0207d21a106a8570db4218dda_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7d0833c0207d21a106a8570db4218dda_3);
        assert(Py_REFCNT(frame_7d0833c0207d21a106a8570db4218dda_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_3:;
        {
            PyObject *tmp_next_source_3;
            PyObject *tmp_assign_source_22;
            CHECK_OBJECT(tmp_listcomp_2__$0);
            tmp_next_source_3 = tmp_listcomp_2__$0;
            tmp_assign_source_22 = ITERATOR_NEXT(tmp_next_source_3);
            if (tmp_assign_source_22 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_3;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 239;
                    goto try_except_handler_10;
                }
            }

            {
                PyObject *old = tmp_listcomp_2__iter_value_0;
                tmp_listcomp_2__iter_value_0 = tmp_assign_source_22;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_23;
            CHECK_OBJECT(tmp_listcomp_2__iter_value_0);
            tmp_assign_source_23 = tmp_listcomp_2__iter_value_0;
            {
                PyObject *old = outline_1_var_c;
                outline_1_var_c = tmp_assign_source_23;
                Py_INCREF(outline_1_var_c);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_2;
            PyObject *tmp_append_value_2;
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_isinstance_inst_3;
            PyObject *tmp_isinstance_cls_3;
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_tuple_arg_1;
            PyObject *tmp_called_instance_2;
            CHECK_OBJECT(tmp_listcomp_2__contraction);
            tmp_append_list_2 = tmp_listcomp_2__contraction;
            CHECK_OBJECT(outline_1_var_c);
            tmp_isinstance_inst_3 = outline_1_var_c;
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[31]);
            if (tmp_expression_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[32]);
            Py_DECREF(tmp_expression_value_6);
            if (tmp_isinstance_cls_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
            Py_DECREF(tmp_isinstance_cls_3);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_condition_result_6 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_1;
            } else {
                goto condexpr_false_1;
            }
            condexpr_true_1:;
            CHECK_OBJECT(outline_1_var_c);
            tmp_called_instance_2 = outline_1_var_c;
            frame_7d0833c0207d21a106a8570db4218dda_3->m_frame.f_lineno = 239;
            tmp_tuple_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[40]);
            if (tmp_tuple_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            tmp_append_value_2 = PySequence_Tuple(tmp_tuple_arg_1);
            Py_DECREF(tmp_tuple_arg_1);
            if (tmp_append_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
            goto condexpr_end_1;
            condexpr_false_1:;
            tmp_append_value_2 = mod_consts[19];
            Py_INCREF(tmp_append_value_2);
            condexpr_end_1:;
            tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 239;
                type_description_2 = "o";
                goto try_except_handler_10;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_2 = "o";
            goto try_except_handler_10;
        }
        goto loop_start_3;
        loop_end_3:;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        tmp_assign_source_19 = tmp_listcomp_2__contraction;
        Py_INCREF(tmp_assign_source_19);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(tmp_listcomp_2__$0);
        Py_DECREF(tmp_listcomp_2__$0);
        tmp_listcomp_2__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_2__contraction);
        Py_DECREF(tmp_listcomp_2__contraction);
        tmp_listcomp_2__contraction = NULL;
        Py_XDECREF(tmp_listcomp_2__iter_value_0);
        tmp_listcomp_2__iter_value_0 = NULL;
        goto frame_return_exit_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_6 = exception_type;
        exception_keeper_value_6 = exception_value;
        exception_keeper_tb_6 = exception_tb;
        exception_keeper_lineno_6 = exception_lineno;
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
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_3:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_9;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7d0833c0207d21a106a8570db4218dda_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7d0833c0207d21a106a8570db4218dda_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7d0833c0207d21a106a8570db4218dda_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7d0833c0207d21a106a8570db4218dda_3,
            type_description_2,
            outline_1_var_c
        );


        // Release cached frame if used for exception.
        if (frame_7d0833c0207d21a106a8570db4218dda_3 == cache_frame_7d0833c0207d21a106a8570db4218dda_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_7d0833c0207d21a106a8570db4218dda_3);
            cache_frame_7d0833c0207d21a106a8570db4218dda_3 = NULL;
        }

        assertFrameObject(frame_7d0833c0207d21a106a8570db4218dda_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_9;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_XDECREF(outline_1_var_c);
        outline_1_var_c = NULL;
        goto outline_result_4;
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

        Py_XDECREF(outline_1_var_c);
        outline_1_var_c = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_7;
        exception_value = exception_keeper_value_7;
        exception_tb = exception_keeper_tb_7;
        exception_lineno = exception_keeper_lineno_7;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 239;
        goto frame_exception_exit_1;
        outline_result_4:;
        assert(var_per_callable_module_params == NULL);
        var_per_callable_module_params = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_24;
        // Tried code:
        {
            PyObject *tmp_assign_source_25;
            PyObject *tmp_iter_arg_7;
            PyObject *tmp_xrange_low_1;
            PyObject *tmp_len_arg_5;
            CHECK_OBJECT(par_callables);
            tmp_len_arg_5 = par_callables;
            tmp_xrange_low_1 = BUILTIN_LEN(tmp_len_arg_5);
            if (tmp_xrange_low_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            tmp_iter_arg_7 = BUILTIN_XRANGE1(tmp_xrange_low_1);
            Py_DECREF(tmp_xrange_low_1);
            if (tmp_iter_arg_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 242;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            tmp_assign_source_25 = MAKE_ITERATOR(tmp_iter_arg_7);
            Py_DECREF(tmp_iter_arg_7);
            if (tmp_assign_source_25 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_11;
            }
            assert(tmp_listcomp_3__$0 == NULL);
            tmp_listcomp_3__$0 = tmp_assign_source_25;
        }
        {
            PyObject *tmp_assign_source_26;
            tmp_assign_source_26 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_3__contraction == NULL);
            tmp_listcomp_3__contraction = tmp_assign_source_26;
        }
        if (isFrameUnusable(cache_frame_4b7090bd38eac6246418b8f0409145de_4)) {
            Py_XDECREF(cache_frame_4b7090bd38eac6246418b8f0409145de_4);

#if _DEBUG_REFCOUNTS
            if (cache_frame_4b7090bd38eac6246418b8f0409145de_4 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_4b7090bd38eac6246418b8f0409145de_4 = MAKE_FUNCTION_FRAME(codeobj_4b7090bd38eac6246418b8f0409145de, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_4b7090bd38eac6246418b8f0409145de_4->m_type_description == NULL);
        frame_4b7090bd38eac6246418b8f0409145de_4 = cache_frame_4b7090bd38eac6246418b8f0409145de_4;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_4b7090bd38eac6246418b8f0409145de_4);
        assert(Py_REFCNT(frame_4b7090bd38eac6246418b8f0409145de_4) == 2);

        // Framed code:
        // Tried code:
        loop_start_4:;
        {
            PyObject *tmp_next_source_4;
            PyObject *tmp_assign_source_27;
            CHECK_OBJECT(tmp_listcomp_3__$0);
            tmp_next_source_4 = tmp_listcomp_3__$0;
            tmp_assign_source_27 = ITERATOR_NEXT(tmp_next_source_4);
            if (tmp_assign_source_27 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_4;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "ooo";
                    exception_lineno = 241;
                    goto try_except_handler_12;
                }
            }

            {
                PyObject *old = tmp_listcomp_3__iter_value_0;
                tmp_listcomp_3__iter_value_0 = tmp_assign_source_27;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_28;
            CHECK_OBJECT(tmp_listcomp_3__iter_value_0);
            tmp_assign_source_28 = tmp_listcomp_3__iter_value_0;
            {
                PyObject *old = outline_2_var_i;
                outline_2_var_i = tmp_assign_source_28;
                Py_INCREF(outline_2_var_i);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_3;
            PyObject *tmp_append_value_3;
            PyObject *tmp_add_expr_left_1;
            PyObject *tmp_add_expr_right_1;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_subscript_value_2;
            CHECK_OBJECT(tmp_listcomp_3__contraction);
            tmp_append_list_3 = tmp_listcomp_3__contraction;
            CHECK_OBJECT(par_sample_args);
            tmp_expression_value_8 = par_sample_args;
            CHECK_OBJECT(outline_2_var_i);
            tmp_subscript_value_1 = outline_2_var_i;
            tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_1);
            if (tmp_add_expr_left_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "ooo";
                goto try_except_handler_12;
            }
            CHECK_OBJECT(var_per_callable_module_params);
            tmp_expression_value_9 = var_per_callable_module_params;
            CHECK_OBJECT(outline_2_var_i);
            tmp_subscript_value_2 = outline_2_var_i;
            tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_2);
            if (tmp_add_expr_right_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_add_expr_left_1);

                exception_lineno = 241;
                type_description_2 = "ooo";
                goto try_except_handler_12;
            }
            tmp_append_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_add_expr_right_1);
            if (tmp_append_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "ooo";
                goto try_except_handler_12;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 241;
                type_description_2 = "ooo";
                goto try_except_handler_12;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_2 = "ooo";
            goto try_except_handler_12;
        }
        goto loop_start_4;
        loop_end_4:;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        tmp_assign_source_24 = tmp_listcomp_3__contraction;
        Py_INCREF(tmp_assign_source_24);
        goto try_return_handler_12;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(tmp_listcomp_3__$0);
        Py_DECREF(tmp_listcomp_3__$0);
        tmp_listcomp_3__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_3__contraction);
        Py_DECREF(tmp_listcomp_3__contraction);
        tmp_listcomp_3__contraction = NULL;
        Py_XDECREF(tmp_listcomp_3__iter_value_0);
        tmp_listcomp_3__iter_value_0 = NULL;
        goto frame_return_exit_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
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
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto frame_exception_exit_4;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_return_exit_4:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_11;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_4b7090bd38eac6246418b8f0409145de_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_4b7090bd38eac6246418b8f0409145de_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_4b7090bd38eac6246418b8f0409145de_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_4b7090bd38eac6246418b8f0409145de_4,
            type_description_2,
            outline_2_var_i,
            par_sample_args,
            var_per_callable_module_params
        );


        // Release cached frame if used for exception.
        if (frame_4b7090bd38eac6246418b8f0409145de_4 == cache_frame_4b7090bd38eac6246418b8f0409145de_4) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_4b7090bd38eac6246418b8f0409145de_4);
            cache_frame_4b7090bd38eac6246418b8f0409145de_4 = NULL;
        }

        assertFrameObject(frame_4b7090bd38eac6246418b8f0409145de_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_11;
        skip_nested_handling_3:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_XDECREF(outline_2_var_i);
        outline_2_var_i = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_11:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_XDECREF(outline_2_var_i);
        outline_2_var_i = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 241;
        goto frame_exception_exit_1;
        outline_result_5:;
        assert(var_per_callable_static_input_surfaces == NULL);
        var_per_callable_static_input_surfaces = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_29;
        // Tried code:
        {
            PyObject *tmp_assign_source_30;
            PyObject *tmp_iter_arg_8;
            PyObject *tmp_xrange_low_2;
            PyObject *tmp_len_arg_6;
            CHECK_OBJECT(par_callables);
            tmp_len_arg_6 = par_callables;
            tmp_xrange_low_2 = BUILTIN_LEN(tmp_len_arg_6);
            if (tmp_xrange_low_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_iter_arg_8 = BUILTIN_XRANGE1(tmp_xrange_low_2);
            Py_DECREF(tmp_xrange_low_2);
            if (tmp_iter_arg_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            tmp_assign_source_30 = MAKE_ITERATOR(tmp_iter_arg_8);
            Py_DECREF(tmp_iter_arg_8);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_13;
            }
            assert(tmp_listcomp_4__$0 == NULL);
            tmp_listcomp_4__$0 = tmp_assign_source_30;
        }
        {
            PyObject *tmp_assign_source_31;
            tmp_assign_source_31 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_4__contraction == NULL);
            tmp_listcomp_4__contraction = tmp_assign_source_31;
        }
        if (isFrameUnusable(cache_frame_926c0a6279b383333ebdcf4c1789c4c0_5)) {
            Py_XDECREF(cache_frame_926c0a6279b383333ebdcf4c1789c4c0_5);

#if _DEBUG_REFCOUNTS
            if (cache_frame_926c0a6279b383333ebdcf4c1789c4c0_5 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_926c0a6279b383333ebdcf4c1789c4c0_5 = MAKE_FUNCTION_FRAME(codeobj_926c0a6279b383333ebdcf4c1789c4c0, module_torch$cuda$graphs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_926c0a6279b383333ebdcf4c1789c4c0_5->m_type_description == NULL);
        frame_926c0a6279b383333ebdcf4c1789c4c0_5 = cache_frame_926c0a6279b383333ebdcf4c1789c4c0_5;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_926c0a6279b383333ebdcf4c1789c4c0_5);
        assert(Py_REFCNT(frame_926c0a6279b383333ebdcf4c1789c4c0_5) == 2);

        // Framed code:
        // Tried code:
        loop_start_5:;
        {
            PyObject *tmp_next_source_5;
            PyObject *tmp_assign_source_32;
            CHECK_OBJECT(tmp_listcomp_4__$0);
            tmp_next_source_5 = tmp_listcomp_4__$0;
            tmp_assign_source_32 = ITERATOR_NEXT(tmp_next_source_5);
            if (tmp_assign_source_32 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_5;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 244;
                    goto try_except_handler_14;
                }
            }

            {
                PyObject *old = tmp_listcomp_4__iter_value_0;
                tmp_listcomp_4__iter_value_0 = tmp_assign_source_32;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_33;
            CHECK_OBJECT(tmp_listcomp_4__iter_value_0);
            tmp_assign_source_33 = tmp_listcomp_4__iter_value_0;
            {
                PyObject *old = outline_3_var__;
                outline_3_var__ = tmp_assign_source_33;
                Py_INCREF(outline_3_var__);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_4;
            PyObject *tmp_append_value_4;
            PyObject *tmp_called_instance_3;
            PyObject *tmp_expression_value_10;
            CHECK_OBJECT(tmp_listcomp_4__contraction);
            tmp_append_list_4 = tmp_listcomp_4__contraction;
            tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_10 == NULL)) {
                tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_called_instance_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[17]);
            if (tmp_called_instance_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            frame_926c0a6279b383333ebdcf4c1789c4c0_5->m_frame.f_lineno = 244;
            tmp_append_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[2]);
            Py_DECREF(tmp_called_instance_3);
            if (tmp_append_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_4, tmp_append_value_4);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 244;
                type_description_2 = "o";
                goto try_except_handler_14;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_2 = "o";
            goto try_except_handler_14;
        }
        goto loop_start_5;
        loop_end_5:;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        tmp_assign_source_29 = tmp_listcomp_4__contraction;
        Py_INCREF(tmp_assign_source_29);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        CHECK_OBJECT(tmp_listcomp_4__$0);
        Py_DECREF(tmp_listcomp_4__$0);
        tmp_listcomp_4__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_4__contraction);
        Py_DECREF(tmp_listcomp_4__contraction);
        tmp_listcomp_4__contraction = NULL;
        Py_XDECREF(tmp_listcomp_4__iter_value_0);
        tmp_listcomp_4__iter_value_0 = NULL;
        goto frame_return_exit_5;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
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
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto frame_exception_exit_5;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_return_exit_5:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_13;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_926c0a6279b383333ebdcf4c1789c4c0_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_926c0a6279b383333ebdcf4c1789c4c0_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_926c0a6279b383333ebdcf4c1789c4c0_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_926c0a6279b383333ebdcf4c1789c4c0_5,
            type_description_2,
            outline_3_var__
        );


        // Release cached frame if used for exception.
        if (frame_926c0a6279b383333ebdcf4c1789c4c0_5 == cache_frame_926c0a6279b383333ebdcf4c1789c4c0_5) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_926c0a6279b383333ebdcf4c1789c4c0_5);
            cache_frame_926c0a6279b383333ebdcf4c1789c4c0_5 = NULL;
        }

        assertFrameObject(frame_926c0a6279b383333ebdcf4c1789c4c0_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_13;
        skip_nested_handling_4:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_XDECREF(outline_3_var__);
        outline_3_var__ = NULL;
        goto outline_result_6;
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

        Py_XDECREF(outline_3_var__);
        outline_3_var__ = NULL;
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
        exception_lineno = 244;
        goto frame_exception_exit_1;
        outline_result_6:;
        assert(var_fwd_graphs == NULL);
        var_fwd_graphs = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_34;
        // Tried code:
        {
            PyObject *tmp_assign_source_35;
            PyObject *tmp_iter_arg_9;
            PyObject *tmp_xrange_low_3;
            PyObject *tmp_len_arg_7;
            CHECK_OBJECT(par_callables);
            tmp_len_arg_7 = par_callables;
            tmp_xrange_low_3 = BUILTIN_LEN(tmp_len_arg_7);
            if (tmp_xrange_low_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_15;
            }
            tmp_iter_arg_9 = BUILTIN_XRANGE1(tmp_xrange_low_3);
            Py_DECREF(tmp_xrange_low_3);
            if (tmp_iter_arg_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_15;
            }
            tmp_assign_source_35 = MAKE_ITERATOR(tmp_iter_arg_9);
            Py_DECREF(tmp_iter_arg_9);
            if (tmp_assign_source_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_15;
            }
            assert(tmp_listcomp_5__$0 == NULL);
            tmp_listcomp_5__$0 = tmp_assign_source_35;
        }
        {
            PyObject *tmp_assign_source_36;
            tmp_assign_source_36 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_5__contraction == NULL);
            tmp_listcomp_5__contraction = tmp_assign_source_36;
        }
        if (isFrameUnusable(cache_frame_c16e8409f43221ab2e05293a8e9137aa_6)) {
            Py_XDECREF(cache_frame_c16e8409f43221ab2e05293a8e9137aa_6);

#if _DEBUG_REFCOUNTS
            if (cache_frame_c16e8409f43221ab2e05293a8e9137aa_6 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_c16e8409f43221ab2e05293a8e9137aa_6 = MAKE_FUNCTION_FRAME(codeobj_c16e8409f43221ab2e05293a8e9137aa, module_torch$cuda$graphs, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_c16e8409f43221ab2e05293a8e9137aa_6->m_type_description == NULL);
        frame_c16e8409f43221ab2e05293a8e9137aa_6 = cache_frame_c16e8409f43221ab2e05293a8e9137aa_6;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c16e8409f43221ab2e05293a8e9137aa_6);
        assert(Py_REFCNT(frame_c16e8409f43221ab2e05293a8e9137aa_6) == 2);

        // Framed code:
        // Tried code:
        loop_start_6:;
        {
            PyObject *tmp_next_source_6;
            PyObject *tmp_assign_source_37;
            CHECK_OBJECT(tmp_listcomp_5__$0);
            tmp_next_source_6 = tmp_listcomp_5__$0;
            tmp_assign_source_37 = ITERATOR_NEXT(tmp_next_source_6);
            if (tmp_assign_source_37 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_6;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 245;
                    goto try_except_handler_16;
                }
            }

            {
                PyObject *old = tmp_listcomp_5__iter_value_0;
                tmp_listcomp_5__iter_value_0 = tmp_assign_source_37;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_38;
            CHECK_OBJECT(tmp_listcomp_5__iter_value_0);
            tmp_assign_source_38 = tmp_listcomp_5__iter_value_0;
            {
                PyObject *old = outline_4_var__;
                outline_4_var__ = tmp_assign_source_38;
                Py_INCREF(outline_4_var__);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_5;
            PyObject *tmp_append_value_5;
            PyObject *tmp_called_instance_4;
            PyObject *tmp_expression_value_11;
            CHECK_OBJECT(tmp_listcomp_5__contraction);
            tmp_append_list_5 = tmp_listcomp_5__contraction;
            tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

            if (unlikely(tmp_expression_value_11 == NULL)) {
                tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
            }

            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_called_instance_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[17]);
            if (tmp_called_instance_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            frame_c16e8409f43221ab2e05293a8e9137aa_6->m_frame.f_lineno = 245;
            tmp_append_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[2]);
            Py_DECREF(tmp_called_instance_4);
            if (tmp_append_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_5, tmp_append_value_5);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 245;
                type_description_2 = "o";
                goto try_except_handler_16;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_2 = "o";
            goto try_except_handler_16;
        }
        goto loop_start_6;
        loop_end_6:;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        tmp_assign_source_34 = tmp_listcomp_5__contraction;
        Py_INCREF(tmp_assign_source_34);
        goto try_return_handler_16;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(tmp_listcomp_5__$0);
        Py_DECREF(tmp_listcomp_5__$0);
        tmp_listcomp_5__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        Py_DECREF(tmp_listcomp_5__contraction);
        tmp_listcomp_5__contraction = NULL;
        Py_XDECREF(tmp_listcomp_5__iter_value_0);
        tmp_listcomp_5__iter_value_0 = NULL;
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

        CHECK_OBJECT(tmp_listcomp_5__$0);
        Py_DECREF(tmp_listcomp_5__$0);
        tmp_listcomp_5__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_5__contraction);
        Py_DECREF(tmp_listcomp_5__contraction);
        tmp_listcomp_5__contraction = NULL;
        Py_XDECREF(tmp_listcomp_5__iter_value_0);
        tmp_listcomp_5__iter_value_0 = NULL;
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
            exception_tb = MAKE_TRACEBACK(frame_c16e8409f43221ab2e05293a8e9137aa_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c16e8409f43221ab2e05293a8e9137aa_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c16e8409f43221ab2e05293a8e9137aa_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c16e8409f43221ab2e05293a8e9137aa_6,
            type_description_2,
            outline_4_var__
        );


        // Release cached frame if used for exception.
        if (frame_c16e8409f43221ab2e05293a8e9137aa_6 == cache_frame_c16e8409f43221ab2e05293a8e9137aa_6) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_c16e8409f43221ab2e05293a8e9137aa_6);
            cache_frame_c16e8409f43221ab2e05293a8e9137aa_6 = NULL;
        }

        assertFrameObject(frame_c16e8409f43221ab2e05293a8e9137aa_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_15;
        skip_nested_handling_5:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_15:;
        Py_XDECREF(outline_4_var__);
        outline_4_var__ = NULL;
        goto outline_result_7;
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

        Py_XDECREF(outline_4_var__);
        outline_4_var__ = NULL;
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
        exception_lineno = 245;
        goto frame_exception_exit_1;
        outline_result_7:;
        assert(var_bwd_graphs == NULL);
        var_bwd_graphs = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[41]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 247;
        tmp_assign_source_39 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mempool == NULL);
        var_mempool = tmp_assign_source_39;
    }
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_call_result_1;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[17]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 252;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[24]);
        Py_DECREF(tmp_called_instance_5);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[17]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[21]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 253;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        tmp_called_instance_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[17]);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 253;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 253;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_6, mod_consts[18]);
        Py_DECREF(tmp_called_instance_6);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 253;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 253;
        tmp_assign_source_40 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_16 = tmp_with_1__source;
        tmp_called_value_4 = LOOKUP_SPECIAL(tmp_expression_value_16, mod_consts[28]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 253;
        tmp_assign_source_41 = CALL_FUNCTION_NO_ARGS(tmp_called_value_4);
        Py_DECREF(tmp_called_value_4);
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_17 = tmp_with_1__source;
        tmp_assign_source_42 = LOOKUP_SPECIAL(tmp_expression_value_17, mod_consts[29]);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_42;
    }
    {
        nuitka_bool tmp_assign_source_43;
        tmp_assign_source_43 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_43;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_iter_arg_10;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_5 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_callables);
        tmp_args_element_value_4 = par_callables;
        CHECK_OBJECT(par_sample_args);
        tmp_args_element_value_5 = par_sample_args;
        CHECK_OBJECT(var_per_callable_static_input_surfaces);
        tmp_args_element_value_6 = var_per_callable_static_input_surfaces;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_iter_arg_10 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_iter_arg_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        tmp_assign_source_44 = MAKE_ITERATOR(tmp_iter_arg_10);
        Py_DECREF(tmp_iter_arg_10);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_19;
        }
        assert(tmp_for_loop_2__for_iterator == NULL);
        tmp_for_loop_2__for_iterator = tmp_assign_source_44;
    }
    // Tried code:
    loop_start_7:;
    {
        PyObject *tmp_next_source_7;
        PyObject *tmp_assign_source_45;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_7 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_45 = ITERATOR_NEXT(tmp_next_source_7);
        if (tmp_assign_source_45 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_7;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                exception_lineno = 254;
                goto try_except_handler_20;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_45;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_46;
        PyObject *tmp_iter_arg_11;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_iter_arg_11 = tmp_for_loop_2__iter_value;
        tmp_assign_source_46 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_11);
        if (tmp_assign_source_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_21;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__source_iter;
            tmp_tuple_unpack_2__source_iter = tmp_assign_source_46;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_47;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_47 = UNPACK_NEXT(tmp_unpack_3, 0, 3);
        if (tmp_assign_source_47 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 254;
            goto try_except_handler_22;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_1;
            tmp_tuple_unpack_2__element_1 = tmp_assign_source_47;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_48 = UNPACK_NEXT(tmp_unpack_4, 1, 3);
        if (tmp_assign_source_48 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 254;
            goto try_except_handler_22;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_2;
            tmp_tuple_unpack_2__element_2 = tmp_assign_source_48;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_49;
        PyObject *tmp_unpack_5;
        CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
        tmp_unpack_5 = tmp_tuple_unpack_2__source_iter;
        tmp_assign_source_49 = UNPACK_NEXT(tmp_unpack_5, 2, 3);
        if (tmp_assign_source_49 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 254;
            goto try_except_handler_22;
        }
        {
            PyObject *old = tmp_tuple_unpack_2__element_3;
            tmp_tuple_unpack_2__element_3 = tmp_assign_source_49;
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

                    type_description_1 = "ooboooooooooooooooooooooooooooooo";
                    exception_lineno = 254;
                    goto try_except_handler_22;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[42];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 254;
            goto try_except_handler_22;
        }
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_22:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto try_except_handler_21;
    // End of try:
    try_end_4:;
    goto try_end_5;
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

    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_15;
    exception_value = exception_keeper_value_15;
    exception_tb = exception_keeper_tb_15;
    exception_lineno = exception_keeper_lineno_15;

    goto try_except_handler_20;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_tuple_unpack_2__source_iter);
    Py_DECREF(tmp_tuple_unpack_2__source_iter);
    tmp_tuple_unpack_2__source_iter = NULL;
    {
        PyObject *tmp_assign_source_50;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_1);
        tmp_assign_source_50 = tmp_tuple_unpack_2__element_1;
        {
            PyObject *old = var_func;
            var_func = tmp_assign_source_50;
            Py_INCREF(var_func);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_1);
    tmp_tuple_unpack_2__element_1 = NULL;

    {
        PyObject *tmp_assign_source_51;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_2);
        tmp_assign_source_51 = tmp_tuple_unpack_2__element_2;
        {
            PyObject *old = var_args;
            var_args = tmp_assign_source_51;
            Py_INCREF(var_args);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_2);
    tmp_tuple_unpack_2__element_2 = NULL;

    {
        PyObject *tmp_assign_source_52;
        CHECK_OBJECT(tmp_tuple_unpack_2__element_3);
        tmp_assign_source_52 = tmp_tuple_unpack_2__element_3;
        {
            PyObject *old = var_static_input_surface;
            var_static_input_surface = tmp_assign_source_52;
            Py_INCREF(var_static_input_surface);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_2__element_3);
    tmp_tuple_unpack_2__element_3 = NULL;

    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_iter_arg_12;
        tmp_iter_arg_12 = mod_consts[43];
        tmp_assign_source_53 = MAKE_ITERATOR_INFALLIBLE(tmp_iter_arg_12);
        assert(!(tmp_assign_source_53 == NULL));
        {
            PyObject *old = tmp_for_loop_3__for_iterator;
            tmp_for_loop_3__for_iterator = tmp_assign_source_53;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_8:;
    {
        PyObject *tmp_next_source_8;
        PyObject *tmp_assign_source_54;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_8 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_54 = ITERATOR_NEXT(tmp_next_source_8);
        if (tmp_assign_source_54 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_8;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                exception_lineno = 257;
                goto try_except_handler_23;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_54;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_55;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_55 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_55;
            Py_INCREF(var__);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        CHECK_OBJECT(var_func);
        tmp_dircall_arg1_1 = var_func;
        CHECK_OBJECT(var_args);
        tmp_dircall_arg2_1 = var_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_56 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_outputs;
            var_outputs = tmp_assign_source_56;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_57;
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_tuple_element_3;
        CHECK_OBJECT(var_outputs);
        tmp_isinstance_inst_4 = var_outputs;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_isinstance_cls_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[44]);
        if (tmp_isinstance_cls_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        Py_DECREF(tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(var_outputs);
        tmp_tuple_element_3 = var_outputs;
        tmp_assign_source_57 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_57, 0, tmp_tuple_element_3);
        goto condexpr_end_2;
        condexpr_false_2:;
        CHECK_OBJECT(var_outputs);
        tmp_assign_source_57 = var_outputs;
        Py_INCREF(tmp_assign_source_57);
        condexpr_end_2:;
        {
            PyObject *old = var_outputs;
            assert(old != NULL);
            var_outputs = tmp_assign_source_57;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_tuple_arg_2;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_tuple_arg_3;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_4_1;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[45]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[46]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        CHECK_OBJECT(var_outputs);
        tmp_kw_call_value_0_1 = var_outputs;
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_iter_arg_13;
            if (var_static_input_surface == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[47]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 261;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }

            tmp_iter_arg_13 = var_static_input_surface;
            tmp_assign_source_59 = MAKE_ITERATOR(tmp_iter_arg_13);
            if (tmp_assign_source_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 261;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            {
                PyObject *old = tmp_genexpr_3__$0;
                tmp_genexpr_3__$0 = tmp_assign_source_59;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_3[1];

            tmp_closure_3[0] = Nuitka_Cell_New0(tmp_genexpr_3__$0);

            tmp_tuple_arg_2 = MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__3_genexpr(tmp_closure_3);

            goto try_return_handler_24;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_24:;
        CHECK_OBJECT(tmp_genexpr_3__$0);
        Py_DECREF(tmp_genexpr_3__$0);
        tmp_genexpr_3__$0 = NULL;
        goto outline_result_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_8:;
        tmp_kw_call_value_1_1 = PySequence_Tuple(tmp_tuple_arg_2);
        Py_DECREF(tmp_tuple_arg_2);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 261;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *tmp_assign_source_60;
            PyObject *tmp_iter_arg_14;
            CHECK_OBJECT(var_outputs);
            tmp_iter_arg_14 = var_outputs;
            tmp_assign_source_60 = MAKE_ITERATOR(tmp_iter_arg_14);
            if (tmp_assign_source_60 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 262;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_23;
            }
            {
                PyObject *old = tmp_genexpr_4__$0;
                tmp_genexpr_4__$0 = tmp_assign_source_60;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_4[1];

            tmp_closure_4[0] = Nuitka_Cell_New0(tmp_genexpr_4__$0);

            tmp_tuple_arg_3 = MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__4_genexpr(tmp_closure_4);

            goto try_return_handler_25;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_25:;
        CHECK_OBJECT(tmp_genexpr_4__$0);
        Py_DECREF(tmp_genexpr_4__$0);
        tmp_genexpr_4__$0 = NULL;
        goto outline_result_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_9:;
        tmp_kw_call_value_2_1 = PySequence_Tuple(tmp_tuple_arg_3);
        Py_DECREF(tmp_tuple_arg_3);
        if (tmp_kw_call_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_call_value_1_1);

            exception_lineno = 262;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        tmp_kw_call_value_3_1 = Py_True;
        tmp_kw_call_value_4_1 = Py_False;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 260;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1, tmp_kw_call_value_4_1};

            tmp_assign_source_58 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[48]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_value_1_1);
        Py_DECREF(tmp_kw_call_value_2_1);
        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_23;
        }
        {
            PyObject *old = var_grad_inputs;
            var_grad_inputs = tmp_assign_source_58;
            Py_XDECREF(old);
        }

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 257;
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_23;
    }
    goto loop_start_8;
    loop_end_8:;
    goto try_end_6;
    // Exception handler code:
    try_except_handler_23:;
    exception_keeper_type_16 = exception_type;
    exception_keeper_value_16 = exception_value;
    exception_keeper_tb_16 = exception_tb;
    exception_keeper_lineno_16 = exception_lineno;
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
    exception_type = exception_keeper_type_16;
    exception_value = exception_keeper_value_16;
    exception_tb = exception_keeper_tb_16;
    exception_lineno = exception_keeper_lineno_16;

    goto try_except_handler_20;
    // End of try:
    try_end_6:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    tmp_result = var_outputs != NULL;
    if (likely(tmp_result)) {
        Py_DECREF(var_outputs);
        var_outputs = NULL;
    }

    if (tmp_result == false) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 265;
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_20;
    }

    tmp_result = var_grad_inputs != NULL;
    if (likely(tmp_result)) {
        Py_DECREF(var_grad_inputs);
        var_grad_inputs = NULL;
    }

    if (tmp_result == false) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 265;
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_20;
    }

    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 254;
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_20;
    }
    goto loop_start_7;
    loop_end_7:;
    goto try_end_7;
    // Exception handler code:
    try_except_handler_20:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
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
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto try_except_handler_19;
    // End of try:
    try_end_7:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    goto try_end_8;
    // Exception handler code:
    try_except_handler_19:;
    exception_keeper_type_18 = exception_type;
    exception_keeper_value_18 = exception_value;
    exception_keeper_tb_18 = exception_tb;
    exception_keeper_lineno_18 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_18 == NULL) {
        exception_keeper_tb_18 = MAKE_TRACEBACK(frame_a9896e06fd4535a0a62329d089d9f077, exception_keeper_lineno_18);
    } else if (exception_keeper_lineno_18 != 0) {
        exception_keeper_tb_18 = ADD_TRACEBACK(exception_keeper_tb_18, frame_a9896e06fd4535a0a62329d089d9f077, exception_keeper_lineno_18);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_18, &exception_keeper_value_18, &exception_keeper_tb_18);
    // Tried code:
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        tmp_cmp_expr_left_4 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_4 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        assert(!(tmp_res == -1));
        tmp_condition_result_8 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        nuitka_bool tmp_assign_source_61;
        tmp_assign_source_61 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_61;
    }
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        tmp_args_element_value_7 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_8 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_9 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 254;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_operand_value_5 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_7, call_args);
        }

        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_26;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 254;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a9896e06fd4535a0a62329d089d9f077->m_frame) frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooboooooooooooooooooooooooooooooo";
    goto try_except_handler_26;
    branch_no_7:;
    goto branch_end_6;
    branch_no_6:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 253;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a9896e06fd4535a0a62329d089d9f077->m_frame) frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooboooooooooooooooooooooooooooooo";
    goto try_except_handler_26;
    branch_end_6:;
    goto try_end_9;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_19 = exception_type;
    exception_keeper_value_19 = exception_value;
    exception_keeper_tb_19 = exception_tb;
    exception_keeper_lineno_19 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_19;
    exception_value = exception_keeper_value_19;
    exception_tb = exception_keeper_tb_19;
    exception_lineno = exception_keeper_lineno_19;

    goto try_except_handler_18;
    // End of try:
    try_end_9:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_8;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_8:;
    goto try_end_10;
    // Exception handler code:
    try_except_handler_18:;
    exception_keeper_type_20 = exception_type;
    exception_keeper_value_20 = exception_value;
    exception_keeper_tb_20 = exception_tb;
    exception_keeper_lineno_20 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_10;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_with_1__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_10 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_8 = tmp_with_1__exit;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 254;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_8, mod_consts[51]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_20);
            Py_XDECREF(exception_keeper_value_20);
            Py_XDECREF(exception_keeper_tb_20);

            exception_lineno = 254;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_8:;
    // Re-raise.
    exception_type = exception_keeper_type_20;
    exception_value = exception_keeper_value_20;
    exception_tb = exception_keeper_tb_20;
    exception_lineno = exception_keeper_lineno_20;

    goto try_except_handler_17;
    // End of try:
    try_end_10:;
    {
        bool tmp_condition_result_11;
        nuitka_bool tmp_cmp_expr_left_6;
        nuitka_bool tmp_cmp_expr_right_6;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_6 = tmp_with_1__indicator;
        tmp_cmp_expr_right_6 = NUITKA_BOOL_TRUE;
        tmp_condition_result_11 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_9 = tmp_with_1__exit;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 254;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_9, mod_consts[51]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_17;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_9:;
    goto try_end_11;
    // Exception handler code:
    try_except_handler_17:;
    exception_keeper_type_21 = exception_type;
    exception_keeper_value_21 = exception_value;
    exception_keeper_tb_21 = exception_tb;
    exception_keeper_lineno_21 = exception_lineno;
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
    exception_type = exception_keeper_type_21;
    exception_value = exception_keeper_value_21;
    exception_tb = exception_keeper_tb_21;
    exception_lineno = exception_keeper_lineno_21;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_4;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[17]);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 266;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_7, mod_consts[24]);
        Py_DECREF(tmp_called_instance_7);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_assign_source_62;
        tmp_assign_source_62 = MAKE_LIST_EMPTY(0);
        assert(var_per_callable_static_outputs == NULL);
        var_per_callable_static_outputs = tmp_assign_source_62;
    }
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_LIST_EMPTY(0);
        assert(var_per_callable_output_was_tensor == NULL);
        var_per_callable_output_was_tensor = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_iter_arg_15;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_10 = (PyObject *)&PyZip_Type;
        CHECK_OBJECT(par_callables);
        tmp_args_element_value_10 = par_callables;
        CHECK_OBJECT(par_sample_args);
        tmp_args_element_value_11 = par_sample_args;
        CHECK_OBJECT(var_fwd_graphs);
        tmp_args_element_value_12 = var_fwd_graphs;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 275;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_iter_arg_15 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_10, call_args);
        }

        if (tmp_iter_arg_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_64 = MAKE_ITERATOR(tmp_iter_arg_15);
        Py_DECREF(tmp_iter_arg_15);
        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_4__for_iterator == NULL);
        tmp_for_loop_4__for_iterator = tmp_assign_source_64;
    }
    // Tried code:
    loop_start_9:;
    {
        PyObject *tmp_next_source_9;
        PyObject *tmp_assign_source_65;
        CHECK_OBJECT(tmp_for_loop_4__for_iterator);
        tmp_next_source_9 = tmp_for_loop_4__for_iterator;
        tmp_assign_source_65 = ITERATOR_NEXT(tmp_next_source_9);
        if (tmp_assign_source_65 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_9;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                exception_lineno = 275;
                goto try_except_handler_27;
            }
        }

        {
            PyObject *old = tmp_for_loop_4__iter_value;
            tmp_for_loop_4__iter_value = tmp_assign_source_65;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_iter_arg_16;
        CHECK_OBJECT(tmp_for_loop_4__iter_value);
        tmp_iter_arg_16 = tmp_for_loop_4__iter_value;
        tmp_assign_source_66 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_16);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_28;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__source_iter;
            tmp_tuple_unpack_3__source_iter = tmp_assign_source_66;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_unpack_6;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_6 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_67 = UNPACK_NEXT(tmp_unpack_6, 0, 3);
        if (tmp_assign_source_67 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 275;
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_1;
            tmp_tuple_unpack_3__element_1 = tmp_assign_source_67;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_unpack_7;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_7 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_68 = UNPACK_NEXT(tmp_unpack_7, 1, 3);
        if (tmp_assign_source_68 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 275;
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_2;
            tmp_tuple_unpack_3__element_2 = tmp_assign_source_68;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_unpack_8;
        CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
        tmp_unpack_8 = tmp_tuple_unpack_3__source_iter;
        tmp_assign_source_69 = UNPACK_NEXT(tmp_unpack_8, 2, 3);
        if (tmp_assign_source_69 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 275;
            goto try_except_handler_29;
        }
        {
            PyObject *old = tmp_tuple_unpack_3__element_3;
            tmp_tuple_unpack_3__element_3 = tmp_assign_source_69;
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

                    type_description_1 = "ooboooooooooooooooooooooooooooooo";
                    exception_lineno = 275;
                    goto try_except_handler_29;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[42];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 275;
            goto try_except_handler_29;
        }
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_29:;
    exception_keeper_type_22 = exception_type;
    exception_keeper_value_22 = exception_value;
    exception_keeper_tb_22 = exception_tb;
    exception_keeper_lineno_22 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_22;
    exception_value = exception_keeper_value_22;
    exception_tb = exception_keeper_tb_22;
    exception_lineno = exception_keeper_lineno_22;

    goto try_except_handler_28;
    // End of try:
    try_end_12:;
    goto try_end_13;
    // Exception handler code:
    try_except_handler_28:;
    exception_keeper_type_23 = exception_type;
    exception_keeper_value_23 = exception_value;
    exception_keeper_tb_23 = exception_tb;
    exception_keeper_lineno_23 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_23;
    exception_value = exception_keeper_value_23;
    exception_tb = exception_keeper_tb_23;
    exception_lineno = exception_keeper_lineno_23;

    goto try_except_handler_27;
    // End of try:
    try_end_13:;
    CHECK_OBJECT(tmp_tuple_unpack_3__source_iter);
    Py_DECREF(tmp_tuple_unpack_3__source_iter);
    tmp_tuple_unpack_3__source_iter = NULL;
    {
        PyObject *tmp_assign_source_70;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_1);
        tmp_assign_source_70 = tmp_tuple_unpack_3__element_1;
        {
            PyObject *old = var_func;
            var_func = tmp_assign_source_70;
            Py_INCREF(var_func);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_1);
    tmp_tuple_unpack_3__element_1 = NULL;

    {
        PyObject *tmp_assign_source_71;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_2);
        tmp_assign_source_71 = tmp_tuple_unpack_3__element_2;
        {
            PyObject *old = var_args;
            var_args = tmp_assign_source_71;
            Py_INCREF(var_args);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_2);
    tmp_tuple_unpack_3__element_2 = NULL;

    {
        PyObject *tmp_assign_source_72;
        CHECK_OBJECT(tmp_tuple_unpack_3__element_3);
        tmp_assign_source_72 = tmp_tuple_unpack_3__element_3;
        {
            PyObject *old = var_fwd_graph;
            var_fwd_graph = tmp_assign_source_72;
            Py_INCREF(var_fwd_graph);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_3__element_3);
    tmp_tuple_unpack_3__element_3 = NULL;

    // Tried code:
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_23 == NULL)) {
            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_expression_value_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[17]);
        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[52]);
        Py_DECREF(tmp_expression_value_22);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        CHECK_OBJECT(var_fwd_graph);
        tmp_kw_call_arg_value_0_1 = var_fwd_graph;
        if (var_mempool == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 278;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }

        tmp_kw_call_dict_value_0_1 = var_mempool;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 278;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_73 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_11, args, kw_values, mod_consts[54]);
        }

        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_73 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_with_2__source;
            tmp_with_2__source = tmp_assign_source_73;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_24 = tmp_with_2__source;
        tmp_called_value_12 = LOOKUP_SPECIAL(tmp_expression_value_24, mod_consts[28]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 278;
        tmp_assign_source_74 = CALL_FUNCTION_NO_ARGS(tmp_called_value_12);
        Py_DECREF(tmp_called_value_12);
        if (tmp_assign_source_74 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_with_2__enter;
            tmp_with_2__enter = tmp_assign_source_74;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_expression_value_25;
        CHECK_OBJECT(tmp_with_2__source);
        tmp_expression_value_25 = tmp_with_2__source;
        tmp_assign_source_75 = LOOKUP_SPECIAL(tmp_expression_value_25, mod_consts[29]);
        if (tmp_assign_source_75 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        {
            PyObject *old = tmp_with_2__exit;
            tmp_with_2__exit = tmp_assign_source_75;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_76;
        tmp_assign_source_76 = NUITKA_BOOL_TRUE;
        tmp_with_2__indicator = tmp_assign_source_76;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        CHECK_OBJECT(var_func);
        tmp_dircall_arg1_2 = var_func;
        CHECK_OBJECT(var_args);
        tmp_dircall_arg2_2 = var_args;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_assign_source_77 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_32;
        }
        {
            PyObject *old = var_outputs;
            var_outputs = tmp_assign_source_77;
            Py_XDECREF(old);
        }

    }
    goto try_end_14;
    // Exception handler code:
    try_except_handler_32:;
    exception_keeper_type_24 = exception_type;
    exception_keeper_value_24 = exception_value;
    exception_keeper_tb_24 = exception_tb;
    exception_keeper_lineno_24 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 2.
    exception_preserved_2 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_24 == NULL) {
        exception_keeper_tb_24 = MAKE_TRACEBACK(frame_a9896e06fd4535a0a62329d089d9f077, exception_keeper_lineno_24);
    } else if (exception_keeper_lineno_24 != 0) {
        exception_keeper_tb_24 = ADD_TRACEBACK(exception_keeper_tb_24, frame_a9896e06fd4535a0a62329d089d9f077, exception_keeper_lineno_24);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_24, &exception_keeper_value_24, &exception_keeper_tb_24);
    // Tried code:
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        tmp_cmp_expr_left_7 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_7 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_12 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_12 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        nuitka_bool tmp_assign_source_78;
        tmp_assign_source_78 = NUITKA_BOOL_FALSE;
        tmp_with_2__indicator = tmp_assign_source_78;
    }
    {
        bool tmp_condition_result_13;
        PyObject *tmp_operand_value_6;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_13 = tmp_with_2__exit;
        tmp_args_element_value_13 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_14 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_15 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 279;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15};
            tmp_operand_value_6 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_13, call_args);
        }

        if (tmp_operand_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_6);
        Py_DECREF(tmp_operand_value_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_33;
        }
        tmp_condition_result_13 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_13 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 279;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a9896e06fd4535a0a62329d089d9f077->m_frame) frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooboooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 278;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a9896e06fd4535a0a62329d089d9f077->m_frame) frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooboooooooooooooooooooooooooooooo";
    goto try_except_handler_33;
    branch_end_10:;
    goto try_end_15;
    // Exception handler code:
    try_except_handler_33:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    // Re-raise.
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto try_except_handler_31;
    // End of try:
    try_end_15:;
    // Restore previous exception id 2.
    SET_CURRENT_EXCEPTION(&exception_preserved_2);

    goto try_end_14;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_14:;
    goto try_end_16;
    // Exception handler code:
    try_except_handler_31:;
    exception_keeper_type_26 = exception_type;
    exception_keeper_value_26 = exception_value;
    exception_keeper_tb_26 = exception_tb;
    exception_keeper_lineno_26 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_14;
        nuitka_bool tmp_cmp_expr_left_8;
        nuitka_bool tmp_cmp_expr_right_8;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_8 = tmp_with_2__indicator;
        tmp_cmp_expr_right_8 = NUITKA_BOOL_TRUE;
        tmp_condition_result_14 = (tmp_cmp_expr_left_8 == tmp_cmp_expr_right_8) ? true : false;
        if (tmp_condition_result_14 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_call_result_5;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_14 = tmp_with_2__exit;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 279;
        tmp_call_result_5 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_14, mod_consts[51]);

        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_26);
            Py_XDECREF(exception_keeper_value_26);
            Py_XDECREF(exception_keeper_tb_26);

            exception_lineno = 279;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_12:;
    // Re-raise.
    exception_type = exception_keeper_type_26;
    exception_value = exception_keeper_value_26;
    exception_tb = exception_keeper_tb_26;
    exception_lineno = exception_keeper_lineno_26;

    goto try_except_handler_30;
    // End of try:
    try_end_16:;
    {
        bool tmp_condition_result_15;
        nuitka_bool tmp_cmp_expr_left_9;
        nuitka_bool tmp_cmp_expr_right_9;
        assert(tmp_with_2__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_9 = tmp_with_2__indicator;
        tmp_cmp_expr_right_9 = NUITKA_BOOL_TRUE;
        tmp_condition_result_15 = (tmp_cmp_expr_left_9 == tmp_cmp_expr_right_9) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_13;
        } else {
            goto branch_no_13;
        }
    }
    branch_yes_13:;
    {
        PyObject *tmp_called_value_15;
        PyObject *tmp_call_result_6;
        CHECK_OBJECT(tmp_with_2__exit);
        tmp_called_value_15 = tmp_with_2__exit;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 279;
        tmp_call_result_6 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_15, mod_consts[51]);

        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_30;
        }
        Py_DECREF(tmp_call_result_6);
    }
    branch_no_13:;
    goto try_end_17;
    // Exception handler code:
    try_except_handler_30:;
    exception_keeper_type_27 = exception_type;
    exception_keeper_value_27 = exception_value;
    exception_keeper_tb_27 = exception_tb;
    exception_keeper_lineno_27 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    Py_XDECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_27;
    exception_value = exception_keeper_value_27;
    exception_tb = exception_keeper_tb_27;
    exception_lineno = exception_keeper_lineno_27;

    goto try_except_handler_27;
    // End of try:
    try_end_17:;
    CHECK_OBJECT(tmp_with_2__source);
    Py_DECREF(tmp_with_2__source);
    tmp_with_2__source = NULL;
    CHECK_OBJECT(tmp_with_2__enter);
    Py_DECREF(tmp_with_2__enter);
    tmp_with_2__enter = NULL;
    Py_XDECREF(tmp_with_2__exit);
    tmp_with_2__exit = NULL;
    {
        nuitka_bool tmp_condition_result_16;
        PyObject *tmp_isinstance_inst_5;
        PyObject *tmp_isinstance_cls_5;
        PyObject *tmp_expression_value_26;
        if (var_outputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 282;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_isinstance_inst_5 = var_outputs;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_isinstance_cls_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[44]);
        if (tmp_isinstance_cls_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
        Py_DECREF(tmp_isinstance_cls_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        tmp_condition_result_16 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
            goto branch_yes_14;
        } else {
            goto branch_no_14;
        }
    }
    branch_yes_14:;
    {
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_call_result_7;
        if (var_per_callable_output_was_tensor == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 283;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_expression_value_27 = var_per_callable_output_was_tensor;
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[56]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 283;
        tmp_call_result_7 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[57]);

        Py_DECREF(tmp_called_value_16);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_7);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_tuple_element_4;
        if (var_outputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 284;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_tuple_element_4 = var_outputs;
        tmp_assign_source_79 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_79, 0, tmp_tuple_element_4);
        {
            PyObject *old = var_outputs;
            var_outputs = tmp_assign_source_79;
            Py_XDECREF(old);
        }

    }
    goto branch_end_14;
    branch_no_14:;
    {
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_8;
        if (var_per_callable_output_was_tensor == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 286;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_expression_value_28 = var_per_callable_output_was_tensor;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[56]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 286;
        tmp_call_result_8 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_17, mod_consts[58]);

        Py_DECREF(tmp_called_value_17);
        if (tmp_call_result_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_8);
    }
    branch_end_14:;
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_call_result_9;
        PyObject *tmp_args_element_value_16;
        if (var_per_callable_static_outputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 288;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_expression_value_29 = var_per_callable_static_outputs;
        tmp_called_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[56]);
        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        if (var_outputs == NULL) {
            Py_DECREF(tmp_called_value_18);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[49]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 288;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }

        tmp_args_element_value_16 = var_outputs;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 288;
        tmp_call_result_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_18, tmp_args_element_value_16);
        Py_DECREF(tmp_called_value_18);
        if (tmp_call_result_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_27;
        }
        Py_DECREF(tmp_call_result_9);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 275;
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_27;
    }
    goto loop_start_9;
    loop_end_9:;
    goto try_end_18;
    // Exception handler code:
    try_except_handler_27:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
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
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_18:;
    Py_XDECREF(tmp_for_loop_4__iter_value);
    tmp_for_loop_4__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_4__for_iterator);
    Py_DECREF(tmp_for_loop_4__for_iterator);
    tmp_for_loop_4__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_80;
        tmp_assign_source_80 = MAKE_LIST_EMPTY(0);
        assert(var_per_callable_static_grad_outputs == NULL);
        var_per_callable_static_grad_outputs = tmp_assign_source_80;
    }
    {
        PyObject *tmp_assign_source_81;
        tmp_assign_source_81 = MAKE_LIST_EMPTY(0);
        assert(var_per_callable_static_grad_inputs == NULL);
        var_per_callable_static_grad_inputs = tmp_assign_source_81;
    }
    {
        PyObject *tmp_assign_source_82;
        PyObject *tmp_iter_arg_17;
        PyObject *tmp_called_value_19;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_called_value_20;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_called_value_21;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_called_value_22;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_called_value_23;
        PyObject *tmp_args_element_value_24;
        tmp_called_value_19 = (PyObject *)&PyZip_Type;
        tmp_called_value_20 = (PyObject *)&PyReversed_Type;
        CHECK_OBJECT(var_per_callable_static_input_surfaces);
        tmp_args_element_value_18 = var_per_callable_static_input_surfaces;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 294;
        tmp_args_element_value_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_20, tmp_args_element_value_18);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_21 = (PyObject *)&PyReversed_Type;
        if (var_per_callable_static_outputs == NULL) {
            Py_DECREF(tmp_args_element_value_17);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 295;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_20 = var_per_callable_static_outputs;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 295;
        tmp_args_element_value_19 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_21, tmp_args_element_value_20);
        if (tmp_args_element_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_17);

            exception_lineno = 295;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_22 = (PyObject *)&PyReversed_Type;
        CHECK_OBJECT(var_bwd_graphs);
        tmp_args_element_value_22 = var_bwd_graphs;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 296;
        tmp_args_element_value_21 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_22, tmp_args_element_value_22);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_19);

            exception_lineno = 296;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_23 = (PyObject *)&PyReversed_Type;
        CHECK_OBJECT(var_per_callable_module_params);
        tmp_args_element_value_24 = var_per_callable_module_params;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 297;
        tmp_args_element_value_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_23, tmp_args_element_value_24);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_17);
            Py_DECREF(tmp_args_element_value_19);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 297;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 294;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_19, tmp_args_element_value_21, tmp_args_element_value_23};
            tmp_iter_arg_17 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_19, call_args);
        }

        Py_DECREF(tmp_args_element_value_17);
        Py_DECREF(tmp_args_element_value_19);
        Py_DECREF(tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_iter_arg_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_82 = MAKE_ITERATOR(tmp_iter_arg_17);
        Py_DECREF(tmp_iter_arg_17);
        if (tmp_assign_source_82 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_5__for_iterator == NULL);
        tmp_for_loop_5__for_iterator = tmp_assign_source_82;
    }
    // Tried code:
    loop_start_10:;
    {
        PyObject *tmp_next_source_10;
        PyObject *tmp_assign_source_83;
        CHECK_OBJECT(tmp_for_loop_5__for_iterator);
        tmp_next_source_10 = tmp_for_loop_5__for_iterator;
        tmp_assign_source_83 = ITERATOR_NEXT(tmp_next_source_10);
        if (tmp_assign_source_83 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_10;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                exception_lineno = 293;
                goto try_except_handler_34;
            }
        }

        {
            PyObject *old = tmp_for_loop_5__iter_value;
            tmp_for_loop_5__iter_value = tmp_assign_source_83;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_84;
        PyObject *tmp_iter_arg_18;
        CHECK_OBJECT(tmp_for_loop_5__iter_value);
        tmp_iter_arg_18 = tmp_for_loop_5__iter_value;
        tmp_assign_source_84 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_18);
        if (tmp_assign_source_84 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_35;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__source_iter;
            tmp_tuple_unpack_4__source_iter = tmp_assign_source_84;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_85;
        PyObject *tmp_unpack_9;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_9 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_85 = UNPACK_NEXT(tmp_unpack_9, 0, 4);
        if (tmp_assign_source_85 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 293;
            goto try_except_handler_36;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_1;
            tmp_tuple_unpack_4__element_1 = tmp_assign_source_85;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_86;
        PyObject *tmp_unpack_10;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_10 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_86 = UNPACK_NEXT(tmp_unpack_10, 1, 4);
        if (tmp_assign_source_86 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 293;
            goto try_except_handler_36;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_2;
            tmp_tuple_unpack_4__element_2 = tmp_assign_source_86;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_87;
        PyObject *tmp_unpack_11;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_11 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_87 = UNPACK_NEXT(tmp_unpack_11, 2, 4);
        if (tmp_assign_source_87 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 293;
            goto try_except_handler_36;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_3;
            tmp_tuple_unpack_4__element_3 = tmp_assign_source_87;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_88;
        PyObject *tmp_unpack_12;
        CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
        tmp_unpack_12 = tmp_tuple_unpack_4__source_iter;
        tmp_assign_source_88 = UNPACK_NEXT(tmp_unpack_12, 3, 4);
        if (tmp_assign_source_88 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 293;
            goto try_except_handler_36;
        }
        {
            PyObject *old = tmp_tuple_unpack_4__element_4;
            tmp_tuple_unpack_4__element_4 = tmp_assign_source_88;
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

                    type_description_1 = "ooboooooooooooooooooooooooooooooo";
                    exception_lineno = 293;
                    goto try_except_handler_36;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[60];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 293;
            goto try_except_handler_36;
        }
    }
    goto try_end_19;
    // Exception handler code:
    try_except_handler_36:;
    exception_keeper_type_29 = exception_type;
    exception_keeper_value_29 = exception_value;
    exception_keeper_tb_29 = exception_tb;
    exception_keeper_lineno_29 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_29;
    exception_value = exception_keeper_value_29;
    exception_tb = exception_keeper_tb_29;
    exception_lineno = exception_keeper_lineno_29;

    goto try_except_handler_35;
    // End of try:
    try_end_19:;
    goto try_end_20;
    // Exception handler code:
    try_except_handler_35:;
    exception_keeper_type_30 = exception_type;
    exception_keeper_value_30 = exception_value;
    exception_keeper_tb_30 = exception_tb;
    exception_keeper_lineno_30 = exception_lineno;
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
    Py_XDECREF(tmp_tuple_unpack_4__element_4);
    tmp_tuple_unpack_4__element_4 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_30;
    exception_value = exception_keeper_value_30;
    exception_tb = exception_keeper_tb_30;
    exception_lineno = exception_keeper_lineno_30;

    goto try_except_handler_34;
    // End of try:
    try_end_20:;
    CHECK_OBJECT(tmp_tuple_unpack_4__source_iter);
    Py_DECREF(tmp_tuple_unpack_4__source_iter);
    tmp_tuple_unpack_4__source_iter = NULL;
    {
        PyObject *tmp_assign_source_89;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_1);
        tmp_assign_source_89 = tmp_tuple_unpack_4__element_1;
        {
            PyObject *old = var_static_input_surface;
            var_static_input_surface = tmp_assign_source_89;
            Py_INCREF(var_static_input_surface);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_1);
    tmp_tuple_unpack_4__element_1 = NULL;

    {
        PyObject *tmp_assign_source_90;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_2);
        tmp_assign_source_90 = tmp_tuple_unpack_4__element_2;
        {
            PyObject *old = var_static_outputs;
            var_static_outputs = tmp_assign_source_90;
            Py_INCREF(var_static_outputs);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_2);
    tmp_tuple_unpack_4__element_2 = NULL;

    {
        PyObject *tmp_assign_source_91;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_3);
        tmp_assign_source_91 = tmp_tuple_unpack_4__element_3;
        {
            PyObject *old = var_bwd_graph;
            var_bwd_graph = tmp_assign_source_91;
            Py_INCREF(var_bwd_graph);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_3);
    tmp_tuple_unpack_4__element_3 = NULL;

    {
        PyObject *tmp_assign_source_92;
        CHECK_OBJECT(tmp_tuple_unpack_4__element_4);
        tmp_assign_source_92 = tmp_tuple_unpack_4__element_4;
        {
            PyObject *old = var_module_params;
            var_module_params = tmp_assign_source_92;
            Py_INCREF(var_module_params);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_4__element_4);
    tmp_tuple_unpack_4__element_4 = NULL;

    {
        bool tmp_condition_result_17;
        PyObject *tmp_operand_value_7;
        PyObject *tmp_all_arg_3;
        {
            PyObject *tmp_assign_source_93;
            PyObject *tmp_iter_arg_19;
            CHECK_OBJECT(var_static_outputs);
            tmp_iter_arg_19 = var_static_outputs;
            tmp_assign_source_93 = MAKE_ITERATOR(tmp_iter_arg_19);
            if (tmp_assign_source_93 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 300;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_34;
            }
            {
                PyObject *old = tmp_genexpr_5__$0;
                tmp_genexpr_5__$0 = tmp_assign_source_93;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_5[1];

            tmp_closure_5[0] = Nuitka_Cell_New0(tmp_genexpr_5__$0);

            tmp_all_arg_3 = MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__5_genexpr(tmp_closure_5);

            goto try_return_handler_37;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_37:;
        CHECK_OBJECT(tmp_genexpr_5__$0);
        Py_DECREF(tmp_genexpr_5__$0);
        tmp_genexpr_5__$0 = NULL;
        goto outline_result_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_10:;
        tmp_operand_value_7 = BUILTIN_ALL(tmp_all_arg_3);
        Py_DECREF(tmp_all_arg_3);
        if (tmp_operand_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 300;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_7);
        Py_DECREF(tmp_operand_value_7);
        assert(!(tmp_res == -1));
        tmp_condition_result_17 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_17 != false) {
            goto branch_yes_15;
        } else {
            goto branch_no_15;
        }
    }
    branch_yes_15:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        tmp_raise_type_4 = PyExc_AssertionError;
        tmp_raise_value_4 = mod_consts[61];
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        Py_INCREF(tmp_raise_value_4);
        exception_lineno = 300;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_34;
    }
    branch_no_15:;
    {
        PyObject *tmp_assign_source_94;
        PyObject *tmp_tuple_arg_4;
        {
            PyObject *tmp_assign_source_95;
            PyObject *tmp_iter_arg_20;
            CHECK_OBJECT(var_static_outputs);
            tmp_iter_arg_20 = var_static_outputs;
            tmp_assign_source_95 = MAKE_ITERATOR(tmp_iter_arg_20);
            if (tmp_assign_source_95 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 301;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_34;
            }
            {
                PyObject *old = tmp_genexpr_6__$0;
                tmp_genexpr_6__$0 = tmp_assign_source_95;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_6[1];

            tmp_closure_6[0] = Nuitka_Cell_New0(tmp_genexpr_6__$0);

            tmp_tuple_arg_4 = MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__6_genexpr(tmp_closure_6);

            goto try_return_handler_38;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_38:;
        CHECK_OBJECT(tmp_genexpr_6__$0);
        Py_DECREF(tmp_genexpr_6__$0);
        tmp_genexpr_6__$0 = NULL;
        goto outline_result_11;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_11:;
        tmp_assign_source_94 = PySequence_Tuple(tmp_tuple_arg_4);
        Py_DECREF(tmp_tuple_arg_4);
        if (tmp_assign_source_94 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 301;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        {
            PyObject *old = var_static_grad_outputs;
            var_static_grad_outputs = tmp_assign_source_94;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_96;
        PyObject *tmp_called_value_24;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_expression_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[17]);
        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        tmp_called_value_24 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[52]);
        Py_DECREF(tmp_expression_value_30);
        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        CHECK_OBJECT(var_bwd_graph);
        tmp_kw_call_arg_value_0_2 = var_bwd_graph;
        if (var_mempool == NULL) {
            Py_DECREF(tmp_called_value_24);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[53]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 303;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }

        tmp_kw_call_dict_value_0_2 = var_mempool;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 303;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_96 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_24, args, kw_values, mod_consts[54]);
        }

        Py_DECREF(tmp_called_value_24);
        if (tmp_assign_source_96 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        {
            PyObject *old = tmp_with_3__source;
            tmp_with_3__source = tmp_assign_source_96;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_97;
        PyObject *tmp_called_value_25;
        PyObject *tmp_expression_value_32;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_value_32 = tmp_with_3__source;
        tmp_called_value_25 = LOOKUP_SPECIAL(tmp_expression_value_32, mod_consts[28]);
        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 303;
        tmp_assign_source_97 = CALL_FUNCTION_NO_ARGS(tmp_called_value_25);
        Py_DECREF(tmp_called_value_25);
        if (tmp_assign_source_97 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        {
            PyObject *old = tmp_with_3__enter;
            tmp_with_3__enter = tmp_assign_source_97;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_98;
        PyObject *tmp_expression_value_33;
        CHECK_OBJECT(tmp_with_3__source);
        tmp_expression_value_33 = tmp_with_3__source;
        tmp_assign_source_98 = LOOKUP_SPECIAL(tmp_expression_value_33, mod_consts[29]);
        if (tmp_assign_source_98 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 303;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        {
            PyObject *old = tmp_with_3__exit;
            tmp_with_3__exit = tmp_assign_source_98;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_assign_source_99;
        tmp_assign_source_99 = NUITKA_BOOL_TRUE;
        tmp_with_3__indicator = tmp_assign_source_99;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_100;
        PyObject *tmp_called_value_26;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_expression_value_35;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_tuple_arg_5;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_4_2;
        tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_35 == NULL)) {
            tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_41;
        }
        tmp_expression_value_34 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[45]);
        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_41;
        }
        tmp_called_value_26 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[46]);
        Py_DECREF(tmp_expression_value_34);
        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_41;
        }
        CHECK_OBJECT(var_static_outputs);
        tmp_kw_call_value_0_2 = var_static_outputs;
        {
            PyObject *tmp_assign_source_101;
            PyObject *tmp_iter_arg_21;
            CHECK_OBJECT(var_static_input_surface);
            tmp_iter_arg_21 = var_static_input_surface;
            tmp_assign_source_101 = MAKE_ITERATOR(tmp_iter_arg_21);
            if (tmp_assign_source_101 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 305;
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                goto try_except_handler_41;
            }
            {
                PyObject *old = tmp_genexpr_7__$0;
                tmp_genexpr_7__$0 = tmp_assign_source_101;
                Py_XDECREF(old);
            }

        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_7[1];

            tmp_closure_7[0] = Nuitka_Cell_New0(tmp_genexpr_7__$0);

            tmp_tuple_arg_5 = MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__7_genexpr(tmp_closure_7);

            goto try_return_handler_42;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_42:;
        CHECK_OBJECT(tmp_genexpr_7__$0);
        Py_DECREF(tmp_genexpr_7__$0);
        tmp_genexpr_7__$0 = NULL;
        goto outline_result_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_12:;
        tmp_kw_call_value_1_2 = PySequence_Tuple(tmp_tuple_arg_5);
        Py_DECREF(tmp_tuple_arg_5);
        if (tmp_kw_call_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_26);

            exception_lineno = 305;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_41;
        }
        CHECK_OBJECT(var_static_grad_outputs);
        tmp_kw_call_value_2_2 = var_static_grad_outputs;
        tmp_kw_call_value_3_2 = Py_True;
        tmp_kw_call_value_4_2 = Py_False;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 304;
        {
            PyObject *kw_values[5] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2, tmp_kw_call_value_4_2};

            tmp_assign_source_100 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_26, kw_values, mod_consts[48]);
        }

        Py_DECREF(tmp_called_value_26);
        Py_DECREF(tmp_kw_call_value_1_2);
        if (tmp_assign_source_100 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 304;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_41;
        }
        {
            PyObject *old = var_grad_inputs;
            var_grad_inputs = tmp_assign_source_100;
            Py_XDECREF(old);
        }

    }
    goto try_end_21;
    // Exception handler code:
    try_except_handler_41:;
    exception_keeper_type_31 = exception_type;
    exception_keeper_value_31 = exception_value;
    exception_keeper_tb_31 = exception_tb;
    exception_keeper_lineno_31 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Preserve existing published exception id 3.
    exception_preserved_3 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_31 == NULL) {
        exception_keeper_tb_31 = MAKE_TRACEBACK(frame_a9896e06fd4535a0a62329d089d9f077, exception_keeper_lineno_31);
    } else if (exception_keeper_lineno_31 != 0) {
        exception_keeper_tb_31 = ADD_TRACEBACK(exception_keeper_tb_31, frame_a9896e06fd4535a0a62329d089d9f077, exception_keeper_lineno_31);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_31, &exception_keeper_value_31, &exception_keeper_tb_31);
    // Tried code:
    {
        bool tmp_condition_result_18;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        tmp_cmp_expr_left_10 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_10 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        assert(!(tmp_res == -1));
        tmp_condition_result_18 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_18 != false) {
            goto branch_yes_16;
        } else {
            goto branch_no_16;
        }
    }
    branch_yes_16:;
    {
        nuitka_bool tmp_assign_source_102;
        tmp_assign_source_102 = NUITKA_BOOL_FALSE;
        tmp_with_3__indicator = tmp_assign_source_102;
    }
    {
        bool tmp_condition_result_19;
        PyObject *tmp_operand_value_8;
        PyObject *tmp_called_value_27;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_27 = tmp_with_3__exit;
        tmp_args_element_value_25 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_26 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_27 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 308;
        {
            PyObject *call_args[] = {tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27};
            tmp_operand_value_8 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_27, call_args);
        }

        if (tmp_operand_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_8);
        Py_DECREF(tmp_operand_value_8);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_43;
        }
        tmp_condition_result_19 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_19 != false) {
            goto branch_yes_17;
        } else {
            goto branch_no_17;
        }
    }
    branch_yes_17:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 308;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a9896e06fd4535a0a62329d089d9f077->m_frame) frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooboooooooooooooooooooooooooooooo";
    goto try_except_handler_43;
    branch_no_17:;
    goto branch_end_16;
    branch_no_16:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 303;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a9896e06fd4535a0a62329d089d9f077->m_frame) frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooboooooooooooooooooooooooooooooo";
    goto try_except_handler_43;
    branch_end_16:;
    goto try_end_22;
    // Exception handler code:
    try_except_handler_43:;
    exception_keeper_type_32 = exception_type;
    exception_keeper_value_32 = exception_value;
    exception_keeper_tb_32 = exception_tb;
    exception_keeper_lineno_32 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    // Re-raise.
    exception_type = exception_keeper_type_32;
    exception_value = exception_keeper_value_32;
    exception_tb = exception_keeper_tb_32;
    exception_lineno = exception_keeper_lineno_32;

    goto try_except_handler_40;
    // End of try:
    try_end_22:;
    // Restore previous exception id 3.
    SET_CURRENT_EXCEPTION(&exception_preserved_3);

    goto try_end_21;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_21:;
    goto try_end_23;
    // Exception handler code:
    try_except_handler_40:;
    exception_keeper_type_33 = exception_type;
    exception_keeper_value_33 = exception_value;
    exception_keeper_tb_33 = exception_tb;
    exception_keeper_lineno_33 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    {
        bool tmp_condition_result_20;
        nuitka_bool tmp_cmp_expr_left_11;
        nuitka_bool tmp_cmp_expr_right_11;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_11 = tmp_with_3__indicator;
        tmp_cmp_expr_right_11 = NUITKA_BOOL_TRUE;
        tmp_condition_result_20 = (tmp_cmp_expr_left_11 == tmp_cmp_expr_right_11) ? true : false;
        if (tmp_condition_result_20 != false) {
            goto branch_yes_18;
        } else {
            goto branch_no_18;
        }
    }
    branch_yes_18:;
    {
        PyObject *tmp_called_value_28;
        PyObject *tmp_call_result_10;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_28 = tmp_with_3__exit;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 308;
        tmp_call_result_10 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_28, mod_consts[51]);

        if (tmp_call_result_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_33);
            Py_XDECREF(exception_keeper_value_33);
            Py_XDECREF(exception_keeper_tb_33);

            exception_lineno = 308;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        Py_DECREF(tmp_call_result_10);
    }
    branch_no_18:;
    // Re-raise.
    exception_type = exception_keeper_type_33;
    exception_value = exception_keeper_value_33;
    exception_tb = exception_keeper_tb_33;
    exception_lineno = exception_keeper_lineno_33;

    goto try_except_handler_39;
    // End of try:
    try_end_23:;
    {
        bool tmp_condition_result_21;
        nuitka_bool tmp_cmp_expr_left_12;
        nuitka_bool tmp_cmp_expr_right_12;
        assert(tmp_with_3__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_12 = tmp_with_3__indicator;
        tmp_cmp_expr_right_12 = NUITKA_BOOL_TRUE;
        tmp_condition_result_21 = (tmp_cmp_expr_left_12 == tmp_cmp_expr_right_12) ? true : false;
        if (tmp_condition_result_21 != false) {
            goto branch_yes_19;
        } else {
            goto branch_no_19;
        }
    }
    branch_yes_19:;
    {
        PyObject *tmp_called_value_29;
        PyObject *tmp_call_result_11;
        CHECK_OBJECT(tmp_with_3__exit);
        tmp_called_value_29 = tmp_with_3__exit;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 308;
        tmp_call_result_11 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_29, mod_consts[51]);

        if (tmp_call_result_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 308;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_39;
        }
        Py_DECREF(tmp_call_result_11);
    }
    branch_no_19:;
    goto try_end_24;
    // Exception handler code:
    try_except_handler_39:;
    exception_keeper_type_34 = exception_type;
    exception_keeper_value_34 = exception_value;
    exception_keeper_tb_34 = exception_tb;
    exception_keeper_lineno_34 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    Py_XDECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_34;
    exception_value = exception_keeper_value_34;
    exception_tb = exception_keeper_tb_34;
    exception_lineno = exception_keeper_lineno_34;

    goto try_except_handler_34;
    // End of try:
    try_end_24:;
    CHECK_OBJECT(tmp_with_3__source);
    Py_DECREF(tmp_with_3__source);
    tmp_with_3__source = NULL;
    CHECK_OBJECT(tmp_with_3__enter);
    Py_DECREF(tmp_with_3__enter);
    tmp_with_3__enter = NULL;
    Py_XDECREF(tmp_with_3__exit);
    tmp_with_3__exit = NULL;
    {
        PyObject *tmp_assign_source_103;
        tmp_assign_source_103 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = var_static_grad_inputs;
            var_static_grad_inputs = tmp_assign_source_103;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_104;
        tmp_assign_source_104 = mod_consts[62];
        {
            PyObject *old = var_grad_idx;
            var_grad_idx = tmp_assign_source_104;
            Py_INCREF(var_grad_idx);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_105;
        PyObject *tmp_iter_arg_22;
        CHECK_OBJECT(var_static_input_surface);
        tmp_iter_arg_22 = var_static_input_surface;
        tmp_assign_source_105 = MAKE_ITERATOR(tmp_iter_arg_22);
        if (tmp_assign_source_105 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 315;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        {
            PyObject *old = tmp_for_loop_6__for_iterator;
            tmp_for_loop_6__for_iterator = tmp_assign_source_105;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_11:;
    {
        PyObject *tmp_next_source_11;
        PyObject *tmp_assign_source_106;
        CHECK_OBJECT(tmp_for_loop_6__for_iterator);
        tmp_next_source_11 = tmp_for_loop_6__for_iterator;
        tmp_assign_source_106 = ITERATOR_NEXT(tmp_next_source_11);
        if (tmp_assign_source_106 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_11;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                exception_lineno = 315;
                goto try_except_handler_44;
            }
        }

        {
            PyObject *old = tmp_for_loop_6__iter_value;
            tmp_for_loop_6__iter_value = tmp_assign_source_106;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_107;
        CHECK_OBJECT(tmp_for_loop_6__iter_value);
        tmp_assign_source_107 = tmp_for_loop_6__iter_value;
        {
            PyObject *old = var_arg;
            var_arg = tmp_assign_source_107;
            Py_INCREF(var_arg);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_22;
        PyObject *tmp_expression_value_36;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_arg);
        tmp_expression_value_36 = var_arg;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[63]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 316;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_condition_result_22 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_22 == NUITKA_BOOL_TRUE) {
            goto branch_yes_20;
        } else {
            goto branch_no_20;
        }
    }
    branch_yes_20:;
    {
        PyObject *tmp_called_value_30;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_call_result_12;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_subscript_value_3;
        if (var_static_grad_inputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 317;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }

        tmp_expression_value_37 = var_static_grad_inputs;
        tmp_called_value_30 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[56]);
        if (tmp_called_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        if (var_grad_inputs == NULL) {
            Py_DECREF(tmp_called_value_30);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[50]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 317;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }

        tmp_expression_value_38 = var_grad_inputs;
        if (var_grad_idx == NULL) {
            Py_DECREF(tmp_called_value_30);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 317;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }

        tmp_subscript_value_3 = var_grad_idx;
        tmp_args_element_value_28 = LOOKUP_SUBSCRIPT(tmp_expression_value_38, tmp_subscript_value_3);
        if (tmp_args_element_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_30);

            exception_lineno = 317;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 317;
        tmp_call_result_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_30, tmp_args_element_value_28);
        Py_DECREF(tmp_called_value_30);
        Py_DECREF(tmp_args_element_value_28);
        if (tmp_call_result_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        Py_DECREF(tmp_call_result_12);
    }
    {
        PyObject *tmp_assign_source_108;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_grad_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 318;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }

        tmp_iadd_expr_left_1 = var_grad_idx;
        tmp_iadd_expr_right_1 = mod_consts[66];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        tmp_assign_source_108 = tmp_iadd_expr_left_1;
        var_grad_idx = tmp_assign_source_108;

    }
    goto branch_end_20;
    branch_no_20:;
    {
        PyObject *tmp_called_value_31;
        PyObject *tmp_expression_value_39;
        PyObject *tmp_call_result_13;
        if (var_static_grad_inputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 320;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }

        tmp_expression_value_39 = var_static_grad_inputs;
        tmp_called_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[56]);
        if (tmp_called_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 320;
        tmp_call_result_13 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_31, mod_consts[67]);

        Py_DECREF(tmp_called_value_31);
        if (tmp_call_result_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 320;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_44;
        }
        Py_DECREF(tmp_call_result_13);
    }
    branch_end_20:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 315;
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_44;
    }
    goto loop_start_11;
    loop_end_11:;
    goto try_end_25;
    // Exception handler code:
    try_except_handler_44:;
    exception_keeper_type_35 = exception_type;
    exception_keeper_value_35 = exception_value;
    exception_keeper_tb_35 = exception_tb;
    exception_keeper_lineno_35 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_35;
    exception_value = exception_keeper_value_35;
    exception_tb = exception_keeper_tb_35;
    exception_lineno = exception_keeper_lineno_35;

    goto try_except_handler_34;
    // End of try:
    try_end_25:;
    Py_XDECREF(tmp_for_loop_6__iter_value);
    tmp_for_loop_6__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_6__for_iterator);
    Py_DECREF(tmp_for_loop_6__for_iterator);
    tmp_for_loop_6__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_109;
        PyObject *tmp_tuple_arg_6;
        if (var_static_grad_inputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 321;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }

        tmp_tuple_arg_6 = var_static_grad_inputs;
        tmp_assign_source_109 = PySequence_Tuple(tmp_tuple_arg_6);
        if (tmp_assign_source_109 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        {
            PyObject *old = var_static_grad_inputs;
            var_static_grad_inputs = tmp_assign_source_109;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_32;
        PyObject *tmp_expression_value_40;
        PyObject *tmp_call_result_14;
        PyObject *tmp_args_element_value_29;
        if (var_per_callable_static_grad_outputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 323;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }

        tmp_expression_value_40 = var_per_callable_static_grad_outputs;
        tmp_called_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_40, mod_consts[56]);
        if (tmp_called_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        CHECK_OBJECT(var_static_grad_outputs);
        tmp_args_element_value_29 = var_static_grad_outputs;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 323;
        tmp_call_result_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_32, tmp_args_element_value_29);
        Py_DECREF(tmp_called_value_32);
        if (tmp_call_result_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        Py_DECREF(tmp_call_result_14);
    }
    {
        PyObject *tmp_called_value_33;
        PyObject *tmp_expression_value_41;
        PyObject *tmp_call_result_15;
        PyObject *tmp_args_element_value_30;
        if (var_per_callable_static_grad_inputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 324;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }

        tmp_expression_value_41 = var_per_callable_static_grad_inputs;
        tmp_called_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_41, mod_consts[56]);
        if (tmp_called_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        CHECK_OBJECT(var_static_grad_inputs);
        tmp_args_element_value_30 = var_static_grad_inputs;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 324;
        tmp_call_result_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_33, tmp_args_element_value_30);
        Py_DECREF(tmp_called_value_33);
        if (tmp_call_result_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 324;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_34;
        }
        Py_DECREF(tmp_call_result_15);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 293;
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_34;
    }
    goto loop_start_10;
    loop_end_10:;
    goto try_end_26;
    // Exception handler code:
    try_except_handler_34:;
    exception_keeper_type_36 = exception_type;
    exception_keeper_value_36 = exception_value;
    exception_keeper_tb_36 = exception_tb;
    exception_keeper_lineno_36 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_36;
    exception_value = exception_keeper_value_36;
    exception_tb = exception_keeper_tb_36;
    exception_lineno = exception_keeper_lineno_36;

    goto frame_exception_exit_1;
    // End of try:
    try_end_26:;
    Py_XDECREF(tmp_for_loop_5__iter_value);
    tmp_for_loop_5__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_5__for_iterator);
    Py_DECREF(tmp_for_loop_5__for_iterator);
    tmp_for_loop_5__for_iterator = NULL;
    {
        PyObject *tmp_assign_source_110;
        PyObject *tmp_list_arg_1;
        PyObject *tmp_called_value_34;
        PyObject *tmp_args_element_value_31;
        tmp_called_value_34 = (PyObject *)&PyReversed_Type;
        if (var_per_callable_static_grad_outputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[68]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_31 = var_per_callable_static_grad_outputs;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 327;
        tmp_list_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_34, tmp_args_element_value_31);
        if (tmp_list_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_110 = MAKE_LIST(tmp_list_arg_1);
        Py_DECREF(tmp_list_arg_1);
        if (tmp_assign_source_110 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_per_callable_static_grad_outputs;
            var_per_callable_static_grad_outputs = tmp_assign_source_110;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_111;
        PyObject *tmp_list_arg_2;
        PyObject *tmp_called_value_35;
        PyObject *tmp_args_element_value_32;
        tmp_called_value_35 = (PyObject *)&PyReversed_Type;
        if (var_per_callable_static_grad_inputs == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[69]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 328;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_32 = var_per_callable_static_grad_inputs;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 328;
        tmp_list_arg_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_35, tmp_args_element_value_32);
        if (tmp_list_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_111 = MAKE_LIST(tmp_list_arg_2);
        Py_DECREF(tmp_list_arg_2);
        if (tmp_assign_source_111 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 328;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_per_callable_static_grad_inputs;
            var_per_callable_static_grad_inputs = tmp_assign_source_111;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_112;


        tmp_assign_source_112 = MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function();

        assert(var_make_graphed_autograd_function == NULL);
        var_make_graphed_autograd_function = tmp_assign_source_112;
    }
    {
        PyObject *tmp_assign_source_113;
        tmp_assign_source_113 = MAKE_LIST_EMPTY(0);
        assert(var_ret == NULL);
        var_ret = tmp_assign_source_113;
    }
    {
        PyObject *tmp_assign_source_114;
        PyObject *tmp_iter_arg_23;
        PyObject *tmp_called_value_36;
        PyObject *tmp_args_element_value_33;
        tmp_called_value_36 = (PyObject *)&PyEnum_Type;
        CHECK_OBJECT(par_callables);
        tmp_args_element_value_33 = par_callables;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 379;
        tmp_iter_arg_23 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_36, tmp_args_element_value_33);
        if (tmp_iter_arg_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_114 = MAKE_ITERATOR(tmp_iter_arg_23);
        Py_DECREF(tmp_iter_arg_23);
        if (tmp_assign_source_114 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_7__for_iterator == NULL);
        tmp_for_loop_7__for_iterator = tmp_assign_source_114;
    }
    // Tried code:
    loop_start_12:;
    {
        PyObject *tmp_next_source_12;
        PyObject *tmp_assign_source_115;
        CHECK_OBJECT(tmp_for_loop_7__for_iterator);
        tmp_next_source_12 = tmp_for_loop_7__for_iterator;
        tmp_assign_source_115 = ITERATOR_NEXT(tmp_next_source_12);
        if (tmp_assign_source_115 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_12;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "ooboooooooooooooooooooooooooooooo";
                exception_lineno = 379;
                goto try_except_handler_45;
            }
        }

        {
            PyObject *old = tmp_for_loop_7__iter_value;
            tmp_for_loop_7__iter_value = tmp_assign_source_115;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_116;
        PyObject *tmp_iter_arg_24;
        CHECK_OBJECT(tmp_for_loop_7__iter_value);
        tmp_iter_arg_24 = tmp_for_loop_7__iter_value;
        tmp_assign_source_116 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_24);
        if (tmp_assign_source_116 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_46;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__source_iter;
            tmp_tuple_unpack_5__source_iter = tmp_assign_source_116;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_117;
        PyObject *tmp_unpack_13;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_13 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_117 = UNPACK_NEXT(tmp_unpack_13, 0, 2);
        if (tmp_assign_source_117 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 379;
            goto try_except_handler_47;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_1;
            tmp_tuple_unpack_5__element_1 = tmp_assign_source_117;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_118;
        PyObject *tmp_unpack_14;
        CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
        tmp_unpack_14 = tmp_tuple_unpack_5__source_iter;
        tmp_assign_source_118 = UNPACK_NEXT(tmp_unpack_14, 1, 2);
        if (tmp_assign_source_118 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 379;
            goto try_except_handler_47;
        }
        {
            PyObject *old = tmp_tuple_unpack_5__element_2;
            tmp_tuple_unpack_5__element_2 = tmp_assign_source_118;
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

                    type_description_1 = "ooboooooooooooooooooooooooooooooo";
                    exception_lineno = 379;
                    goto try_except_handler_47;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[30];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            exception_lineno = 379;
            goto try_except_handler_47;
        }
    }
    goto try_end_27;
    // Exception handler code:
    try_except_handler_47:;
    exception_keeper_type_37 = exception_type;
    exception_keeper_value_37 = exception_value;
    exception_keeper_tb_37 = exception_tb;
    exception_keeper_lineno_37 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_37;
    exception_value = exception_keeper_value_37;
    exception_tb = exception_keeper_tb_37;
    exception_lineno = exception_keeper_lineno_37;

    goto try_except_handler_46;
    // End of try:
    try_end_27:;
    goto try_end_28;
    // Exception handler code:
    try_except_handler_46:;
    exception_keeper_type_38 = exception_type;
    exception_keeper_value_38 = exception_value;
    exception_keeper_tb_38 = exception_tb;
    exception_keeper_lineno_38 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_38;
    exception_value = exception_keeper_value_38;
    exception_tb = exception_keeper_tb_38;
    exception_lineno = exception_keeper_lineno_38;

    goto try_except_handler_45;
    // End of try:
    try_end_28:;
    CHECK_OBJECT(tmp_tuple_unpack_5__source_iter);
    Py_DECREF(tmp_tuple_unpack_5__source_iter);
    tmp_tuple_unpack_5__source_iter = NULL;
    {
        PyObject *tmp_assign_source_119;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_1);
        tmp_assign_source_119 = tmp_tuple_unpack_5__element_1;
        {
            PyObject *old = var_i;
            var_i = tmp_assign_source_119;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_1);
    tmp_tuple_unpack_5__element_1 = NULL;

    {
        PyObject *tmp_assign_source_120;
        CHECK_OBJECT(tmp_tuple_unpack_5__element_2);
        tmp_assign_source_120 = tmp_tuple_unpack_5__element_2;
        {
            PyObject *old = var_func;
            var_func = tmp_assign_source_120;
            Py_INCREF(var_func);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_5__element_2);
    tmp_tuple_unpack_5__element_2 = NULL;

    {
        PyObject *tmp_assign_source_121;
        PyObject *tmp_called_value_37;
        PyObject *tmp_args_element_value_34;
        PyObject *tmp_expression_value_42;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_args_element_value_35;
        PyObject *tmp_expression_value_43;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_args_element_value_36;
        PyObject *tmp_expression_value_44;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_args_element_value_37;
        PyObject *tmp_expression_value_45;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_args_element_value_38;
        PyObject *tmp_expression_value_46;
        PyObject *tmp_subscript_value_8;
        PyObject *tmp_args_element_value_39;
        PyObject *tmp_expression_value_47;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_args_element_value_40;
        PyObject *tmp_expression_value_48;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_args_element_value_41;
        PyObject *tmp_expression_value_49;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_args_element_value_42;
        PyObject *tmp_expression_value_50;
        PyObject *tmp_subscript_value_12;
        if (var_make_graphed_autograd_function == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[70]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 380;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }

        tmp_called_value_37 = var_make_graphed_autograd_function;
        CHECK_OBJECT(var_fwd_graphs);
        tmp_expression_value_42 = var_fwd_graphs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_args_element_value_34 = LOOKUP_SUBSCRIPT(tmp_expression_value_42, tmp_subscript_value_4);
        if (tmp_args_element_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        CHECK_OBJECT(var_bwd_graphs);
        tmp_expression_value_43 = var_bwd_graphs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_5 = var_i;
        tmp_args_element_value_35 = LOOKUP_SUBSCRIPT(tmp_expression_value_43, tmp_subscript_value_5);
        if (tmp_args_element_value_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_34);

            exception_lineno = 381;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        CHECK_OBJECT(var_per_callable_module_params);
        tmp_expression_value_44 = var_per_callable_module_params;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_6 = var_i;
        tmp_args_element_value_36 = LOOKUP_SUBSCRIPT(tmp_expression_value_44, tmp_subscript_value_6);
        if (tmp_args_element_value_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);

            exception_lineno = 382;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        CHECK_OBJECT(var_per_callable_len_user_args);
        tmp_expression_value_45 = var_per_callable_len_user_args;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_7 = var_i;
        tmp_args_element_value_37 = LOOKUP_SUBSCRIPT(tmp_expression_value_45, tmp_subscript_value_7);
        if (tmp_args_element_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);

            exception_lineno = 383;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        if (var_per_callable_output_was_tensor == NULL) {
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[55]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 384;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }

        tmp_expression_value_46 = var_per_callable_output_was_tensor;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_8 = var_i;
        tmp_args_element_value_38 = LOOKUP_SUBSCRIPT(tmp_expression_value_46, tmp_subscript_value_8);
        if (tmp_args_element_value_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);

            exception_lineno = 384;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        CHECK_OBJECT(var_per_callable_static_input_surfaces);
        tmp_expression_value_47 = var_per_callable_static_input_surfaces;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_9 = var_i;
        tmp_args_element_value_39 = LOOKUP_SUBSCRIPT(tmp_expression_value_47, tmp_subscript_value_9);
        if (tmp_args_element_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);

            exception_lineno = 385;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        if (var_per_callable_static_outputs == NULL) {
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 386;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }

        tmp_expression_value_48 = var_per_callable_static_outputs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_10 = var_i;
        tmp_args_element_value_40 = LOOKUP_SUBSCRIPT(tmp_expression_value_48, tmp_subscript_value_10);
        if (tmp_args_element_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);

            exception_lineno = 386;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        CHECK_OBJECT(var_per_callable_static_grad_outputs);
        tmp_expression_value_49 = var_per_callable_static_grad_outputs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_11 = var_i;
        tmp_args_element_value_41 = LOOKUP_SUBSCRIPT(tmp_expression_value_49, tmp_subscript_value_11);
        if (tmp_args_element_value_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_40);

            exception_lineno = 387;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        CHECK_OBJECT(var_per_callable_static_grad_inputs);
        tmp_expression_value_50 = var_per_callable_static_grad_inputs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_12 = var_i;
        tmp_args_element_value_42 = LOOKUP_SUBSCRIPT(tmp_expression_value_50, tmp_subscript_value_12);
        if (tmp_args_element_value_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_34);
            Py_DECREF(tmp_args_element_value_35);
            Py_DECREF(tmp_args_element_value_36);
            Py_DECREF(tmp_args_element_value_37);
            Py_DECREF(tmp_args_element_value_38);
            Py_DECREF(tmp_args_element_value_39);
            Py_DECREF(tmp_args_element_value_40);
            Py_DECREF(tmp_args_element_value_41);

            exception_lineno = 388;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 380;
        {
            PyObject *call_args[] = {tmp_args_element_value_34, tmp_args_element_value_35, tmp_args_element_value_36, tmp_args_element_value_37, tmp_args_element_value_38, tmp_args_element_value_39, tmp_args_element_value_40, tmp_args_element_value_41, tmp_args_element_value_42};
            tmp_assign_source_121 = CALL_FUNCTION_WITH_ARGS9(tmp_called_value_37, call_args);
        }

        Py_DECREF(tmp_args_element_value_34);
        Py_DECREF(tmp_args_element_value_35);
        Py_DECREF(tmp_args_element_value_36);
        Py_DECREF(tmp_args_element_value_37);
        Py_DECREF(tmp_args_element_value_38);
        Py_DECREF(tmp_args_element_value_39);
        Py_DECREF(tmp_args_element_value_40);
        Py_DECREF(tmp_args_element_value_41);
        Py_DECREF(tmp_args_element_value_42);
        if (tmp_assign_source_121 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 380;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        {
            PyObject *old = var_graphed;
            var_graphed = tmp_assign_source_121;
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_23;
        PyObject *tmp_isinstance_inst_6;
        PyObject *tmp_isinstance_cls_6;
        PyObject *tmp_expression_value_51;
        PyObject *tmp_expression_value_52;
        CHECK_OBJECT(var_func);
        tmp_isinstance_inst_6 = var_func;
        tmp_expression_value_52 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_52 == NULL)) {
            tmp_expression_value_52 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_52 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        tmp_expression_value_51 = LOOKUP_ATTRIBUTE(tmp_expression_value_52, mod_consts[31]);
        if (tmp_expression_value_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        tmp_isinstance_cls_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_51, mod_consts[32]);
        Py_DECREF(tmp_expression_value_51);
        if (tmp_isinstance_cls_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_6, tmp_isinstance_cls_6);
        Py_DECREF(tmp_isinstance_cls_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        tmp_condition_result_23 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_23 == NUITKA_BOOL_TRUE) {
            goto branch_yes_21;
        } else {
            goto branch_no_21;
        }
    }
    branch_yes_21:;
    {
        PyObject *tmp_assign_source_122;


        tmp_assign_source_122 = MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__2_make_graphed_forward();

        {
            PyObject *old = var_make_graphed_forward;
            var_make_graphed_forward = tmp_assign_source_122;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_38;
        PyObject *tmp_args_element_value_43;
        PyObject *tmp_args_element_value_44;
        PyObject *tmp_expression_value_53;
        PyObject *tmp_args_element_value_45;
        PyObject *tmp_args_element_value_46;
        PyObject *tmp_expression_value_54;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(var_make_graphed_forward);
        tmp_called_value_38 = var_make_graphed_forward;
        CHECK_OBJECT(var_func);
        tmp_args_element_value_43 = var_func;
        CHECK_OBJECT(var_func);
        tmp_expression_value_53 = var_func;
        tmp_args_element_value_44 = LOOKUP_ATTRIBUTE(tmp_expression_value_53, mod_consts[74]);
        if (tmp_args_element_value_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        CHECK_OBJECT(var_graphed);
        tmp_args_element_value_45 = var_graphed;
        CHECK_OBJECT(var_func);
        tmp_expression_value_54 = var_func;
        tmp_args_element_value_46 = LOOKUP_ATTRIBUTE(tmp_expression_value_54, mod_consts[75]);
        if (tmp_args_element_value_46 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_44);

            exception_lineno = 400;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 400;
        {
            PyObject *call_args[] = {tmp_args_element_value_43, tmp_args_element_value_44, tmp_args_element_value_45, tmp_args_element_value_46};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_38, call_args);
        }

        Py_DECREF(tmp_args_element_value_44);
        Py_DECREF(tmp_args_element_value_46);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        CHECK_OBJECT(var_func);
        tmp_assattr_target_1 = var_func;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[75], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 400;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
    }
    {
        PyObject *tmp_called_value_39;
        PyObject *tmp_expression_value_55;
        PyObject *tmp_call_result_16;
        PyObject *tmp_args_element_value_47;
        if (var_ret == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 401;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }

        tmp_expression_value_55 = var_ret;
        tmp_called_value_39 = LOOKUP_ATTRIBUTE(tmp_expression_value_55, mod_consts[56]);
        if (tmp_called_value_39 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        CHECK_OBJECT(var_func);
        tmp_args_element_value_47 = var_func;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 401;
        tmp_call_result_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_39, tmp_args_element_value_47);
        Py_DECREF(tmp_called_value_39);
        if (tmp_call_result_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        Py_DECREF(tmp_call_result_16);
    }
    goto branch_end_21;
    branch_no_21:;
    {
        PyObject *tmp_called_value_40;
        PyObject *tmp_expression_value_56;
        PyObject *tmp_call_result_17;
        PyObject *tmp_args_element_value_48;
        if (var_ret == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 403;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }

        tmp_expression_value_56 = var_ret;
        tmp_called_value_40 = LOOKUP_ATTRIBUTE(tmp_expression_value_56, mod_consts[56]);
        if (tmp_called_value_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        CHECK_OBJECT(var_graphed);
        tmp_args_element_value_48 = var_graphed;
        frame_a9896e06fd4535a0a62329d089d9f077->m_frame.f_lineno = 403;
        tmp_call_result_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_40, tmp_args_element_value_48);
        Py_DECREF(tmp_called_value_40);
        if (tmp_call_result_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto try_except_handler_45;
        }
        Py_DECREF(tmp_call_result_17);
    }
    branch_end_21:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 379;
        type_description_1 = "ooboooooooooooooooooooooooooooooo";
        goto try_except_handler_45;
    }
    goto loop_start_12;
    loop_end_12:;
    goto try_end_29;
    // Exception handler code:
    try_except_handler_45:;
    exception_keeper_type_39 = exception_type;
    exception_keeper_value_39 = exception_value;
    exception_keeper_tb_39 = exception_tb;
    exception_keeper_lineno_39 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_39;
    exception_value = exception_keeper_value_39;
    exception_tb = exception_keeper_tb_39;
    exception_lineno = exception_keeper_lineno_39;

    goto frame_exception_exit_1;
    // End of try:
    try_end_29:;
    Py_XDECREF(tmp_for_loop_7__iter_value);
    tmp_for_loop_7__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_7__for_iterator);
    Py_DECREF(tmp_for_loop_7__for_iterator);
    tmp_for_loop_7__for_iterator = NULL;
    {
        bool tmp_condition_result_24;
        assert(var_just_one_callable != NUITKA_BOOL_UNASSIGNED);
        tmp_condition_result_24 = var_just_one_callable == NUITKA_BOOL_TRUE;
        if (tmp_condition_result_24 != false) {
            goto branch_yes_22;
        } else {
            goto branch_no_22;
        }
    }
    branch_yes_22:;
    {
        PyObject *tmp_expression_value_57;
        PyObject *tmp_subscript_value_13;
        if (var_ret == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 406;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_57 = var_ret;
        tmp_subscript_value_13 = mod_consts[62];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_57, tmp_subscript_value_13, 0);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    branch_no_22:;
    {
        PyObject *tmp_tuple_arg_7;
        if (var_ret == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[76]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 408;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_arg_7 = var_ret;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_7);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "ooboooooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a9896e06fd4535a0a62329d089d9f077, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a9896e06fd4535a0a62329d089d9f077->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a9896e06fd4535a0a62329d089d9f077, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a9896e06fd4535a0a62329d089d9f077,
        type_description_1,
        par_callables,
        par_sample_args,
        (int)var_just_one_callable,
        var_c,
        var_args,
        var_per_callable_len_user_args,
        var_per_callable_module_params,
        var_per_callable_static_input_surfaces,
        var_fwd_graphs,
        var_bwd_graphs,
        var_mempool,
        var_func,
        var_static_input_surface,
        var__,
        var_outputs,
        var_grad_inputs,
        var_per_callable_static_outputs,
        var_per_callable_output_was_tensor,
        var_fwd_graph,
        var_per_callable_static_grad_outputs,
        var_per_callable_static_grad_inputs,
        var_static_outputs,
        var_bwd_graph,
        var_module_params,
        var_static_grad_outputs,
        var_static_grad_inputs,
        var_grad_idx,
        var_arg,
        var_make_graphed_autograd_function,
        var_ret,
        var_i,
        var_graphed,
        var_make_graphed_forward
    );


    // Release cached frame if used for exception.
    if (frame_a9896e06fd4535a0a62329d089d9f077 == cache_frame_a9896e06fd4535a0a62329d089d9f077) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a9896e06fd4535a0a62329d089d9f077);
        cache_frame_a9896e06fd4535a0a62329d089d9f077 = NULL;
    }

    assertFrameObject(frame_a9896e06fd4535a0a62329d089d9f077);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_6:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_callables);
    Py_DECREF(par_callables);
    par_callables = NULL;
    CHECK_OBJECT(par_sample_args);
    Py_DECREF(par_sample_args);
    par_sample_args = NULL;
    assert(var_just_one_callable != NUITKA_BOOL_UNASSIGNED);
    var_just_one_callable = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_args);
    var_args = NULL;
    CHECK_OBJECT(var_per_callable_len_user_args);
    Py_DECREF(var_per_callable_len_user_args);
    var_per_callable_len_user_args = NULL;
    CHECK_OBJECT(var_per_callable_module_params);
    Py_DECREF(var_per_callable_module_params);
    var_per_callable_module_params = NULL;
    CHECK_OBJECT(var_per_callable_static_input_surfaces);
    Py_DECREF(var_per_callable_static_input_surfaces);
    var_per_callable_static_input_surfaces = NULL;
    CHECK_OBJECT(var_fwd_graphs);
    Py_DECREF(var_fwd_graphs);
    var_fwd_graphs = NULL;
    CHECK_OBJECT(var_bwd_graphs);
    Py_DECREF(var_bwd_graphs);
    var_bwd_graphs = NULL;
    Py_XDECREF(var_mempool);
    var_mempool = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_static_input_surface);
    var_static_input_surface = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_outputs);
    var_outputs = NULL;
    Py_XDECREF(var_grad_inputs);
    var_grad_inputs = NULL;
    Py_XDECREF(var_per_callable_static_outputs);
    var_per_callable_static_outputs = NULL;
    Py_XDECREF(var_per_callable_output_was_tensor);
    var_per_callable_output_was_tensor = NULL;
    Py_XDECREF(var_fwd_graph);
    var_fwd_graph = NULL;
    CHECK_OBJECT(var_per_callable_static_grad_outputs);
    Py_DECREF(var_per_callable_static_grad_outputs);
    var_per_callable_static_grad_outputs = NULL;
    CHECK_OBJECT(var_per_callable_static_grad_inputs);
    Py_DECREF(var_per_callable_static_grad_inputs);
    var_per_callable_static_grad_inputs = NULL;
    Py_XDECREF(var_static_outputs);
    var_static_outputs = NULL;
    Py_XDECREF(var_bwd_graph);
    var_bwd_graph = NULL;
    Py_XDECREF(var_module_params);
    var_module_params = NULL;
    Py_XDECREF(var_static_grad_outputs);
    var_static_grad_outputs = NULL;
    Py_XDECREF(var_static_grad_inputs);
    var_static_grad_inputs = NULL;
    Py_XDECREF(var_grad_idx);
    var_grad_idx = NULL;
    Py_XDECREF(var_arg);
    var_arg = NULL;
    Py_XDECREF(var_make_graphed_autograd_function);
    var_make_graphed_autograd_function = NULL;
    Py_XDECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_graphed);
    var_graphed = NULL;
    Py_XDECREF(var_make_graphed_forward);
    var_make_graphed_forward = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_40 = exception_type;
    exception_keeper_value_40 = exception_value;
    exception_keeper_tb_40 = exception_tb;
    exception_keeper_lineno_40 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(par_callables);
    par_callables = NULL;
    Py_XDECREF(par_sample_args);
    par_sample_args = NULL;
    assert(var_just_one_callable != NUITKA_BOOL_UNASSIGNED);
    var_just_one_callable = NUITKA_BOOL_UNASSIGNED;
    Py_XDECREF(var_c);
    var_c = NULL;
    Py_XDECREF(var_args);
    var_args = NULL;
    Py_XDECREF(var_per_callable_len_user_args);
    var_per_callable_len_user_args = NULL;
    Py_XDECREF(var_per_callable_module_params);
    var_per_callable_module_params = NULL;
    Py_XDECREF(var_per_callable_static_input_surfaces);
    var_per_callable_static_input_surfaces = NULL;
    Py_XDECREF(var_fwd_graphs);
    var_fwd_graphs = NULL;
    Py_XDECREF(var_bwd_graphs);
    var_bwd_graphs = NULL;
    Py_XDECREF(var_mempool);
    var_mempool = NULL;
    Py_XDECREF(var_func);
    var_func = NULL;
    Py_XDECREF(var_static_input_surface);
    var_static_input_surface = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_outputs);
    var_outputs = NULL;
    Py_XDECREF(var_grad_inputs);
    var_grad_inputs = NULL;
    Py_XDECREF(var_per_callable_static_outputs);
    var_per_callable_static_outputs = NULL;
    Py_XDECREF(var_per_callable_output_was_tensor);
    var_per_callable_output_was_tensor = NULL;
    Py_XDECREF(var_fwd_graph);
    var_fwd_graph = NULL;
    Py_XDECREF(var_per_callable_static_grad_outputs);
    var_per_callable_static_grad_outputs = NULL;
    Py_XDECREF(var_per_callable_static_grad_inputs);
    var_per_callable_static_grad_inputs = NULL;
    Py_XDECREF(var_static_outputs);
    var_static_outputs = NULL;
    Py_XDECREF(var_bwd_graph);
    var_bwd_graph = NULL;
    Py_XDECREF(var_module_params);
    var_module_params = NULL;
    Py_XDECREF(var_static_grad_outputs);
    var_static_grad_outputs = NULL;
    Py_XDECREF(var_static_grad_inputs);
    var_static_grad_inputs = NULL;
    Py_XDECREF(var_grad_idx);
    var_grad_idx = NULL;
    Py_XDECREF(var_arg);
    var_arg = NULL;
    Py_XDECREF(var_make_graphed_autograd_function);
    var_make_graphed_autograd_function = NULL;
    Py_XDECREF(var_ret);
    var_ret = NULL;
    Py_XDECREF(var_i);
    var_i = NULL;
    Py_XDECREF(var_graphed);
    var_graphed = NULL;
    Py_XDECREF(var_make_graphed_forward);
    var_make_graphed_forward = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_40;
    exception_value = exception_keeper_value_40;
    exception_tb = exception_keeper_tb_40;
    exception_lineno = exception_keeper_lineno_40;

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



struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__1_genexpr_locals {
    PyObject *var_b;
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

static PyObject *torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__1_genexpr_locals *generator_heap = (struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_b = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_fe7cc6221267805c7edd6ee202a27ec2, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 229;
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
            PyObject *old = generator_heap->var_b;
            generator_heap->var_b = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_b);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_b);
        tmp_expression_value_2 = generator_heap->var_b;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[63]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 229;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = Py_False;
        tmp_expression_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? Py_True : Py_False;
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_INCREF(tmp_expression_value_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 229;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 229;
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
            generator_heap->var_b
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

    Py_XDECREF(generator_heap->var_b);
    generator_heap->var_b = NULL;
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
    Py_XDECREF(generator_heap->var_b);
    generator_heap->var_b = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__1_genexpr_context,
        module_torch$cuda$graphs,
        mod_consts[78],
#if PYTHON_VERSION >= 0x350
        mod_consts[79],
#endif
        codeobj_fe7cc6221267805c7edd6ee202a27ec2,
        closure,
        1,
        sizeof(struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__1_genexpr_locals)
    );
}



struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__2_genexpr_locals {
    PyObject *var_arg;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    int tmp_res;
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

static PyObject *torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__2_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__2_genexpr_locals *generator_heap = (struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__2_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_arg = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_d27feb4d205520e568bfcd01c8cfc852, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 232;
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
            PyObject *old = generator_heap->var_arg;
            generator_heap->var_arg = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_arg);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_arg);
        tmp_isinstance_inst_1 = generator_heap->var_arg;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 232;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[44]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 232;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 232;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_expression_value_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 232;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 232;
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
            generator_heap->var_arg
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

    Py_XDECREF(generator_heap->var_arg);
    generator_heap->var_arg = NULL;
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
    Py_XDECREF(generator_heap->var_arg);
    generator_heap->var_arg = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__2_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__2_genexpr_context,
        module_torch$cuda$graphs,
        mod_consts[78],
#if PYTHON_VERSION >= 0x350
        mod_consts[79],
#endif
        codeobj_d27feb4d205520e568bfcd01c8cfc852,
        closure,
        1,
        sizeof(struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__2_genexpr_locals)
    );
}



struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__3_genexpr_locals {
    PyObject *var_i;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__3_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__3_genexpr_locals *generator_heap = (struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__3_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_i = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_6ee39d71dae04cd7e17ad193fe7ac28a, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 261;
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
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_i);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(generator_heap->var_i);
        tmp_expression_value_1 = generator_heap->var_i;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 261;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            generator_heap->exception_lineno = 261;
            generator_heap->type_description_1 = "No";
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
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_i);
        tmp_expression_value_2 = generator_heap->var_i;
        Py_INCREF(tmp_expression_value_2);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_2;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 261;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 261;
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
            generator_heap->var_i
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

    Py_XDECREF(generator_heap->var_i);
    generator_heap->var_i = NULL;
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
    Py_XDECREF(generator_heap->var_i);
    generator_heap->var_i = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__3_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__3_genexpr_context,
        module_torch$cuda$graphs,
        mod_consts[78],
#if PYTHON_VERSION >= 0x350
        mod_consts[79],
#endif
        codeobj_6ee39d71dae04cd7e17ad193fe7ac28a,
        closure,
        1,
        sizeof(struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__3_genexpr_locals)
    );
}



struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__4_genexpr_locals {
    PyObject *var_o;
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

static PyObject *torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__4_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__4_genexpr_locals *generator_heap = (struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__4_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_o = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_5876ce8292eeb8ca947aee3d58ee8b4c, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 262;
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
            PyObject *old = generator_heap->var_o;
            generator_heap->var_o = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_o);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 262;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_o);
        tmp_args_element_value_1 = generator_heap->var_o;
        generator->m_frame->m_frame.f_lineno = 262;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[80], tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 262;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 262;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 262;
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
            generator_heap->var_o
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

    Py_XDECREF(generator_heap->var_o);
    generator_heap->var_o = NULL;
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
    Py_XDECREF(generator_heap->var_o);
    generator_heap->var_o = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__4_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__4_genexpr_context,
        module_torch$cuda$graphs,
        mod_consts[78],
#if PYTHON_VERSION >= 0x350
        mod_consts[79],
#endif
        codeobj_5876ce8292eeb8ca947aee3d58ee8b4c,
        closure,
        1,
        sizeof(struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__4_genexpr_locals)
    );
}



struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__5_genexpr_locals {
    PyObject *var_o;
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

static PyObject *torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__5_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__5_genexpr_locals *generator_heap = (struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__5_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_o = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_4baf60e269ca9b4b7e5fdde9dc0aafc3, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 300;
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
            PyObject *old = generator_heap->var_o;
            generator_heap->var_o = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_o);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_o);
        tmp_expression_value_2 = generator_heap->var_o;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[63]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 300;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_expression_value_2, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 300;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 300;
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
            generator_heap->var_o
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

    Py_XDECREF(generator_heap->var_o);
    generator_heap->var_o = NULL;
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
    Py_XDECREF(generator_heap->var_o);
    generator_heap->var_o = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__5_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__5_genexpr_context,
        module_torch$cuda$graphs,
        mod_consts[78],
#if PYTHON_VERSION >= 0x350
        mod_consts[79],
#endif
        codeobj_4baf60e269ca9b4b7e5fdde9dc0aafc3,
        closure,
        1,
        sizeof(struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__5_genexpr_locals)
    );
}



struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__6_genexpr_locals {
    PyObject *var_o;
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

static PyObject *torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__6_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__6_genexpr_locals *generator_heap = (struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__6_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_o = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_f6eda97b3d17363a7e7c2583af22323d, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 301;
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
            PyObject *old = generator_heap->var_o;
            generator_heap->var_o = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_o);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 301;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(generator_heap->var_o);
        tmp_args_element_value_1 = generator_heap->var_o;
        generator->m_frame->m_frame.f_lineno = 301;
        tmp_expression_value_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[80], tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 301;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_called_instance_1, sizeof(PyObject *), &tmp_args_element_value_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 301;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 301;
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
            generator_heap->var_o
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

    Py_XDECREF(generator_heap->var_o);
    generator_heap->var_o = NULL;
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
    Py_XDECREF(generator_heap->var_o);
    generator_heap->var_o = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__6_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__6_genexpr_context,
        module_torch$cuda$graphs,
        mod_consts[78],
#if PYTHON_VERSION >= 0x350
        mod_consts[79],
#endif
        codeobj_f6eda97b3d17363a7e7c2583af22323d,
        closure,
        1,
        sizeof(struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__6_genexpr_locals)
    );
}



struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__7_genexpr_locals {
    PyObject *var_i;
    PyObject *tmp_iter_value_0;
    char const *type_description_1;
    PyObject *exception_type;
    PyObject *exception_value;
    PyTracebackObject *exception_tb;
    int exception_lineno;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    int exception_keeper_lineno_1;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    int exception_keeper_lineno_2;
};

static PyObject *torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__7_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__7_genexpr_locals *generator_heap = (struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__7_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_i = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_6c34bb4aec569cb3190ce37d69e02c56, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 305;
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
            PyObject *old = generator_heap->var_i;
            generator_heap->var_i = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_i);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(generator_heap->var_i);
        tmp_expression_value_1 = generator_heap->var_i;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 305;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            generator_heap->exception_lineno = 305;
            generator_heap->type_description_1 = "No";
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
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_i);
        tmp_expression_value_2 = generator_heap->var_i;
        Py_INCREF(tmp_expression_value_2);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_2;
        yield_return_1:
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 305;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 305;
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
            generator_heap->var_i
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

    Py_XDECREF(generator_heap->var_i);
    generator_heap->var_i = NULL;
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
    Py_XDECREF(generator_heap->var_i);
    generator_heap->var_i = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__7_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__7_genexpr_context,
        module_torch$cuda$graphs,
        mod_consts[78],
#if PYTHON_VERSION >= 0x350
        mod_consts[79],
#endif
        codeobj_6c34bb4aec569cb3190ce37d69e02c56,
        closure,
        1,
        sizeof(struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$genexpr__7_genexpr_locals)
    );
}


static PyObject *impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_fwd_graph = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_bwd_graph = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_module_params = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_len_user_args = Nuitka_Cell_New1(python_pars[3]);
    struct Nuitka_CellObject *par_output_was_tensor = Nuitka_Cell_New1(python_pars[4]);
    struct Nuitka_CellObject *par_static_input_surface = Nuitka_Cell_New1(python_pars[5]);
    struct Nuitka_CellObject *par_static_outputs = Nuitka_Cell_New1(python_pars[6]);
    struct Nuitka_CellObject *par_static_grad_outputs = Nuitka_Cell_New1(python_pars[7]);
    struct Nuitka_CellObject *par_static_grad_inputs = Nuitka_Cell_New1(python_pars[8]);
    struct Nuitka_CellObject *var_Graphed = Nuitka_Cell_Empty();
    PyObject *var_functionalized = NULL;
    PyObject *outline_0_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    struct Nuitka_FrameObject *frame_8727ea592fb53f38d2d6ed6dbfcb8fcc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    int tmp_res;
    PyObject *locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_7dc6a8ab6ae53548752394ea6c0252ea_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    static struct Nuitka_FrameObject *cache_frame_7dc6a8ab6ae53548752394ea6c0252ea_2 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_8727ea592fb53f38d2d6ed6dbfcb8fcc = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8727ea592fb53f38d2d6ed6dbfcb8fcc)) {
        Py_XDECREF(cache_frame_8727ea592fb53f38d2d6ed6dbfcb8fcc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8727ea592fb53f38d2d6ed6dbfcb8fcc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8727ea592fb53f38d2d6ed6dbfcb8fcc = MAKE_FUNCTION_FRAME(codeobj_8727ea592fb53f38d2d6ed6dbfcb8fcc, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8727ea592fb53f38d2d6ed6dbfcb8fcc->m_type_description == NULL);
    frame_8727ea592fb53f38d2d6ed6dbfcb8fcc = cache_frame_8727ea592fb53f38d2d6ed6dbfcb8fcc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8727ea592fb53f38d2d6ed6dbfcb8fcc);
    assert(Py_REFCNT(frame_8727ea592fb53f38d2d6ed6dbfcb8fcc) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[45]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[81]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_1, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_2 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_3 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[62];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_4 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_4 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[82]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[82]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_2;
        }
        tmp_tuple_element_2 = mod_consts[83];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_8727ea592fb53f38d2d6ed6dbfcb8fcc->m_frame.f_lineno = 340;
        tmp_assign_source_5 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_6 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_6, mod_consts[84]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_2;
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
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[86];
        tmp_getattr_default_1 = mod_consts[87];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_7;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_7 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_7 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[86]);
            Py_DECREF(tmp_expression_value_7);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_1 = "cccccccccco";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 340;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "cccccccccco";
        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_6;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_7;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[88];
        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[90];
        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_4;
        }
        if (isFrameUnusable(cache_frame_7dc6a8ab6ae53548752394ea6c0252ea_2)) {
            Py_XDECREF(cache_frame_7dc6a8ab6ae53548752394ea6c0252ea_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_7dc6a8ab6ae53548752394ea6c0252ea_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_7dc6a8ab6ae53548752394ea6c0252ea_2 = MAKE_CLASS_FRAME(codeobj_7dc6a8ab6ae53548752394ea6c0252ea, module_torch$cuda$graphs, NULL, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_7dc6a8ab6ae53548752394ea6c0252ea_2->m_type_description == NULL);
        frame_7dc6a8ab6ae53548752394ea6c0252ea_2 = cache_frame_7dc6a8ab6ae53548752394ea6c0252ea_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_7dc6a8ab6ae53548752394ea6c0252ea_2);
        assert(Py_REFCNT(frame_7dc6a8ab6ae53548752394ea6c0252ea_2) == 2);

        // Framed code:
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_element_value_1;
            struct Nuitka_CellObject *tmp_closure_1[4];
            PyObject *tmp_staticmethod_arg_1;
            struct Nuitka_CellObject *tmp_closure_2[4];
            tmp_res = MAPPING_HAS_ITEM(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340, mod_consts[92]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_4 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_2;
            } else {
                goto condexpr_false_2;
            }
            condexpr_true_2:;
            tmp_called_value_2 = PyObject_GetItem(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340, mod_consts[92]);

            if (unlikely(tmp_called_value_2 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[92]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            tmp_closure_1[0] = par_fwd_graph;
            Py_INCREF(tmp_closure_1[0]);
            tmp_closure_1[1] = par_len_user_args;
            Py_INCREF(tmp_closure_1[1]);
            tmp_closure_1[2] = par_static_input_surface;
            Py_INCREF(tmp_closure_1[2]);
            tmp_closure_1[3] = par_static_outputs;
            Py_INCREF(tmp_closure_1[3]);

            tmp_args_element_value_1 = MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward(tmp_closure_1);

            frame_7dc6a8ab6ae53548752394ea6c0252ea_2->m_frame.f_lineno = 341;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_2;
            condexpr_false_2:;

            tmp_closure_2[0] = par_fwd_graph;
            Py_INCREF(tmp_closure_2[0]);
            tmp_closure_2[1] = par_len_user_args;
            Py_INCREF(tmp_closure_2[1]);
            tmp_closure_2[2] = par_static_input_surface;
            Py_INCREF(tmp_closure_2[2]);
            tmp_closure_2[3] = par_static_outputs;
            Py_INCREF(tmp_closure_2[3]);

            tmp_staticmethod_arg_1 = MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward(tmp_closure_2);

            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_1);
            Py_DECREF(tmp_staticmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            condexpr_end_2:;
            tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340, mod_consts[75], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_element_value_2;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_expression_value_9;
            PyObject *tmp_args_element_value_3;
            struct Nuitka_CellObject *tmp_closure_3[3];
            PyObject *tmp_staticmethod_arg_2;
            PyObject *tmp_called_instance_2;
            PyObject *tmp_expression_value_10;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_args_element_value_4;
            struct Nuitka_CellObject *tmp_closure_4[3];
            tmp_res = MAPPING_HAS_ITEM(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340, mod_consts[92]);

            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_condition_result_5 = (tmp_res == 1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto condexpr_true_3;
            } else {
                goto condexpr_false_3;
            }
            condexpr_true_3:;
            tmp_called_value_3 = PyObject_GetItem(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340, mod_consts[92]);

            if (unlikely(tmp_called_value_3 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[92]);
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_expression_value_9 = PyObject_GetItem(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340, mod_consts[16]);

            if (tmp_expression_value_9 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_expression_value_9 == NULL)) {
                        tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_expression_value_9 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_called_value_3);

                        exception_lineno = 352;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_9);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[45]);
            Py_DECREF(tmp_expression_value_9);
            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[94]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            tmp_closure_3[0] = par_bwd_graph;
            Py_INCREF(tmp_closure_3[0]);
            tmp_closure_3[1] = par_static_grad_inputs;
            Py_INCREF(tmp_closure_3[1]);
            tmp_closure_3[2] = par_static_grad_outputs;
            Py_INCREF(tmp_closure_3[2]);

            tmp_args_element_value_3 = MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward(tmp_closure_3);

            frame_7dc6a8ab6ae53548752394ea6c0252ea_2->m_frame.f_lineno = 352;
            tmp_args_element_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[95], tmp_args_element_value_3);
            Py_DECREF(tmp_called_instance_1);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_args_element_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_called_value_3);

                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            frame_7dc6a8ab6ae53548752394ea6c0252ea_2->m_frame.f_lineno = 351;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            goto condexpr_end_3;
            condexpr_false_3:;
            tmp_expression_value_11 = PyObject_GetItem(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340, mod_consts[16]);

            if (tmp_expression_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

                    if (unlikely(tmp_expression_value_11 == NULL)) {
                        tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
                    }

                    if (tmp_expression_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 352;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_expression_value_11);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[45]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_expression_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[94]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_called_instance_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }

            tmp_closure_4[0] = par_bwd_graph;
            Py_INCREF(tmp_closure_4[0]);
            tmp_closure_4[1] = par_static_grad_inputs;
            Py_INCREF(tmp_closure_4[1]);
            tmp_closure_4[2] = par_static_grad_outputs;
            Py_INCREF(tmp_closure_4[2]);

            tmp_args_element_value_4 = MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward(tmp_closure_4);

            frame_7dc6a8ab6ae53548752394ea6c0252ea_2->m_frame.f_lineno = 352;
            tmp_staticmethod_arg_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[95], tmp_args_element_value_4);
            Py_DECREF(tmp_called_instance_2);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_staticmethod_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 352;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dictset_value = BUILTIN_STATICMETHOD(tmp_staticmethod_arg_2);
            Py_DECREF(tmp_staticmethod_arg_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            condexpr_end_3:;
            tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340, mod_consts[96], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 351;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_7dc6a8ab6ae53548752394ea6c0252ea_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_7dc6a8ab6ae53548752394ea6c0252ea_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_7dc6a8ab6ae53548752394ea6c0252ea_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_7dc6a8ab6ae53548752394ea6c0252ea_2,
            type_description_2,
            outline_0_var___class__
        );


        // Release cached frame if used for exception.
        if (frame_7dc6a8ab6ae53548752394ea6c0252ea_2 == cache_frame_7dc6a8ab6ae53548752394ea6c0252ea_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_7dc6a8ab6ae53548752394ea6c0252ea_2);
            cache_frame_7dc6a8ab6ae53548752394ea6c0252ea_2 = NULL;
        }

        assertFrameObject(frame_7dc6a8ab6ae53548752394ea6c0252ea_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "cccccccccco";
        goto try_except_handler_4;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_6;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_6 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_1 = "cccccccccco";
                goto try_except_handler_4;
            }
            if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340, mod_consts[98], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "cccccccccco";
            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[83];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_8727ea592fb53f38d2d6ed6dbfcb8fcc->m_frame.f_lineno = 340;
            tmp_assign_source_8 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 340;
                type_description_1 = "cccccccccco";
                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_8;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_7 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_7);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340);
        locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340 = NULL;
        goto try_return_handler_3;
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

        Py_DECREF(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340);
        locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto try_except_handler_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
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
        exception_lineno = 340;
        goto try_except_handler_2;
        outline_result_1:;
        assert(Nuitka_Cell_GET(var_Graphed) == NULL);
        PyCell_SET(var_Graphed, tmp_assign_source_7);

    }
    goto try_end_1;
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

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
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

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8727ea592fb53f38d2d6ed6dbfcb8fcc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8727ea592fb53f38d2d6ed6dbfcb8fcc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8727ea592fb53f38d2d6ed6dbfcb8fcc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8727ea592fb53f38d2d6ed6dbfcb8fcc,
        type_description_1,
        par_fwd_graph,
        par_bwd_graph,
        par_module_params,
        par_len_user_args,
        par_output_was_tensor,
        par_static_input_surface,
        par_static_outputs,
        par_static_grad_outputs,
        par_static_grad_inputs,
        var_Graphed,
        var_functionalized
    );


    // Release cached frame if used for exception.
    if (frame_8727ea592fb53f38d2d6ed6dbfcb8fcc == cache_frame_8727ea592fb53f38d2d6ed6dbfcb8fcc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8727ea592fb53f38d2d6ed6dbfcb8fcc);
        cache_frame_8727ea592fb53f38d2d6ed6dbfcb8fcc = NULL;
    }

    assertFrameObject(frame_8727ea592fb53f38d2d6ed6dbfcb8fcc);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
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
    {
        PyObject *tmp_assign_source_9;
        struct Nuitka_CellObject *tmp_closure_5[3];

        tmp_closure_5[0] = var_Graphed;
        Py_INCREF(tmp_closure_5[0]);
        tmp_closure_5[1] = par_module_params;
        Py_INCREF(tmp_closure_5[1]);
        tmp_closure_5[2] = par_output_was_tensor;
        Py_INCREF(tmp_closure_5[2]);

        tmp_assign_source_9 = MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__3_functionalized(tmp_closure_5);

        assert(var_functionalized == NULL);
        var_functionalized = tmp_assign_source_9;
    }
    CHECK_OBJECT(var_functionalized);
    tmp_return_value = var_functionalized;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_Graphed);
    Py_DECREF(var_Graphed);
    var_Graphed = NULL;
    CHECK_OBJECT(var_functionalized);
    Py_DECREF(var_functionalized);
    var_functionalized = NULL;
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
    Py_XDECREF(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340);

    CHECK_OBJECT(par_fwd_graph);
    Py_DECREF(par_fwd_graph);
    CHECK_OBJECT(par_bwd_graph);
    Py_DECREF(par_bwd_graph);
    CHECK_OBJECT(par_module_params);
    Py_DECREF(par_module_params);
    CHECK_OBJECT(par_len_user_args);
    Py_DECREF(par_len_user_args);
    CHECK_OBJECT(par_output_was_tensor);
    Py_DECREF(par_output_was_tensor);
    CHECK_OBJECT(par_static_input_surface);
    Py_DECREF(par_static_input_surface);
    CHECK_OBJECT(par_static_outputs);
    Py_DECREF(par_static_outputs);
    CHECK_OBJECT(par_static_grad_outputs);
    Py_DECREF(par_static_grad_outputs);
    CHECK_OBJECT(par_static_grad_inputs);
    Py_DECREF(par_static_grad_inputs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    Py_XDECREF(locals_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$class__1_Graphed_340);

    CHECK_OBJECT(par_fwd_graph);
    Py_DECREF(par_fwd_graph);
    CHECK_OBJECT(par_bwd_graph);
    Py_DECREF(par_bwd_graph);
    CHECK_OBJECT(par_module_params);
    Py_DECREF(par_module_params);
    CHECK_OBJECT(par_len_user_args);
    Py_DECREF(par_len_user_args);
    CHECK_OBJECT(par_output_was_tensor);
    Py_DECREF(par_output_was_tensor);
    CHECK_OBJECT(par_static_input_surface);
    Py_DECREF(par_static_input_surface);
    CHECK_OBJECT(par_static_outputs);
    Py_DECREF(par_static_outputs);
    CHECK_OBJECT(par_static_grad_outputs);
    Py_DECREF(par_static_grad_outputs);
    CHECK_OBJECT(par_static_grad_inputs);
    Py_DECREF(par_static_grad_inputs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[0];
    PyObject *par_inputs = python_pars[1];
    PyObject *var_i = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_21fbc8783738d00f77d307534d8add13;
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
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_21fbc8783738d00f77d307534d8add13 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_21fbc8783738d00f77d307534d8add13)) {
        Py_XDECREF(cache_frame_21fbc8783738d00f77d307534d8add13);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21fbc8783738d00f77d307534d8add13 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21fbc8783738d00f77d307534d8add13 = MAKE_FUNCTION_FRAME(codeobj_21fbc8783738d00f77d307534d8add13, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21fbc8783738d00f77d307534d8add13->m_type_description == NULL);
    frame_21fbc8783738d00f77d307534d8add13 = cache_frame_21fbc8783738d00f77d307534d8add13;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_21fbc8783738d00f77d307534d8add13);
    assert(Py_REFCNT(frame_21fbc8783738d00f77d307534d8add13) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_xrange_low_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[101]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 344;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_xrange_low_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_iter_arg_1 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooocccc";
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
                type_description_1 = "ooocccc";
                exception_lineno = 344;
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
            PyObject *old = var_i;
            var_i = tmp_assign_source_3;
            Py_INCREF(var_i);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 345;
            type_description_1 = "ooocccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(var_i);
        tmp_subscript_value_1 = var_i;
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooocccc";
            goto try_except_handler_2;
        }
        frame_21fbc8783738d00f77d307534d8add13->m_frame.f_lineno = 345;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[102]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooocccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_inputs);
        tmp_expression_value_2 = par_inputs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_2 = var_i;
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 345;
            type_description_1 = "ooocccc";
            goto try_except_handler_2;
        }
        frame_21fbc8783738d00f77d307534d8add13->m_frame.f_lineno = 345;
        tmp_cmp_expr_right_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[102]);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 345;
            type_description_1 = "ooocccc";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooocccc";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_4;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[47]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "ooocccc";
            goto try_except_handler_2;
        }

        tmp_expression_value_4 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(var_i);
        tmp_subscript_value_3 = var_i;
        tmp_expression_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooocccc";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[103]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooocccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_inputs);
        tmp_expression_value_5 = par_inputs;
        CHECK_OBJECT(var_i);
        tmp_subscript_value_4 = var_i;
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_4);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 346;
            type_description_1 = "ooocccc";
            goto try_except_handler_2;
        }
        frame_21fbc8783738d00f77d307534d8add13->m_frame.f_lineno = 346;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooocccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 344;
        type_description_1 = "ooocccc";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[104]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 347;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_3 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_21fbc8783738d00f77d307534d8add13->m_frame.f_lineno = 347;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[9]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[105]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 348;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = Nuitka_Cell_GET(self->m_closure[3]);
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooocccc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooocccc";
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
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 348;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooocccc";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_tuple_arg_1;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_2;
            if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[105]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 349;
                type_description_1 = "ooocccc";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_2 = Nuitka_Cell_GET(self->m_closure[3]);
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 349;
                type_description_1 = "ooocccc";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_4;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_tuple_arg_1 = MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_3;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooocccc";
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
        exception_tb = MAKE_TRACEBACK(frame_21fbc8783738d00f77d307534d8add13, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21fbc8783738d00f77d307534d8add13->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21fbc8783738d00f77d307534d8add13, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21fbc8783738d00f77d307534d8add13,
        type_description_1,
        par_ctx,
        par_inputs,
        var_i,
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[0],
        self->m_closure[3]
    );


    // Release cached frame if used for exception.
    if (frame_21fbc8783738d00f77d307534d8add13 == cache_frame_21fbc8783738d00f77d307534d8add13) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21fbc8783738d00f77d307534d8add13);
        cache_frame_21fbc8783738d00f77d307534d8add13 = NULL;
    }

    assertFrameObject(frame_21fbc8783738d00f77d307534d8add13);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_i);
    var_i = NULL;
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

    Py_XDECREF(var_i);
    var_i = NULL;
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
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_inputs);
    Py_DECREF(par_inputs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_inputs);
    Py_DECREF(par_inputs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward$$$genexpr__1_genexpr_locals {
    PyObject *var_o;
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

static PyObject *torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward$$$genexpr__1_genexpr_locals *generator_heap = (struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_o = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_221b768c24f0e76130591514b67f2225, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 349;
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
            PyObject *old = generator_heap->var_o;
            generator_heap->var_o = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_o);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_o);
        tmp_called_instance_1 = generator_heap->var_o;
        generator->m_frame->m_frame.f_lineno = 349;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[106]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 349;
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


            generator_heap->exception_lineno = 349;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 349;
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
            generator_heap->var_o
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

    Py_XDECREF(generator_heap->var_o);
    generator_heap->var_o = NULL;
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
    Py_XDECREF(generator_heap->var_o);
    generator_heap->var_o = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward$$$genexpr__1_genexpr_context,
        module_torch$cuda$graphs,
        mod_consts[78],
#if PYTHON_VERSION >= 0x350
        mod_consts[107],
#endif
        codeobj_221b768c24f0e76130591514b67f2225,
        closure,
        1,
        sizeof(struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_ctx = python_pars[0];
    PyObject *par_grads = python_pars[1];
    PyObject *var_g = NULL;
    PyObject *var_grad = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2777b0d29517b375370749f3a26382ed;
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
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_2777b0d29517b375370749f3a26382ed = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2777b0d29517b375370749f3a26382ed)) {
        Py_XDECREF(cache_frame_2777b0d29517b375370749f3a26382ed);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2777b0d29517b375370749f3a26382ed == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2777b0d29517b375370749f3a26382ed = MAKE_FUNCTION_FRAME(codeobj_2777b0d29517b375370749f3a26382ed, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2777b0d29517b375370749f3a26382ed->m_type_description == NULL);
    frame_2777b0d29517b375370749f3a26382ed = cache_frame_2777b0d29517b375370749f3a26382ed;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2777b0d29517b375370749f3a26382ed);
    assert(Py_REFCNT(frame_2777b0d29517b375370749f3a26382ed) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = (PyObject *)&PyZip_Type;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[108]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 354;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(par_grads);
        tmp_args_element_value_2 = par_grads;
        frame_2777b0d29517b375370749f3a26382ed->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_iter_arg_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooccc";
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
                type_description_1 = "ooooccc";
                exception_lineno = 354;
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


            exception_lineno = 354;
            type_description_1 = "ooooccc";
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


            type_description_1 = "ooooccc";
            exception_lineno = 354;
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


            type_description_1 = "ooooccc";
            exception_lineno = 354;
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

                    type_description_1 = "ooooccc";
                    exception_lineno = 354;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[30];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooccc";
            exception_lineno = 354;
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
            PyObject *old = var_g;
            var_g = tmp_assign_source_6;
            Py_INCREF(var_g);
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
            PyObject *old = var_grad;
            var_grad = tmp_assign_source_7;
            Py_INCREF(var_grad);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_g);
        tmp_cmp_expr_left_1 = var_g;
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(var_grad);
        tmp_cmp_expr_left_2 = var_grad;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_2 = (tmp_cmp_expr_left_2 != tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_raise_type_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 356;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooccc";
        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_g);
        tmp_called_instance_1 = var_g;
        frame_2777b0d29517b375370749f3a26382ed->m_frame.f_lineno = 360;
        tmp_cmp_expr_left_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[102]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooccc";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_grad);
        tmp_called_instance_2 = var_grad;
        frame_2777b0d29517b375370749f3a26382ed->m_frame.f_lineno = 360;
        tmp_cmp_expr_right_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[102]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 360;
            type_description_1 = "ooooccc";
            goto try_except_handler_2;
        }
        tmp_condition_result_3 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooccc";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_g);
        tmp_called_instance_3 = var_g;
        CHECK_OBJECT(var_grad);
        tmp_args_element_value_3 = var_grad;
        frame_2777b0d29517b375370749f3a26382ed->m_frame.f_lineno = 361;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[103], tmp_args_element_value_3);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooooccc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_3:;
    branch_end_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 354;
        type_description_1 = "ooooccc";
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
    {
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[109]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 362;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_called_instance_4 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_2777b0d29517b375370749f3a26382ed->m_frame.f_lineno = 362;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[9]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 365;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_isinstance_cls_1 = (PyObject *)&PyTuple_Type;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooccc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooccc";
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
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 365;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooccc";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_tuple_arg_1;
        {
            PyObject *tmp_assign_source_8;
            PyObject *tmp_iter_arg_3;
            if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[64]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 366;
                type_description_1 = "ooooccc";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_3 = Nuitka_Cell_GET(self->m_closure[1]);
            tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_3);
            if (tmp_assign_source_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 366;
                type_description_1 = "ooooccc";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_8;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_tuple_arg_1 = MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_5;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_return_value = PySequence_Tuple(tmp_tuple_arg_1);
        Py_DECREF(tmp_tuple_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 366;
            type_description_1 = "ooooccc";
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
        exception_tb = MAKE_TRACEBACK(frame_2777b0d29517b375370749f3a26382ed, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2777b0d29517b375370749f3a26382ed->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2777b0d29517b375370749f3a26382ed, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2777b0d29517b375370749f3a26382ed,
        type_description_1,
        par_ctx,
        par_grads,
        var_g,
        var_grad,
        self->m_closure[2],
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_2777b0d29517b375370749f3a26382ed == cache_frame_2777b0d29517b375370749f3a26382ed) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2777b0d29517b375370749f3a26382ed);
        cache_frame_2777b0d29517b375370749f3a26382ed = NULL;
    }

    assertFrameObject(frame_2777b0d29517b375370749f3a26382ed);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
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

    Py_XDECREF(var_g);
    var_g = NULL;
    Py_XDECREF(var_grad);
    var_grad = NULL;
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
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_ctx);
    Py_DECREF(par_ctx);
    CHECK_OBJECT(par_grads);
    Py_DECREF(par_grads);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward$$$genexpr__1_genexpr_locals {
    PyObject *var_b;
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

static PyObject *torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward$$$genexpr__1_genexpr_locals *generator_heap = (struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_b = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_3ed500f5523a780b19e8793e42120a96, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 366;
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
            PyObject *old = generator_heap->var_b;
            generator_heap->var_b = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_b);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_b);
        tmp_cmp_expr_left_1 = generator_heap->var_b;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(generator_heap->var_b);
        tmp_called_instance_1 = generator_heap->var_b;
        generator->m_frame->m_frame.f_lineno = 366;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[106]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 366;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(generator_heap->var_b);
        tmp_expression_value_1 = generator_heap->var_b;
        Py_INCREF(tmp_expression_value_1);
        condexpr_end_1:;
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(bool), &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_condition_result_1, sizeof(bool), &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_called_instance_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 366;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 366;
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
            generator_heap->var_b
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

    Py_XDECREF(generator_heap->var_b);
    generator_heap->var_b = NULL;
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
    Py_XDECREF(generator_heap->var_b);
    generator_heap->var_b = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward$$$genexpr__1_genexpr_context,
        module_torch$cuda$graphs,
        mod_consts[78],
#if PYTHON_VERSION >= 0x350
        mod_consts[110],
#endif
        codeobj_3ed500f5523a780b19e8793e42120a96,
        closure,
        1,
        sizeof(struct torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__3_functionalized(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_user_args = python_pars[0];
    PyObject *var_out = NULL;
    struct Nuitka_FrameObject *frame_d8ca04567ce2ad706e7361feda014024;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d8ca04567ce2ad706e7361feda014024 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d8ca04567ce2ad706e7361feda014024)) {
        Py_XDECREF(cache_frame_d8ca04567ce2ad706e7361feda014024);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d8ca04567ce2ad706e7361feda014024 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d8ca04567ce2ad706e7361feda014024 = MAKE_FUNCTION_FRAME(codeobj_d8ca04567ce2ad706e7361feda014024, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d8ca04567ce2ad706e7361feda014024->m_type_description == NULL);
    frame_d8ca04567ce2ad706e7361feda014024 = cache_frame_d8ca04567ce2ad706e7361feda014024;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d8ca04567ce2ad706e7361feda014024);
    assert(Py_REFCNT(frame_d8ca04567ce2ad706e7361feda014024) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[83]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 372;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[111]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_user_args);
        tmp_add_expr_left_1 = par_user_args;
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[112]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 372;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_add_expr_right_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_dircall_arg2_1 = BINARY_OPERATION_ADD_OBJECT_TUPLE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 372;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_assign_source_1 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 372;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        assert(var_out == NULL);
        var_out = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[113]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 373;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }

        tmp_truth_name_1 = CHECK_IF_TRUE(Nuitka_Cell_GET(self->m_closure[2]));
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_out);
        tmp_expression_value_2 = var_out;
        tmp_subscript_value_1 = mod_consts[62];
        tmp_return_value = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooccc";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_out);
        tmp_return_value = var_out;
        Py_INCREF(tmp_return_value);
        condexpr_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_d8ca04567ce2ad706e7361feda014024, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d8ca04567ce2ad706e7361feda014024->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d8ca04567ce2ad706e7361feda014024, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d8ca04567ce2ad706e7361feda014024,
        type_description_1,
        par_user_args,
        var_out,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[2]
    );


    // Release cached frame if used for exception.
    if (frame_d8ca04567ce2ad706e7361feda014024 == cache_frame_d8ca04567ce2ad706e7361feda014024) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d8ca04567ce2ad706e7361feda014024);
        cache_frame_d8ca04567ce2ad706e7361feda014024 = NULL;
    }

    assertFrameObject(frame_d8ca04567ce2ad706e7361feda014024);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_out);
    Py_DECREF(var_out);
    var_out = NULL;
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

    Py_XDECREF(var_out);
    var_out = NULL;
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
    CHECK_OBJECT(par_user_args);
    Py_DECREF(par_user_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_user_args);
    Py_DECREF(par_user_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__2_make_graphed_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    struct Nuitka_CellObject *par_func = Nuitka_Cell_New1(python_pars[0]);
    struct Nuitka_CellObject *par_graph_training_state = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_graphed = Nuitka_Cell_New1(python_pars[2]);
    struct Nuitka_CellObject *par_orig_fwd = Nuitka_Cell_New1(python_pars[3]);
    PyObject *var_new_fwd = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[4];

        tmp_closure_1[0] = par_func;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_graph_training_state;
        Py_INCREF(tmp_closure_1[1]);
        tmp_closure_1[2] = par_graphed;
        Py_INCREF(tmp_closure_1[2]);
        tmp_closure_1[3] = par_orig_fwd;
        Py_INCREF(tmp_closure_1[3]);

        tmp_assign_source_1 = MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__2_make_graphed_forward$$$function__1_new_fwd(tmp_closure_1);

        assert(var_new_fwd == NULL);
        var_new_fwd = tmp_assign_source_1;
    }
    // Tried code:
    CHECK_OBJECT(var_new_fwd);
    tmp_return_value = var_new_fwd;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_new_fwd);
    Py_DECREF(var_new_fwd);
    var_new_fwd = NULL;
    goto function_return_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;


function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_func);
    Py_DECREF(par_func);
    CHECK_OBJECT(par_graph_training_state);
    Py_DECREF(par_graph_training_state);
    CHECK_OBJECT(par_graphed);
    Py_DECREF(par_graphed);
    CHECK_OBJECT(par_orig_fwd);
    Py_DECREF(par_orig_fwd);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__2_make_graphed_forward$$$function__1_new_fwd(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_user_args = python_pars[0];
    struct Nuitka_FrameObject *frame_660ed100bbb0b33fcce69aef8ffbec67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_660ed100bbb0b33fcce69aef8ffbec67 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_660ed100bbb0b33fcce69aef8ffbec67)) {
        Py_XDECREF(cache_frame_660ed100bbb0b33fcce69aef8ffbec67);

#if _DEBUG_REFCOUNTS
        if (cache_frame_660ed100bbb0b33fcce69aef8ffbec67 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_660ed100bbb0b33fcce69aef8ffbec67 = MAKE_FUNCTION_FRAME(codeobj_660ed100bbb0b33fcce69aef8ffbec67, module_torch$cuda$graphs, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_660ed100bbb0b33fcce69aef8ffbec67->m_type_description == NULL);
    frame_660ed100bbb0b33fcce69aef8ffbec67 = cache_frame_660ed100bbb0b33fcce69aef8ffbec67;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_660ed100bbb0b33fcce69aef8ffbec67);
    assert(Py_REFCNT(frame_660ed100bbb0b33fcce69aef8ffbec67) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[116]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 395;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[74]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_cmp_expr_left_1);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[117]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 395;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_right_1 = Nuitka_Cell_GET(self->m_closure[1]);
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "occcc";
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
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        if (Nuitka_Cell_GET(self->m_closure[2]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[118]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 396;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_1 = Nuitka_Cell_GET(self->m_closure[2]);
        CHECK_OBJECT(par_user_args);
        tmp_dircall_arg2_1 = par_user_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_dircall_arg2_2;
        if (Nuitka_Cell_GET(self->m_closure[3]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[119]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 398;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg1_2 = Nuitka_Cell_GET(self->m_closure[3]);
        CHECK_OBJECT(par_user_args);
        tmp_dircall_arg2_2 = par_user_args;
        Py_INCREF(tmp_dircall_arg1_2);
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_return_value = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "occcc";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
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
        exception_tb = MAKE_TRACEBACK(frame_660ed100bbb0b33fcce69aef8ffbec67, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_660ed100bbb0b33fcce69aef8ffbec67->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_660ed100bbb0b33fcce69aef8ffbec67, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_660ed100bbb0b33fcce69aef8ffbec67,
        type_description_1,
        par_user_args,
        self->m_closure[0],
        self->m_closure[1],
        self->m_closure[2],
        self->m_closure[3]
    );


    // Release cached frame if used for exception.
    if (frame_660ed100bbb0b33fcce69aef8ffbec67 == cache_frame_660ed100bbb0b33fcce69aef8ffbec67) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_660ed100bbb0b33fcce69aef8ffbec67);
        cache_frame_660ed100bbb0b33fcce69aef8ffbec67 = NULL;
    }

    assertFrameObject(frame_660ed100bbb0b33fcce69aef8ffbec67);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_user_args);
    Py_DECREF(par_user_args);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_user_args);
    Py_DECREF(par_user_args);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__10___enter__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__10___enter__,
        mod_consts[28],
#if PYTHON_VERSION >= 0x300
        mod_consts[147],
#endif
        codeobj_ccde814fdc69e4685260fbd53c282e88,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__11___exit__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__11___exit__,
        mod_consts[29],
#if PYTHON_VERSION >= 0x300
        mod_consts[148],
#endif
        codeobj_fc29b57acdf4ea3f8a417e521d0ec5ba,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__12_make_graphed_callables,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a9896e06fd4535a0a62329d089d9f077,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function,
        mod_consts[70],
#if PYTHON_VERSION >= 0x300
        mod_consts[71],
#endif
        codeobj_8727ea592fb53f38d2d6ed6dbfcb8fcc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward,
        mod_consts[75],
#if PYTHON_VERSION >= 0x300
        mod_consts[93],
#endif
        codeobj_21fbc8783738d00f77d307534d8add13,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        mod_consts[97],
#endif
        codeobj_2777b0d29517b375370749f3a26382ed,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__3_functionalized(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__3_functionalized,
        mod_consts[99],
#if PYTHON_VERSION >= 0x300
        mod_consts[100],
#endif
        codeobj_d8ca04567ce2ad706e7361feda014024,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        NULL,
        closure,
        3
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__2_make_graphed_forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__2_make_graphed_forward,
        mod_consts[72],
#if PYTHON_VERSION >= 0x300
        mod_consts[73],
#endif
        codeobj_198f0a59f74de1b6e7a6bb4d4bb1ff47,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__2_make_graphed_forward$$$function__1_new_fwd(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__2_make_graphed_forward$$$function__1_new_fwd,
        mod_consts[114],
#if PYTHON_VERSION >= 0x300
        mod_consts[115],
#endif
        codeobj_660ed100bbb0b33fcce69aef8ffbec67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        NULL,
        closure,
        4
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__1_graph_pool_handle() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__1_graph_pool_handle,
        mod_consts[41],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_331d386572653cb334227adbed415e8e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        mod_consts[1],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__2___new__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__2___new__,
        mod_consts[3],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_760b9bbfcedc12c3acfb9f38f2b495f9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__3___init__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__3___init__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[137],
#endif
        codeobj_809efb40ee000dba97bca4f4a701fccd,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__4_capture_begin(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__4_capture_begin,
        mod_consts[5],
#if PYTHON_VERSION >= 0x300
        mod_consts[138],
#endif
        codeobj_20039a2cd4eb41ecd98f7c7661194452,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        mod_consts[6],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__5_capture_end() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__5_capture_end,
        mod_consts[7],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_ec0c573a9d0baa158d61397967dc7d43,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        mod_consts[8],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__6_replay() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__6_replay,
        mod_consts[9],
#if PYTHON_VERSION >= 0x300
        mod_consts[140],
#endif
        codeobj_0e649e3b0e26039ac4d2619ca878b586,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        mod_consts[10],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__7_reset() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__7_reset,
        mod_consts[11],
#if PYTHON_VERSION >= 0x300
        mod_consts[141],
#endif
        codeobj_1a252b31b39308858ae83a9b5772ec24,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        mod_consts[12],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__8_pool() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__8_pool,
        mod_consts[13],
#if PYTHON_VERSION >= 0x300
        mod_consts[142],
#endif
        codeobj_e2ce858174d29af789b3c085a4b8e525,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
        mod_consts[14],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$cuda$graphs$$$function__9___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$cuda$graphs$$$function__9___init__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[146],
#endif
        codeobj_e59565c32d692db0112f7a89bbfc324f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$cuda$graphs,
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

function_impl_code functable_torch$cuda$graphs[] = {
    impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function,
    impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__2_make_graphed_forward,
    impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__1_forward,
    impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__2_backward,
    impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__1_make_graphed_autograd_function$$$function__3_functionalized,
    impl_torch$cuda$graphs$$$function__12_make_graphed_callables$$$function__2_make_graphed_forward$$$function__1_new_fwd,
    impl_torch$cuda$graphs$$$function__1_graph_pool_handle,
    impl_torch$cuda$graphs$$$function__2___new__,
    impl_torch$cuda$graphs$$$function__3___init__,
    impl_torch$cuda$graphs$$$function__4_capture_begin,
    impl_torch$cuda$graphs$$$function__5_capture_end,
    impl_torch$cuda$graphs$$$function__6_replay,
    impl_torch$cuda$graphs$$$function__7_reset,
    impl_torch$cuda$graphs$$$function__8_pool,
    impl_torch$cuda$graphs$$$function__9___init__,
    impl_torch$cuda$graphs$$$function__10___enter__,
    impl_torch$cuda$graphs$$$function__11___exit__,
    impl_torch$cuda$graphs$$$function__12_make_graphed_callables,
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

    function_impl_code *current = functable_torch$cuda$graphs;
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

    if (offset > sizeof(functable_torch$cuda$graphs) || offset < 0) {
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
        functable_torch$cuda$graphs[offset],
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
        module_torch$cuda$graphs,
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
PyObject *modulecode_torch$cuda$graphs(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.cuda.graphs");

    // Store the module for future use.
    module_torch$cuda$graphs = module;

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
        PRINT_STRING("torch.cuda.graphs: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.cuda.graphs: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.cuda.graphs: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$cuda$graphs\n");

    moduledict_torch$cuda$graphs = MODULE_DICT(module_torch$cuda$graphs);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$cuda$graphs,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$cuda$graphs,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[179]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$cuda$graphs,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$cuda$graphs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$cuda$graphs,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$cuda$graphs);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$cuda$graphs);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    struct Nuitka_FrameObject *frame_1c065047205175a68f0ac58fdff96175;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *locals_torch$cuda$graphs$$$class__1_CUDAGraph_29 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_46e6898cc7892d4ef7fd86b775f0831c_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_torch$cuda$graphs$$$class__2_graph_94 = NULL;
    struct Nuitka_FrameObject *frame_23e1aaca7f38cb1478722d198a4eb16c_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_2);
    }
    frame_1c065047205175a68f0ac58fdff96175 = MAKE_MODULE_FRAME(codeobj_1c065047205175a68f0ac58fdff96175, module_torch$cuda$graphs);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1c065047205175a68f0ac58fdff96175);
    assert(Py_REFCNT(frame_1c065047205175a68f0ac58fdff96175) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[123], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[124], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[25];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$cuda$graphs;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[62];
        frame_1c065047205175a68f0ac58fdff96175->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[25], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[16];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$cuda$graphs;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[62];
        frame_1c065047205175a68f0ac58fdff96175->m_frame.f_lineno = 2;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[126];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$cuda$graphs;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[127];
        tmp_level_value_3 = mod_consts[66];
        frame_1c065047205175a68f0ac58fdff96175->m_frame.f_lineno = 4;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$cuda$graphs,
                mod_consts[128],
                mod_consts[62]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[128]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_6);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[129]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_attribute_value_1 = mod_consts[130];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

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
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscript_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        frame_1c065047205175a68f0ac58fdff96175->m_frame.f_lineno = 9;
        tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[131]);

        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[129]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_3);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[132];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subscribed_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_ass_subscript_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[128]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        frame_1c065047205175a68f0ac58fdff96175->m_frame.f_lineno = 10;
        tmp_ass_subvalue_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[133]);

        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[129]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_2 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_5);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_ass_subscribed_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_2);

            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_2 = mod_consts[0];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subscribed_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[134];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$cuda$graphs;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[131];
        tmp_level_value_4 = mod_consts[62];
        frame_1c065047205175a68f0ac58fdff96175->m_frame.f_lineno = 12;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$cuda$graphs,
                mod_consts[132],
                mod_consts[62]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[132]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[134];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$cuda$graphs;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[133];
        tmp_level_value_5 = mod_consts[62];
        frame_1c065047205175a68f0ac58fdff96175->m_frame.f_lineno = 13;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$cuda$graphs,
                mod_consts[0],
                mod_consts[62]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 13;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_torch$cuda$graphs$$$function__1_graph_pool_handle();

        UPDATE_STRING_DICT1(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_9);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[129]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[132]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        tmp_assign_source_10 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_10, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_11 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        tmp_assign_source_12 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        tmp_condition_result_2 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_9 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[62];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_13 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_10;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_10 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_10, mod_consts[82]);
        tmp_condition_result_3 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_11 = tmp_class_creation_1__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[82]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        tmp_tuple_element_2 = mod_consts[2];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_1c065047205175a68f0ac58fdff96175->m_frame.f_lineno = 29;
        tmp_assign_source_14 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_12;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_12 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_12, mod_consts[84]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[86];
        tmp_getattr_default_1 = mod_consts[87];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_13;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_13 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_13 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[86]);
            Py_DECREF(tmp_expression_value_13);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_1;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 29;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_1;
    }
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_15;
    }
    branch_end_2:;
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torch$cuda$graphs$$$class__1_CUDAGraph_29 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[88];
        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__1_CUDAGraph_29, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[135];
        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__1_CUDAGraph_29, mod_consts[120], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        tmp_dictset_value = mod_consts[2];
        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__1_CUDAGraph_29, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        frame_46e6898cc7892d4ef7fd86b775f0831c_2 = MAKE_CLASS_FRAME(codeobj_46e6898cc7892d4ef7fd86b775f0831c, module_torch$cuda$graphs, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_46e6898cc7892d4ef7fd86b775f0831c_2);
        assert(Py_REFCNT(frame_46e6898cc7892d4ef7fd86b775f0831c_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_torch$cuda$graphs$$$function__2___new__();

        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__1_CUDAGraph_29, mod_consts[3], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$cuda$graphs$$$function__3___init__();

        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__1_CUDAGraph_29, mod_consts[4], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }
        {
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[67];
            Py_INCREF(tmp_defaults_1);


            tmp_dictset_value = MAKE_FUNCTION_torch$cuda$graphs$$$function__4_capture_begin(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__1_CUDAGraph_29, mod_consts[5], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 42;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$cuda$graphs$$$function__5_capture_end();

        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__1_CUDAGraph_29, mod_consts[7], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$cuda$graphs$$$function__6_replay();

        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__1_CUDAGraph_29, mod_consts[9], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$cuda$graphs$$$function__7_reset();

        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__1_CUDAGraph_29, mod_consts[11], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$cuda$graphs$$$function__8_pool();

        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__1_CUDAGraph_29, mod_consts[13], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_46e6898cc7892d4ef7fd86b775f0831c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_46e6898cc7892d4ef7fd86b775f0831c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_46e6898cc7892d4ef7fd86b775f0831c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_46e6898cc7892d4ef7fd86b775f0831c_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_46e6898cc7892d4ef7fd86b775f0831c_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_3;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_5;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_5 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_3;
            }
            if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
                goto branch_yes_4;
            } else {
                goto branch_no_4;
            }
        }
        branch_yes_4:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__1_CUDAGraph_29, mod_consts[98], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;

            goto try_except_handler_3;
        }
        branch_no_4:;
        {
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_4 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[2];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_torch$cuda$graphs$$$class__1_CUDAGraph_29;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_1c065047205175a68f0ac58fdff96175->m_frame.f_lineno = 29;
            tmp_assign_source_17 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 29;

                goto try_except_handler_3;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_17;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_16 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_16);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        Py_DECREF(locals_torch$cuda$graphs$$$class__1_CUDAGraph_29);
        locals_torch$cuda$graphs$$$class__1_CUDAGraph_29 = NULL;
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

        Py_DECREF(locals_torch$cuda$graphs$$$class__1_CUDAGraph_29);
        locals_torch$cuda$graphs$$$class__1_CUDAGraph_29 = NULL;
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
        exception_lineno = 29;
        goto try_except_handler_1;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_16);
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

    Py_XDECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto frame_exception_exit_1;
    // End of try:
    try_end_1:;
    CHECK_OBJECT(tmp_class_creation_1__bases_orig);
    Py_DECREF(tmp_class_creation_1__bases_orig);
    tmp_class_creation_1__bases_orig = NULL;
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
        PyObject *tmp_assign_source_18;
        PyObject *tmp_dircall_arg1_2;
        tmp_dircall_arg1_2 = mod_consts[143];
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_18 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_4;
        }
        tmp_condition_result_6 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_14 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[62];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_14, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_4;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_20 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_20;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_15 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_15, mod_consts[82]);
        tmp_condition_result_7 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_16 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[82]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_4;
        }
        tmp_tuple_element_5 = mod_consts[52];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_1c065047205175a68f0ac58fdff96175->m_frame.f_lineno = 94;
        tmp_assign_source_21 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_21;
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_17 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_17, mod_consts[84]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_4;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[85];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[86];
        tmp_getattr_default_2 = mod_consts[87];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_18;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_18 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_18 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[86]);
            Py_DECREF(tmp_expression_value_18);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 94;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_6:;
    goto branch_end_5;
    branch_no_5:;
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_22;
    }
    branch_end_5:;
    {
        PyObject *tmp_assign_source_23;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torch$cuda$graphs$$$class__2_graph_94 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[88];
        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__2_graph_94, mod_consts[89], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[144];
        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__2_graph_94, mod_consts[120], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__2_graph_94, mod_consts[91], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_6;
        }
        frame_23e1aaca7f38cb1478722d198a4eb16c_3 = MAKE_CLASS_FRAME(codeobj_23e1aaca7f38cb1478722d198a4eb16c, module_torch$cuda$graphs, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_23e1aaca7f38cb1478722d198a4eb16c_3);
        assert(Py_REFCNT(frame_23e1aaca7f38cb1478722d198a4eb16c_3) == 2);

        // Framed code:
        tmp_dictset_value = Py_None;
        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__2_graph_94, mod_consts[15], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[145];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_torch$cuda$graphs$$$function__9___init__(tmp_defaults_2);

            tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__2_graph_94, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 119;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$cuda$graphs$$$function__10___enter__();

        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__2_graph_94, mod_consts[28], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        tmp_dictset_value = MAKE_FUNCTION_torch$cuda$graphs$$$function__11___exit__();

        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__2_graph_94, mod_consts[29], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_2 = "o";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_23e1aaca7f38cb1478722d198a4eb16c_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_23e1aaca7f38cb1478722d198a4eb16c_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_23e1aaca7f38cb1478722d198a4eb16c_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_23e1aaca7f38cb1478722d198a4eb16c_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_23e1aaca7f38cb1478722d198a4eb16c_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_6;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_9;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            tmp_cmp_expr_right_2 = mod_consts[143];
            tmp_condition_result_9 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_9 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto try_except_handler_6;
            }
            if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
                goto branch_yes_7;
            } else {
                goto branch_no_7;
            }
        }
        branch_yes_7:;
        tmp_dictset_value = mod_consts[143];
        tmp_res = PyObject_SetItem(locals_torch$cuda$graphs$$$class__2_graph_94, mod_consts[98], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;

            goto try_except_handler_6;
        }
        branch_no_7:;
        {
            PyObject *tmp_assign_source_24;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[52];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_torch$cuda$graphs$$$class__2_graph_94;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_1c065047205175a68f0ac58fdff96175->m_frame.f_lineno = 94;
            tmp_assign_source_24 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_24 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 94;

                goto try_except_handler_6;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_24;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_23 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_23);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_torch$cuda$graphs$$$class__2_graph_94);
        locals_torch$cuda$graphs$$$class__2_graph_94 = NULL;
        goto try_return_handler_5;
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

        Py_DECREF(locals_torch$cuda$graphs$$$class__2_graph_94);
        locals_torch$cuda$graphs$$$class__2_graph_94 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto try_except_handler_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
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
        exception_lineno = 94;
        goto try_except_handler_4;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_23);
    }
    goto try_end_2;
    // Exception handler code:
    try_except_handler_4:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1c065047205175a68f0ac58fdff96175, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1c065047205175a68f0ac58fdff96175->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1c065047205175a68f0ac58fdff96175, exception_lineno);
    }



    assertFrameObject(frame_1c065047205175a68f0ac58fdff96175);

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
    {
        PyObject *tmp_assign_source_25;


        tmp_assign_source_25 = MAKE_FUNCTION_torch$cuda$graphs$$$function__12_make_graphed_callables();

        UPDATE_STRING_DICT1(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_25);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.cuda.graphs", false);

    Py_INCREF(module_torch$cuda$graphs);
    return module_torch$cuda$graphs;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$cuda$graphs, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$cuda$graphs", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
