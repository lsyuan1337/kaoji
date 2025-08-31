/* Generated code for Python module 'torchvision.models.convnext'
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

/* The "module_torchvision$models$convnext" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torchvision$models$convnext;
PyDictObject *moduledict_torchvision$models$convnext;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[195];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[195];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torchvision.models.convnext"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 195; i++) {
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
void checkModuleConstants_torchvision$models$convnext(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 195; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_ce722f29d38bb6abd4cd4bccb12f3113;
static PyCodeObject *codeobj_69feeaffcf4f4167935a8eef4cae6c2b;
static PyCodeObject *codeobj_948435948df44043b3773b095244e2f0;
static PyCodeObject *codeobj_f511826afa1c030a3a8eb5200936b188;
static PyCodeObject *codeobj_f188a819b50665d1257bfb2a8f5b8640;
static PyCodeObject *codeobj_c03385a6812545aff5cee4c3e23637ed;
static PyCodeObject *codeobj_6e4a83c0d2ce626071be82922b1b7da1;
static PyCodeObject *codeobj_9e70ec4d45f70ec1d49d49dfc572647e;
static PyCodeObject *codeobj_48bc204f35744baa570acc752491e5fd;
static PyCodeObject *codeobj_b1dd385be1c01a047d68d83cc6018bae;
static PyCodeObject *codeobj_d6a0dce6050de67eede82126d613c0c6;
static PyCodeObject *codeobj_083665c82f3a2b6522607c298af8beab;
static PyCodeObject *codeobj_4a9ed5081ef23ffcd36d83f1352662e4;
static PyCodeObject *codeobj_5427eef0a842315fd2bfc5e728b99b8d;
static PyCodeObject *codeobj_136917cbca3a42c8110cc547797028d7;
static PyCodeObject *codeobj_69173ca60e5e321a80fc4f45e5301e06;
static PyCodeObject *codeobj_d7c469a4578b4112b3e02e70b27976a3;
static PyCodeObject *codeobj_0b98f7b29273258256981be8c8f66029;
static PyCodeObject *codeobj_50cc24c838e4baead63bac5ffc098485;
static PyCodeObject *codeobj_713833ea0ebc51bf32832f9cdde12267;
static PyCodeObject *codeobj_d9fadad4c7d4d6c3b8f936cf81dd130b;
static PyCodeObject *codeobj_b5adde93093c4d2f84c879ecbb325ac2;
static PyCodeObject *codeobj_273497df43ffa6f956e66039af702af9;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[180]); CHECK_OBJECT(module_filename_obj);
    codeobj_ce722f29d38bb6abd4cd4bccb12f3113 = MAKE_CODE_OBJECT(module_filename_obj, 142, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[80], mod_consts[80], mod_consts[181], mod_consts[182], 1, 0, 0);
    codeobj_69feeaffcf4f4167935a8eef4cae6c2b = MAKE_CODE_OBJECT(module_filename_obj, 116, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[183], mod_consts[183], mod_consts[184], NULL, 1, 0, 0);
    codeobj_948435948df44043b3773b095244e2f0 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[185], mod_consts[185], NULL, NULL, 0, 0, 0);
    codeobj_f511826afa1c030a3a8eb5200936b188 = MAKE_CODE_OBJECT(module_filename_obj, 48, CO_NOFREE, mod_consts[52], mod_consts[52], mod_consts[182], NULL, 0, 0, 0);
    codeobj_f188a819b50665d1257bfb2a8f5b8640 = MAKE_CODE_OBJECT(module_filename_obj, 79, CO_NOFREE, mod_consts[50], mod_consts[50], mod_consts[182], NULL, 0, 0, 0);
    codeobj_c03385a6812545aff5cee4c3e23637ed = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_NOFREE, mod_consts[83], mod_consts[83], mod_consts[182], NULL, 0, 0, 0);
    codeobj_6e4a83c0d2ce626071be82922b1b7da1 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_NOFREE, mod_consts[53], mod_consts[53], mod_consts[182], NULL, 0, 0, 0);
    codeobj_9e70ec4d45f70ec1d49d49dfc572647e = MAKE_CODE_OBJECT(module_filename_obj, 39, CO_NOFREE, mod_consts[22], mod_consts[22], mod_consts[182], NULL, 0, 0, 0);
    codeobj_48bc204f35744baa570acc752491e5fd = MAKE_CODE_OBJECT(module_filename_obj, 101, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS, mod_consts[10], mod_consts[10], mod_consts[186], mod_consts[182], 7, 0, 0);
    codeobj_b1dd385be1c01a047d68d83cc6018bae = MAKE_CODE_OBJECT(module_filename_obj, 49, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[10], mod_consts[10], mod_consts[187], mod_consts[182], 5, 0, 0);
    codeobj_d6a0dce6050de67eede82126d613c0c6 = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[10], mod_consts[10], mod_consts[188], mod_consts[182], 2, 0, 0);
    codeobj_083665c82f3a2b6522607c298af8beab = MAKE_CODE_OBJECT(module_filename_obj, 81, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[10], mod_consts[10], mod_consts[189], NULL, 4, 0, 0);
    codeobj_4a9ed5081ef23ffcd36d83f1352662e4 = MAKE_CODE_OBJECT(module_filename_obj, 91, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[167], mod_consts[167], mod_consts[190], NULL, 1, 0, 0);
    codeobj_5427eef0a842315fd2bfc5e728b99b8d = MAKE_CODE_OBJECT(module_filename_obj, 189, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[96], mod_consts[96], mod_consts[191], NULL, 5, 0, 0);
    codeobj_136917cbca3a42c8110cc547797028d7 = MAKE_CODE_OBJECT(module_filename_obj, 179, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[82], mod_consts[82], mod_consts[192], NULL, 2, 0, 0);
    codeobj_69173ca60e5e321a80fc4f45e5301e06 = MAKE_CODE_OBJECT(module_filename_obj, 240, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[108], mod_consts[108], mod_consts[193], NULL, 0, 2, 0);
    codeobj_d7c469a4578b4112b3e02e70b27976a3 = MAKE_CODE_OBJECT(module_filename_obj, 257, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[113], mod_consts[113], mod_consts[193], NULL, 0, 2, 0);
    codeobj_0b98f7b29273258256981be8c8f66029 = MAKE_CODE_OBJECT(module_filename_obj, 223, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[101], mod_consts[101], mod_consts[193], NULL, 0, 2, 0);
    codeobj_50cc24c838e4baead63bac5ffc098485 = MAKE_CODE_OBJECT(module_filename_obj, 206, CO_OPTIMIZED | CO_NEWLOCALS | CO_VARKEYWORDS | CO_NOFREE, mod_consts[97], mod_consts[97], mod_consts[193], NULL, 0, 2, 0);
    codeobj_713833ea0ebc51bf32832f9cdde12267 = MAKE_CODE_OBJECT(module_filename_obj, 72, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[194], NULL, 2, 0, 0);
    codeobj_d9fadad4c7d4d6c3b8f936cf81dd130b = MAKE_CODE_OBJECT(module_filename_obj, 32, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[192], NULL, 2, 0, 0);
    codeobj_b5adde93093c4d2f84c879ecbb325ac2 = MAKE_CODE_OBJECT(module_filename_obj, 44, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[192], NULL, 2, 0, 0);
    codeobj_273497df43ffa6f956e66039af702af9 = MAKE_CODE_OBJECT(module_filename_obj, 185, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[192], NULL, 2, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_torchvision$models$convnext$$$function__8___init__$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__8_complex_call_helper_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__4_complex_call_helper_star_list(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(PyObject **python_pars);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__7_complex_call_helper_pos_star_dict(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__10_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__11__convnext(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__12_convnext_tiny(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__13_convnext_small(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__14_convnext_base(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__15_convnext_large(PyObject *kw_defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__1_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__2___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__3_forward();


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__4___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__5_forward(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__6___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__7___repr__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__8___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__9__forward_impl(PyObject *annotations);


// The module function definitions.
static PyObject *impl_torchvision$models$convnext$$$function__1_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_d9fadad4c7d4d6c3b8f936cf81dd130b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_d9fadad4c7d4d6c3b8f936cf81dd130b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d9fadad4c7d4d6c3b8f936cf81dd130b)) {
        Py_XDECREF(cache_frame_d9fadad4c7d4d6c3b8f936cf81dd130b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d9fadad4c7d4d6c3b8f936cf81dd130b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d9fadad4c7d4d6c3b8f936cf81dd130b = MAKE_FUNCTION_FRAME(codeobj_d9fadad4c7d4d6c3b8f936cf81dd130b, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d9fadad4c7d4d6c3b8f936cf81dd130b->m_type_description == NULL);
    frame_d9fadad4c7d4d6c3b8f936cf81dd130b = cache_frame_d9fadad4c7d4d6c3b8f936cf81dd130b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d9fadad4c7d4d6c3b8f936cf81dd130b);
    assert(Py_REFCNT(frame_d9fadad4c7d4d6c3b8f936cf81dd130b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_x);
        tmp_called_instance_1 = par_x;
        frame_d9fadad4c7d4d6c3b8f936cf81dd130b->m_frame.f_lineno = 33;
        tmp_assign_source_1 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_1,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[1], 0)
        );

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 33;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_5;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[2]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[2]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[3]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[5]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[6]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[7]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_d9fadad4c7d4d6c3b8f936cf81dd130b->m_frame.f_lineno = 34;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 34;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_x);
        tmp_called_instance_2 = par_x;
        frame_d9fadad4c7d4d6c3b8f936cf81dd130b->m_frame.f_lineno = 35;
        tmp_assign_source_3 = CALL_METHOD_WITH_ARGS4(
            tmp_called_instance_2,
            mod_consts[0],
            &PyTuple_GET_ITEM(mod_consts[8], 0)
        );

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 35;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d9fadad4c7d4d6c3b8f936cf81dd130b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d9fadad4c7d4d6c3b8f936cf81dd130b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d9fadad4c7d4d6c3b8f936cf81dd130b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d9fadad4c7d4d6c3b8f936cf81dd130b,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_d9fadad4c7d4d6c3b8f936cf81dd130b == cache_frame_d9fadad4c7d4d6c3b8f936cf81dd130b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d9fadad4c7d4d6c3b8f936cf81dd130b);
        cache_frame_d9fadad4c7d4d6c3b8f936cf81dd130b = NULL;
    }

    assertFrameObject(frame_d9fadad4c7d4d6c3b8f936cf81dd130b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
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

    Py_XDECREF(par_x);
    par_x = NULL;
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


static PyObject *impl_torchvision$models$convnext$$$function__2___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dims = python_pars[1];
    struct Nuitka_FrameObject *frame_d6a0dce6050de67eede82126d613c0c6;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_d6a0dce6050de67eede82126d613c0c6 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_d6a0dce6050de67eede82126d613c0c6)) {
        Py_XDECREF(cache_frame_d6a0dce6050de67eede82126d613c0c6);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d6a0dce6050de67eede82126d613c0c6 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d6a0dce6050de67eede82126d613c0c6 = MAKE_FUNCTION_FRAME(codeobj_d6a0dce6050de67eede82126d613c0c6, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d6a0dce6050de67eede82126d613c0c6->m_type_description == NULL);
    frame_d6a0dce6050de67eede82126d613c0c6 = cache_frame_d6a0dce6050de67eede82126d613c0c6;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d6a0dce6050de67eede82126d613c0c6);
    assert(Py_REFCNT(frame_d6a0dce6050de67eede82126d613c0c6) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 41;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$convnext, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        frame_d6a0dce6050de67eede82126d613c0c6->m_frame.f_lineno = 41;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[10]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_dims);
        tmp_assattr_value_1 = par_dims;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[11], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d6a0dce6050de67eede82126d613c0c6, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d6a0dce6050de67eede82126d613c0c6->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d6a0dce6050de67eede82126d613c0c6, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d6a0dce6050de67eede82126d613c0c6,
        type_description_1,
        par_self,
        par_dims,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_d6a0dce6050de67eede82126d613c0c6 == cache_frame_d6a0dce6050de67eede82126d613c0c6) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d6a0dce6050de67eede82126d613c0c6);
        cache_frame_d6a0dce6050de67eede82126d613c0c6 = NULL;
    }

    assertFrameObject(frame_d6a0dce6050de67eede82126d613c0c6);

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
    CHECK_OBJECT(par_dims);
    Py_DECREF(par_dims);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dims);
    Py_DECREF(par_dims);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$convnext$$$function__3_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_b5adde93093c4d2f84c879ecbb325ac2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_b5adde93093c4d2f84c879ecbb325ac2 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b5adde93093c4d2f84c879ecbb325ac2)) {
        Py_XDECREF(cache_frame_b5adde93093c4d2f84c879ecbb325ac2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b5adde93093c4d2f84c879ecbb325ac2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b5adde93093c4d2f84c879ecbb325ac2 = MAKE_FUNCTION_FRAME(codeobj_b5adde93093c4d2f84c879ecbb325ac2, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b5adde93093c4d2f84c879ecbb325ac2->m_type_description == NULL);
    frame_b5adde93093c4d2f84c879ecbb325ac2 = cache_frame_b5adde93093c4d2f84c879ecbb325ac2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b5adde93093c4d2f84c879ecbb325ac2);
    assert(Py_REFCNT(frame_b5adde93093c4d2f84c879ecbb325ac2) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 45;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_b5adde93093c4d2f84c879ecbb325ac2->m_frame.f_lineno = 45;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 45;
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
        exception_tb = MAKE_TRACEBACK(frame_b5adde93093c4d2f84c879ecbb325ac2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b5adde93093c4d2f84c879ecbb325ac2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b5adde93093c4d2f84c879ecbb325ac2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b5adde93093c4d2f84c879ecbb325ac2,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_b5adde93093c4d2f84c879ecbb325ac2 == cache_frame_b5adde93093c4d2f84c879ecbb325ac2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b5adde93093c4d2f84c879ecbb325ac2);
        cache_frame_b5adde93093c4d2f84c879ecbb325ac2 = NULL;
    }

    assertFrameObject(frame_b5adde93093c4d2f84c879ecbb325ac2);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$convnext$$$function__4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_dim = python_pars[1];
    PyObject *par_layer_scale = python_pars[2];
    PyObject *par_stochastic_depth_prob = python_pars[3];
    PyObject *par_norm_layer = python_pars[4];
    struct Nuitka_FrameObject *frame_b1dd385be1c01a047d68d83cc6018bae;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_b1dd385be1c01a047d68d83cc6018bae = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b1dd385be1c01a047d68d83cc6018bae)) {
        Py_XDECREF(cache_frame_b1dd385be1c01a047d68d83cc6018bae);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b1dd385be1c01a047d68d83cc6018bae == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b1dd385be1c01a047d68d83cc6018bae = MAKE_FUNCTION_FRAME(codeobj_b1dd385be1c01a047d68d83cc6018bae, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b1dd385be1c01a047d68d83cc6018bae->m_type_description == NULL);
    frame_b1dd385be1c01a047d68d83cc6018bae = cache_frame_b1dd385be1c01a047d68d83cc6018bae;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b1dd385be1c01a047d68d83cc6018bae);
    assert(Py_REFCNT(frame_b1dd385be1c01a047d68d83cc6018bae) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 56;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$convnext, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_b1dd385be1c01a047d68d83cc6018bae->m_frame.f_lineno = 56;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[10]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 56;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_norm_layer);
        tmp_cmp_expr_left_1 = par_norm_layer;
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
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_called_value_1 == NULL));
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[15]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[16]);
        frame_b1dd385be1c01a047d68d83cc6018bae->m_frame.f_lineno = 58;
        tmp_assign_source_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_norm_layer;
            assert(old != NULL);
            par_norm_layer = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_arg_element_2;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[17]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 61;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 61;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_kw_call_arg_value_0_1 = par_dim;
        CHECK_OBJECT(par_dim);
        tmp_kw_call_arg_value_1_1 = par_dim;
        tmp_kw_call_dict_value_0_1 = mod_consts[19];
        tmp_kw_call_dict_value_1_1 = mod_consts[20];
        CHECK_OBJECT(par_dim);
        tmp_kw_call_dict_value_2_1 = par_dim;
        tmp_kw_call_dict_value_3_1 = Py_True;
        frame_b1dd385be1c01a047d68d83cc6018bae->m_frame.f_lineno = 61;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[4] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1};
            tmp_args_element_value_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[21]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 61;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 62;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_1 = MAKE_LIST4(mod_consts[23]);
        frame_b1dd385be1c01a047d68d83cc6018bae->m_frame.f_lineno = 62;
        tmp_args_element_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_call_arg_element_1);
        Py_DECREF(tmp_call_arg_element_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 62;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_norm_layer);
        tmp_called_value_5 = par_norm_layer;
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_4 = par_dim;
        frame_b1dd385be1c01a047d68d83cc6018bae->m_frame.f_lineno = 63;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 63;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 64;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[24]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 64;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_kw_call_value_0_1 = par_dim;
        tmp_mult_expr_left_1 = mod_consts[25];
        CHECK_OBJECT(par_dim);
        tmp_mult_expr_right_1 = par_dim;
        tmp_kw_call_value_1_1 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 64;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_2_1 = Py_True;
        frame_b1dd385be1c01a047d68d83cc6018bae->m_frame.f_lineno = 64;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1};

            tmp_args_element_value_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 64;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 65;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_b1dd385be1c01a047d68d83cc6018bae->m_frame.f_lineno = 65;
        tmp_args_element_value_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[27]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);

            exception_lineno = 65;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 66;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[24]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 66;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_2 = mod_consts[25];
        CHECK_OBJECT(par_dim);
        tmp_mult_expr_right_2 = par_dim;
        tmp_kw_call_value_0_2 = BINARY_OPERATION_MULT_OBJECT_LONG_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 66;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_kw_call_value_1_2 = par_dim;
        tmp_kw_call_value_2_2 = Py_True;
        frame_b1dd385be1c01a047d68d83cc6018bae->m_frame.f_lineno = 66;
        {
            PyObject *kw_values[3] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2, tmp_kw_call_value_2_2};

            tmp_args_element_value_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);

            exception_lineno = 66;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 67;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_call_arg_element_2 = MAKE_LIST4(mod_consts[28]);
        frame_b1dd385be1c01a047d68d83cc6018bae->m_frame.f_lineno = 67;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_call_arg_element_2);
        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 67;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_b1dd385be1c01a047d68d83cc6018bae->m_frame.f_lineno = 60;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8};
            tmp_assattr_value_1 = CALL_FUNCTION_WITH_ARGS7(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_5);
        Py_DECREF(tmp_args_element_value_6);
        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[29], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_assattr_target_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[30]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[12]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[12]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 69;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_dim);
        tmp_args_element_value_10 = par_dim;
        tmp_args_element_value_11 = mod_consts[32];
        tmp_args_element_value_12 = mod_consts[32];
        frame_b1dd385be1c01a047d68d83cc6018bae->m_frame.f_lineno = 69;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_mult_expr_left_3 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_3,
                mod_consts[31],
                call_args
            );
        }

        if (tmp_mult_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 69;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_layer_scale);
        tmp_mult_expr_right_3 = par_layer_scale;
        tmp_args_element_value_9 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_left_3);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 69;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_b1dd385be1c01a047d68d83cc6018bae->m_frame.f_lineno = 69;
        tmp_assattr_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[33], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 69;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_assattr_target_3;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_stochastic_depth_prob);
        tmp_args_element_value_13 = par_stochastic_depth_prob;
        tmp_args_element_value_14 = mod_consts[35];
        frame_b1dd385be1c01a047d68d83cc6018bae->m_frame.f_lineno = 70;
        {
            PyObject *call_args[] = {tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_10, call_args);
        }

        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[36], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b1dd385be1c01a047d68d83cc6018bae, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b1dd385be1c01a047d68d83cc6018bae->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b1dd385be1c01a047d68d83cc6018bae, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b1dd385be1c01a047d68d83cc6018bae,
        type_description_1,
        par_self,
        par_dim,
        par_layer_scale,
        par_stochastic_depth_prob,
        par_norm_layer,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_b1dd385be1c01a047d68d83cc6018bae == cache_frame_b1dd385be1c01a047d68d83cc6018bae) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b1dd385be1c01a047d68d83cc6018bae);
        cache_frame_b1dd385be1c01a047d68d83cc6018bae = NULL;
    }

    assertFrameObject(frame_b1dd385be1c01a047d68d83cc6018bae);

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
    CHECK_OBJECT(par_norm_layer);
    Py_DECREF(par_norm_layer);
    par_norm_layer = NULL;
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

    Py_XDECREF(par_norm_layer);
    par_norm_layer = NULL;
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
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_layer_scale);
    Py_DECREF(par_layer_scale);
    CHECK_OBJECT(par_stochastic_depth_prob);
    Py_DECREF(par_stochastic_depth_prob);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_dim);
    Py_DECREF(par_dim);
    CHECK_OBJECT(par_layer_scale);
    Py_DECREF(par_layer_scale);
    CHECK_OBJECT(par_stochastic_depth_prob);
    Py_DECREF(par_stochastic_depth_prob);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$convnext$$$function__5_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_input = python_pars[1];
    PyObject *var_result = NULL;
    struct Nuitka_FrameObject *frame_713833ea0ebc51bf32832f9cdde12267;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_713833ea0ebc51bf32832f9cdde12267 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_713833ea0ebc51bf32832f9cdde12267)) {
        Py_XDECREF(cache_frame_713833ea0ebc51bf32832f9cdde12267);

#if _DEBUG_REFCOUNTS
        if (cache_frame_713833ea0ebc51bf32832f9cdde12267 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_713833ea0ebc51bf32832f9cdde12267 = MAKE_FUNCTION_FRAME(codeobj_713833ea0ebc51bf32832f9cdde12267, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_713833ea0ebc51bf32832f9cdde12267->m_type_description == NULL);
    frame_713833ea0ebc51bf32832f9cdde12267 = cache_frame_713833ea0ebc51bf32832f9cdde12267;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_713833ea0ebc51bf32832f9cdde12267);
    assert(Py_REFCNT(frame_713833ea0ebc51bf32832f9cdde12267) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[33]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_input);
        tmp_args_element_value_1 = par_input;
        frame_713833ea0ebc51bf32832f9cdde12267->m_frame.f_lineno = 73;
        tmp_mult_expr_right_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[29], tmp_args_element_value_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_result == NULL);
        var_result = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(var_result);
        tmp_args_element_value_2 = var_result;
        frame_713833ea0ebc51bf32832f9cdde12267->m_frame.f_lineno = 74;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[36], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_result;
            assert(old != NULL);
            var_result = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(var_result);
        tmp_iadd_expr_left_1 = var_result;
        CHECK_OBJECT(par_input);
        tmp_iadd_expr_right_1 = par_input;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_1;
        var_result = tmp_assign_source_3;

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_713833ea0ebc51bf32832f9cdde12267, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_713833ea0ebc51bf32832f9cdde12267->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_713833ea0ebc51bf32832f9cdde12267, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_713833ea0ebc51bf32832f9cdde12267,
        type_description_1,
        par_self,
        par_input,
        var_result
    );


    // Release cached frame if used for exception.
    if (frame_713833ea0ebc51bf32832f9cdde12267 == cache_frame_713833ea0ebc51bf32832f9cdde12267) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_713833ea0ebc51bf32832f9cdde12267);
        cache_frame_713833ea0ebc51bf32832f9cdde12267 = NULL;
    }

    assertFrameObject(frame_713833ea0ebc51bf32832f9cdde12267);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_result);
    tmp_return_value = var_result;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_result);
    Py_DECREF(var_result);
    var_result = NULL;
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

    Py_XDECREF(var_result);
    var_result = NULL;
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
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input);
    Py_DECREF(par_input);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$convnext$$$function__6___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_input_channels = python_pars[1];
    PyObject *par_out_channels = python_pars[2];
    PyObject *par_num_layers = python_pars[3];
    struct Nuitka_FrameObject *frame_083665c82f3a2b6522607c298af8beab;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_083665c82f3a2b6522607c298af8beab = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_083665c82f3a2b6522607c298af8beab)) {
        Py_XDECREF(cache_frame_083665c82f3a2b6522607c298af8beab);

#if _DEBUG_REFCOUNTS
        if (cache_frame_083665c82f3a2b6522607c298af8beab == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_083665c82f3a2b6522607c298af8beab = MAKE_FUNCTION_FRAME(codeobj_083665c82f3a2b6522607c298af8beab, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_083665c82f3a2b6522607c298af8beab->m_type_description == NULL);
    frame_083665c82f3a2b6522607c298af8beab = cache_frame_083665c82f3a2b6522607c298af8beab;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_083665c82f3a2b6522607c298af8beab);
    assert(Py_REFCNT(frame_083665c82f3a2b6522607c298af8beab) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_input_channels);
        tmp_assattr_value_1 = par_input_channels;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[37], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_out_channels);
        tmp_assattr_value_2 = par_out_channels;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[38], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_num_layers);
        tmp_assattr_value_3 = par_num_layers;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[39], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_083665c82f3a2b6522607c298af8beab, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_083665c82f3a2b6522607c298af8beab->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_083665c82f3a2b6522607c298af8beab, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_083665c82f3a2b6522607c298af8beab,
        type_description_1,
        par_self,
        par_input_channels,
        par_out_channels,
        par_num_layers
    );


    // Release cached frame if used for exception.
    if (frame_083665c82f3a2b6522607c298af8beab == cache_frame_083665c82f3a2b6522607c298af8beab) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_083665c82f3a2b6522607c298af8beab);
        cache_frame_083665c82f3a2b6522607c298af8beab = NULL;
    }

    assertFrameObject(frame_083665c82f3a2b6522607c298af8beab);

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
    CHECK_OBJECT(par_input_channels);
    Py_DECREF(par_input_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_num_layers);
    Py_DECREF(par_num_layers);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_input_channels);
    Py_DECREF(par_input_channels);
    CHECK_OBJECT(par_out_channels);
    Py_DECREF(par_out_channels);
    CHECK_OBJECT(par_num_layers);
    Py_DECREF(par_num_layers);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$convnext$$$function__7___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_s = NULL;
    struct Nuitka_FrameObject *frame_4a9ed5081ef23ffcd36d83f1352662e4;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4a9ed5081ef23ffcd36d83f1352662e4 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4a9ed5081ef23ffcd36d83f1352662e4)) {
        Py_XDECREF(cache_frame_4a9ed5081ef23ffcd36d83f1352662e4);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a9ed5081ef23ffcd36d83f1352662e4 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a9ed5081ef23ffcd36d83f1352662e4 = MAKE_FUNCTION_FRAME(codeobj_4a9ed5081ef23ffcd36d83f1352662e4, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4a9ed5081ef23ffcd36d83f1352662e4->m_type_description == NULL);
    frame_4a9ed5081ef23ffcd36d83f1352662e4 = cache_frame_4a9ed5081ef23ffcd36d83f1352662e4;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4a9ed5081ef23ffcd36d83f1352662e4);
    assert(Py_REFCNT(frame_4a9ed5081ef23ffcd36d83f1352662e4) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE_CLASS_SLOT(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[40]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[41];
        tmp_assign_source_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_s == NULL);
        var_s = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(var_s);
        tmp_iadd_expr_left_1 = var_s;
        tmp_iadd_expr_right_1 = mod_consts[42];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        var_s = tmp_assign_source_2;

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iadd_expr_left_2;
        PyObject *tmp_iadd_expr_right_2;
        CHECK_OBJECT(var_s);
        tmp_iadd_expr_left_2 = var_s;
        tmp_iadd_expr_right_2 = mod_consts[43];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_2, tmp_iadd_expr_right_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = tmp_iadd_expr_left_2;
        var_s = tmp_assign_source_3;

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iadd_expr_left_3;
        PyObject *tmp_iadd_expr_right_3;
        CHECK_OBJECT(var_s);
        tmp_iadd_expr_left_3 = var_s;
        tmp_iadd_expr_right_3 = mod_consts[44];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_3, tmp_iadd_expr_right_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = tmp_iadd_expr_left_3;
        var_s = tmp_assign_source_4;

    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iadd_expr_left_4;
        PyObject *tmp_iadd_expr_right_4;
        CHECK_OBJECT(var_s);
        tmp_iadd_expr_left_4 = var_s;
        tmp_iadd_expr_right_4 = mod_consts[45];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_UNICODE(&tmp_iadd_expr_left_4, tmp_iadd_expr_right_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = tmp_iadd_expr_left_4;
        var_s = tmp_assign_source_5;

    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_s);
        tmp_expression_value_3 = var_s;
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[46]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_dircall_arg2_1 = LOOKUP_ATTRIBUTE_DICT_SLOT(tmp_expression_value_4);
        if (tmp_dircall_arg2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_dircall_arg1_1);

            exception_lineno = 97;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_return_value = impl___main__$$$function__8_complex_call_helper_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
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
        exception_tb = MAKE_TRACEBACK(frame_4a9ed5081ef23ffcd36d83f1352662e4, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a9ed5081ef23ffcd36d83f1352662e4->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a9ed5081ef23ffcd36d83f1352662e4, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a9ed5081ef23ffcd36d83f1352662e4,
        type_description_1,
        par_self,
        var_s
    );


    // Release cached frame if used for exception.
    if (frame_4a9ed5081ef23ffcd36d83f1352662e4 == cache_frame_4a9ed5081ef23ffcd36d83f1352662e4) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4a9ed5081ef23ffcd36d83f1352662e4);
        cache_frame_4a9ed5081ef23ffcd36d83f1352662e4 = NULL;
    }

    assertFrameObject(frame_4a9ed5081ef23ffcd36d83f1352662e4);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_s);
    Py_DECREF(var_s);
    var_s = NULL;
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

    Py_XDECREF(var_s);
    var_s = NULL;
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


static PyObject *impl_torchvision$models$convnext$$$function__8___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_block_setting = python_pars[1];
    PyObject *par_stochastic_depth_prob = python_pars[2];
    PyObject *par_layer_scale = python_pars[3];
    PyObject *par_num_classes = python_pars[4];
    PyObject *par_block = python_pars[5];
    PyObject *par_norm_layer = python_pars[6];
    PyObject *par_kwargs = python_pars[7];
    PyObject *var_layers = NULL;
    PyObject *var_stage = NULL;
    PyObject *var_firstconv_output_channels = NULL;
    PyObject *var_total_stage_blocks = NULL;
    PyObject *var_stage_block_id = NULL;
    PyObject *var_cnf = NULL;
    PyObject *var__ = NULL;
    PyObject *var_sd_prob = NULL;
    PyObject *var_lastblock = NULL;
    PyObject *var_lastconv_output_channels = NULL;
    PyObject *var_m = NULL;
    PyObject *outline_0_var_s = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_for_loop_2__for_iterator = NULL;
    PyObject *tmp_for_loop_2__iter_value = NULL;
    PyObject *tmp_for_loop_3__for_iterator = NULL;
    PyObject *tmp_for_loop_3__iter_value = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_48bc204f35744baa570acc752491e5fd;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_69feeaffcf4f4167935a8eef4cae6c2b_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_69feeaffcf4f4167935a8eef4cae6c2b_2 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_48bc204f35744baa570acc752491e5fd = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_6;
    PyObject *exception_keeper_value_6;
    PyTracebackObject *exception_keeper_tb_6;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_6;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_48bc204f35744baa570acc752491e5fd)) {
        Py_XDECREF(cache_frame_48bc204f35744baa570acc752491e5fd);

#if _DEBUG_REFCOUNTS
        if (cache_frame_48bc204f35744baa570acc752491e5fd == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_48bc204f35744baa570acc752491e5fd = MAKE_FUNCTION_FRAME(codeobj_48bc204f35744baa570acc752491e5fd, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_48bc204f35744baa570acc752491e5fd->m_type_description == NULL);
    frame_48bc204f35744baa570acc752491e5fd = cache_frame_48bc204f35744baa570acc752491e5fd;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_48bc204f35744baa570acc752491e5fd);
    assert(Py_REFCNT(frame_48bc204f35744baa570acc752491e5fd) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[9]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$convnext, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 111;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[10]);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[47]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[47]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_args_element_value_1 = par_self;
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 112;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_block_setting);
        tmp_operand_value_1 = par_block_setting;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooc";
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
        tmp_make_exception_arg_1 = mod_consts[48];
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 115;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 115;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooc";
        goto frame_exception_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_all_arg_1;
        CHECK_OBJECT(par_block_setting);
        tmp_isinstance_inst_1 = par_block_setting;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_block_setting);
            tmp_iter_arg_1 = par_block_setting;
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_1 = "oooooooooooooooooooc";
                goto try_except_handler_2;
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
        if (isFrameUnusable(cache_frame_69feeaffcf4f4167935a8eef4cae6c2b_2)) {
            Py_XDECREF(cache_frame_69feeaffcf4f4167935a8eef4cae6c2b_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_69feeaffcf4f4167935a8eef4cae6c2b_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_69feeaffcf4f4167935a8eef4cae6c2b_2 = MAKE_FUNCTION_FRAME(codeobj_69feeaffcf4f4167935a8eef4cae6c2b, module_torchvision$models$convnext, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_69feeaffcf4f4167935a8eef4cae6c2b_2->m_type_description == NULL);
        frame_69feeaffcf4f4167935a8eef4cae6c2b_2 = cache_frame_69feeaffcf4f4167935a8eef4cae6c2b_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_69feeaffcf4f4167935a8eef4cae6c2b_2);
        assert(Py_REFCNT(frame_69feeaffcf4f4167935a8eef4cae6c2b_2) == 2);

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
                    type_description_2 = "o";
                    exception_lineno = 116;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_3;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_4 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_s;
                outline_0_var_s = tmp_assign_source_4;
                Py_INCREF(outline_0_var_s);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_isinstance_inst_2;
            PyObject *tmp_isinstance_cls_2;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_s);
            tmp_isinstance_inst_2 = outline_0_var_s;
            tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_isinstance_cls_2 == NULL)) {
                tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_isinstance_cls_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_append_value_1 = (tmp_res != 0) ? Py_True : Py_False;
            tmp_result = LIST_APPEND0(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 116;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_all_arg_1 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_all_arg_1);
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
        goto frame_return_exit_1;
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

        CHECK_OBJECT(tmp_listcomp_1__$0);
        Py_DECREF(tmp_listcomp_1__$0);
        tmp_listcomp_1__$0 = NULL;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        Py_DECREF(tmp_listcomp_1__contraction);
        tmp_listcomp_1__contraction = NULL;
        Py_XDECREF(tmp_listcomp_1__iter_value_0);
        tmp_listcomp_1__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_1;
        exception_value = exception_keeper_value_1;
        exception_tb = exception_keeper_tb_1;
        exception_lineno = exception_keeper_lineno_1;

        goto frame_exception_exit_2;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_return_exit_1:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_69feeaffcf4f4167935a8eef4cae6c2b_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_69feeaffcf4f4167935a8eef4cae6c2b_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_69feeaffcf4f4167935a8eef4cae6c2b_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_69feeaffcf4f4167935a8eef4cae6c2b_2,
            type_description_2,
            outline_0_var_s
        );


        // Release cached frame if used for exception.
        if (frame_69feeaffcf4f4167935a8eef4cae6c2b_2 == cache_frame_69feeaffcf4f4167935a8eef4cae6c2b_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_69feeaffcf4f4167935a8eef4cae6c2b_2);
            cache_frame_69feeaffcf4f4167935a8eef4cae6c2b_2 = NULL;
        }

        assertFrameObject(frame_69feeaffcf4f4167935a8eef4cae6c2b_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooooooooooooooc";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_s);
        outline_0_var_s = NULL;
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

        Py_XDECREF(outline_0_var_s);
        outline_0_var_s = NULL;
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
        exception_lineno = 116;
        goto frame_exception_exit_1;
        outline_result_1:;
        tmp_and_right_value_1 = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_operand_value_2 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "oooooooooooooooooooc";
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
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[51];
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 117;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_TypeError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 117;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooooooooooooooc";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    branch_end_1:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_block);
        tmp_cmp_expr_left_1 = par_block;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[52]);

        if (unlikely(tmp_assign_source_5 == NULL)) {
            tmp_assign_source_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[52]);
        }

        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 120;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_block;
            assert(old != NULL);
            par_block = tmp_assign_source_5;
            Py_INCREF(par_block);
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_norm_layer);
        tmp_cmp_expr_left_2 = par_norm_layer;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        assert(!(tmp_called_value_2 == NULL));
        tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[53]);

        if (unlikely(tmp_tuple_element_1 == NULL)) {
            tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[53]);
        }

        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[16]);
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 123;
        tmp_assign_source_6 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 123;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_norm_layer;
            assert(old != NULL);
            par_norm_layer = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = MAKE_LIST_EMPTY(0);
        assert(var_layers == NULL);
        var_layers = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        if (par_block_setting == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_block_setting;
        tmp_subscript_value_1 = mod_consts[55];
        tmp_expression_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_1, 0);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[37]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_firstconv_output_channels == NULL);
        var_firstconv_output_channels = tmp_assign_source_8;
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_kw_call_dict_value_3_1;
        PyObject *tmp_kw_call_dict_value_4_1;
        PyObject *tmp_kw_call_dict_value_5_1;
        CHECK_OBJECT(var_layers);
        tmp_list_arg_value_1 = var_layers;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_arg_value_0_1 = mod_consts[20];
        CHECK_OBJECT(var_firstconv_output_channels);
        tmp_kw_call_arg_value_1_1 = var_firstconv_output_channels;
        tmp_kw_call_dict_value_0_1 = mod_consts[25];
        tmp_kw_call_dict_value_1_1 = mod_consts[25];
        tmp_kw_call_dict_value_2_1 = mod_consts[55];
        CHECK_OBJECT(par_norm_layer);
        tmp_kw_call_dict_value_3_1 = par_norm_layer;
        tmp_kw_call_dict_value_4_1 = Py_None;
        tmp_kw_call_dict_value_5_1 = Py_True;
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 130;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[6] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1, tmp_kw_call_dict_value_3_1, tmp_kw_call_dict_value_4_1, tmp_kw_call_dict_value_5_1};
            tmp_item_value_1 = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[57]);
        }

        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 130;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_sum_sequence_1;
        {
            PyObject *tmp_assign_source_10;
            PyObject *tmp_iter_arg_2;
            if (par_block_setting == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 142;
                type_description_1 = "oooooooooooooooooooc";
                goto frame_exception_exit_1;
            }

            tmp_iter_arg_2 = par_block_setting;
            tmp_assign_source_10 = MAKE_ITERATOR(tmp_iter_arg_2);
            if (tmp_assign_source_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 142;
                type_description_1 = "oooooooooooooooooooc";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_10;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_sum_sequence_1 = MAKE_GENERATOR_torchvision$models$convnext$$$function__8___init__$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_4;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_2:;
        tmp_assign_source_9 = BUILTIN_SUM1(tmp_sum_sequence_1);
        Py_DECREF(tmp_sum_sequence_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_total_stage_blocks == NULL);
        var_total_stage_blocks = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_11;
        tmp_assign_source_11 = mod_consts[55];
        assert(var_stage_block_id == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_stage_block_id = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_iter_arg_3;
        if (par_block_setting == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_iter_arg_3 = par_block_setting;
        tmp_assign_source_12 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_12;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_13 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooc";
                exception_lineno = 144;
                goto try_except_handler_5;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_14 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_cnf;
            var_cnf = tmp_assign_source_14;
            Py_INCREF(var_cnf);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = var_stage;
            var_stage = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_iter_arg_4;
        PyObject *tmp_xrange_low_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_cnf);
        tmp_expression_value_3 = var_cnf;
        tmp_xrange_low_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[39]);
        if (tmp_xrange_low_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        tmp_iter_arg_4 = BUILTIN_XRANGE1(tmp_xrange_low_1);
        Py_DECREF(tmp_xrange_low_1);
        if (tmp_iter_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        tmp_assign_source_16 = MAKE_ITERATOR(tmp_iter_arg_4);
        Py_DECREF(tmp_iter_arg_4);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        {
            PyObject *old = tmp_for_loop_2__for_iterator;
            tmp_for_loop_2__for_iterator = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    loop_start_3:;
    {
        PyObject *tmp_next_source_3;
        PyObject *tmp_assign_source_17;
        CHECK_OBJECT(tmp_for_loop_2__for_iterator);
        tmp_next_source_3 = tmp_for_loop_2__for_iterator;
        tmp_assign_source_17 = ITERATOR_NEXT(tmp_next_source_3);
        if (tmp_assign_source_17 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_3;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooc";
                exception_lineno = 147;
                goto try_except_handler_6;
            }
        }

        {
            PyObject *old = tmp_for_loop_2__iter_value;
            tmp_for_loop_2__iter_value = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_18;
        CHECK_OBJECT(tmp_for_loop_2__iter_value);
        tmp_assign_source_18 = tmp_for_loop_2__iter_value;
        {
            PyObject *old = var__;
            var__ = tmp_assign_source_18;
            Py_INCREF(var__);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        if (par_stochastic_depth_prob == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[58]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }

        tmp_mult_expr_left_1 = par_stochastic_depth_prob;
        if (var_stage_block_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }

        tmp_mult_expr_right_1 = var_stage_block_id;
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }
        if (var_total_stage_blocks == NULL) {
            Py_DECREF(tmp_truediv_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[60]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }

        tmp_sub_expr_left_1 = var_total_stage_blocks;
        tmp_sub_expr_right_1 = mod_consts[61];
        tmp_truediv_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_FLOAT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_truediv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_truediv_expr_left_1);

            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }
        tmp_assign_source_19 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        Py_DECREF(tmp_truediv_expr_right_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 149;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }
        {
            PyObject *old = var_sd_prob;
            var_sd_prob = tmp_assign_source_19;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        if (var_stage == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }

        tmp_expression_value_4 = var_stage;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[63]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }
        if (par_block == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[29]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }

        tmp_called_value_5 = par_block;
        if (var_cnf == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }

        tmp_expression_value_5 = var_cnf;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[37]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }
        if (par_layer_scale == NULL) {
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[33]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }

        tmp_args_element_value_4 = par_layer_scale;
        CHECK_OBJECT(var_sd_prob);
        tmp_args_element_value_5 = var_sd_prob;
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 150;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_args_element_value_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 150;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_stage_block_id == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[59]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }

        tmp_iadd_expr_left_1 = var_stage_block_id;
        tmp_iadd_expr_right_1 = mod_consts[32];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_6;
        }
        tmp_assign_source_20 = tmp_iadd_expr_left_1;
        var_stage_block_id = tmp_assign_source_20;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 147;
        type_description_1 = "oooooooooooooooooooc";
        goto try_except_handler_6;
    }
    goto loop_start_3;
    loop_end_3:;
    goto try_end_1;
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

    goto try_except_handler_5;
    // End of try:
    try_end_1:;
    Py_XDECREF(tmp_for_loop_2__iter_value);
    tmp_for_loop_2__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_2__for_iterator);
    Py_DECREF(tmp_for_loop_2__for_iterator);
    tmp_for_loop_2__for_iterator = NULL;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_dircall_arg2_1;
        if (var_layers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }

        tmp_expression_value_6 = var_layers;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[63]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        tmp_dircall_arg1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[17]);
        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        if (var_stage == NULL) {
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_dircall_arg1_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }

        tmp_dircall_arg2_1 = var_stage;
        Py_INCREF(tmp_dircall_arg2_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1};
            tmp_args_element_value_6 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 152;
        tmp_call_result_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_8;
        if (var_cnf == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }

        tmp_expression_value_8 = var_cnf;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[38]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 != tmp_cmp_expr_right_3) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_kwargs_value_2;
        if (var_layers == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }

        tmp_expression_value_9 = var_layers;
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[63]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[17]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        if (par_norm_layer == NULL) {
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }

        tmp_called_value_9 = par_norm_layer;
        if (var_cnf == NULL) {
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }

        tmp_expression_value_11 = var_cnf;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[37]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 157;
        tmp_args_element_value_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 157;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[18]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        if (var_cnf == NULL) {
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_10);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }

        tmp_expression_value_13 = var_cnf;
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[37]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_8);
            Py_DECREF(tmp_called_value_10);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_14;
            PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_2);
            if (var_cnf == NULL) {

                FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[64]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 158;
                type_description_1 = "oooooooooooooooooooc";
                goto tuple_build_exception_1;
            }

            tmp_expression_value_14 = var_cnf;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[38]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 158;
                type_description_1 = "oooooooooooooooooooc";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_value_2, 1, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[67]);
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 158;
        tmp_args_element_value_10 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_10);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 158;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 156;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_10};
            tmp_args_element_value_7 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_8, call_args);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 156;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 155;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_5;
        }
        Py_DECREF(tmp_call_result_5);
    }
    branch_no_5:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 144;
        type_description_1 = "oooooooooooooooooooc";
        goto try_except_handler_5;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_2;
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
    try_end_2:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_dircall_arg1_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_dircall_arg2_2;
        PyObject *tmp_assattr_target_1;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_dircall_arg1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[17]);
        if (tmp_dircall_arg1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (var_layers == NULL) {
            Py_DECREF(tmp_dircall_arg1_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[65]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_dircall_arg2_2 = var_layers;
        Py_INCREF(tmp_dircall_arg2_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2, tmp_dircall_arg2_2};
            tmp_assattr_value_1 = impl___main__$$$function__4_complex_call_helper_star_list(dir_call_args);
        }
        if (tmp_assattr_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[68], tmp_assattr_value_1);
        Py_DECREF(tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_assattr_target_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 163;
        tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[69],
            PyTuple_GET_ITEM(mod_consts[70], 0)
        );

        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[71], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_2;
        if (par_block_setting == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[54]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = par_block_setting;
        tmp_subscript_value_2 = mod_consts[72];
        tmp_assign_source_21 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_16, tmp_subscript_value_2, -1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(var_lastblock == NULL);
        var_lastblock = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        CHECK_OBJECT(var_lastblock);
        tmp_expression_value_17 = var_lastblock;
        tmp_cmp_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[38]);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_6 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_6 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_lastblock);
        tmp_expression_value_18 = var_lastblock;
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[38]);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        CHECK_OBJECT(var_lastblock);
        tmp_expression_value_19 = var_lastblock;
        tmp_assign_source_22 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[37]);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        condexpr_end_1:;
        assert(var_lastconv_output_channels == NULL);
        var_lastconv_output_channels = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_assattr_target_3;
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[17]);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        if (par_norm_layer == NULL) {
            Py_DECREF(tmp_called_value_11);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[66]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }

        tmp_called_value_12 = par_norm_layer;
        CHECK_OBJECT(var_lastconv_output_channels);
        tmp_args_element_value_12 = var_lastconv_output_channels;
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 170;
        tmp_args_element_value_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_12);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);

            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 170;
        tmp_args_element_value_13 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[73],
            PyTuple_GET_ITEM(mod_consts[70], 0)
        );

        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_lastconv_output_channels);
        tmp_args_element_value_15 = var_lastconv_output_channels;
        CHECK_OBJECT(par_num_classes);
        tmp_args_element_value_16 = par_num_classes;
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_args_element_value_14 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_4,
                mod_consts[24],
                call_args
            );
        }

        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_11);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_13);

            exception_lineno = 170;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 169;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assattr_value_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_called_value_11);
        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_13);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_assattr_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[74], tmp_assattr_value_3);
        Py_DECREF(tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_iter_arg_5;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_self);
        tmp_called_instance_5 = par_self;
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 173;
        tmp_iter_arg_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[75]);
        if (tmp_iter_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = MAKE_ITERATOR(tmp_iter_arg_5);
        Py_DECREF(tmp_iter_arg_5);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooooooooooooooc";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_3__for_iterator == NULL);
        tmp_for_loop_3__for_iterator = tmp_assign_source_23;
    }
    // Tried code:
    loop_start_4:;
    {
        PyObject *tmp_next_source_4;
        PyObject *tmp_assign_source_24;
        CHECK_OBJECT(tmp_for_loop_3__for_iterator);
        tmp_next_source_4 = tmp_for_loop_3__for_iterator;
        tmp_assign_source_24 = ITERATOR_NEXT(tmp_next_source_4);
        if (tmp_assign_source_24 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_4;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooooooooooooooc";
                exception_lineno = 173;
                goto try_except_handler_7;
            }
        }

        {
            PyObject *old = tmp_for_loop_3__iter_value;
            tmp_for_loop_3__iter_value = tmp_assign_source_24;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_25;
        CHECK_OBJECT(tmp_for_loop_3__iter_value);
        tmp_assign_source_25 = tmp_for_loop_3__iter_value;
        {
            PyObject *old = var_m;
            var_m = tmp_assign_source_25;
            Py_INCREF(var_m);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(var_m);
        tmp_isinstance_inst_3 = var_m;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[18]);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_isinstance_cls_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_22;
            PyTuple_SET_ITEM(tmp_isinstance_cls_3, 0, tmp_tuple_element_3);
            tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

            if (unlikely(tmp_expression_value_22 == NULL)) {
                tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
            }

            if (tmp_expression_value_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "oooooooooooooooooooc";
                goto tuple_build_exception_2;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[24]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 174;
                type_description_1 = "oooooooooooooooooooc";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_isinstance_cls_3, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_isinstance_cls_3);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        Py_DECREF(tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 174;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_kwargs_value_3;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[76]);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[77]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_m);
        tmp_expression_value_25 = var_m;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[5]);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_3, 0, tmp_tuple_element_4);
        tmp_kwargs_value_3 = DICT_COPY(mod_consts[78]);
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 175;
        tmp_call_result_6 = CALL_FUNCTION(tmp_called_value_13, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_args_value_3);
        Py_DECREF(tmp_kwargs_value_3);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_6);
    }
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_26;
        CHECK_OBJECT(var_m);
        tmp_expression_value_26 = var_m;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[6]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_cmp_expr_right_5 = Py_None;
        tmp_condition_result_8 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_8 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_call_result_7;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_expression_value_29;
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[76]);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_7;
        }
        tmp_called_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[79]);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_7;
        }
        CHECK_OBJECT(var_m);
        tmp_expression_value_29 = var_m;
        tmp_args_element_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[6]);
        if (tmp_args_element_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_14);

            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_7;
        }
        frame_48bc204f35744baa570acc752491e5fd->m_frame.f_lineno = 177;
        tmp_call_result_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_17);
        Py_DECREF(tmp_called_value_14);
        Py_DECREF(tmp_args_element_value_17);
        if (tmp_call_result_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;
            type_description_1 = "oooooooooooooooooooc";
            goto try_except_handler_7;
        }
        Py_DECREF(tmp_call_result_7);
    }
    branch_no_7:;
    branch_no_6:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 173;
        type_description_1 = "oooooooooooooooooooc";
        goto try_except_handler_7;
    }
    goto loop_start_4;
    loop_end_4:;
    goto try_end_3;
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

    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_48bc204f35744baa570acc752491e5fd, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_48bc204f35744baa570acc752491e5fd->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_48bc204f35744baa570acc752491e5fd, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_48bc204f35744baa570acc752491e5fd,
        type_description_1,
        par_self,
        par_block_setting,
        par_stochastic_depth_prob,
        par_layer_scale,
        par_num_classes,
        par_block,
        par_norm_layer,
        par_kwargs,
        var_layers,
        var_stage,
        var_firstconv_output_channels,
        var_total_stage_blocks,
        var_stage_block_id,
        var_cnf,
        var__,
        var_sd_prob,
        var_lastblock,
        var_lastconv_output_channels,
        var_m,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_48bc204f35744baa570acc752491e5fd == cache_frame_48bc204f35744baa570acc752491e5fd) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_48bc204f35744baa570acc752491e5fd);
        cache_frame_48bc204f35744baa570acc752491e5fd = NULL;
    }

    assertFrameObject(frame_48bc204f35744baa570acc752491e5fd);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    Py_XDECREF(tmp_for_loop_3__iter_value);
    tmp_for_loop_3__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_3__for_iterator);
    Py_DECREF(tmp_for_loop_3__for_iterator);
    tmp_for_loop_3__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_block);
    par_block = NULL;
    Py_XDECREF(par_norm_layer);
    par_norm_layer = NULL;
    Py_XDECREF(var_layers);
    var_layers = NULL;
    Py_XDECREF(var_stage);
    var_stage = NULL;
    CHECK_OBJECT(var_firstconv_output_channels);
    Py_DECREF(var_firstconv_output_channels);
    var_firstconv_output_channels = NULL;
    Py_XDECREF(var_total_stage_blocks);
    var_total_stage_blocks = NULL;
    Py_XDECREF(var_stage_block_id);
    var_stage_block_id = NULL;
    Py_XDECREF(var_cnf);
    var_cnf = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_sd_prob);
    var_sd_prob = NULL;
    CHECK_OBJECT(var_lastblock);
    Py_DECREF(var_lastblock);
    var_lastblock = NULL;
    CHECK_OBJECT(var_lastconv_output_channels);
    Py_DECREF(var_lastconv_output_channels);
    var_lastconv_output_channels = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
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

    Py_XDECREF(par_block);
    par_block = NULL;
    Py_XDECREF(par_norm_layer);
    par_norm_layer = NULL;
    Py_XDECREF(var_layers);
    var_layers = NULL;
    Py_XDECREF(var_stage);
    var_stage = NULL;
    Py_XDECREF(var_firstconv_output_channels);
    var_firstconv_output_channels = NULL;
    Py_XDECREF(var_total_stage_blocks);
    var_total_stage_blocks = NULL;
    Py_XDECREF(var_stage_block_id);
    var_stage_block_id = NULL;
    Py_XDECREF(var_cnf);
    var_cnf = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_sd_prob);
    var_sd_prob = NULL;
    Py_XDECREF(var_lastblock);
    var_lastblock = NULL;
    Py_XDECREF(var_lastconv_output_channels);
    var_lastconv_output_channels = NULL;
    Py_XDECREF(var_m);
    var_m = NULL;
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
    CHECK_OBJECT(par_block_setting);
    Py_DECREF(par_block_setting);
    CHECK_OBJECT(par_stochastic_depth_prob);
    Py_DECREF(par_stochastic_depth_prob);
    CHECK_OBJECT(par_layer_scale);
    Py_DECREF(par_layer_scale);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_block_setting);
    Py_DECREF(par_block_setting);
    CHECK_OBJECT(par_stochastic_depth_prob);
    Py_DECREF(par_stochastic_depth_prob);
    CHECK_OBJECT(par_layer_scale);
    Py_DECREF(par_layer_scale);
    CHECK_OBJECT(par_num_classes);
    Py_DECREF(par_num_classes);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct torchvision$models$convnext$$$function__8___init__$$$genexpr__1_genexpr_locals {
    PyObject *var_cnf;
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

static PyObject *torchvision$models$convnext$$$function__8___init__$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torchvision$models$convnext$$$function__8___init__$$$genexpr__1_genexpr_locals *generator_heap = (struct torchvision$models$convnext$$$function__8___init__$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_cnf = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_ce722f29d38bb6abd4cd4bccb12f3113, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 142;
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
            PyObject *old = generator_heap->var_cnf;
            generator_heap->var_cnf = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_cnf);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_cnf);
        tmp_expression_value_2 = generator_heap->var_cnf;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 142;
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


            generator_heap->exception_lineno = 142;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 142;
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
            generator_heap->var_cnf
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

    Py_XDECREF(generator_heap->var_cnf);
    generator_heap->var_cnf = NULL;
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
    Py_XDECREF(generator_heap->var_cnf);
    generator_heap->var_cnf = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torchvision$models$convnext$$$function__8___init__$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torchvision$models$convnext$$$function__8___init__$$$genexpr__1_genexpr_context,
        module_torchvision$models$convnext,
        mod_consts[80],
#if PYTHON_VERSION >= 0x350
        mod_consts[81],
#endif
        codeobj_ce722f29d38bb6abd4cd4bccb12f3113,
        closure,
        1,
        sizeof(struct torchvision$models$convnext$$$function__8___init__$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_torchvision$models$convnext$$$function__9__forward_impl(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_136917cbca3a42c8110cc547797028d7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_136917cbca3a42c8110cc547797028d7 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_136917cbca3a42c8110cc547797028d7)) {
        Py_XDECREF(cache_frame_136917cbca3a42c8110cc547797028d7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_136917cbca3a42c8110cc547797028d7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_136917cbca3a42c8110cc547797028d7 = MAKE_FUNCTION_FRAME(codeobj_136917cbca3a42c8110cc547797028d7, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_136917cbca3a42c8110cc547797028d7->m_type_description == NULL);
    frame_136917cbca3a42c8110cc547797028d7 = cache_frame_136917cbca3a42c8110cc547797028d7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_136917cbca3a42c8110cc547797028d7);
    assert(Py_REFCNT(frame_136917cbca3a42c8110cc547797028d7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_136917cbca3a42c8110cc547797028d7->m_frame.f_lineno = 180;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[68], tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 180;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_2 = par_x;
        frame_136917cbca3a42c8110cc547797028d7->m_frame.f_lineno = 181;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[71], tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_3 = par_x;
        frame_136917cbca3a42c8110cc547797028d7->m_frame.f_lineno = 182;
        tmp_assign_source_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[74], tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_x;
            assert(old != NULL);
            par_x = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_136917cbca3a42c8110cc547797028d7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_136917cbca3a42c8110cc547797028d7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_136917cbca3a42c8110cc547797028d7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_136917cbca3a42c8110cc547797028d7,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_136917cbca3a42c8110cc547797028d7 == cache_frame_136917cbca3a42c8110cc547797028d7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_136917cbca3a42c8110cc547797028d7);
        cache_frame_136917cbca3a42c8110cc547797028d7 = NULL;
    }

    assertFrameObject(frame_136917cbca3a42c8110cc547797028d7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_x);
    tmp_return_value = par_x;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    par_x = NULL;
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

    Py_XDECREF(par_x);
    par_x = NULL;
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


static PyObject *impl_torchvision$models$convnext$$$function__10_forward(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_x = python_pars[1];
    struct Nuitka_FrameObject *frame_273497df43ffa6f956e66039af702af9;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_273497df43ffa6f956e66039af702af9 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_273497df43ffa6f956e66039af702af9)) {
        Py_XDECREF(cache_frame_273497df43ffa6f956e66039af702af9);

#if _DEBUG_REFCOUNTS
        if (cache_frame_273497df43ffa6f956e66039af702af9 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_273497df43ffa6f956e66039af702af9 = MAKE_FUNCTION_FRAME(codeobj_273497df43ffa6f956e66039af702af9, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_273497df43ffa6f956e66039af702af9->m_type_description == NULL);
    frame_273497df43ffa6f956e66039af702af9 = cache_frame_273497df43ffa6f956e66039af702af9;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_273497df43ffa6f956e66039af702af9);
    assert(Py_REFCNT(frame_273497df43ffa6f956e66039af702af9) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_x);
        tmp_args_element_value_1 = par_x;
        frame_273497df43ffa6f956e66039af702af9->m_frame.f_lineno = 186;
        tmp_return_value = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[82], tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
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
        exception_tb = MAKE_TRACEBACK(frame_273497df43ffa6f956e66039af702af9, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_273497df43ffa6f956e66039af702af9->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_273497df43ffa6f956e66039af702af9, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_273497df43ffa6f956e66039af702af9,
        type_description_1,
        par_self,
        par_x
    );


    // Release cached frame if used for exception.
    if (frame_273497df43ffa6f956e66039af702af9 == cache_frame_273497df43ffa6f956e66039af702af9) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_273497df43ffa6f956e66039af702af9);
        cache_frame_273497df43ffa6f956e66039af702af9 = NULL;
    }

    assertFrameObject(frame_273497df43ffa6f956e66039af702af9);

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
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_x);
    Py_DECREF(par_x);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$convnext$$$function__11__convnext(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_arch = python_pars[0];
    PyObject *par_block_setting = python_pars[1];
    PyObject *par_stochastic_depth_prob = python_pars[2];
    PyObject *par_pretrained = python_pars[3];
    PyObject *par_progress = python_pars[4];
    PyObject *par_kwargs = python_pars[5];
    PyObject *var_model = NULL;
    PyObject *var_state_dict = NULL;
    struct Nuitka_FrameObject *frame_5427eef0a842315fd2bfc5e728b99b8d;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5427eef0a842315fd2bfc5e728b99b8d = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5427eef0a842315fd2bfc5e728b99b8d)) {
        Py_XDECREF(cache_frame_5427eef0a842315fd2bfc5e728b99b8d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5427eef0a842315fd2bfc5e728b99b8d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5427eef0a842315fd2bfc5e728b99b8d = MAKE_FUNCTION_FRAME(codeobj_5427eef0a842315fd2bfc5e728b99b8d, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5427eef0a842315fd2bfc5e728b99b8d->m_type_description == NULL);
    frame_5427eef0a842315fd2bfc5e728b99b8d = cache_frame_5427eef0a842315fd2bfc5e728b99b8d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5427eef0a842315fd2bfc5e728b99b8d);
    assert(Py_REFCNT(frame_5427eef0a842315fd2bfc5e728b99b8d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_dircall_arg4_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_block_setting);
        tmp_tuple_element_1 = par_block_setting;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        tmp_dict_key_1 = mod_consts[58];
        CHECK_OBJECT(par_stochastic_depth_prob);
        tmp_dict_value_1 = par_stochastic_depth_prob;
        tmp_dircall_arg3_1 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_dircall_arg3_1, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg4_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg4_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1, tmp_dircall_arg4_1};
            tmp_assign_source_1 = impl___main__$$$function__10_complex_call_helper_pos_keywords_star_dict(dir_call_args);
        }
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_model == NULL);
        var_model = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_pretrained);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_pretrained);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oooooooo";
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
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_arch);
        tmp_cmp_expr_left_1 = par_arch;
        tmp_cmp_expr_right_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_cmp_expr_right_1 == NULL)) {
            tmp_cmp_expr_right_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_string_concat_values_1;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = mod_consts[85];
        tmp_string_concat_values_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_format_value_1;
            PyObject *tmp_format_spec_1;
            PyTuple_SET_ITEM0(tmp_string_concat_values_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_arch);
            tmp_format_value_1 = par_arch;
            tmp_format_spec_1 = mod_consts[86];
            tmp_tuple_element_2 = BUILTIN_FORMAT(tmp_format_value_1, tmp_format_spec_1);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 200;
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
        tmp_make_exception_arg_1 = PyUnicode_Join(mod_consts[86], tmp_string_concat_values_1);
        Py_DECREF(tmp_string_concat_values_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_5427eef0a842315fd2bfc5e728b99b8d->m_frame.f_lineno = 200;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 200;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[87]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[87]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[84]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[84]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_arch);
        tmp_subscript_value_1 = par_arch;
        tmp_kw_call_arg_value_0_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_progress);
        tmp_kw_call_dict_value_0_1 = par_progress;
        frame_5427eef0a842315fd2bfc5e728b99b8d->m_frame.f_lineno = 201;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[88]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_state_dict == NULL);
        var_state_dict = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var_model);
        tmp_called_instance_1 = var_model;
        CHECK_OBJECT(var_state_dict);
        tmp_args_element_value_1 = var_state_dict;
        frame_5427eef0a842315fd2bfc5e728b99b8d->m_frame.f_lineno = 202;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[89], tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 202;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_1:;
    if (var_model == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[90]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 203;
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_model;
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
        exception_tb = MAKE_TRACEBACK(frame_5427eef0a842315fd2bfc5e728b99b8d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5427eef0a842315fd2bfc5e728b99b8d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5427eef0a842315fd2bfc5e728b99b8d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5427eef0a842315fd2bfc5e728b99b8d,
        type_description_1,
        par_arch,
        par_block_setting,
        par_stochastic_depth_prob,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_model,
        var_state_dict
    );


    // Release cached frame if used for exception.
    if (frame_5427eef0a842315fd2bfc5e728b99b8d == cache_frame_5427eef0a842315fd2bfc5e728b99b8d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5427eef0a842315fd2bfc5e728b99b8d);
        cache_frame_5427eef0a842315fd2bfc5e728b99b8d = NULL;
    }

    assertFrameObject(frame_5427eef0a842315fd2bfc5e728b99b8d);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_model);
    var_model = NULL;
    Py_XDECREF(var_state_dict);
    var_state_dict = NULL;
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

    Py_XDECREF(var_model);
    var_model = NULL;
    Py_XDECREF(var_state_dict);
    var_state_dict = NULL;
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
    CHECK_OBJECT(par_arch);
    Py_DECREF(par_arch);
    CHECK_OBJECT(par_block_setting);
    Py_DECREF(par_block_setting);
    CHECK_OBJECT(par_stochastic_depth_prob);
    Py_DECREF(par_stochastic_depth_prob);
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_arch);
    Py_DECREF(par_arch);
    CHECK_OBJECT(par_block_setting);
    Py_DECREF(par_block_setting);
    CHECK_OBJECT(par_stochastic_depth_prob);
    Py_DECREF(par_stochastic_depth_prob);
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$convnext$$$function__12_convnext_tiny(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_block_setting = NULL;
    PyObject *var_stochastic_depth_prob = NULL;
    struct Nuitka_FrameObject *frame_50cc24c838e4baead63bac5ffc098485;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_50cc24c838e4baead63bac5ffc098485 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_50cc24c838e4baead63bac5ffc098485)) {
        Py_XDECREF(cache_frame_50cc24c838e4baead63bac5ffc098485);

#if _DEBUG_REFCOUNTS
        if (cache_frame_50cc24c838e4baead63bac5ffc098485 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_50cc24c838e4baead63bac5ffc098485 = MAKE_FUNCTION_FRAME(codeobj_50cc24c838e4baead63bac5ffc098485, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_50cc24c838e4baead63bac5ffc098485->m_type_description == NULL);
    frame_50cc24c838e4baead63bac5ffc098485 = cache_frame_50cc24c838e4baead63bac5ffc098485;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_50cc24c838e4baead63bac5ffc098485);
    assert(Py_REFCNT(frame_50cc24c838e4baead63bac5ffc098485) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_50cc24c838e4baead63bac5ffc098485->m_frame.f_lineno = 214;
        tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_1, mod_consts[91]);

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_called_value_4;
            PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            frame_50cc24c838e4baead63bac5ffc098485->m_frame.f_lineno = 215;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_2, mod_consts[92]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 215;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 1, tmp_list_element_1);
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            frame_50cc24c838e4baead63bac5ffc098485->m_frame.f_lineno = 216;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_3, mod_consts[93]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 216;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 2, tmp_list_element_1);
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            frame_50cc24c838e4baead63bac5ffc098485->m_frame.f_lineno = 217;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[94]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 217;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 3, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var_block_setting == NULL);
        var_block_setting = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[58];
        tmp_default_value_1 = mod_consts[95];
        tmp_assign_source_2 = DICT_POP3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_stochastic_depth_prob == NULL);
        var_stochastic_depth_prob = tmp_assign_source_2;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[97];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_block_setting);
        tmp_tuple_element_1 = var_block_setting;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_stochastic_depth_prob);
        tmp_tuple_element_1 = var_stochastic_depth_prob;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 4, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 220;
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
        exception_tb = MAKE_TRACEBACK(frame_50cc24c838e4baead63bac5ffc098485, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_50cc24c838e4baead63bac5ffc098485->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_50cc24c838e4baead63bac5ffc098485, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_50cc24c838e4baead63bac5ffc098485,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_block_setting,
        var_stochastic_depth_prob
    );


    // Release cached frame if used for exception.
    if (frame_50cc24c838e4baead63bac5ffc098485 == cache_frame_50cc24c838e4baead63bac5ffc098485) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_50cc24c838e4baead63bac5ffc098485);
        cache_frame_50cc24c838e4baead63bac5ffc098485 = NULL;
    }

    assertFrameObject(frame_50cc24c838e4baead63bac5ffc098485);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_block_setting);
    Py_DECREF(var_block_setting);
    var_block_setting = NULL;
    CHECK_OBJECT(var_stochastic_depth_prob);
    Py_DECREF(var_stochastic_depth_prob);
    var_stochastic_depth_prob = NULL;
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

    Py_XDECREF(var_block_setting);
    var_block_setting = NULL;
    Py_XDECREF(var_stochastic_depth_prob);
    var_stochastic_depth_prob = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$convnext$$$function__13_convnext_small(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_block_setting = NULL;
    PyObject *var_stochastic_depth_prob = NULL;
    struct Nuitka_FrameObject *frame_0b98f7b29273258256981be8c8f66029;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0b98f7b29273258256981be8c8f66029 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0b98f7b29273258256981be8c8f66029)) {
        Py_XDECREF(cache_frame_0b98f7b29273258256981be8c8f66029);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0b98f7b29273258256981be8c8f66029 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0b98f7b29273258256981be8c8f66029 = MAKE_FUNCTION_FRAME(codeobj_0b98f7b29273258256981be8c8f66029, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0b98f7b29273258256981be8c8f66029->m_type_description == NULL);
    frame_0b98f7b29273258256981be8c8f66029 = cache_frame_0b98f7b29273258256981be8c8f66029;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0b98f7b29273258256981be8c8f66029);
    assert(Py_REFCNT(frame_0b98f7b29273258256981be8c8f66029) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_0b98f7b29273258256981be8c8f66029->m_frame.f_lineno = 231;
        tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_1, mod_consts[91]);

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_called_value_4;
            PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            frame_0b98f7b29273258256981be8c8f66029->m_frame.f_lineno = 232;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_2, mod_consts[92]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 232;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 1, tmp_list_element_1);
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            frame_0b98f7b29273258256981be8c8f66029->m_frame.f_lineno = 233;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_3, mod_consts[99]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 2, tmp_list_element_1);
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            frame_0b98f7b29273258256981be8c8f66029->m_frame.f_lineno = 234;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[94]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 234;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 3, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var_block_setting == NULL);
        var_block_setting = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[58];
        tmp_default_value_1 = mod_consts[100];
        tmp_assign_source_2 = DICT_POP3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_stochastic_depth_prob == NULL);
        var_stochastic_depth_prob = tmp_assign_source_2;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[101];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_block_setting);
        tmp_tuple_element_1 = var_block_setting;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_stochastic_depth_prob);
        tmp_tuple_element_1 = var_stochastic_depth_prob;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 4, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
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
        exception_tb = MAKE_TRACEBACK(frame_0b98f7b29273258256981be8c8f66029, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0b98f7b29273258256981be8c8f66029->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0b98f7b29273258256981be8c8f66029, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0b98f7b29273258256981be8c8f66029,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_block_setting,
        var_stochastic_depth_prob
    );


    // Release cached frame if used for exception.
    if (frame_0b98f7b29273258256981be8c8f66029 == cache_frame_0b98f7b29273258256981be8c8f66029) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0b98f7b29273258256981be8c8f66029);
        cache_frame_0b98f7b29273258256981be8c8f66029 = NULL;
    }

    assertFrameObject(frame_0b98f7b29273258256981be8c8f66029);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_block_setting);
    Py_DECREF(var_block_setting);
    var_block_setting = NULL;
    CHECK_OBJECT(var_stochastic_depth_prob);
    Py_DECREF(var_stochastic_depth_prob);
    var_stochastic_depth_prob = NULL;
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

    Py_XDECREF(var_block_setting);
    var_block_setting = NULL;
    Py_XDECREF(var_stochastic_depth_prob);
    var_stochastic_depth_prob = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$convnext$$$function__14_convnext_base(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_block_setting = NULL;
    PyObject *var_stochastic_depth_prob = NULL;
    struct Nuitka_FrameObject *frame_69173ca60e5e321a80fc4f45e5301e06;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_69173ca60e5e321a80fc4f45e5301e06 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_69173ca60e5e321a80fc4f45e5301e06)) {
        Py_XDECREF(cache_frame_69173ca60e5e321a80fc4f45e5301e06);

#if _DEBUG_REFCOUNTS
        if (cache_frame_69173ca60e5e321a80fc4f45e5301e06 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_69173ca60e5e321a80fc4f45e5301e06 = MAKE_FUNCTION_FRAME(codeobj_69173ca60e5e321a80fc4f45e5301e06, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_69173ca60e5e321a80fc4f45e5301e06->m_type_description == NULL);
    frame_69173ca60e5e321a80fc4f45e5301e06 = cache_frame_69173ca60e5e321a80fc4f45e5301e06;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_69173ca60e5e321a80fc4f45e5301e06);
    assert(Py_REFCNT(frame_69173ca60e5e321a80fc4f45e5301e06) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_69173ca60e5e321a80fc4f45e5301e06->m_frame.f_lineno = 248;
        tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_1, mod_consts[103]);

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_called_value_4;
            PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            frame_69173ca60e5e321a80fc4f45e5301e06->m_frame.f_lineno = 249;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_2, mod_consts[104]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 249;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 1, tmp_list_element_1);
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            frame_69173ca60e5e321a80fc4f45e5301e06->m_frame.f_lineno = 250;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_3, mod_consts[105]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 250;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 2, tmp_list_element_1);
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            frame_69173ca60e5e321a80fc4f45e5301e06->m_frame.f_lineno = 251;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[106]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 251;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 3, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var_block_setting == NULL);
        var_block_setting = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[58];
        tmp_default_value_1 = mod_consts[107];
        tmp_assign_source_2 = DICT_POP3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_stochastic_depth_prob == NULL);
        var_stochastic_depth_prob = tmp_assign_source_2;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[108];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_block_setting);
        tmp_tuple_element_1 = var_block_setting;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_stochastic_depth_prob);
        tmp_tuple_element_1 = var_stochastic_depth_prob;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 4, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 254;
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
        exception_tb = MAKE_TRACEBACK(frame_69173ca60e5e321a80fc4f45e5301e06, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_69173ca60e5e321a80fc4f45e5301e06->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_69173ca60e5e321a80fc4f45e5301e06, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_69173ca60e5e321a80fc4f45e5301e06,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_block_setting,
        var_stochastic_depth_prob
    );


    // Release cached frame if used for exception.
    if (frame_69173ca60e5e321a80fc4f45e5301e06 == cache_frame_69173ca60e5e321a80fc4f45e5301e06) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_69173ca60e5e321a80fc4f45e5301e06);
        cache_frame_69173ca60e5e321a80fc4f45e5301e06 = NULL;
    }

    assertFrameObject(frame_69173ca60e5e321a80fc4f45e5301e06);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_block_setting);
    Py_DECREF(var_block_setting);
    var_block_setting = NULL;
    CHECK_OBJECT(var_stochastic_depth_prob);
    Py_DECREF(var_stochastic_depth_prob);
    var_stochastic_depth_prob = NULL;
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

    Py_XDECREF(var_block_setting);
    var_block_setting = NULL;
    Py_XDECREF(var_stochastic_depth_prob);
    var_stochastic_depth_prob = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$convnext$$$function__15_convnext_large(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_pretrained = python_pars[0];
    PyObject *par_progress = python_pars[1];
    PyObject *par_kwargs = python_pars[2];
    PyObject *var_block_setting = NULL;
    PyObject *var_stochastic_depth_prob = NULL;
    struct Nuitka_FrameObject *frame_d7c469a4578b4112b3e02e70b27976a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d7c469a4578b4112b3e02e70b27976a3 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d7c469a4578b4112b3e02e70b27976a3)) {
        Py_XDECREF(cache_frame_d7c469a4578b4112b3e02e70b27976a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d7c469a4578b4112b3e02e70b27976a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d7c469a4578b4112b3e02e70b27976a3 = MAKE_FUNCTION_FRAME(codeobj_d7c469a4578b4112b3e02e70b27976a3, module_torchvision$models$convnext, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d7c469a4578b4112b3e02e70b27976a3->m_type_description == NULL);
    frame_d7c469a4578b4112b3e02e70b27976a3 = cache_frame_d7c469a4578b4112b3e02e70b27976a3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d7c469a4578b4112b3e02e70b27976a3);
    assert(Py_REFCNT(frame_d7c469a4578b4112b3e02e70b27976a3) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_d7c469a4578b4112b3e02e70b27976a3->m_frame.f_lineno = 265;
        tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_1, mod_consts[92]);

        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 265;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST_EMPTY(4);
        {
            PyObject *tmp_called_value_2;
            PyObject *tmp_called_value_3;
            PyObject *tmp_called_value_4;
            PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
            tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_2 == NULL)) {
                tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            frame_d7c469a4578b4112b3e02e70b27976a3->m_frame.f_lineno = 266;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_2, mod_consts[110]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 1, tmp_list_element_1);
            tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_3 == NULL)) {
                tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            frame_d7c469a4578b4112b3e02e70b27976a3->m_frame.f_lineno = 267;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_3, mod_consts[111]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 2, tmp_list_element_1);
            tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_called_value_4 == NULL)) {
                tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_called_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            frame_d7c469a4578b4112b3e02e70b27976a3->m_frame.f_lineno = 268;
            tmp_list_element_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_4, mod_consts[112]);

            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 268;
                type_description_1 = "ooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_assign_source_1, 3, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_assign_source_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        assert(var_block_setting == NULL);
        var_block_setting = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_dict_arg_value_1;
        PyObject *tmp_key_value_1;
        PyObject *tmp_default_value_1;
        CHECK_OBJECT(par_kwargs);
        tmp_dict_arg_value_1 = par_kwargs;
        tmp_key_value_1 = mod_consts[58];
        tmp_default_value_1 = mod_consts[107];
        tmp_assign_source_2 = DICT_POP3(tmp_dict_arg_value_1, tmp_key_value_1, tmp_default_value_1);
        assert(!(tmp_assign_source_2 == NULL));
        assert(var_stochastic_depth_prob == NULL);
        var_stochastic_depth_prob = tmp_assign_source_2;
    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        tmp_dircall_arg1_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_dircall_arg1_1 == NULL)) {
            tmp_dircall_arg1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_dircall_arg1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = mod_consts[113];
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(5);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_block_setting);
        tmp_tuple_element_1 = var_block_setting;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(var_stochastic_depth_prob);
        tmp_tuple_element_1 = var_stochastic_depth_prob;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 2, tmp_tuple_element_1);
        CHECK_OBJECT(par_pretrained);
        tmp_tuple_element_1 = par_pretrained;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 3, tmp_tuple_element_1);
        CHECK_OBJECT(par_progress);
        tmp_tuple_element_1 = par_progress;
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 4, tmp_tuple_element_1);
        CHECK_OBJECT(par_kwargs);
        tmp_dircall_arg3_1 = par_kwargs;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_return_value = impl___main__$$$function__7_complex_call_helper_pos_star_dict(dir_call_args);
        }
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 271;
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
        exception_tb = MAKE_TRACEBACK(frame_d7c469a4578b4112b3e02e70b27976a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d7c469a4578b4112b3e02e70b27976a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d7c469a4578b4112b3e02e70b27976a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d7c469a4578b4112b3e02e70b27976a3,
        type_description_1,
        par_pretrained,
        par_progress,
        par_kwargs,
        var_block_setting,
        var_stochastic_depth_prob
    );


    // Release cached frame if used for exception.
    if (frame_d7c469a4578b4112b3e02e70b27976a3 == cache_frame_d7c469a4578b4112b3e02e70b27976a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d7c469a4578b4112b3e02e70b27976a3);
        cache_frame_d7c469a4578b4112b3e02e70b27976a3 = NULL;
    }

    assertFrameObject(frame_d7c469a4578b4112b3e02e70b27976a3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_block_setting);
    Py_DECREF(var_block_setting);
    var_block_setting = NULL;
    CHECK_OBJECT(var_stochastic_depth_prob);
    Py_DECREF(var_stochastic_depth_prob);
    var_stochastic_depth_prob = NULL;
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

    Py_XDECREF(var_block_setting);
    var_block_setting = NULL;
    Py_XDECREF(var_stochastic_depth_prob);
    var_stochastic_depth_prob = NULL;
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
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_pretrained);
    Py_DECREF(par_pretrained);
    CHECK_OBJECT(par_progress);
    Py_DECREF(par_progress);
    CHECK_OBJECT(par_kwargs);
    Py_DECREF(par_kwargs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__10_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__10_forward,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_273497df43ffa6f956e66039af702af9,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$convnext,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__11__convnext(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__11__convnext,
        mod_consts[96],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5427eef0a842315fd2bfc5e728b99b8d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$convnext,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__12_convnext_tiny(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__12_convnext_tiny,
        mod_consts[97],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_50cc24c838e4baead63bac5ffc098485,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torchvision$models$convnext,
        mod_consts[98],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__13_convnext_small(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__13_convnext_small,
        mod_consts[101],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0b98f7b29273258256981be8c8f66029,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torchvision$models$convnext,
        mod_consts[102],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__14_convnext_base(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__14_convnext_base,
        mod_consts[108],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_69173ca60e5e321a80fc4f45e5301e06,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torchvision$models$convnext,
        mod_consts[109],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__15_convnext_large(PyObject *kw_defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__15_convnext_large,
        mod_consts[113],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_d7c469a4578b4112b3e02e70b27976a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        kw_defaults,
        annotations,
#endif
        module_torchvision$models$convnext,
        mod_consts[114],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__1_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__1_forward,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[154],
#endif
        codeobj_d9fadad4c7d4d6c3b8f936cf81dd130b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$convnext,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__2___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__2___init__,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[158],
#endif
        codeobj_d6a0dce6050de67eede82126d613c0c6,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$convnext,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__3_forward() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__3_forward,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[159],
#endif
        codeobj_b5adde93093c4d2f84c879ecbb325ac2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torchvision$models$convnext,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__4___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__4___init__,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_b1dd385be1c01a047d68d83cc6018bae,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$convnext,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__5_forward(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__5_forward,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        mod_consts[164],
#endif
        codeobj_713833ea0ebc51bf32832f9cdde12267,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$convnext,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__6___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__6___init__,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[165],
#endif
        codeobj_083665c82f3a2b6522607c298af8beab,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$convnext,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__7___repr__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__7___repr__,
        mod_consts[167],
#if PYTHON_VERSION >= 0x300
        mod_consts[168],
#endif
        codeobj_4a9ed5081ef23ffcd36d83f1352662e4,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$convnext,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__8___init__(PyObject *defaults, PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__8___init__,
        mod_consts[10],
#if PYTHON_VERSION >= 0x300
        mod_consts[173],
#endif
        codeobj_48bc204f35744baa570acc752491e5fd,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$convnext,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$convnext$$$function__9__forward_impl(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$convnext$$$function__9__forward_impl,
        mod_consts[82],
#if PYTHON_VERSION >= 0x300
        mod_consts[174],
#endif
        codeobj_136917cbca3a42c8110cc547797028d7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$convnext,
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

function_impl_code functable_torchvision$models$convnext[] = {
    impl_torchvision$models$convnext$$$function__1_forward,
    impl_torchvision$models$convnext$$$function__2___init__,
    impl_torchvision$models$convnext$$$function__3_forward,
    impl_torchvision$models$convnext$$$function__4___init__,
    impl_torchvision$models$convnext$$$function__5_forward,
    impl_torchvision$models$convnext$$$function__6___init__,
    impl_torchvision$models$convnext$$$function__7___repr__,
    impl_torchvision$models$convnext$$$function__8___init__,
    impl_torchvision$models$convnext$$$function__9__forward_impl,
    impl_torchvision$models$convnext$$$function__10_forward,
    impl_torchvision$models$convnext$$$function__11__convnext,
    impl_torchvision$models$convnext$$$function__12_convnext_tiny,
    impl_torchvision$models$convnext$$$function__13_convnext_small,
    impl_torchvision$models$convnext$$$function__14_convnext_base,
    impl_torchvision$models$convnext$$$function__15_convnext_large,
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

    function_impl_code *current = functable_torchvision$models$convnext;
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

    if (offset > sizeof(functable_torchvision$models$convnext) || offset < 0) {
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
        functable_torchvision$models$convnext[offset],
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
        module_torchvision$models$convnext,
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
PyObject *modulecode_torchvision$models$convnext(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torchvision.models.convnext");

    // Store the module for future use.
    module_torchvision$models$convnext = module;

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
        PRINT_STRING("torchvision.models.convnext: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.models.convnext: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.models.convnext: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorchvision$models$convnext\n");

    moduledict_torchvision$models$convnext = MODULE_DICT(module_torchvision$models$convnext);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torchvision$models$convnext,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torchvision$models$convnext,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[86]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torchvision$models$convnext,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$models$convnext,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$models$convnext,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torchvision$models$convnext);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torchvision$models$convnext);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    struct Nuitka_CellObject *outline_1_var___class__ = Nuitka_Cell_Empty();
    struct Nuitka_CellObject *outline_2_var___class__ = Nuitka_Cell_Empty();
    PyObject *outline_3_var___class__ = NULL;
    struct Nuitka_CellObject *outline_4_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__bases_orig = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__bases = NULL;
    PyObject *tmp_class_creation_3__bases_orig = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__metaclass = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__bases = NULL;
    PyObject *tmp_class_creation_5__bases_orig = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__metaclass = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    struct Nuitka_FrameObject *frame_948435948df44043b3773b095244e2f0;
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
    PyObject *locals_torchvision$models$convnext$$$class__1_LayerNorm2d_31 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_6e4a83c0d2ce626071be82922b1b7da1_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_torchvision$models$convnext$$$class__2_Permute_39 = NULL;
    struct Nuitka_FrameObject *frame_9e70ec4d45f70ec1d49d49dfc572647e_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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
    PyObject *locals_torchvision$models$convnext$$$class__3_CNBlock_48 = NULL;
    struct Nuitka_FrameObject *frame_f511826afa1c030a3a8eb5200936b188_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    PyObject *locals_torchvision$models$convnext$$$class__4_CNBlockConfig_79 = NULL;
    struct Nuitka_FrameObject *frame_f188a819b50665d1257bfb2a8f5b8640_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    PyObject *locals_torchvision$models$convnext$$$class__5_ConvNeXt_100 = NULL;
    struct Nuitka_FrameObject *frame_c03385a6812545aff5cee4c3e23637ed_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_2);
    }
    frame_948435948df44043b3773b095244e2f0 = MAKE_MODULE_FRAME(codeobj_948435948df44043b3773b095244e2f0, module_torchvision$models$convnext);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_948435948df44043b3773b095244e2f0);
    assert(Py_REFCNT(frame_948435948df44043b3773b095244e2f0) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[118], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[117]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[117]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[119], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = MAKE_DICT_EMPTY();
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        {
            PyObject *hard_module = IMPORT_HARD_FUNCTOOLS();
            tmp_assign_source_5 = LOOKUP_ATTRIBUTE(hard_module, mod_consts[13]);
        }
        assert(!(tmp_assign_source_5 == NULL));
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_6 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_6);
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
                (PyObject *)moduledict_torchvision$models$convnext,
                mod_consts[122],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[122]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[122], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torchvision$models$convnext,
                mod_consts[123],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[123]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[123], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torchvision$models$convnext,
                mod_consts[124],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[124]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torchvision$models$convnext,
                mod_consts[125],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[125]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_5 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torchvision$models$convnext,
                mod_consts[126],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[126]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[126], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_6 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torchvision$models$convnext,
                mod_consts[49],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[49]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[12];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$models$convnext;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[55];
        frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 4;
        tmp_assign_source_13 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[12], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[12];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torchvision$models$convnext;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[127];
        tmp_level_value_2 = mod_consts[55];
        frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 5;
        tmp_assign_source_14 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_14;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torchvision$models$convnext,
                mod_consts[14],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[14]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torchvision$models$convnext,
                mod_consts[128],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[128]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[128], tmp_assign_source_16);
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
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_9;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[129];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torchvision$models$convnext;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[130];
        tmp_level_value_3 = mod_consts[55];
        frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 6;
        tmp_import_name_from_9 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torchvision$models$convnext,
                mod_consts[131],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[131]);
        }

        Py_DECREF(tmp_import_name_from_9);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[2], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[132];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torchvision$models$convnext;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[133];
        tmp_level_value_4 = mod_consts[134];
        frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 8;
        tmp_import_name_from_10 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torchvision$models$convnext,
                mod_consts[87],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[87]);
        }

        Py_DECREF(tmp_import_name_from_10);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_11;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[135];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torchvision$models$convnext;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[136];
        tmp_level_value_5 = mod_consts[134];
        frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 9;
        tmp_import_name_from_11 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_torchvision$models$convnext,
                mod_consts[56],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[56]);
        }

        Py_DECREF(tmp_import_name_from_11);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_12;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[137];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torchvision$models$convnext;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = mod_consts[138];
        tmp_level_value_6 = mod_consts[134];
        frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 10;
        tmp_import_name_from_12 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_import_name_from_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_torchvision$models$convnext,
                mod_consts[34],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[34]);
        }

        Py_DECREF(tmp_import_name_from_12);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 10;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_13;
        PyObject *tmp_name_value_7;
        PyObject *tmp_globals_arg_value_7;
        PyObject *tmp_locals_arg_value_7;
        PyObject *tmp_fromlist_value_7;
        PyObject *tmp_level_value_7;
        tmp_name_value_7 = mod_consts[139];
        tmp_globals_arg_value_7 = (PyObject *)moduledict_torchvision$models$convnext;
        tmp_locals_arg_value_7 = Py_None;
        tmp_fromlist_value_7 = mod_consts[140];
        tmp_level_value_7 = mod_consts[134];
        frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 11;
        tmp_import_name_from_13 = IMPORT_MODULE5(tmp_name_value_7, tmp_globals_arg_value_7, tmp_locals_arg_value_7, tmp_fromlist_value_7, tmp_level_value_7);
        if (tmp_import_name_from_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_torchvision$models$convnext,
                mod_consts[47],
                mod_consts[55]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[47]);
        }

        Py_DECREF(tmp_import_name_from_13);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 11;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[47], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        tmp_assign_source_22 = MAKE_LIST5(mod_consts[141]);
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_22);
    }
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = DICT_COPY(mod_consts[143]);
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[84], tmp_assign_source_23);
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[124]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_tuple_element_1 = (PyObject *)&PyUnicode_Type;
        tmp_subscript_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_subscript_value_2;
            PyTuple_SET_ITEM0(tmp_subscript_value_1, 0, tmp_tuple_element_1);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[126]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_1;
            }
            tmp_subscript_value_2 = (PyObject *)&PyUnicode_Type;
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 23;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_subscript_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_subscript_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscribed_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[121]);

        if (unlikely(tmp_ass_subscribed_1 == NULL)) {
            tmp_ass_subscribed_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
        }

        if (tmp_ass_subscribed_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_ass_subvalue_1);

            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        tmp_ass_subscript_1 = mod_consts[84];
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[15]);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        tmp_assign_source_24 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_24, 0, tmp_tuple_element_2);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_25 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        tmp_assign_source_26 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_4 = tmp_class_creation_1__bases;
        tmp_subscript_value_3 = mod_consts[55];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_3, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_27 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_27;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_5 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_5, mod_consts[144]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_6 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[144]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        tmp_tuple_element_3 = mod_consts[53];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_3 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_3);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 31;
        tmp_assign_source_28 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_28;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_7 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[145]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
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
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[146];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[40];
        tmp_getattr_default_1 = mod_consts[147];
        tmp_tuple_element_4 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_8;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_8 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_8 == NULL));
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[40]);
            Py_DECREF(tmp_expression_value_8);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_3;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_3;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 31;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_3;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_29;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torchvision$models$convnext$$$class__1_LayerNorm2d_31 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[148];
        tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__1_LayerNorm2d_31, mod_consts[149], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_5;
        }
        tmp_dictset_value = mod_consts[53];
        tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__1_LayerNorm2d_31, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_5;
        }
        frame_6e4a83c0d2ce626071be82922b1b7da1_2 = MAKE_CLASS_FRAME(codeobj_6e4a83c0d2ce626071be82922b1b7da1, module_torchvision$models$convnext, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_6e4a83c0d2ce626071be82922b1b7da1_2);
        assert(Py_REFCNT(frame_6e4a83c0d2ce626071be82922b1b7da1_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_1;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            tmp_dict_key_1 = mod_consts[151];
            tmp_dict_value_1 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__1_LayerNorm2d_31, mod_consts[128]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_dict_value_1 == NULL)) {
                        tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_dict_value_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 32;
                        type_description_2 = "o";
                        goto frame_exception_exit_2;
                    }
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto frame_exception_exit_2;
                }
            }

            tmp_annotations_1 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[152];
            tmp_dict_value_1 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__1_LayerNorm2d_31, mod_consts[128]);

            if (tmp_dict_value_1 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_dict_value_1 == NULL)) {
                        tmp_dict_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_dict_value_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 32;
                        type_description_2 = "o";
                        goto dict_build_exception_1;
                    }
                    Py_INCREF(tmp_dict_value_1);
                } else {
                    goto dict_build_exception_1;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_1);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$convnext$$$function__1_forward(tmp_annotations_1);

            tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__1_LayerNorm2d_31, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_6e4a83c0d2ce626071be82922b1b7da1_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_6e4a83c0d2ce626071be82922b1b7da1_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_6e4a83c0d2ce626071be82922b1b7da1_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_6e4a83c0d2ce626071be82922b1b7da1_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_6e4a83c0d2ce626071be82922b1b7da1_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_5;
        skip_nested_handling_1:;
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            CHECK_OBJECT(tmp_class_creation_1__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_1__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_5;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dictset_value = tmp_class_creation_1__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__1_LayerNorm2d_31, mod_consts[155], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 31;

            goto try_except_handler_5;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_5 = mod_consts[53];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_5 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_torchvision$models$convnext$$$class__1_LayerNorm2d_31;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 31;
            tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 31;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_30 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_torchvision$models$convnext$$$class__1_LayerNorm2d_31);
        locals_torchvision$models$convnext$$$class__1_LayerNorm2d_31 = NULL;
        goto try_return_handler_4;
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

        Py_DECREF(locals_torchvision$models$convnext$$$class__1_LayerNorm2d_31);
        locals_torchvision$models$convnext$$$class__1_LayerNorm2d_31 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto try_except_handler_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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
        exception_lineno = 31;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[53], tmp_assign_source_30);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_3:;
    exception_keeper_type_5 = exception_type;
    exception_keeper_value_5 = exception_value;
    exception_keeper_tb_5 = exception_tb;
    exception_keeper_lineno_5 = exception_lineno;
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
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_32;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[156]);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        tmp_assign_source_32 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_32, 0, tmp_tuple_element_6);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_33 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        tmp_assign_source_34 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_34;
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_10 = tmp_class_creation_2__bases;
        tmp_subscript_value_4 = mod_consts[55];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_10, tmp_subscript_value_4, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_35 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_35;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_11 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_11, mod_consts[144]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_12 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[144]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        tmp_tuple_element_7 = mod_consts[22];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_7 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_7);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 39;
        tmp_assign_source_36 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_36;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_13 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_13, mod_consts[145]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[146];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[40];
        tmp_getattr_default_2 = mod_consts[147];
        tmp_tuple_element_8 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_14;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_14 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_14 == NULL));
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[40]);
            Py_DECREF(tmp_expression_value_14);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_8);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_6;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_6;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 39;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_6;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_37;
        tmp_assign_source_37 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_37;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_38;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torchvision$models$convnext$$$class__2_Permute_39 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[148];
        tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__2_Permute_39, mod_consts[149], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_8;
        }
        tmp_dictset_value = mod_consts[22];
        tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__2_Permute_39, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_8;
        }
        frame_9e70ec4d45f70ec1d49d49dfc572647e_3 = MAKE_CLASS_FRAME(codeobj_9e70ec4d45f70ec1d49d49dfc572647e, module_torchvision$models$convnext, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9e70ec4d45f70ec1d49d49dfc572647e_3);
        assert(Py_REFCNT(frame_9e70ec4d45f70ec1d49d49dfc572647e_3) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_2;
            PyObject *tmp_dict_value_2;
            PyObject *tmp_expression_value_15;
            PyObject *tmp_subscript_value_5;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_dict_key_2 = mod_consts[11];
            tmp_expression_value_15 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__2_Permute_39, mod_consts[125]);

            if (tmp_expression_value_15 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[125]);

                    if (unlikely(tmp_expression_value_15 == NULL)) {
                        tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
                    }

                    if (tmp_expression_value_15 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 40;
                        type_description_2 = "c";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_15);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_subscript_value_5 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__2_Permute_39, mod_consts[157]);

            if (tmp_subscript_value_5 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_5 = (PyObject *)&PyLong_Type;
                    Py_INCREF(tmp_subscript_value_5);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_5);
            Py_DECREF(tmp_expression_value_15);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 1 );
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));

            tmp_closure_1[0] = outline_1_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$convnext$$$function__2___init__(tmp_annotations_2, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__2_Permute_39, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;
                type_description_2 = "c";
                goto frame_exception_exit_3;
            }
        }


        tmp_dictset_value = MAKE_FUNCTION_torchvision$models$convnext$$$function__3_forward();

        tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__2_Permute_39, mod_consts[153], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_2 = "c";
            goto frame_exception_exit_3;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_9e70ec4d45f70ec1d49d49dfc572647e_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9e70ec4d45f70ec1d49d49dfc572647e_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9e70ec4d45f70ec1d49d49dfc572647e_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9e70ec4d45f70ec1d49d49dfc572647e_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_9e70ec4d45f70ec1d49d49dfc572647e_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_8;
        skip_nested_handling_2:;
        {
            nuitka_bool tmp_condition_result_8;
            PyObject *tmp_cmp_expr_left_2;
            PyObject *tmp_cmp_expr_right_2;
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_cmp_expr_left_2 = tmp_class_creation_2__bases;
            CHECK_OBJECT(tmp_class_creation_2__bases_orig);
            tmp_cmp_expr_right_2 = tmp_class_creation_2__bases_orig;
            tmp_condition_result_8 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
            if (tmp_condition_result_8 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto try_except_handler_8;
            }
            if (tmp_condition_result_8 == NUITKA_BOOL_TRUE) {
                goto branch_yes_6;
            } else {
                goto branch_no_6;
            }
        }
        branch_yes_6:;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dictset_value = tmp_class_creation_2__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__2_Permute_39, mod_consts[155], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;

            goto try_except_handler_8;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_39;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = mod_consts[22];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_torchvision$models$convnext$$$class__2_Permute_39;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 39;
            tmp_assign_source_39 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 39;

                goto try_except_handler_8;
            }
            assert(Nuitka_Cell_GET(outline_1_var___class__) == NULL);
            PyCell_SET(outline_1_var___class__, tmp_assign_source_39);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_1_var___class__));
        tmp_assign_source_38 = Nuitka_Cell_GET(outline_1_var___class__);
        Py_INCREF(tmp_assign_source_38);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_torchvision$models$convnext$$$class__2_Permute_39);
        locals_torchvision$models$convnext$$$class__2_Permute_39 = NULL;
        goto try_return_handler_7;
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

        Py_DECREF(locals_torchvision$models$convnext$$$class__2_Permute_39);
        locals_torchvision$models$convnext$$$class__2_Permute_39 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto try_except_handler_7;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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
        exception_lineno = 39;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_38);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_6:;
    exception_keeper_type_8 = exception_type;
    exception_keeper_value_8 = exception_value;
    exception_keeper_tb_8 = exception_tb;
    exception_keeper_lineno_8 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_2__bases);
    tmp_class_creation_2__bases = NULL;
    Py_XDECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_2__metaclass);
    tmp_class_creation_2__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_2__bases_orig);
    Py_DECREF(tmp_class_creation_2__bases_orig);
    tmp_class_creation_2__bases_orig = NULL;
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
    // Tried code:
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_tuple_element_10;
        PyObject *tmp_expression_value_16;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_9;
        }
        tmp_tuple_element_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[156]);
        if (tmp_tuple_element_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_9;
        }
        tmp_assign_source_40 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_40, 0, tmp_tuple_element_10);
        assert(tmp_class_creation_3__bases_orig == NULL);
        tmp_class_creation_3__bases_orig = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        PyObject *tmp_dircall_arg1_3;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dircall_arg1_3 = tmp_class_creation_3__bases_orig;
        Py_INCREF(tmp_dircall_arg1_3);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_3};
            tmp_assign_source_41 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_41 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__bases == NULL);
        tmp_class_creation_3__bases = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        tmp_assign_source_42 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_42;
    }
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_metaclass_value_3;
        nuitka_bool tmp_condition_result_9;
        int tmp_truth_name_3;
        PyObject *tmp_type_arg_5;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_bases_value_3;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_truth_name_3 = CHECK_IF_TRUE(tmp_class_creation_3__bases);
        if (tmp_truth_name_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_9;
        }
        tmp_condition_result_9 = tmp_truth_name_3 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_3;
        } else {
            goto condexpr_false_3;
        }
        condexpr_true_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_expression_value_17 = tmp_class_creation_3__bases;
        tmp_subscript_value_6 = mod_consts[55];
        tmp_type_arg_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_17, tmp_subscript_value_6, 0);
        if (tmp_type_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_9;
        }
        tmp_metaclass_value_3 = BUILTIN_TYPE1(tmp_type_arg_5);
        Py_DECREF(tmp_type_arg_5);
        if (tmp_metaclass_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_9;
        }
        goto condexpr_end_3;
        condexpr_false_3:;
        tmp_metaclass_value_3 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_3);
        condexpr_end_3:;
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_bases_value_3 = tmp_class_creation_3__bases;
        tmp_assign_source_43 = SELECT_METACLASS(tmp_metaclass_value_3, tmp_bases_value_3);
        Py_DECREF(tmp_metaclass_value_3);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__metaclass == NULL);
        tmp_class_creation_3__metaclass = tmp_assign_source_43;
    }
    {
        nuitka_bool tmp_condition_result_10;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_18 = tmp_class_creation_3__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_18, mod_consts[144]);
        tmp_condition_result_10 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_10 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_44;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_11;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_expression_value_19 = tmp_class_creation_3__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[144]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_9;
        }
        tmp_tuple_element_11 = mod_consts[52];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_3__bases);
        tmp_tuple_element_11 = tmp_class_creation_3__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_11);
        CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
        frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 48;
        tmp_assign_source_44 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_44 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_9;
        }
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_44;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(tmp_class_creation_3__prepared);
        tmp_expression_value_20 = tmp_class_creation_3__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_20, mod_consts[145]);
        tmp_operand_value_3 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_9;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_raise_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_12;
        PyObject *tmp_getattr_target_3;
        PyObject *tmp_getattr_attr_3;
        PyObject *tmp_getattr_default_3;
        tmp_raise_type_3 = PyExc_TypeError;
        tmp_mod_expr_left_3 = mod_consts[146];
        CHECK_OBJECT(tmp_class_creation_3__metaclass);
        tmp_getattr_target_3 = tmp_class_creation_3__metaclass;
        tmp_getattr_attr_3 = mod_consts[40];
        tmp_getattr_default_3 = mod_consts[147];
        tmp_tuple_element_12 = BUILTIN_GETATTR(tmp_getattr_target_3, tmp_getattr_attr_3, tmp_getattr_default_3);
        if (tmp_tuple_element_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_9;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_21;
            PyObject *tmp_type_arg_6;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_type_arg_6 = tmp_class_creation_3__prepared;
            tmp_expression_value_21 = BUILTIN_TYPE1(tmp_type_arg_6);
            assert(!(tmp_expression_value_21 == NULL));
            tmp_tuple_element_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[40]);
            Py_DECREF(tmp_expression_value_21);
            if (tmp_tuple_element_12 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto tuple_build_exception_4;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_12);
        }
        goto tuple_build_noexception_4;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_4:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto try_except_handler_9;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_4:;
        tmp_raise_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_raise_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_9;
        }
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_value = tmp_raise_value_3;
        exception_lineno = 48;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_9;
    }
    branch_no_8:;
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_assign_source_45;
        tmp_assign_source_45 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_45;
    }
    branch_end_7:;
    {
        PyObject *tmp_assign_source_46;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_torchvision$models$convnext$$$class__3_CNBlock_48 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[148];
        tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__3_CNBlock_48, mod_consts[149], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_11;
        }
        tmp_dictset_value = mod_consts[52];
        tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__3_CNBlock_48, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_11;
        }
        frame_f511826afa1c030a3a8eb5200936b188_4 = MAKE_CLASS_FRAME(codeobj_f511826afa1c030a3a8eb5200936b188, module_torchvision$models$convnext, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f511826afa1c030a3a8eb5200936b188_4);
        assert(Py_REFCNT(frame_f511826afa1c030a3a8eb5200936b188_4) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_annotations_3;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_defaults_1 = mod_consts[160];
            tmp_dict_key_3 = mod_consts[33];
            tmp_dict_value_3 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__3_CNBlock_48, mod_consts[161]);

            if (tmp_dict_value_3 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_dict_value_3);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_3 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_22;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_23;
                PyObject *tmp_subscript_value_8;
                PyObject *tmp_tuple_element_13;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[58];
                tmp_dict_value_3 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__3_CNBlock_48, mod_consts[161]);

                if (tmp_dict_value_3 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_dict_value_3);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[66];
                tmp_expression_value_22 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__3_CNBlock_48, mod_consts[126]);

                if (tmp_expression_value_22 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[126]);

                        if (unlikely(tmp_expression_value_22 == NULL)) {
                            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
                        }

                        if (tmp_expression_value_22 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 54;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_22);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_expression_value_23 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__3_CNBlock_48, mod_consts[123]);

                if (tmp_expression_value_23 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_23 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[123]);

                        if (unlikely(tmp_expression_value_23 == NULL)) {
                            tmp_expression_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                        }

                        if (tmp_expression_value_23 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_22);

                            exception_lineno = 54;
                            type_description_2 = "c";
                            goto dict_build_exception_2;
                        }
                        Py_INCREF(tmp_expression_value_23);
                    } else {
                        goto dict_build_exception_2;
                    }
                }

                tmp_tuple_element_13 = Py_Ellipsis;
                tmp_subscript_value_8 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_24;
                    PyTuple_SET_ITEM0(tmp_subscript_value_8, 0, tmp_tuple_element_13);
                    tmp_expression_value_24 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__3_CNBlock_48, mod_consts[14]);

                    if (tmp_expression_value_24 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

                            if (unlikely(tmp_expression_value_24 == NULL)) {
                                tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                            }

                            if (tmp_expression_value_24 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 54;
                                type_description_2 = "c";
                                goto tuple_build_exception_5;
                            }
                            Py_INCREF(tmp_expression_value_24);
                        } else {
                            goto tuple_build_exception_5;
                        }
                    }

                    tmp_tuple_element_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[156]);
                    Py_DECREF(tmp_expression_value_24);
                    if (tmp_tuple_element_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 54;
                        type_description_2 = "c";
                        goto tuple_build_exception_5;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_8, 1, tmp_tuple_element_13);
                }
                goto tuple_build_noexception_5;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_5:;
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_8);
                goto dict_build_exception_2;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_5:;
                tmp_subscript_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_8);
                Py_DECREF(tmp_expression_value_23);
                Py_DECREF(tmp_subscript_value_8);
                if (tmp_subscript_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_22);

                    exception_lineno = 54;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_7);
                Py_DECREF(tmp_expression_value_22);
                Py_DECREF(tmp_subscript_value_7);
                if (tmp_dict_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 54;
                    type_description_2 = "c";
                    goto dict_build_exception_2;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                Py_DECREF(tmp_dict_value_3);
                assert(!(tmp_res != 0));
                tmp_dict_key_3 = mod_consts[152];
                tmp_dict_value_3 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_2;
            // Exception handling pass through code for dict_build:
            dict_build_exception_2:;
            Py_DECREF(tmp_annotations_3);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_2:;
            Py_INCREF(tmp_defaults_1);

            tmp_closure_2[0] = outline_2_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$convnext$$$function__4___init__(tmp_defaults_1, tmp_annotations_3, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__3_CNBlock_48, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 49;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            tmp_dict_key_4 = mod_consts[163];
            tmp_dict_value_4 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__3_CNBlock_48, mod_consts[128]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;
                        type_description_2 = "c";
                        goto frame_exception_exit_4;
                    }
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto frame_exception_exit_4;
                }
            }

            tmp_annotations_4 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            tmp_dict_key_4 = mod_consts[152];
            tmp_dict_value_4 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__3_CNBlock_48, mod_consts[128]);

            if (tmp_dict_value_4 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_dict_value_4 == NULL)) {
                        tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_dict_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 72;
                        type_description_2 = "c";
                        goto dict_build_exception_3;
                    }
                    Py_INCREF(tmp_dict_value_4);
                } else {
                    goto dict_build_exception_3;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
            Py_DECREF(tmp_dict_value_4);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_4);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$convnext$$$function__5_forward(tmp_annotations_4);

            tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__3_CNBlock_48, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 72;
                type_description_2 = "c";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f511826afa1c030a3a8eb5200936b188_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f511826afa1c030a3a8eb5200936b188_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f511826afa1c030a3a8eb5200936b188_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f511826afa1c030a3a8eb5200936b188_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_f511826afa1c030a3a8eb5200936b188_4);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_3;
        frame_no_exception_3:;
        goto skip_nested_handling_3;
        nested_frame_exit_3:;

        goto try_except_handler_11;
        skip_nested_handling_3:;
        {
            nuitka_bool tmp_condition_result_12;
            PyObject *tmp_cmp_expr_left_3;
            PyObject *tmp_cmp_expr_right_3;
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_cmp_expr_left_3 = tmp_class_creation_3__bases;
            CHECK_OBJECT(tmp_class_creation_3__bases_orig);
            tmp_cmp_expr_right_3 = tmp_class_creation_3__bases_orig;
            tmp_condition_result_12 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
            if (tmp_condition_result_12 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto try_except_handler_11;
            }
            if (tmp_condition_result_12 == NUITKA_BOOL_TRUE) {
                goto branch_yes_9;
            } else {
                goto branch_no_9;
            }
        }
        branch_yes_9:;
        CHECK_OBJECT(tmp_class_creation_3__bases_orig);
        tmp_dictset_value = tmp_class_creation_3__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__3_CNBlock_48, mod_consts[155], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;

            goto try_except_handler_11;
        }
        branch_no_9:;
        {
            PyObject *tmp_assign_source_47;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_14;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_3__metaclass);
            tmp_called_value_6 = tmp_class_creation_3__metaclass;
            tmp_tuple_element_14 = mod_consts[52];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_3__bases);
            tmp_tuple_element_14 = tmp_class_creation_3__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_14);
            tmp_tuple_element_14 = locals_torchvision$models$convnext$$$class__3_CNBlock_48;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_14);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_3__class_decl_dict;
            frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 48;
            tmp_assign_source_47 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_47 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 48;

                goto try_except_handler_11;
            }
            assert(Nuitka_Cell_GET(outline_2_var___class__) == NULL);
            PyCell_SET(outline_2_var___class__, tmp_assign_source_47);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_2_var___class__));
        tmp_assign_source_46 = Nuitka_Cell_GET(outline_2_var___class__);
        Py_INCREF(tmp_assign_source_46);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_torchvision$models$convnext$$$class__3_CNBlock_48);
        locals_torchvision$models$convnext$$$class__3_CNBlock_48 = NULL;
        goto try_return_handler_10;
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

        Py_DECREF(locals_torchvision$models$convnext$$$class__3_CNBlock_48);
        locals_torchvision$models$convnext$$$class__3_CNBlock_48 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_9;
        exception_value = exception_keeper_value_9;
        exception_tb = exception_keeper_tb_9;
        exception_lineno = exception_keeper_lineno_9;

        goto try_except_handler_10;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_10 = exception_type;
        exception_keeper_value_10 = exception_value;
        exception_keeper_tb_10 = exception_tb;
        exception_keeper_lineno_10 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_10;
        exception_value = exception_keeper_value_10;
        exception_tb = exception_keeper_tb_10;
        exception_lineno = exception_keeper_lineno_10;

        goto outline_exception_3;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_3:;
        exception_lineno = 48;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[52], tmp_assign_source_46);
    }
    goto try_end_5;
    // Exception handler code:
    try_except_handler_9:;
    exception_keeper_type_11 = exception_type;
    exception_keeper_value_11 = exception_value;
    exception_keeper_tb_11 = exception_tb;
    exception_keeper_lineno_11 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
    Py_XDECREF(tmp_class_creation_3__bases);
    tmp_class_creation_3__bases = NULL;
    Py_XDECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_3__metaclass);
    tmp_class_creation_3__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_3__bases_orig);
    Py_DECREF(tmp_class_creation_3__bases_orig);
    tmp_class_creation_3__bases_orig = NULL;
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
    {
        PyObject *tmp_assign_source_48;
        tmp_assign_source_48 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_49;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_50;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_torchvision$models$convnext$$$class__4_CNBlockConfig_79 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[148];
        tmp_res = PyDict_SetItem(locals_torchvision$models$convnext$$$class__4_CNBlockConfig_79, mod_consts[149], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyDict_SetItem(locals_torchvision$models$convnext$$$class__4_CNBlockConfig_79, mod_consts[150], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_f188a819b50665d1257bfb2a8f5b8640_5 = MAKE_CLASS_FRAME(codeobj_f188a819b50665d1257bfb2a8f5b8640, module_torchvision$models$convnext, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_f188a819b50665d1257bfb2a8f5b8640_5);
        assert(Py_REFCNT(frame_f188a819b50665d1257bfb2a8f5b8640_5) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_dict_key_5 = mod_consts[37];
            tmp_dict_value_5 = (PyObject *)&PyLong_Type;
            tmp_annotations_5 = _PyDict_NewPresized( 4 );
            {
                PyObject *tmp_expression_value_25;
                PyObject *tmp_subscript_value_9;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[38];
                tmp_expression_value_25 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[126]);

                if (unlikely(tmp_expression_value_25 == NULL)) {
                    tmp_expression_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
                }

                if (tmp_expression_value_25 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_subscript_value_9 = (PyObject *)&PyLong_Type;
                tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_25, tmp_subscript_value_9);
                if (tmp_dict_value_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 84;
                    type_description_2 = "o";
                    goto dict_build_exception_4;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                Py_DECREF(tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[39];
                tmp_dict_value_5 = (PyObject *)&PyLong_Type;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
                tmp_dict_key_5 = mod_consts[152];
                tmp_dict_value_5 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$convnext$$$function__6___init__(tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_torchvision$models$convnext$$$class__4_CNBlockConfig_79, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 81;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_f188a819b50665d1257bfb2a8f5b8640_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_f188a819b50665d1257bfb2a8f5b8640_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_f188a819b50665d1257bfb2a8f5b8640_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_f188a819b50665d1257bfb2a8f5b8640_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_f188a819b50665d1257bfb2a8f5b8640_5);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_4;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_4:;

        goto try_except_handler_14;
        skip_nested_handling_4:;
        {
            PyObject *tmp_annotations_6;
            tmp_annotations_6 = DICT_COPY(mod_consts[166]);


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$convnext$$$function__7___repr__(tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_torchvision$models$convnext$$$class__4_CNBlockConfig_79, mod_consts[167], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_assign_source_51;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_15;
            PyObject *tmp_kwargs_value_7;
            tmp_called_value_7 = (PyObject *)&PyType_Type;
            tmp_tuple_element_15 = mod_consts[50];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_15);
            tmp_tuple_element_15 = mod_consts[169];
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_15);
            tmp_tuple_element_15 = locals_torchvision$models$convnext$$$class__4_CNBlockConfig_79;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_15);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_4__class_decl_dict;
            frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 79;
            tmp_assign_source_51 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_51 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 79;

                goto try_except_handler_14;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_51;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_50 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_50);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_torchvision$models$convnext$$$class__4_CNBlockConfig_79);
        locals_torchvision$models$convnext$$$class__4_CNBlockConfig_79 = NULL;
        goto try_return_handler_13;
        // Exception handler code:
        try_except_handler_14:;
        exception_keeper_type_12 = exception_type;
        exception_keeper_value_12 = exception_value;
        exception_keeper_tb_12 = exception_tb;
        exception_keeper_lineno_12 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torchvision$models$convnext$$$class__4_CNBlockConfig_79);
        locals_torchvision$models$convnext$$$class__4_CNBlockConfig_79 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_12;
        exception_value = exception_keeper_value_12;
        exception_tb = exception_keeper_tb_12;
        exception_lineno = exception_keeper_lineno_12;

        goto try_except_handler_13;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_13 = exception_type;
        exception_keeper_value_13 = exception_value;
        exception_keeper_tb_13 = exception_tb;
        exception_keeper_lineno_13 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_13;
        exception_value = exception_keeper_value_13;
        exception_tb = exception_keeper_tb_13;
        exception_lineno = exception_keeper_lineno_13;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 79;
        goto try_except_handler_12;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50], tmp_assign_source_50);
    }
    goto try_end_6;
    // Exception handler code:
    try_except_handler_12:;
    exception_keeper_type_14 = exception_type;
    exception_keeper_value_14 = exception_value;
    exception_keeper_tb_14 = exception_tb;
    exception_keeper_lineno_14 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_14;
    exception_value = exception_keeper_value_14;
    exception_tb = exception_keeper_tb_14;
    exception_lineno = exception_keeper_lineno_14;

    goto frame_exception_exit_1;
    // End of try:
    try_end_6:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    // Tried code:
    {
        PyObject *tmp_assign_source_52;
        PyObject *tmp_tuple_element_16;
        PyObject *tmp_expression_value_26;
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_15;
        }
        tmp_tuple_element_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[156]);
        if (tmp_tuple_element_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_15;
        }
        tmp_assign_source_52 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_52, 0, tmp_tuple_element_16);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_52;
    }
    {
        PyObject *tmp_assign_source_53;
        PyObject *tmp_dircall_arg1_4;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_4 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_4);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_4};
            tmp_assign_source_53 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_53 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_53;
    }
    {
        PyObject *tmp_assign_source_54;
        tmp_assign_source_54 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_54;
    }
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_metaclass_value_4;
        nuitka_bool tmp_condition_result_13;
        int tmp_truth_name_4;
        PyObject *tmp_type_arg_7;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_4;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_4 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_4 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_15;
        }
        tmp_condition_result_13 = tmp_truth_name_4 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_13 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_4;
        } else {
            goto condexpr_false_4;
        }
        condexpr_true_4:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_27 = tmp_class_creation_5__bases;
        tmp_subscript_value_10 = mod_consts[55];
        tmp_type_arg_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_27, tmp_subscript_value_10, 0);
        if (tmp_type_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_15;
        }
        tmp_metaclass_value_4 = BUILTIN_TYPE1(tmp_type_arg_7);
        Py_DECREF(tmp_type_arg_7);
        if (tmp_metaclass_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_15;
        }
        goto condexpr_end_4;
        condexpr_false_4:;
        tmp_metaclass_value_4 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_4);
        condexpr_end_4:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_4 = tmp_class_creation_5__bases;
        tmp_assign_source_55 = SELECT_METACLASS(tmp_metaclass_value_4, tmp_bases_value_4);
        Py_DECREF(tmp_metaclass_value_4);
        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_55;
    }
    {
        nuitka_bool tmp_condition_result_14;
        PyObject *tmp_expression_value_28;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_28 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_28, mod_consts[144]);
        tmp_condition_result_14 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_14 == NUITKA_BOOL_TRUE) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_args_value_8;
        PyObject *tmp_tuple_element_17;
        PyObject *tmp_kwargs_value_8;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_29 = tmp_class_creation_5__metaclass;
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[144]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_15;
        }
        tmp_tuple_element_17 = mod_consts[83];
        tmp_args_value_8 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_8, 0, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_17 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_8, 1, tmp_tuple_element_17);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_8 = tmp_class_creation_5__class_decl_dict;
        frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 100;
        tmp_assign_source_56 = CALL_FUNCTION(tmp_called_value_8, tmp_args_value_8, tmp_kwargs_value_8);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_value_8);
        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_56;
    }
    {
        bool tmp_condition_result_15;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_expression_value_30;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_30 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_30, mod_consts[145]);
        tmp_operand_value_4 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_15;
        }
        tmp_condition_result_15 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_15 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_raise_value_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_18;
        PyObject *tmp_getattr_target_4;
        PyObject *tmp_getattr_attr_4;
        PyObject *tmp_getattr_default_4;
        tmp_raise_type_4 = PyExc_TypeError;
        tmp_mod_expr_left_4 = mod_consts[146];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_4 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_4 = mod_consts[40];
        tmp_getattr_default_4 = mod_consts[147];
        tmp_tuple_element_18 = BUILTIN_GETATTR(tmp_getattr_target_4, tmp_getattr_attr_4, tmp_getattr_default_4);
        if (tmp_tuple_element_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_15;
        }
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_31;
            PyObject *tmp_type_arg_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 0, tmp_tuple_element_18);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_8 = tmp_class_creation_5__prepared;
            tmp_expression_value_31 = BUILTIN_TYPE1(tmp_type_arg_8);
            assert(!(tmp_expression_value_31 == NULL));
            tmp_tuple_element_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_31, mod_consts[40]);
            Py_DECREF(tmp_expression_value_31);
            if (tmp_tuple_element_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto tuple_build_exception_6;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_4, 1, tmp_tuple_element_18);
        }
        goto tuple_build_noexception_6;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_6:;
        Py_DECREF(tmp_mod_expr_right_4);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_6:;
        tmp_raise_value_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_raise_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_15;
        }
        exception_type = tmp_raise_type_4;
        Py_INCREF(tmp_raise_type_4);
        exception_value = tmp_raise_value_4;
        exception_lineno = 100;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_15;
    }
    branch_no_11:;
    goto branch_end_10;
    branch_no_10:;
    {
        PyObject *tmp_assign_source_57;
        tmp_assign_source_57 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_57;
    }
    branch_end_10:;
    {
        PyObject *tmp_assign_source_58;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_torchvision$models$convnext$$$class__5_ConvNeXt_100 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[148];
        tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[149], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[83];
        tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[150], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_17;
        }
        frame_c03385a6812545aff5cee4c3e23637ed_6 = MAKE_CLASS_FRAME(codeobj_c03385a6812545aff5cee4c3e23637ed, module_torchvision$models$convnext, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_c03385a6812545aff5cee4c3e23637ed_6);
        assert(Py_REFCNT(frame_c03385a6812545aff5cee4c3e23637ed_6) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            PyObject *tmp_expression_value_32;
            PyObject *tmp_subscript_value_11;
            struct Nuitka_CellObject *tmp_closure_3[1];
            tmp_defaults_2 = mod_consts[170];
            tmp_dict_key_6 = mod_consts[54];
            tmp_expression_value_32 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[125]);

            if (tmp_expression_value_32 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[125]);

                    if (unlikely(tmp_expression_value_32 == NULL)) {
                        tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
                    }

                    if (tmp_expression_value_32 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 103;
                        type_description_2 = "c";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_expression_value_32);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_subscript_value_11 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[50]);

            if (tmp_subscript_value_11 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_subscript_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

                    if (unlikely(tmp_subscript_value_11 == NULL)) {
                        tmp_subscript_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
                    }

                    if (tmp_subscript_value_11 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        Py_DECREF(tmp_expression_value_32);

                        exception_lineno = 103;
                        type_description_2 = "c";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_subscript_value_11);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_32, tmp_subscript_value_11);
            Py_DECREF(tmp_expression_value_32);
            Py_DECREF(tmp_subscript_value_11);
            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 103;
                type_description_2 = "c";
                goto frame_exception_exit_6;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 8 );
            {
                PyObject *tmp_expression_value_33;
                PyObject *tmp_subscript_value_12;
                PyObject *tmp_expression_value_34;
                PyObject *tmp_subscript_value_13;
                PyObject *tmp_tuple_element_19;
                PyObject *tmp_expression_value_36;
                PyObject *tmp_subscript_value_14;
                PyObject *tmp_expression_value_37;
                PyObject *tmp_subscript_value_15;
                PyObject *tmp_tuple_element_20;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[58];
                tmp_dict_value_6 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[161]);

                if (tmp_dict_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_dict_value_6);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[33];
                tmp_dict_value_6 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[161]);

                if (tmp_dict_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_6 = (PyObject *)&PyFloat_Type;
                        Py_INCREF(tmp_dict_value_6);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[171];
                tmp_dict_value_6 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[157]);

                if (tmp_dict_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_6 = (PyObject *)&PyLong_Type;
                        Py_INCREF(tmp_dict_value_6);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[29];
                tmp_expression_value_33 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[126]);

                if (tmp_expression_value_33 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[126]);

                        if (unlikely(tmp_expression_value_33 == NULL)) {
                            tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
                        }

                        if (tmp_expression_value_33 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 107;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_33);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_expression_value_34 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[123]);

                if (tmp_expression_value_34 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[123]);

                        if (unlikely(tmp_expression_value_34 == NULL)) {
                            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                        }

                        if (tmp_expression_value_34 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_33);

                            exception_lineno = 107;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_34);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_tuple_element_19 = Py_Ellipsis;
                tmp_subscript_value_13 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_35;
                    PyTuple_SET_ITEM0(tmp_subscript_value_13, 0, tmp_tuple_element_19);
                    tmp_expression_value_35 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[14]);

                    if (tmp_expression_value_35 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

                            if (unlikely(tmp_expression_value_35 == NULL)) {
                                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                            }

                            if (tmp_expression_value_35 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 107;
                                type_description_2 = "c";
                                goto tuple_build_exception_7;
                            }
                            Py_INCREF(tmp_expression_value_35);
                        } else {
                            goto tuple_build_exception_7;
                        }
                    }

                    tmp_tuple_element_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[156]);
                    Py_DECREF(tmp_expression_value_35);
                    if (tmp_tuple_element_19 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 107;
                        type_description_2 = "c";
                        goto tuple_build_exception_7;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_13, 1, tmp_tuple_element_19);
                }
                goto tuple_build_noexception_7;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_7:;
                Py_DECREF(tmp_expression_value_33);
                Py_DECREF(tmp_expression_value_34);
                Py_DECREF(tmp_subscript_value_13);
                goto dict_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_7:;
                tmp_subscript_value_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_13);
                Py_DECREF(tmp_expression_value_34);
                Py_DECREF(tmp_subscript_value_13);
                if (tmp_subscript_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_33);

                    exception_lineno = 107;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_33, tmp_subscript_value_12);
                Py_DECREF(tmp_expression_value_33);
                Py_DECREF(tmp_subscript_value_12);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 107;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[66];
                tmp_expression_value_36 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[126]);

                if (tmp_expression_value_36 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[126]);

                        if (unlikely(tmp_expression_value_36 == NULL)) {
                            tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[126]);
                        }

                        if (tmp_expression_value_36 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 108;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_36);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_expression_value_37 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[123]);

                if (tmp_expression_value_37 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[123]);

                        if (unlikely(tmp_expression_value_37 == NULL)) {
                            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[123]);
                        }

                        if (tmp_expression_value_37 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                            Py_DECREF(tmp_expression_value_36);

                            exception_lineno = 108;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_expression_value_37);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_tuple_element_20 = Py_Ellipsis;
                tmp_subscript_value_15 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_38;
                    PyTuple_SET_ITEM0(tmp_subscript_value_15, 0, tmp_tuple_element_20);
                    tmp_expression_value_38 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[14]);

                    if (tmp_expression_value_38 == NULL) {
                        if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                            tmp_expression_value_38 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[14]);

                            if (unlikely(tmp_expression_value_38 == NULL)) {
                                tmp_expression_value_38 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[14]);
                            }

                            if (tmp_expression_value_38 == NULL) {
                                assert(ERROR_OCCURRED());

                                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                                exception_lineno = 108;
                                type_description_2 = "c";
                                goto tuple_build_exception_8;
                            }
                            Py_INCREF(tmp_expression_value_38);
                        } else {
                            goto tuple_build_exception_8;
                        }
                    }

                    tmp_tuple_element_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[156]);
                    Py_DECREF(tmp_expression_value_38);
                    if (tmp_tuple_element_20 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 108;
                        type_description_2 = "c";
                        goto tuple_build_exception_8;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_15, 1, tmp_tuple_element_20);
                }
                goto tuple_build_noexception_8;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_8:;
                Py_DECREF(tmp_expression_value_36);
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_15);
                goto dict_build_exception_5;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_8:;
                tmp_subscript_value_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_15);
                Py_DECREF(tmp_expression_value_37);
                Py_DECREF(tmp_subscript_value_15);
                if (tmp_subscript_value_14 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    Py_DECREF(tmp_expression_value_36);

                    exception_lineno = 108;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_36, tmp_subscript_value_14);
                Py_DECREF(tmp_expression_value_36);
                Py_DECREF(tmp_subscript_value_14);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 108;
                    type_description_2 = "c";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[172];
                tmp_dict_value_6 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[122]);

                if (tmp_dict_value_6 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[122]);

                        if (unlikely(tmp_dict_value_6 == NULL)) {
                            tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
                        }

                        if (tmp_dict_value_6 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 109;
                            type_description_2 = "c";
                            goto dict_build_exception_5;
                        }
                        Py_INCREF(tmp_dict_value_6);
                    } else {
                        goto dict_build_exception_5;
                    }
                }

                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[152];
                tmp_dict_value_6 = Py_None;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;
            Py_INCREF(tmp_defaults_2);

            tmp_closure_3[0] = outline_4_var___class__;
            Py_INCREF(tmp_closure_3[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$convnext$$$function__8___init__(tmp_defaults_2, tmp_annotations_7, tmp_closure_3);

            tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[10], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 101;
                type_description_2 = "c";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_dict_key_7 = mod_consts[151];
            tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[128]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 179;
                        type_description_2 = "c";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_8 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[152];
            tmp_dict_value_7 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[128]);

            if (tmp_dict_value_7 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_dict_value_7 == NULL)) {
                        tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_dict_value_7 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 179;
                        type_description_2 = "c";
                        goto dict_build_exception_6;
                    }
                    Py_INCREF(tmp_dict_value_7);
                } else {
                    goto dict_build_exception_6;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
            Py_DECREF(tmp_dict_value_7);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_8);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$convnext$$$function__9__forward_impl(tmp_annotations_8);

            tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[82], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 179;
                type_description_2 = "c";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_9;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[151];
            tmp_dict_value_8 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[128]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_dict_value_8 == NULL)) {
                        tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_dict_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 185;
                        type_description_2 = "c";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_9 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[152];
            tmp_dict_value_8 = PyObject_GetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[128]);

            if (tmp_dict_value_8 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[128]);

                    if (unlikely(tmp_dict_value_8 == NULL)) {
                        tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[128]);
                    }

                    if (tmp_dict_value_8 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 185;
                        type_description_2 = "c";
                        goto dict_build_exception_7;
                    }
                    Py_INCREF(tmp_dict_value_8);
                } else {
                    goto dict_build_exception_7;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_9, tmp_dict_key_8, tmp_dict_value_8);
            Py_DECREF(tmp_dict_value_8);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_9);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$convnext$$$function__10_forward(tmp_annotations_9);

            tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[153], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 185;
                type_description_2 = "c";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_c03385a6812545aff5cee4c3e23637ed_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_c03385a6812545aff5cee4c3e23637ed_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_c03385a6812545aff5cee4c3e23637ed_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_c03385a6812545aff5cee4c3e23637ed_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_c03385a6812545aff5cee4c3e23637ed_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_17;
        skip_nested_handling_5:;
        {
            nuitka_bool tmp_condition_result_16;
            PyObject *tmp_cmp_expr_left_4;
            PyObject *tmp_cmp_expr_right_4;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_4 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_4 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_16 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
            if (tmp_condition_result_16 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_17;
            }
            if (tmp_condition_result_16 == NUITKA_BOOL_TRUE) {
                goto branch_yes_12;
            } else {
                goto branch_no_12;
            }
        }
        branch_yes_12:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100, mod_consts[155], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 100;

            goto try_except_handler_17;
        }
        branch_no_12:;
        {
            PyObject *tmp_assign_source_59;
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_value_9;
            PyObject *tmp_tuple_element_21;
            PyObject *tmp_kwargs_value_9;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_9 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_21 = mod_consts[83];
            tmp_args_value_9 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_9, 0, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_21 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_9, 1, tmp_tuple_element_21);
            tmp_tuple_element_21 = locals_torchvision$models$convnext$$$class__5_ConvNeXt_100;
            PyTuple_SET_ITEM0(tmp_args_value_9, 2, tmp_tuple_element_21);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_9 = tmp_class_creation_5__class_decl_dict;
            frame_948435948df44043b3773b095244e2f0->m_frame.f_lineno = 100;
            tmp_assign_source_59 = CALL_FUNCTION(tmp_called_value_9, tmp_args_value_9, tmp_kwargs_value_9);
            Py_DECREF(tmp_args_value_9);
            if (tmp_assign_source_59 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 100;

                goto try_except_handler_17;
            }
            assert(Nuitka_Cell_GET(outline_4_var___class__) == NULL);
            PyCell_SET(outline_4_var___class__, tmp_assign_source_59);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_4_var___class__));
        tmp_assign_source_58 = Nuitka_Cell_GET(outline_4_var___class__);
        Py_INCREF(tmp_assign_source_58);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100);
        locals_torchvision$models$convnext$$$class__5_ConvNeXt_100 = NULL;
        goto try_return_handler_16;
        // Exception handler code:
        try_except_handler_17:;
        exception_keeper_type_15 = exception_type;
        exception_keeper_value_15 = exception_value;
        exception_keeper_tb_15 = exception_tb;
        exception_keeper_lineno_15 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_torchvision$models$convnext$$$class__5_ConvNeXt_100);
        locals_torchvision$models$convnext$$$class__5_ConvNeXt_100 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_15;
        exception_value = exception_keeper_value_15;
        exception_tb = exception_keeper_tb_15;
        exception_lineno = exception_keeper_lineno_15;

        goto try_except_handler_16;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_16:;
        CHECK_OBJECT(outline_4_var___class__);
        Py_DECREF(outline_4_var___class__);
        outline_4_var___class__ = NULL;
        goto outline_result_5;
        // Exception handler code:
        try_except_handler_16:;
        exception_keeper_type_16 = exception_type;
        exception_keeper_value_16 = exception_value;
        exception_keeper_tb_16 = exception_tb;
        exception_keeper_lineno_16 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_16;
        exception_value = exception_keeper_value_16;
        exception_tb = exception_keeper_tb_16;
        exception_lineno = exception_keeper_lineno_16;

        goto outline_exception_5;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_5:;
        exception_lineno = 100;
        goto try_except_handler_15;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_58);
    }
    goto try_end_7;
    // Exception handler code:
    try_except_handler_15:;
    exception_keeper_type_17 = exception_type;
    exception_keeper_value_17 = exception_value;
    exception_keeper_tb_17 = exception_tb;
    exception_keeper_lineno_17 = exception_lineno;
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
    exception_type = exception_keeper_type_17;
    exception_value = exception_keeper_value_17;
    exception_tb = exception_keeper_tb_17;
    exception_lineno = exception_keeper_lineno_17;

    goto frame_exception_exit_1;
    // End of try:
    try_end_7:;
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
        PyObject *tmp_assign_source_60;
        PyObject *tmp_annotations_10;
        PyObject *tmp_dict_key_9;
        PyObject *tmp_dict_value_9;
        tmp_dict_key_9 = mod_consts[176];
        tmp_dict_value_9 = (PyObject *)&PyUnicode_Type;
        tmp_annotations_10 = _PyDict_NewPresized( 7 );
        {
            PyObject *tmp_expression_value_39;
            PyObject *tmp_subscript_value_16;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[54];
            tmp_expression_value_39 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[125]);

            if (unlikely(tmp_expression_value_39 == NULL)) {
                tmp_expression_value_39 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
            }

            if (tmp_expression_value_39 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto dict_build_exception_8;
            }
            tmp_subscript_value_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[50]);

            if (unlikely(tmp_subscript_value_16 == NULL)) {
                tmp_subscript_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[50]);
            }

            if (tmp_subscript_value_16 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto dict_build_exception_8;
            }
            tmp_dict_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_39, tmp_subscript_value_16);
            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 191;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
            Py_DECREF(tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[58];
            tmp_dict_value_9 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[177];
            tmp_dict_value_9 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[178];
            tmp_dict_value_9 = (PyObject *)&PyBool_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[172];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[122]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 195;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[152];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[83]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 196;

                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_8;
        // Exception handling pass through code for dict_build:
        dict_build_exception_8:;
        Py_DECREF(tmp_annotations_10);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_8:;


        tmp_assign_source_60 = MAKE_FUNCTION_torchvision$models$convnext$$$function__11__convnext(tmp_annotations_10);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_kw_defaults_1;
        PyObject *tmp_annotations_11;
        PyObject *tmp_dict_key_10;
        PyObject *tmp_dict_value_10;
        tmp_kw_defaults_1 = DICT_COPY(mod_consts[179]);
        tmp_dict_key_10 = mod_consts[177];
        tmp_dict_value_10 = (PyObject *)&PyBool_Type;
        tmp_annotations_11 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[178];
        tmp_dict_value_10 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[172];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto dict_build_exception_9;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        tmp_dict_key_10 = mod_consts[152];
        tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dict_value_10 == NULL)) {
            tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_dict_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;

            goto dict_build_exception_9;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_10, tmp_dict_value_10);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_9;
        // Exception handling pass through code for dict_build:
        dict_build_exception_9:;
        Py_DECREF(tmp_kw_defaults_1);
        Py_DECREF(tmp_annotations_11);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_9:;


        tmp_assign_source_61 = MAKE_FUNCTION_torchvision$models$convnext$$$function__12_convnext_tiny(tmp_kw_defaults_1, tmp_annotations_11);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_kw_defaults_2;
        PyObject *tmp_annotations_12;
        PyObject *tmp_dict_key_11;
        PyObject *tmp_dict_value_11;
        tmp_kw_defaults_2 = DICT_COPY(mod_consts[179]);
        tmp_dict_key_11 = mod_consts[177];
        tmp_dict_value_11 = (PyObject *)&PyBool_Type;
        tmp_annotations_12 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[178];
        tmp_dict_value_11 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[172];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto dict_build_exception_10;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        tmp_dict_key_11 = mod_consts[152];
        tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dict_value_11 == NULL)) {
            tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_dict_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 223;

            goto dict_build_exception_10;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_12, tmp_dict_key_11, tmp_dict_value_11);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_10;
        // Exception handling pass through code for dict_build:
        dict_build_exception_10:;
        Py_DECREF(tmp_kw_defaults_2);
        Py_DECREF(tmp_annotations_12);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_10:;


        tmp_assign_source_62 = MAKE_FUNCTION_torchvision$models$convnext$$$function__13_convnext_small(tmp_kw_defaults_2, tmp_annotations_12);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_kw_defaults_3;
        PyObject *tmp_annotations_13;
        PyObject *tmp_dict_key_12;
        PyObject *tmp_dict_value_12;
        tmp_kw_defaults_3 = DICT_COPY(mod_consts[179]);
        tmp_dict_key_12 = mod_consts[177];
        tmp_dict_value_12 = (PyObject *)&PyBool_Type;
        tmp_annotations_13 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[178];
        tmp_dict_value_12 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[172];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        tmp_dict_key_12 = mod_consts[152];
        tmp_dict_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dict_value_12 == NULL)) {
            tmp_dict_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_dict_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;

            goto dict_build_exception_11;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_12, tmp_dict_value_12);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_11;
        // Exception handling pass through code for dict_build:
        dict_build_exception_11:;
        Py_DECREF(tmp_kw_defaults_3);
        Py_DECREF(tmp_annotations_13);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_11:;


        tmp_assign_source_63 = MAKE_FUNCTION_torchvision$models$convnext$$$function__14_convnext_base(tmp_kw_defaults_3, tmp_annotations_13);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_kw_defaults_4;
        PyObject *tmp_annotations_14;
        PyObject *tmp_dict_key_13;
        PyObject *tmp_dict_value_13;
        tmp_kw_defaults_4 = DICT_COPY(mod_consts[179]);
        tmp_dict_key_13 = mod_consts[177];
        tmp_dict_value_13 = (PyObject *)&PyBool_Type;
        tmp_annotations_14 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[178];
        tmp_dict_value_13 = (PyObject *)&PyBool_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[172];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[122]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[122]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto dict_build_exception_12;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        tmp_dict_key_13 = mod_consts[152];
        tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_dict_value_13 == NULL)) {
            tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_dict_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;

            goto dict_build_exception_12;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_13, tmp_dict_value_13);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_kw_defaults_4);
        Py_DECREF(tmp_annotations_14);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;


        tmp_assign_source_64 = MAKE_FUNCTION_torchvision$models$convnext$$$function__15_convnext_large(tmp_kw_defaults_4, tmp_annotations_14);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_64);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_948435948df44043b3773b095244e2f0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_948435948df44043b3773b095244e2f0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_948435948df44043b3773b095244e2f0, exception_lineno);
    }



    assertFrameObject(frame_948435948df44043b3773b095244e2f0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torchvision.models.convnext", false);

    Py_INCREF(module_torchvision$models$convnext);
    return module_torchvision$models$convnext;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$convnext, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torchvision$models$convnext", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
