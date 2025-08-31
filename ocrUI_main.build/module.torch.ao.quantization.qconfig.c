/* Generated code for Python module 'torch.ao.quantization.qconfig'
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

/* The "module_torch$ao$quantization$qconfig" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$ao$quantization$qconfig;
PyDictObject *moduledict_torch$ao$quantization$qconfig;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[179];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[179];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.ao.quantization.qconfig"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 179; i++) {
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
void checkModuleConstants_torch$ao$quantization$qconfig(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 179; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_c1f5a6cb5c694958c3d0b55b6c22559f;
static PyCodeObject *codeobj_9805be6da651a30f99c3339a296f2ace;
static PyCodeObject *codeobj_b322bd62e55aaf99a34ff8b2ecd7ffa2;
static PyCodeObject *codeobj_11e1455dbda773194bc90438c14441ee;
static PyCodeObject *codeobj_46707185297d34a5bd557a7dbcd79d42;
static PyCodeObject *codeobj_c04901482e215dbb1e27e11345262dcc;
static PyCodeObject *codeobj_8db0f7d3684eddf5db5290d1535abe8b;
static PyCodeObject *codeobj_7d7846f6a46dc7dba645783548a32578;
static PyCodeObject *codeobj_aed5ff6147e3f132df4f91839d0d3b81;
static PyCodeObject *codeobj_9e6cd73aa894e7bf356edcaa0766ec6f;
static PyCodeObject *codeobj_602b67d776fd526226c88bb1eda9d087;
static PyCodeObject *codeobj_f1a97312980ef961fa122c9a135369ee;
static PyCodeObject *codeobj_6fca4459fe7787d769ba04f8d0541797;
static PyCodeObject *codeobj_1343c3f6307518b732fb65e4ef8934ca;
static PyCodeObject *codeobj_ef51443691b890059f66eeb7a086d827;
static PyCodeObject *codeobj_1008f2b38780dcf3e888840ab258bb60;
static PyCodeObject *codeobj_21a3e023881d3c5f1a71be8c6600e3cf;
static PyCodeObject *codeobj_961fd03549ee3901dedbe54963e46ee1;
static PyCodeObject *codeobj_f3ab324e728c36f4759c08b02ff59d0c;
static PyCodeObject *codeobj_f5ca362b2d570e471ab5a12460244bbb;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[160]); CHECK_OBJECT(module_filename_obj);
    codeobj_c1f5a6cb5c694958c3d0b55b6c22559f = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[161], mod_consts[161], NULL, NULL, 0, 0, 0);
    codeobj_9805be6da651a30f99c3339a296f2ace = MAKE_CODE_OBJECT(module_filename_obj, 317, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[163], NULL, 1, 0, 0);
    codeobj_b322bd62e55aaf99a34ff8b2ecd7ffa2 = MAKE_CODE_OBJECT(module_filename_obj, 318, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[163], NULL, 1, 0, 0);
    codeobj_11e1455dbda773194bc90438c14441ee = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_NOFREE, mod_consts[3], mod_consts[3], mod_consts[164], NULL, 0, 0, 0);
    codeobj_46707185297d34a5bd557a7dbcd79d42 = MAKE_CODE_OBJECT(module_filename_obj, 67, CO_NOFREE, mod_consts[9], mod_consts[9], mod_consts[164], NULL, 0, 0, 0);
    codeobj_c04901482e215dbb1e27e11345262dcc = MAKE_CODE_OBJECT(module_filename_obj, 59, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[165], NULL, 3, 0, 0);
    codeobj_8db0f7d3684eddf5db5290d1535abe8b = MAKE_CODE_OBJECT(module_filename_obj, 83, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[4], mod_consts[4], mod_consts[165], NULL, 3, 0, 0);
    codeobj_7d7846f6a46dc7dba645783548a32578 = MAKE_CODE_OBJECT(module_filename_obj, 373, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[166], NULL, 1, 0, 0);
    codeobj_aed5ff6147e3f132df4f91839d0d3b81 = MAKE_CODE_OBJECT(module_filename_obj, 369, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[167], NULL, 1, 0, 0);
    codeobj_9e6cd73aa894e7bf356edcaa0766ec6f = MAKE_CODE_OBJECT(module_filename_obj, 296, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[155], mod_consts[155], mod_consts[168], NULL, 2, 0, 0);
    codeobj_602b67d776fd526226c88bb1eda9d087 = MAKE_CODE_OBJECT(module_filename_obj, 270, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[153], mod_consts[153], mod_consts[169], NULL, 2, 0, 0);
    codeobj_f1a97312980ef961fa122c9a135369ee = MAKE_CODE_OBJECT(module_filename_obj, 322, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[58], mod_consts[58], mod_consts[170], mod_consts[171], 1, 0, 0);
    codeobj_6fca4459fe7787d769ba04f8d0541797 = MAKE_CODE_OBJECT(module_filename_obj, 210, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[172], NULL, 2, 0, 0);
    codeobj_1343c3f6307518b732fb65e4ef8934ca = MAKE_CODE_OBJECT(module_filename_obj, 263, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[150], mod_consts[150], mod_consts[172], NULL, 2, 0, 0);
    codeobj_ef51443691b890059f66eeb7a086d827 = MAKE_CODE_OBJECT(module_filename_obj, 182, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[173], NULL, 1, 0, 0);
    codeobj_1008f2b38780dcf3e888840ab258bb60 = MAKE_CODE_OBJECT(module_filename_obj, 256, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[149], mod_consts[149], mod_consts[172], NULL, 2, 0, 0);
    codeobj_21a3e023881d3c5f1a71be8c6600e3cf = MAKE_CODE_OBJECT(module_filename_obj, 315, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[56], mod_consts[56], mod_consts[174], mod_consts[175], 0, 0, 0);
    codeobj_961fd03549ee3901dedbe54963e46ee1 = MAKE_CODE_OBJECT(module_filename_obj, 381, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[159], mod_consts[159], mod_consts[176], NULL, 1, 0, 0);
    codeobj_f3ab324e728c36f4759c08b02ff59d0c = MAKE_CODE_OBJECT(module_filename_obj, 343, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[69], mod_consts[69], mod_consts[177], NULL, 2, 0, 0);
    codeobj_f5ca362b2d570e471ab5a12460244bbb = MAKE_CODE_OBJECT(module_filename_obj, 338, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[178], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__10_activation_is_memoryless(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__10_activation_is_memoryless$$$function__1__is_memoryless();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__11_is_reuse_input_qconfig(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__1___new__();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__2___new__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__3_get_default_qconfig(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__4_get_default_qat_qconfig(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__5_get_default_qconfig_dict(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__6_get_default_qat_qconfig_dict(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__7_assert_valid_qconfig(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr$$$function__1_get_factory_kwargs_based_on_module_device(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr$$$function__2_configure_constructor_to_put_obs_on_module_device(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__9_qconfig_equals(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__9_qconfig_equals$$$function__1_partial_equals();


// The module function definitions.
static PyObject *impl_torch$ao$quantization$qconfig$$$function__1___new__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_activation = python_pars[1];
    PyObject *par_weight = python_pars[2];
    struct Nuitka_FrameObject *frame_c04901482e215dbb1e27e11345262dcc;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c04901482e215dbb1e27e11345262dcc = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c04901482e215dbb1e27e11345262dcc)) {
        Py_XDECREF(cache_frame_c04901482e215dbb1e27e11345262dcc);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c04901482e215dbb1e27e11345262dcc == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c04901482e215dbb1e27e11345262dcc = MAKE_FUNCTION_FRAME(codeobj_c04901482e215dbb1e27e11345262dcc, module_torch$ao$quantization$qconfig, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c04901482e215dbb1e27e11345262dcc->m_type_description == NULL);
    frame_c04901482e215dbb1e27e11345262dcc = cache_frame_c04901482e215dbb1e27e11345262dcc;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c04901482e215dbb1e27e11345262dcc);
    assert(Py_REFCNT(frame_c04901482e215dbb1e27e11345262dcc) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_activation);
        tmp_isinstance_inst_1 = par_activation;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_weight);
        tmp_isinstance_inst_2 = par_weight;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
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
        tmp_make_exception_arg_1 = mod_consts[2];
        frame_c04901482e215dbb1e27e11345262dcc->m_frame.f_lineno = 62;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 62;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_object_arg_value_1 = par_cls;
        tmp_called_instance_1 = BUILTIN_SUPER2(moduledict_torch$ao$quantization$qconfig, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_1 = par_cls;
        CHECK_OBJECT(par_activation);
        tmp_args_element_value_2 = par_activation;
        CHECK_OBJECT(par_weight);
        tmp_args_element_value_3 = par_weight;
        frame_c04901482e215dbb1e27e11345262dcc->m_frame.f_lineno = 64;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_1,
                mod_consts[4],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "oooN";
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
        exception_tb = MAKE_TRACEBACK(frame_c04901482e215dbb1e27e11345262dcc, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c04901482e215dbb1e27e11345262dcc->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c04901482e215dbb1e27e11345262dcc, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c04901482e215dbb1e27e11345262dcc,
        type_description_1,
        par_cls,
        par_activation,
        par_weight,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_c04901482e215dbb1e27e11345262dcc == cache_frame_c04901482e215dbb1e27e11345262dcc) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c04901482e215dbb1e27e11345262dcc);
        cache_frame_c04901482e215dbb1e27e11345262dcc = NULL;
    }

    assertFrameObject(frame_c04901482e215dbb1e27e11345262dcc);

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
    CHECK_OBJECT(par_activation);
    Py_DECREF(par_activation);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_activation);
    Py_DECREF(par_activation);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$qconfig$$$function__2___new__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_activation = python_pars[1];
    PyObject *par_weight = python_pars[2];
    struct Nuitka_FrameObject *frame_8db0f7d3684eddf5db5290d1535abe8b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_8db0f7d3684eddf5db5290d1535abe8b = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_8db0f7d3684eddf5db5290d1535abe8b)) {
        Py_XDECREF(cache_frame_8db0f7d3684eddf5db5290d1535abe8b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8db0f7d3684eddf5db5290d1535abe8b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8db0f7d3684eddf5db5290d1535abe8b = MAKE_FUNCTION_FRAME(codeobj_8db0f7d3684eddf5db5290d1535abe8b, module_torch$ao$quantization$qconfig, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8db0f7d3684eddf5db5290d1535abe8b->m_type_description == NULL);
    frame_8db0f7d3684eddf5db5290d1535abe8b = cache_frame_8db0f7d3684eddf5db5290d1535abe8b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8db0f7d3684eddf5db5290d1535abe8b);
    assert(Py_REFCNT(frame_8db0f7d3684eddf5db5290d1535abe8b) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_weight);
        tmp_isinstance_inst_1 = par_weight;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "oooN";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[5];
        frame_8db0f7d3684eddf5db5290d1535abe8b->m_frame.f_lineno = 86;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 86;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooN";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[6]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[6]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        frame_8db0f7d3684eddf5db5290d1535abe8b->m_frame.f_lineno = 88;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[7],
            PyTuple_GET_ITEM(mod_consts[8], 0)
        );

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_type_arg_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[9]);

        if (unlikely(tmp_type_arg_value_1 == NULL)) {
            tmp_type_arg_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[9]);
        }

        if (tmp_type_arg_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_object_arg_value_1 = par_cls;
        tmp_called_instance_2 = BUILTIN_SUPER2(moduledict_torch$ao$quantization$qconfig, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooN";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_cls);
        tmp_args_element_value_1 = par_cls;
        CHECK_OBJECT(par_activation);
        tmp_args_element_value_2 = par_activation;
        CHECK_OBJECT(par_weight);
        tmp_args_element_value_3 = par_weight;
        frame_8db0f7d3684eddf5db5290d1535abe8b->m_frame.f_lineno = 89;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_2,
                mod_consts[4],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooN";
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
        exception_tb = MAKE_TRACEBACK(frame_8db0f7d3684eddf5db5290d1535abe8b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8db0f7d3684eddf5db5290d1535abe8b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8db0f7d3684eddf5db5290d1535abe8b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8db0f7d3684eddf5db5290d1535abe8b,
        type_description_1,
        par_cls,
        par_activation,
        par_weight,
        NULL
    );


    // Release cached frame if used for exception.
    if (frame_8db0f7d3684eddf5db5290d1535abe8b == cache_frame_8db0f7d3684eddf5db5290d1535abe8b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8db0f7d3684eddf5db5290d1535abe8b);
        cache_frame_8db0f7d3684eddf5db5290d1535abe8b = NULL;
    }

    assertFrameObject(frame_8db0f7d3684eddf5db5290d1535abe8b);

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
    CHECK_OBJECT(par_activation);
    Py_DECREF(par_activation);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_activation);
    Py_DECREF(par_activation);
    CHECK_OBJECT(par_weight);
    Py_DECREF(par_weight);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$qconfig$$$function__3_get_default_qconfig(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *var_qconfig = NULL;
    struct Nuitka_FrameObject *frame_ef51443691b890059f66eeb7a086d827;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_ef51443691b890059f66eeb7a086d827 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ef51443691b890059f66eeb7a086d827)) {
        Py_XDECREF(cache_frame_ef51443691b890059f66eeb7a086d827);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ef51443691b890059f66eeb7a086d827 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ef51443691b890059f66eeb7a086d827 = MAKE_FUNCTION_FRAME(codeobj_ef51443691b890059f66eeb7a086d827, module_torch$ao$quantization$qconfig, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ef51443691b890059f66eeb7a086d827->m_type_description == NULL);
    frame_ef51443691b890059f66eeb7a086d827 = cache_frame_ef51443691b890059f66eeb7a086d827;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ef51443691b890059f66eeb7a086d827);
    assert(Py_REFCNT(frame_ef51443691b890059f66eeb7a086d827) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_backend);
        tmp_cmp_expr_left_1 = par_backend;
        tmp_cmp_expr_right_1 = mod_consts[10];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ef51443691b890059f66eeb7a086d827->m_frame.f_lineno = 195;
        tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, &PyTuple_GET_ITEM(mod_consts[13], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 196;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ef51443691b890059f66eeb7a086d827->m_frame.f_lineno = 195;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_qconfig == NULL);
        var_qconfig = tmp_assign_source_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_backend);
        tmp_cmp_expr_left_2 = par_backend;
        tmp_cmp_expr_right_2 = mod_consts[17];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_1_2;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[11]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[11]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ef51443691b890059f66eeb7a086d827->m_frame.f_lineno = 198;
        tmp_kw_call_value_0_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, &PyTuple_GET_ITEM(mod_consts[18], 0), mod_consts[14]);
        Py_DECREF(tmp_called_value_4);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
            tmp_kw_call_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_kw_call_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_2);

            exception_lineno = 199;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_ef51443691b890059f66eeb7a086d827->m_frame.f_lineno = 198;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 198;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_qconfig == NULL);
        var_qconfig = tmp_assign_source_2;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[20]);

        if (unlikely(tmp_assign_source_3 == NULL)) {
            tmp_assign_source_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[20]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_qconfig == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_qconfig = tmp_assign_source_3;
    }
    branch_end_2:;
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ef51443691b890059f66eeb7a086d827, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ef51443691b890059f66eeb7a086d827->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ef51443691b890059f66eeb7a086d827, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ef51443691b890059f66eeb7a086d827,
        type_description_1,
        par_backend,
        var_qconfig
    );


    // Release cached frame if used for exception.
    if (frame_ef51443691b890059f66eeb7a086d827 == cache_frame_ef51443691b890059f66eeb7a086d827) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ef51443691b890059f66eeb7a086d827);
        cache_frame_ef51443691b890059f66eeb7a086d827 = NULL;
    }

    assertFrameObject(frame_ef51443691b890059f66eeb7a086d827);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_qconfig);
    tmp_return_value = var_qconfig;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_qconfig);
    Py_DECREF(var_qconfig);
    var_qconfig = NULL;
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
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$qconfig$$$function__4_get_default_qat_qconfig(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *par_version = python_pars[1];
    PyObject *var_qconfig = NULL;
    struct Nuitka_FrameObject *frame_6fca4459fe7787d769ba04f8d0541797;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_6fca4459fe7787d769ba04f8d0541797 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6fca4459fe7787d769ba04f8d0541797)) {
        Py_XDECREF(cache_frame_6fca4459fe7787d769ba04f8d0541797);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6fca4459fe7787d769ba04f8d0541797 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6fca4459fe7787d769ba04f8d0541797 = MAKE_FUNCTION_FRAME(codeobj_6fca4459fe7787d769ba04f8d0541797, module_torch$ao$quantization$qconfig, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6fca4459fe7787d769ba04f8d0541797->m_type_description == NULL);
    frame_6fca4459fe7787d769ba04f8d0541797 = cache_frame_6fca4459fe7787d769ba04f8d0541797;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6fca4459fe7787d769ba04f8d0541797);
    assert(Py_REFCNT(frame_6fca4459fe7787d769ba04f8d0541797) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_version);
        tmp_cmp_expr_left_1 = par_version;
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_backend);
        tmp_cmp_expr_left_2 = par_backend;
        tmp_cmp_expr_right_2 = mod_consts[10];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_kw_call_value_2_1;
        PyObject *tmp_kw_call_value_3_1;
        PyObject *tmp_kw_call_value_1_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = mod_consts[24];
        tmp_kw_call_value_2_1 = mod_consts[25];
        tmp_kw_call_value_3_1 = Py_True;
        frame_6fca4459fe7787d769ba04f8d0541797->m_frame.f_lineno = 225;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_1, tmp_kw_call_value_2_1, tmp_kw_call_value_3_1};

            tmp_kw_call_value_0_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_2, kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
            tmp_kw_call_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_kw_call_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 229;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_6fca4459fe7787d769ba04f8d0541797->m_frame.f_lineno = 225;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_2};

            tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_qconfig == NULL);
        var_qconfig = tmp_assign_source_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_backend);
        tmp_cmp_expr_left_3 = par_backend;
        tmp_cmp_expr_right_3 = mod_consts[17];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_3;
        PyObject *tmp_kw_call_value_2_2;
        PyObject *tmp_kw_call_value_3_2;
        PyObject *tmp_kw_call_value_1_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[22]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[22]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[12]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_kw_call_value_0_4 == NULL)) {
            tmp_kw_call_value_0_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_3 = mod_consts[24];
        tmp_kw_call_value_2_2 = mod_consts[25];
        tmp_kw_call_value_3_2 = Py_False;
        frame_6fca4459fe7787d769ba04f8d0541797->m_frame.f_lineno = 231;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_3, tmp_kw_call_value_2_2, tmp_kw_call_value_3_2};

            tmp_kw_call_value_0_3 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_4, kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_4);
        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_kw_call_value_1_4 == NULL)) {
            tmp_kw_call_value_1_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_kw_call_value_1_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_3);

            exception_lineno = 235;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_6fca4459fe7787d769ba04f8d0541797->m_frame.f_lineno = 231;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_4};

            tmp_assign_source_2 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_qconfig == NULL);
        var_qconfig = tmp_assign_source_2;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        tmp_assign_source_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[29]);

        if (unlikely(tmp_assign_source_3 == NULL)) {
            tmp_assign_source_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[29]);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 237;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_qconfig == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_qconfig = tmp_assign_source_3;
    }
    branch_end_3:;
    branch_end_2:;
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_version);
        tmp_cmp_expr_left_4 = par_version;
        tmp_cmp_expr_right_4 = mod_consts[30];
        tmp_condition_result_4 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        nuitka_bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_backend);
        tmp_cmp_expr_left_5 = par_backend;
        tmp_cmp_expr_right_5 = mod_consts[10];
        tmp_condition_result_5 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        if (tmp_condition_result_5 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 240;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_5;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_kw_call_value_2_3;
        PyObject *tmp_kw_call_value_3_3;
        PyObject *tmp_kw_call_value_1_6;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[12]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_kw_call_value_0_6 == NULL)) {
            tmp_kw_call_value_0_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_kw_call_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_5 = mod_consts[24];
        tmp_kw_call_value_2_3 = mod_consts[25];
        tmp_kw_call_value_3_3 = Py_True;
        frame_6fca4459fe7787d769ba04f8d0541797->m_frame.f_lineno = 241;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_6, tmp_kw_call_value_1_5, tmp_kw_call_value_2_3, tmp_kw_call_value_3_3};

            tmp_kw_call_value_0_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_6, kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_6);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[32]);

        if (unlikely(tmp_kw_call_value_1_6 == NULL)) {
            tmp_kw_call_value_1_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[32]);
        }

        if (tmp_kw_call_value_1_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_5);

            exception_lineno = 245;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_6fca4459fe7787d769ba04f8d0541797->m_frame.f_lineno = 241;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_6};

            tmp_assign_source_4 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_5, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_5);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_qconfig;
            var_qconfig = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    goto branch_end_5;
    branch_no_5:;
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(par_backend);
        tmp_cmp_expr_left_6 = par_backend;
        tmp_cmp_expr_right_6 = mod_consts[17];
        tmp_condition_result_6 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        if (tmp_condition_result_6 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_kw_call_value_1_7;
        PyObject *tmp_kw_call_value_2_4;
        PyObject *tmp_kw_call_value_3_4;
        PyObject *tmp_kw_call_value_1_8;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[12]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_kw_call_value_0_8 == NULL)) {
            tmp_kw_call_value_0_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_kw_call_value_0_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 247;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_7 = mod_consts[24];
        tmp_kw_call_value_2_4 = mod_consts[25];
        tmp_kw_call_value_3_4 = Py_False;
        frame_6fca4459fe7787d769ba04f8d0541797->m_frame.f_lineno = 247;
        {
            PyObject *kw_values[4] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_7, tmp_kw_call_value_2_4, tmp_kw_call_value_3_4};

            tmp_kw_call_value_0_7 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, kw_values, mod_consts[26]);
        }

        Py_DECREF(tmp_called_value_8);
        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_1_8 == NULL)) {
            tmp_kw_call_value_1_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_1_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_7);

            exception_lineno = 251;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_6fca4459fe7787d769ba04f8d0541797->m_frame.f_lineno = 247;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_7, tmp_kw_call_value_1_8};

            tmp_assign_source_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_7);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_qconfig;
            var_qconfig = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    goto branch_end_6;
    branch_no_6:;
    {
        PyObject *tmp_assign_source_6;
        tmp_assign_source_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[34]);

        if (unlikely(tmp_assign_source_6 == NULL)) {
            tmp_assign_source_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[34]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_qconfig;
            var_qconfig = tmp_assign_source_6;
            Py_INCREF(var_qconfig);
            Py_XDECREF(old);
        }

    }
    branch_end_6:;
    branch_end_5:;
    branch_no_4:;
    if (var_qconfig == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 254;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_qconfig;
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
        exception_tb = MAKE_TRACEBACK(frame_6fca4459fe7787d769ba04f8d0541797, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6fca4459fe7787d769ba04f8d0541797->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6fca4459fe7787d769ba04f8d0541797, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6fca4459fe7787d769ba04f8d0541797,
        type_description_1,
        par_backend,
        par_version,
        var_qconfig
    );


    // Release cached frame if used for exception.
    if (frame_6fca4459fe7787d769ba04f8d0541797 == cache_frame_6fca4459fe7787d769ba04f8d0541797) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6fca4459fe7787d769ba04f8d0541797);
        cache_frame_6fca4459fe7787d769ba04f8d0541797 = NULL;
    }

    assertFrameObject(frame_6fca4459fe7787d769ba04f8d0541797);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_qconfig);
    var_qconfig = NULL;
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

    Py_XDECREF(var_qconfig);
    var_qconfig = NULL;
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
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_version);
    Py_DECREF(par_version);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_version);
    Py_DECREF(par_version);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$qconfig$$$function__5_get_default_qconfig_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *par_version = python_pars[1];
    PyObject *var_qconfig = NULL;
    struct Nuitka_FrameObject *frame_1008f2b38780dcf3e888840ab258bb60;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1008f2b38780dcf3e888840ab258bb60 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1008f2b38780dcf3e888840ab258bb60)) {
        Py_XDECREF(cache_frame_1008f2b38780dcf3e888840ab258bb60);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1008f2b38780dcf3e888840ab258bb60 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1008f2b38780dcf3e888840ab258bb60 = MAKE_FUNCTION_FRAME(codeobj_1008f2b38780dcf3e888840ab258bb60, module_torch$ao$quantization$qconfig, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1008f2b38780dcf3e888840ab258bb60->m_type_description == NULL);
    frame_1008f2b38780dcf3e888840ab258bb60 = cache_frame_1008f2b38780dcf3e888840ab258bb60;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1008f2b38780dcf3e888840ab258bb60);
    assert(Py_REFCNT(frame_1008f2b38780dcf3e888840ab258bb60) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_args_element_value_1 = par_backend;
        frame_1008f2b38780dcf3e888840ab258bb60->m_frame.f_lineno = 257;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_qconfig == NULL);
        var_qconfig = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[38];
        CHECK_OBJECT(var_qconfig);
        tmp_dict_value_1 = var_qconfig;
        tmp_return_value = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_1;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[39];
            tmp_tuple_element_1 = mod_consts[40];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 260;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_1);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_list_element_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_dict_value_1 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_1);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_1008f2b38780dcf3e888840ab258bb60, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1008f2b38780dcf3e888840ab258bb60->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1008f2b38780dcf3e888840ab258bb60, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1008f2b38780dcf3e888840ab258bb60,
        type_description_1,
        par_backend,
        par_version,
        var_qconfig
    );


    // Release cached frame if used for exception.
    if (frame_1008f2b38780dcf3e888840ab258bb60 == cache_frame_1008f2b38780dcf3e888840ab258bb60) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1008f2b38780dcf3e888840ab258bb60);
        cache_frame_1008f2b38780dcf3e888840ab258bb60 = NULL;
    }

    assertFrameObject(frame_1008f2b38780dcf3e888840ab258bb60);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_qconfig);
    Py_DECREF(var_qconfig);
    var_qconfig = NULL;
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

    Py_XDECREF(var_qconfig);
    var_qconfig = NULL;
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
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_version);
    Py_DECREF(par_version);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_version);
    Py_DECREF(par_version);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$qconfig$$$function__6_get_default_qat_qconfig_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_backend = python_pars[0];
    PyObject *par_version = python_pars[1];
    PyObject *var_qconfig = NULL;
    struct Nuitka_FrameObject *frame_1343c3f6307518b732fb65e4ef8934ca;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_1343c3f6307518b732fb65e4ef8934ca = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1343c3f6307518b732fb65e4ef8934ca)) {
        Py_XDECREF(cache_frame_1343c3f6307518b732fb65e4ef8934ca);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1343c3f6307518b732fb65e4ef8934ca == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1343c3f6307518b732fb65e4ef8934ca = MAKE_FUNCTION_FRAME(codeobj_1343c3f6307518b732fb65e4ef8934ca, module_torch$ao$quantization$qconfig, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1343c3f6307518b732fb65e4ef8934ca->m_type_description == NULL);
    frame_1343c3f6307518b732fb65e4ef8934ca = cache_frame_1343c3f6307518b732fb65e4ef8934ca;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1343c3f6307518b732fb65e4ef8934ca);
    assert(Py_REFCNT(frame_1343c3f6307518b732fb65e4ef8934ca) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_backend);
        tmp_kw_call_arg_value_0_1 = par_backend;
        CHECK_OBJECT(par_version);
        tmp_kw_call_dict_value_0_1 = par_version;
        frame_1343c3f6307518b732fb65e4ef8934ca->m_frame.f_lineno = 264;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[43]);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_qconfig == NULL);
        var_qconfig = tmp_assign_source_1;
    }
    {
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        tmp_dict_key_1 = mod_consts[38];
        CHECK_OBJECT(var_qconfig);
        tmp_dict_value_1 = var_qconfig;
        tmp_return_value = _PyDict_NewPresized( 2 );
        {
            PyObject *tmp_list_element_1;
            PyObject *tmp_tuple_element_1;
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[39];
            tmp_tuple_element_1 = mod_consts[40];
            tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
            PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[41]);

            if (unlikely(tmp_tuple_element_1 == NULL)) {
                tmp_tuple_element_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[41]);
            }

            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 267;
                type_description_1 = "ooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_1);
            goto tuple_build_noexception_1;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_1:;
            Py_DECREF(tmp_list_element_1);
            goto dict_build_exception_1;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_1:;
            tmp_dict_value_1 = MAKE_LIST_EMPTY(1);
            PyList_SET_ITEM(tmp_dict_value_1, 0, tmp_list_element_1);
            tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_1343c3f6307518b732fb65e4ef8934ca, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1343c3f6307518b732fb65e4ef8934ca->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1343c3f6307518b732fb65e4ef8934ca, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1343c3f6307518b732fb65e4ef8934ca,
        type_description_1,
        par_backend,
        par_version,
        var_qconfig
    );


    // Release cached frame if used for exception.
    if (frame_1343c3f6307518b732fb65e4ef8934ca == cache_frame_1343c3f6307518b732fb65e4ef8934ca) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1343c3f6307518b732fb65e4ef8934ca);
        cache_frame_1343c3f6307518b732fb65e4ef8934ca = NULL;
    }

    assertFrameObject(frame_1343c3f6307518b732fb65e4ef8934ca);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_qconfig);
    Py_DECREF(var_qconfig);
    var_qconfig = NULL;
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

    Py_XDECREF(var_qconfig);
    var_qconfig = NULL;
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
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_version);
    Py_DECREF(par_version);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_backend);
    Py_DECREF(par_backend);
    CHECK_OBJECT(par_version);
    Py_DECREF(par_version);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$qconfig$$$function__7_assert_valid_qconfig(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig = python_pars[0];
    PyObject *par_mod = python_pars[1];
    PyObject *var_is_conv_transpose_mod = NULL;
    PyObject *var_example_observer = NULL;
    PyObject *var_is_per_channel = NULL;
    PyObject *tmp_return_value = NULL;
    struct Nuitka_FrameObject *frame_602b67d776fd526226c88bb1eda9d087;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_602b67d776fd526226c88bb1eda9d087 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_qconfig);
        tmp_cmp_expr_left_1 = par_qconfig;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_condition_result_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    branch_no_1:;
    if (isFrameUnusable(cache_frame_602b67d776fd526226c88bb1eda9d087)) {
        Py_XDECREF(cache_frame_602b67d776fd526226c88bb1eda9d087);

#if _DEBUG_REFCOUNTS
        if (cache_frame_602b67d776fd526226c88bb1eda9d087 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_602b67d776fd526226c88bb1eda9d087 = MAKE_FUNCTION_FRAME(codeobj_602b67d776fd526226c88bb1eda9d087, module_torch$ao$quantization$qconfig, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_602b67d776fd526226c88bb1eda9d087->m_type_description == NULL);
    frame_602b67d776fd526226c88bb1eda9d087 = cache_frame_602b67d776fd526226c88bb1eda9d087;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_602b67d776fd526226c88bb1eda9d087);
    assert(Py_REFCNT(frame_602b67d776fd526226c88bb1eda9d087) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        int tmp_or_left_truth_1;
        PyObject *tmp_or_left_value_1;
        PyObject *tmp_or_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        int tmp_or_left_truth_2;
        PyObject *tmp_or_left_value_2;
        PyObject *tmp_or_right_value_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_mod);
        tmp_isinstance_inst_1 = par_mod;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[45]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_or_left_truth_1 = CHECK_IF_TRUE(tmp_or_left_value_1);
        if (tmp_or_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_mod);
        tmp_isinstance_inst_2 = par_mod;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[0]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[46]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_or_left_truth_2 = CHECK_IF_TRUE(tmp_or_left_value_2);
        if (tmp_or_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_mod);
        tmp_isinstance_inst_3 = par_mod;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[0]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[47]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        Py_DECREF(tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 280;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_assign_source_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_assign_source_1 = tmp_or_left_value_1;
        or_end_1:;
        assert(var_is_conv_transpose_mod == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_is_conv_transpose_mod = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_is_conv_transpose_mod);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_is_conv_transpose_mod);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
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
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(par_qconfig);
        tmp_expression_value_7 = par_qconfig;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[48]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_qconfig);
        tmp_called_instance_1 = par_qconfig;
        frame_602b67d776fd526226c88bb1eda9d087->m_frame.f_lineno = 285;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[48]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_example_observer == NULL);
        var_example_observer = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        int tmp_or_left_truth_3;
        PyObject *tmp_or_left_value_3;
        PyObject *tmp_or_right_value_3;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_isinstance_inst_5;
        PyObject *tmp_isinstance_cls_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(var_example_observer);
        tmp_isinstance_inst_4 = var_example_observer;
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[49]);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[50]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[51]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_isinstance_cls_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        Py_DECREF(tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_left_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_or_left_truth_3 = CHECK_IF_TRUE(tmp_or_left_value_3);
        if (tmp_or_left_truth_3 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        if (tmp_or_left_truth_3 == 1) {
            goto or_left_3;
        } else {
            goto or_right_3;
        }
        or_right_3:;
        CHECK_OBJECT(var_example_observer);
        tmp_isinstance_inst_5 = var_example_observer;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[49]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[50]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[52]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_isinstance_cls_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_5, tmp_isinstance_cls_5);
        Py_DECREF(tmp_isinstance_cls_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 288;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_3 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_assign_source_3 = tmp_or_right_value_3;
        goto or_end_3;
        or_left_3:;
        tmp_assign_source_3 = tmp_or_left_value_3;
        or_end_3:;
        assert(var_is_per_channel == NULL);
        Py_INCREF(tmp_assign_source_3);
        var_is_per_channel = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(var_is_per_channel);
        tmp_operand_value_2 = var_is_per_channel;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res == 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[53];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 290;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    branch_no_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_602b67d776fd526226c88bb1eda9d087, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_602b67d776fd526226c88bb1eda9d087->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_602b67d776fd526226c88bb1eda9d087, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_602b67d776fd526226c88bb1eda9d087,
        type_description_1,
        par_qconfig,
        par_mod,
        var_is_conv_transpose_mod,
        var_example_observer,
        var_is_per_channel
    );


    // Release cached frame if used for exception.
    if (frame_602b67d776fd526226c88bb1eda9d087 == cache_frame_602b67d776fd526226c88bb1eda9d087) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_602b67d776fd526226c88bb1eda9d087);
        cache_frame_602b67d776fd526226c88bb1eda9d087 = NULL;
    }

    assertFrameObject(frame_602b67d776fd526226c88bb1eda9d087);

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
    Py_XDECREF(var_is_conv_transpose_mod);
    var_is_conv_transpose_mod = NULL;
    Py_XDECREF(var_example_observer);
    var_example_observer = NULL;
    Py_XDECREF(var_is_per_channel);
    var_is_per_channel = NULL;
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

    Py_XDECREF(var_is_conv_transpose_mod);
    var_is_conv_transpose_mod = NULL;
    Py_XDECREF(var_example_observer);
    var_example_observer = NULL;
    Py_XDECREF(var_is_per_channel);
    var_is_per_channel = NULL;
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
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    CHECK_OBJECT(par_mod);
    Py_DECREF(par_mod);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig = python_pars[0];
    struct Nuitka_CellObject *par_module = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *var_get_factory_kwargs_based_on_module_device = Nuitka_Cell_Empty();
    PyObject *var_configure_constructor_to_put_obs_on_module_device = NULL;
    PyObject *var_activation = NULL;
    PyObject *var_weight = NULL;
    struct Nuitka_FrameObject *frame_9e6cd73aa894e7bf356edcaa0766ec6f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9e6cd73aa894e7bf356edcaa0766ec6f = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9e6cd73aa894e7bf356edcaa0766ec6f)) {
        Py_XDECREF(cache_frame_9e6cd73aa894e7bf356edcaa0766ec6f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9e6cd73aa894e7bf356edcaa0766ec6f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9e6cd73aa894e7bf356edcaa0766ec6f = MAKE_FUNCTION_FRAME(codeobj_9e6cd73aa894e7bf356edcaa0766ec6f, module_torch$ao$quantization$qconfig, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9e6cd73aa894e7bf356edcaa0766ec6f->m_type_description == NULL);
    frame_9e6cd73aa894e7bf356edcaa0766ec6f = cache_frame_9e6cd73aa894e7bf356edcaa0766ec6f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9e6cd73aa894e7bf356edcaa0766ec6f);
    assert(Py_REFCNT(frame_9e6cd73aa894e7bf356edcaa0766ec6f) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        nuitka_bool tmp_or_left_value_1;
        nuitka_bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_or_left_truth_2;
        nuitka_bool tmp_or_left_value_2;
        nuitka_bool tmp_or_right_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_module));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_module);
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_1 = tmp_or_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_qconfig);
        tmp_cmp_expr_left_2 = par_qconfig;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_or_left_value_2 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_or_left_truth_2 = tmp_or_left_value_2 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_or_left_truth_2 == 1) {
            goto or_left_2;
        } else {
            goto or_right_2;
        }
        or_right_2:;
        CHECK_OBJECT(par_qconfig);
        tmp_expression_value_1 = par_qconfig;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[55]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_3 = mod_consts[16];
        tmp_or_right_value_2 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        if (tmp_or_right_value_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 312;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        tmp_or_right_value_1 = tmp_or_right_value_2;
        goto or_end_2;
        or_left_2:;
        tmp_or_right_value_1 = tmp_or_left_value_2;
        or_end_2:;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    if (par_qconfig == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 313;
        type_description_1 = "occooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_qconfig;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        struct Nuitka_CellObject *tmp_closure_1[1];

        tmp_closure_1[0] = par_module;
        Py_INCREF(tmp_closure_1[0]);

        tmp_assign_source_1 = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr$$$function__1_get_factory_kwargs_based_on_module_device(tmp_closure_1);

        assert(Nuitka_Cell_GET(var_get_factory_kwargs_based_on_module_device) == NULL);
        PyCell_SET(var_get_factory_kwargs_based_on_module_device, tmp_assign_source_1);

    }
    {
        PyObject *tmp_assign_source_2;
        struct Nuitka_CellObject *tmp_closure_2[1];

        tmp_closure_2[0] = var_get_factory_kwargs_based_on_module_device;
        Py_INCREF(tmp_closure_2[0]);

        tmp_assign_source_2 = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr$$$function__2_configure_constructor_to_put_obs_on_module_device(tmp_closure_2);

        assert(var_configure_constructor_to_put_obs_on_module_device == NULL);
        var_configure_constructor_to_put_obs_on_module_device = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_configure_constructor_to_put_obs_on_module_device);
        tmp_called_value_1 = var_configure_constructor_to_put_obs_on_module_device;
        if (par_qconfig == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 333;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_2 = par_qconfig;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[60]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        frame_9e6cd73aa894e7bf356edcaa0766ec6f->m_frame.f_lineno = 333;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 333;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        assert(var_activation == NULL);
        var_activation = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(var_configure_constructor_to_put_obs_on_module_device);
        tmp_called_value_2 = var_configure_constructor_to_put_obs_on_module_device;
        if (par_qconfig == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[35]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 334;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_3 = par_qconfig;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[48]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        frame_9e6cd73aa894e7bf356edcaa0766ec6f->m_frame.f_lineno = 334;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        assert(var_weight == NULL);
        var_weight = tmp_assign_source_4;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "occooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_activation);
        tmp_args_element_value_3 = var_activation;
        CHECK_OBJECT(var_weight);
        tmp_args_element_value_4 = var_weight;
        frame_9e6cd73aa894e7bf356edcaa0766ec6f->m_frame.f_lineno = 336;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "occooo";
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
        exception_tb = MAKE_TRACEBACK(frame_9e6cd73aa894e7bf356edcaa0766ec6f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9e6cd73aa894e7bf356edcaa0766ec6f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9e6cd73aa894e7bf356edcaa0766ec6f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9e6cd73aa894e7bf356edcaa0766ec6f,
        type_description_1,
        par_qconfig,
        par_module,
        var_get_factory_kwargs_based_on_module_device,
        var_configure_constructor_to_put_obs_on_module_device,
        var_activation,
        var_weight
    );


    // Release cached frame if used for exception.
    if (frame_9e6cd73aa894e7bf356edcaa0766ec6f == cache_frame_9e6cd73aa894e7bf356edcaa0766ec6f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9e6cd73aa894e7bf356edcaa0766ec6f);
        cache_frame_9e6cd73aa894e7bf356edcaa0766ec6f = NULL;
    }

    assertFrameObject(frame_9e6cd73aa894e7bf356edcaa0766ec6f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_get_factory_kwargs_based_on_module_device);
    Py_DECREF(var_get_factory_kwargs_based_on_module_device);
    var_get_factory_kwargs_based_on_module_device = NULL;
    Py_XDECREF(var_configure_constructor_to_put_obs_on_module_device);
    var_configure_constructor_to_put_obs_on_module_device = NULL;
    Py_XDECREF(var_activation);
    var_activation = NULL;
    Py_XDECREF(var_weight);
    var_weight = NULL;
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

    CHECK_OBJECT(var_get_factory_kwargs_based_on_module_device);
    Py_DECREF(var_get_factory_kwargs_based_on_module_device);
    var_get_factory_kwargs_based_on_module_device = NULL;
    Py_XDECREF(var_configure_constructor_to_put_obs_on_module_device);
    var_configure_constructor_to_put_obs_on_module_device = NULL;
    Py_XDECREF(var_activation);
    var_activation = NULL;
    Py_XDECREF(var_weight);
    var_weight = NULL;
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
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    CHECK_OBJECT(par_module);
    Py_DECREF(par_module);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    CHECK_OBJECT(par_module);
    Py_DECREF(par_module);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr$$$function__1_get_factory_kwargs_based_on_module_device(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *var_devices = NULL;
    PyObject *var_device = NULL;
    PyObject *outline_0_var_p = NULL;
    PyObject *outline_1_var_p = NULL;
    PyObject *tmp_setcontraction_1__$0 = NULL;
    PyObject *tmp_setcontraction_1__contraction = NULL;
    PyObject *tmp_setcontraction_1__iter_value_0 = NULL;
    PyObject *tmp_setcontraction_2__$0 = NULL;
    PyObject *tmp_setcontraction_2__contraction = NULL;
    PyObject *tmp_setcontraction_2__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_21a3e023881d3c5f1a71be8c6600e3cf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    struct Nuitka_FrameObject *frame_9805be6da651a30f99c3339a296f2ace_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_9805be6da651a30f99c3339a296f2ace_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    struct Nuitka_FrameObject *frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_21a3e023881d3c5f1a71be8c6600e3cf = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_21a3e023881d3c5f1a71be8c6600e3cf)) {
        Py_XDECREF(cache_frame_21a3e023881d3c5f1a71be8c6600e3cf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21a3e023881d3c5f1a71be8c6600e3cf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21a3e023881d3c5f1a71be8c6600e3cf = MAKE_FUNCTION_FRAME(codeobj_21a3e023881d3c5f1a71be8c6600e3cf, module_torch$ao$quantization$qconfig, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21a3e023881d3c5f1a71be8c6600e3cf->m_type_description == NULL);
    frame_21a3e023881d3c5f1a71be8c6600e3cf = cache_frame_21a3e023881d3c5f1a71be8c6600e3cf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_21a3e023881d3c5f1a71be8c6600e3cf);
    assert(Py_REFCNT(frame_21a3e023881d3c5f1a71be8c6600e3cf) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[62]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 316;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_isinstance_inst_1 = Nuitka_Cell_GET(self->m_closure[0]);
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[1]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooc";
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
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 316;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooc";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_bitor_expr_left_1;
        PyObject *tmp_bitor_expr_right_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_1;
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[62]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 317;
                type_description_1 = "ooc";
                goto try_except_handler_2;
            }

            tmp_called_instance_1 = Nuitka_Cell_GET(self->m_closure[0]);
            frame_21a3e023881d3c5f1a71be8c6600e3cf->m_frame.f_lineno = 317;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[63]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_1 = "ooc";
                goto try_except_handler_2;
            }
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_1 = "ooc";
                goto try_except_handler_2;
            }
            assert(tmp_setcontraction_1__$0 == NULL);
            tmp_setcontraction_1__$0 = tmp_assign_source_2;
        }
        {
            PyObject *tmp_assign_source_3;
            tmp_assign_source_3 = PySet_New(NULL);
            assert(tmp_setcontraction_1__contraction == NULL);
            tmp_setcontraction_1__contraction = tmp_assign_source_3;
        }
        if (isFrameUnusable(cache_frame_9805be6da651a30f99c3339a296f2ace_2)) {
            Py_XDECREF(cache_frame_9805be6da651a30f99c3339a296f2ace_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_9805be6da651a30f99c3339a296f2ace_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_9805be6da651a30f99c3339a296f2ace_2 = MAKE_FUNCTION_FRAME(codeobj_9805be6da651a30f99c3339a296f2ace, module_torch$ao$quantization$qconfig, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_9805be6da651a30f99c3339a296f2ace_2->m_type_description == NULL);
        frame_9805be6da651a30f99c3339a296f2ace_2 = cache_frame_9805be6da651a30f99c3339a296f2ace_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_9805be6da651a30f99c3339a296f2ace_2);
        assert(Py_REFCNT(frame_9805be6da651a30f99c3339a296f2ace_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_4;
            CHECK_OBJECT(tmp_setcontraction_1__$0);
            tmp_next_source_1 = tmp_setcontraction_1__$0;
            tmp_assign_source_4 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_4 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 317;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_setcontraction_1__iter_value_0;
                tmp_setcontraction_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_setcontraction_1__iter_value_0);
            tmp_assign_source_5 = tmp_setcontraction_1__iter_value_0;
            {
                PyObject *old = outline_0_var_p;
                outline_0_var_p = tmp_assign_source_5;
                Py_INCREF(outline_0_var_p);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_add_set_1;
            PyObject *tmp_add_value_1;
            PyObject *tmp_expression_value_3;
            CHECK_OBJECT(tmp_setcontraction_1__contraction);
            tmp_add_set_1 = tmp_setcontraction_1__contraction;
            CHECK_OBJECT(outline_0_var_p);
            tmp_expression_value_3 = outline_0_var_p;
            tmp_add_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[64]);
            if (tmp_add_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            assert(PySet_Check(tmp_add_set_1));
            tmp_res = PySet_Add(tmp_add_set_1, tmp_add_value_1);
            Py_DECREF(tmp_add_value_1);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 317;
            type_description_2 = "o";
            goto try_except_handler_3;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_setcontraction_1__contraction);
        tmp_bitor_expr_left_1 = tmp_setcontraction_1__contraction;
        Py_INCREF(tmp_bitor_expr_left_1);
        goto try_return_handler_3;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_3:;
        CHECK_OBJECT(tmp_setcontraction_1__$0);
        Py_DECREF(tmp_setcontraction_1__$0);
        tmp_setcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_setcontraction_1__contraction);
        Py_DECREF(tmp_setcontraction_1__contraction);
        tmp_setcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_setcontraction_1__iter_value_0);
        tmp_setcontraction_1__iter_value_0 = NULL;
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

        CHECK_OBJECT(tmp_setcontraction_1__$0);
        Py_DECREF(tmp_setcontraction_1__$0);
        tmp_setcontraction_1__$0 = NULL;
        CHECK_OBJECT(tmp_setcontraction_1__contraction);
        Py_DECREF(tmp_setcontraction_1__contraction);
        tmp_setcontraction_1__contraction = NULL;
        Py_XDECREF(tmp_setcontraction_1__iter_value_0);
        tmp_setcontraction_1__iter_value_0 = NULL;
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
            exception_tb = MAKE_TRACEBACK(frame_9805be6da651a30f99c3339a296f2ace_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_9805be6da651a30f99c3339a296f2ace_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_9805be6da651a30f99c3339a296f2ace_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_9805be6da651a30f99c3339a296f2ace_2,
            type_description_2,
            outline_0_var_p
        );


        // Release cached frame if used for exception.
        if (frame_9805be6da651a30f99c3339a296f2ace_2 == cache_frame_9805be6da651a30f99c3339a296f2ace_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_9805be6da651a30f99c3339a296f2ace_2);
            cache_frame_9805be6da651a30f99c3339a296f2ace_2 = NULL;
        }

        assertFrameObject(frame_9805be6da651a30f99c3339a296f2ace_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooc";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_p);
        outline_0_var_p = NULL;
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

        Py_XDECREF(outline_0_var_p);
        outline_0_var_p = NULL;
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
        exception_lineno = 317;
        goto frame_exception_exit_1;
        outline_result_1:;
        // Tried code:
        {
            PyObject *tmp_assign_source_6;
            PyObject *tmp_iter_arg_2;
            PyObject *tmp_called_instance_2;
            if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

                FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[62]);
                exception_tb = NULL;
                NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                CHAIN_EXCEPTION(exception_value);

                exception_lineno = 318;
                type_description_1 = "ooc";
                goto try_except_handler_4;
            }

            tmp_called_instance_2 = Nuitka_Cell_GET(self->m_closure[0]);
            frame_21a3e023881d3c5f1a71be8c6600e3cf->m_frame.f_lineno = 318;
            tmp_iter_arg_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[65]);
            if (tmp_iter_arg_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_1 = "ooc";
                goto try_except_handler_4;
            }
            tmp_assign_source_6 = MAKE_ITERATOR(tmp_iter_arg_2);
            Py_DECREF(tmp_iter_arg_2);
            if (tmp_assign_source_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_1 = "ooc";
                goto try_except_handler_4;
            }
            assert(tmp_setcontraction_2__$0 == NULL);
            tmp_setcontraction_2__$0 = tmp_assign_source_6;
        }
        {
            PyObject *tmp_assign_source_7;
            tmp_assign_source_7 = PySet_New(NULL);
            assert(tmp_setcontraction_2__contraction == NULL);
            tmp_setcontraction_2__contraction = tmp_assign_source_7;
        }
        if (isFrameUnusable(cache_frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3)) {
            Py_XDECREF(cache_frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3);

#if _DEBUG_REFCOUNTS
            if (cache_frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3 = MAKE_FUNCTION_FRAME(codeobj_b322bd62e55aaf99a34ff8b2ecd7ffa2, module_torch$ao$quantization$qconfig, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3->m_type_description == NULL);
        frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3 = cache_frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3);
        assert(Py_REFCNT(frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3) == 2);

        // Framed code:
        // Tried code:
        loop_start_2:;
        {
            PyObject *tmp_next_source_2;
            PyObject *tmp_assign_source_8;
            CHECK_OBJECT(tmp_setcontraction_2__$0);
            tmp_next_source_2 = tmp_setcontraction_2__$0;
            tmp_assign_source_8 = ITERATOR_NEXT(tmp_next_source_2);
            if (tmp_assign_source_8 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_2;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 318;
                    goto try_except_handler_5;
                }
            }

            {
                PyObject *old = tmp_setcontraction_2__iter_value_0;
                tmp_setcontraction_2__iter_value_0 = tmp_assign_source_8;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_9;
            CHECK_OBJECT(tmp_setcontraction_2__iter_value_0);
            tmp_assign_source_9 = tmp_setcontraction_2__iter_value_0;
            {
                PyObject *old = outline_1_var_p;
                outline_1_var_p = tmp_assign_source_9;
                Py_INCREF(outline_1_var_p);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_add_set_2;
            PyObject *tmp_add_value_2;
            PyObject *tmp_expression_value_4;
            CHECK_OBJECT(tmp_setcontraction_2__contraction);
            tmp_add_set_2 = tmp_setcontraction_2__contraction;
            CHECK_OBJECT(outline_1_var_p);
            tmp_expression_value_4 = outline_1_var_p;
            tmp_add_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[64]);
            if (tmp_add_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
            assert(PySet_Check(tmp_add_set_2));
            tmp_res = PySet_Add(tmp_add_set_2, tmp_add_value_2);
            Py_DECREF(tmp_add_value_2);
            if (tmp_res == -1) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 318;
                type_description_2 = "o";
                goto try_except_handler_5;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_2 = "o";
            goto try_except_handler_5;
        }
        goto loop_start_2;
        loop_end_2:;
        CHECK_OBJECT(tmp_setcontraction_2__contraction);
        tmp_bitor_expr_right_1 = tmp_setcontraction_2__contraction;
        Py_INCREF(tmp_bitor_expr_right_1);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        CHECK_OBJECT(tmp_setcontraction_2__$0);
        Py_DECREF(tmp_setcontraction_2__$0);
        tmp_setcontraction_2__$0 = NULL;
        CHECK_OBJECT(tmp_setcontraction_2__contraction);
        Py_DECREF(tmp_setcontraction_2__contraction);
        tmp_setcontraction_2__contraction = NULL;
        Py_XDECREF(tmp_setcontraction_2__iter_value_0);
        tmp_setcontraction_2__iter_value_0 = NULL;
        goto frame_return_exit_2;
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

        CHECK_OBJECT(tmp_setcontraction_2__$0);
        Py_DECREF(tmp_setcontraction_2__$0);
        tmp_setcontraction_2__$0 = NULL;
        CHECK_OBJECT(tmp_setcontraction_2__contraction);
        Py_DECREF(tmp_setcontraction_2__contraction);
        tmp_setcontraction_2__contraction = NULL;
        Py_XDECREF(tmp_setcontraction_2__iter_value_0);
        tmp_setcontraction_2__iter_value_0 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto frame_exception_exit_3;
        // End of try:


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_4;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3,
            type_description_2,
            outline_1_var_p
        );


        // Release cached frame if used for exception.
        if (frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3 == cache_frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3);
            cache_frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3 = NULL;
        }

        assertFrameObject(frame_b322bd62e55aaf99a34ff8b2ecd7ffa2_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;
        type_description_1 = "ooc";
        goto try_except_handler_4;
        skip_nested_handling_2:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_XDECREF(outline_1_var_p);
        outline_1_var_p = NULL;
        goto outline_result_2;
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

        Py_XDECREF(outline_1_var_p);
        outline_1_var_p = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_4;
        exception_value = exception_keeper_value_4;
        exception_tb = exception_keeper_tb_4;
        exception_lineno = exception_keeper_lineno_4;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 318;
        goto frame_exception_exit_1;
        outline_result_2:;
        tmp_assign_source_1 = BINARY_OPERATION_BITOR_OBJECT_OBJECT_OBJECT(tmp_bitor_expr_left_1, tmp_bitor_expr_right_1);
        Py_DECREF(tmp_bitor_expr_left_1);
        Py_DECREF(tmp_bitor_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        assert(var_devices == NULL);
        var_devices = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_10;
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        PyObject *tmp_value_value_1;
        PyObject *tmp_iter_arg_3;
        CHECK_OBJECT(var_devices);
        tmp_len_arg_1 = var_devices;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 0;
        tmp_condition_result_2 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_2 != false) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(var_devices);
        tmp_iter_arg_3 = var_devices;
        tmp_value_value_1 = MAKE_ITERATOR(tmp_iter_arg_3);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 319;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = ITERATOR_NEXT(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooc";
            exception_lineno = 319;
            goto frame_exception_exit_1;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_assign_source_10 = Py_None;
        Py_INCREF(tmp_assign_source_10);
        condexpr_end_1:;
        assert(var_device == NULL);
        var_device = tmp_assign_source_10;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_21a3e023881d3c5f1a71be8c6600e3cf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21a3e023881d3c5f1a71be8c6600e3cf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21a3e023881d3c5f1a71be8c6600e3cf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21a3e023881d3c5f1a71be8c6600e3cf,
        type_description_1,
        var_devices,
        var_device,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_21a3e023881d3c5f1a71be8c6600e3cf == cache_frame_21a3e023881d3c5f1a71be8c6600e3cf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21a3e023881d3c5f1a71be8c6600e3cf);
        cache_frame_21a3e023881d3c5f1a71be8c6600e3cf = NULL;
    }

    assertFrameObject(frame_21a3e023881d3c5f1a71be8c6600e3cf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_3:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        CHECK_OBJECT(var_device);
        tmp_cmp_expr_left_2 = var_device;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        tmp_return_value = Py_None;
        Py_INCREF(tmp_return_value);
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_dict_key_1 = mod_consts[64];
        CHECK_OBJECT(var_device);
        tmp_dict_value_1 = var_device;
        tmp_return_value = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_return_value, tmp_dict_key_1, tmp_dict_value_1);
        assert(!(tmp_res != 0));
        condexpr_end_2:;
        goto try_return_handler_1;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_devices);
    Py_DECREF(var_devices);
    var_devices = NULL;
    CHECK_OBJECT(var_device);
    Py_DECREF(var_device);
    var_device = NULL;
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

    Py_XDECREF(var_devices);
    var_devices = NULL;
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


static PyObject *impl_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr$$$function__2_configure_constructor_to_put_obs_on_module_device(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_original_constructor = python_pars[0];
    PyObject *var_check = NULL;
    struct Nuitka_FrameObject *frame_f1a97312980ef961fa122c9a135369ee;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
    int tmp_res;
    bool tmp_result;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    static struct Nuitka_FrameObject *cache_frame_f1a97312980ef961fa122c9a135369ee = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f1a97312980ef961fa122c9a135369ee)) {
        Py_XDECREF(cache_frame_f1a97312980ef961fa122c9a135369ee);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f1a97312980ef961fa122c9a135369ee == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f1a97312980ef961fa122c9a135369ee = MAKE_FUNCTION_FRAME(codeobj_f1a97312980ef961fa122c9a135369ee, module_torch$ao$quantization$qconfig, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f1a97312980ef961fa122c9a135369ee->m_type_description == NULL);
    frame_f1a97312980ef961fa122c9a135369ee = cache_frame_f1a97312980ef961fa122c9a135369ee;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f1a97312980ef961fa122c9a135369ee);
    assert(Py_REFCNT(frame_f1a97312980ef961fa122c9a135369ee) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_original_constructor);
        tmp_expression_value_1 = par_original_constructor;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[12]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        frame_f1a97312980ef961fa122c9a135369ee->m_frame.f_lineno = 325;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[66], 0), mod_consts[67]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 325;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        assert(var_check == NULL);
        var_check = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(var_check);
        tmp_called_value_2 = var_check;
        frame_f1a97312980ef961fa122c9a135369ee->m_frame.f_lineno = 326;
        tmp_call_result_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 326;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_value_0_1;
        CHECK_OBJECT(par_original_constructor);
        tmp_expression_value_2 = par_original_constructor;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[68]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[56]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 327;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }

        tmp_kw_call_value_0_1 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_f1a97312980ef961fa122c9a135369ee->m_frame.f_lineno = 327;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_3, kw_values, mod_consts[67]);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooc";
            goto try_except_handler_2;
        }
        goto frame_return_exit_1;
    }
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_f1a97312980ef961fa122c9a135369ee, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_f1a97312980ef961fa122c9a135369ee, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_AttributeError;
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
    CHECK_OBJECT(par_original_constructor);
    tmp_return_value = par_original_constructor;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_TypeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    CHECK_OBJECT(par_original_constructor);
    tmp_return_value = par_original_constructor;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_3;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 323;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f1a97312980ef961fa122c9a135369ee->m_frame) frame_f1a97312980ef961fa122c9a135369ee->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooc";
    goto try_except_handler_3;
    branch_end_2:;
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f1a97312980ef961fa122c9a135369ee, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f1a97312980ef961fa122c9a135369ee->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f1a97312980ef961fa122c9a135369ee, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f1a97312980ef961fa122c9a135369ee,
        type_description_1,
        par_original_constructor,
        var_check,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_f1a97312980ef961fa122c9a135369ee == cache_frame_f1a97312980ef961fa122c9a135369ee) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f1a97312980ef961fa122c9a135369ee);
        cache_frame_f1a97312980ef961fa122c9a135369ee = NULL;
    }

    assertFrameObject(frame_f1a97312980ef961fa122c9a135369ee);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_check);
    var_check = NULL;
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

    Py_XDECREF(var_check);
    var_check = NULL;
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
    CHECK_OBJECT(par_original_constructor);
    Py_DECREF(par_original_constructor);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_original_constructor);
    Py_DECREF(par_original_constructor);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$qconfig$$$function__9_qconfig_equals(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_q1 = python_pars[0];
    PyObject *par_q2 = python_pars[1];
    PyObject *var_partial_equals = NULL;
    PyObject *var_activation_same = NULL;
    PyObject *var_weight_same = NULL;
    struct Nuitka_FrameObject *frame_f5ca362b2d570e471ab5a12460244bbb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
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
    static struct Nuitka_FrameObject *cache_frame_f5ca362b2d570e471ab5a12460244bbb = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__9_qconfig_equals$$$function__1_partial_equals();

        assert(var_partial_equals == NULL);
        var_partial_equals = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_f5ca362b2d570e471ab5a12460244bbb)) {
        Py_XDECREF(cache_frame_f5ca362b2d570e471ab5a12460244bbb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f5ca362b2d570e471ab5a12460244bbb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f5ca362b2d570e471ab5a12460244bbb = MAKE_FUNCTION_FRAME(codeobj_f5ca362b2d570e471ab5a12460244bbb, module_torch$ao$quantization$qconfig, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f5ca362b2d570e471ab5a12460244bbb->m_type_description == NULL);
    frame_f5ca362b2d570e471ab5a12460244bbb = cache_frame_f5ca362b2d570e471ab5a12460244bbb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f5ca362b2d570e471ab5a12460244bbb);
    assert(Py_REFCNT(frame_f5ca362b2d570e471ab5a12460244bbb) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        int tmp_or_left_truth_1;
        bool tmp_or_left_value_1;
        bool tmp_or_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_q1);
        tmp_cmp_expr_left_1 = par_q1;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_or_left_value_1 = (tmp_cmp_expr_left_1 == tmp_cmp_expr_right_1) ? true : false;
        tmp_or_left_truth_1 = tmp_or_left_value_1 != false ? 1 : 0;
        if (tmp_or_left_truth_1 == 1) {
            goto or_left_1;
        } else {
            goto or_right_1;
        }
        or_right_1:;
        CHECK_OBJECT(par_q2);
        tmp_cmp_expr_left_2 = par_q2;
        tmp_cmp_expr_right_2 = Py_None;
        tmp_or_right_value_1 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        tmp_condition_result_1 = tmp_or_right_value_1;
        goto or_end_1;
        or_left_1:;
        tmp_condition_result_1 = tmp_or_left_value_1;
        or_end_1:;
        if (tmp_condition_result_1 != false) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_q1);
        tmp_cmp_expr_left_3 = par_q1;
        CHECK_OBJECT(par_q2);
        tmp_cmp_expr_right_3 = par_q2;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        CHECK_OBJECT(par_q1);
        tmp_cmp_expr_left_4 = par_q1;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_4 != tmp_cmp_expr_right_4) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_q2);
        tmp_cmp_expr_left_5 = par_q2;
        tmp_cmp_expr_right_5 = Py_None;
        tmp_and_right_value_1 = (tmp_cmp_expr_left_5 != tmp_cmp_expr_right_5) ? Py_True : Py_False;
        tmp_operand_value_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_operand_value_1 = tmp_and_left_value_1;
        and_end_1:;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        assert(!(tmp_res == -1));
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
        exception_lineno = 351;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    // Tried code:
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_q1);
        tmp_expression_value_1 = par_q1;
        tmp_isinstance_inst_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[60]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 356;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[49]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 356;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[50]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 356;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[71]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 356;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[72]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 356;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(var_partial_equals);
        tmp_called_value_1 = var_partial_equals;
        CHECK_OBJECT(par_q1);
        tmp_expression_value_7 = par_q1;
        tmp_expression_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[60]);
        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[73]);
        Py_DECREF(tmp_expression_value_6);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_q2);
        tmp_expression_value_9 = par_q2;
        tmp_expression_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[60]);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 357;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[73]);
        Py_DECREF(tmp_expression_value_8);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 357;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_f5ca362b2d570e471ab5a12460244bbb->m_frame.f_lineno = 357;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 357;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_activation_same == NULL);
        var_activation_same = tmp_assign_source_2;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(par_q1);
        tmp_expression_value_10 = par_q1;
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[60]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_q2);
        tmp_expression_value_11 = par_q2;
        tmp_cmp_expr_right_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[60]);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 359;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 359;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_activation_same == NULL);
        var_activation_same = tmp_assign_source_3;
    }
    branch_end_3:;
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(par_q1);
        tmp_expression_value_12 = par_q1;
        tmp_isinstance_inst_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[48]);
        if (tmp_isinstance_inst_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_2);

            exception_lineno = 360;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[49]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_2);

            exception_lineno = 360;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[50]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_2);

            exception_lineno = 360;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[71]);
        Py_DECREF(tmp_expression_value_14);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_2);

            exception_lineno = 360;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[72]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_2);

            exception_lineno = 360;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_inst_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 360;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_condition_result_4 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(var_partial_equals);
        tmp_called_value_2 = var_partial_equals;
        CHECK_OBJECT(par_q1);
        tmp_expression_value_18 = par_q1;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[48]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[73]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (par_q2 == NULL) {
            Py_DECREF(tmp_args_element_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 361;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_20 = par_q2;
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[48]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 361;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[73]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 361;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        frame_f5ca362b2d570e471ab5a12460244bbb->m_frame.f_lineno = 361;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_weight_same == NULL);
        var_weight_same = tmp_assign_source_4;
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_expression_value_22;
        CHECK_OBJECT(par_q1);
        tmp_expression_value_21 = par_q1;
        tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[48]);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (par_q2 == NULL) {
            Py_DECREF(tmp_cmp_expr_left_7);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 363;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_22 = par_q2;
        tmp_cmp_expr_right_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[48]);
        if (tmp_cmp_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_7);

            exception_lineno = 363;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_7, tmp_cmp_expr_right_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        assert(var_weight_same == NULL);
        var_weight_same = tmp_assign_source_5;
    }
    branch_end_4:;
    {
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        CHECK_OBJECT(var_activation_same);
        tmp_and_left_value_2 = var_activation_same;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 365;
            type_description_1 = "ooooo";
            goto try_except_handler_2;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(var_weight_same);
        tmp_and_right_value_2 = var_weight_same;
        tmp_return_value = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_return_value = tmp_and_left_value_2;
        and_end_2:;
        Py_INCREF(tmp_return_value);
        goto frame_return_exit_1;
    }
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_f5ca362b2d570e471ab5a12460244bbb, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_f5ca362b2d570e471ab5a12460244bbb, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        tmp_cmp_expr_left_8 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_8 = PyExc_AttributeError;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
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
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        CHECK_OBJECT(par_q1);
        tmp_cmp_expr_left_9 = par_q1;
        if (par_q2 == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[74]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 367;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }

        tmp_cmp_expr_right_9 = par_q2;
        tmp_return_value = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 367;
            type_description_1 = "ooooo";
            goto try_except_handler_3;
        }
        goto try_return_handler_3;
    }
    goto branch_end_5;
    branch_no_5:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 352;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_f5ca362b2d570e471ab5a12460244bbb->m_frame) frame_f5ca362b2d570e471ab5a12460244bbb->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooo";
    goto try_except_handler_3;
    branch_end_5:;
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
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f5ca362b2d570e471ab5a12460244bbb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f5ca362b2d570e471ab5a12460244bbb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f5ca362b2d570e471ab5a12460244bbb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f5ca362b2d570e471ab5a12460244bbb,
        type_description_1,
        par_q1,
        par_q2,
        var_partial_equals,
        var_activation_same,
        var_weight_same
    );


    // Release cached frame if used for exception.
    if (frame_f5ca362b2d570e471ab5a12460244bbb == cache_frame_f5ca362b2d570e471ab5a12460244bbb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f5ca362b2d570e471ab5a12460244bbb);
        cache_frame_f5ca362b2d570e471ab5a12460244bbb = NULL;
    }

    assertFrameObject(frame_f5ca362b2d570e471ab5a12460244bbb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_partial_equals);
    Py_DECREF(var_partial_equals);
    var_partial_equals = NULL;
    Py_XDECREF(var_activation_same);
    var_activation_same = NULL;
    Py_XDECREF(var_weight_same);
    var_weight_same = NULL;
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

    CHECK_OBJECT(var_partial_equals);
    Py_DECREF(var_partial_equals);
    var_partial_equals = NULL;
    Py_XDECREF(var_activation_same);
    var_activation_same = NULL;
    Py_XDECREF(var_weight_same);
    var_weight_same = NULL;
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
    CHECK_OBJECT(par_q1);
    Py_DECREF(par_q1);
    CHECK_OBJECT(par_q2);
    Py_DECREF(par_q2);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_q1);
    Py_DECREF(par_q1);
    CHECK_OBJECT(par_q2);
    Py_DECREF(par_q2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$qconfig$$$function__9_qconfig_equals$$$function__1_partial_equals(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_p1 = python_pars[0];
    PyObject *par_p2 = python_pars[1];
    PyObject *var_same = NULL;
    struct Nuitka_FrameObject *frame_f3ab324e728c36f4759c08b02ff59d0c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_f3ab324e728c36f4759c08b02ff59d0c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_f3ab324e728c36f4759c08b02ff59d0c)) {
        Py_XDECREF(cache_frame_f3ab324e728c36f4759c08b02ff59d0c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3ab324e728c36f4759c08b02ff59d0c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3ab324e728c36f4759c08b02ff59d0c = MAKE_FUNCTION_FRAME(codeobj_f3ab324e728c36f4759c08b02ff59d0c, module_torch$ao$quantization$qconfig, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f3ab324e728c36f4759c08b02ff59d0c->m_type_description == NULL);
    frame_f3ab324e728c36f4759c08b02ff59d0c = cache_frame_f3ab324e728c36f4759c08b02ff59d0c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f3ab324e728c36f4759c08b02ff59d0c);
    assert(Py_REFCNT(frame_f3ab324e728c36f4759c08b02ff59d0c) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_p1);
        tmp_expression_value_1 = par_p1;
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[76]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_p2);
        tmp_expression_value_2 = par_p2;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[76]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_1);

            exception_lineno = 344;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_same == NULL);
        var_same = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(var_same);
        tmp_and_left_value_1 = var_same;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_p1);
        tmp_expression_value_3 = par_p1;
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[77]);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_p2);
        tmp_expression_value_4 = par_p2;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[77]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 345;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
        tmp_assign_source_2 = tmp_and_left_value_1;
        and_end_1:;
        {
            PyObject *old = var_same;
            assert(old != NULL);
            var_same = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(var_same);
        tmp_and_left_value_2 = var_same;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_p1);
        tmp_expression_value_5 = par_p1;
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[78]);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_p2);
        tmp_expression_value_6 = par_p2;
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[78]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 346;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_and_right_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        Py_INCREF(tmp_and_left_value_2);
        tmp_return_value = tmp_and_left_value_2;
        and_end_2:;
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
        exception_tb = MAKE_TRACEBACK(frame_f3ab324e728c36f4759c08b02ff59d0c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3ab324e728c36f4759c08b02ff59d0c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3ab324e728c36f4759c08b02ff59d0c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3ab324e728c36f4759c08b02ff59d0c,
        type_description_1,
        par_p1,
        par_p2,
        var_same
    );


    // Release cached frame if used for exception.
    if (frame_f3ab324e728c36f4759c08b02ff59d0c == cache_frame_f3ab324e728c36f4759c08b02ff59d0c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f3ab324e728c36f4759c08b02ff59d0c);
        cache_frame_f3ab324e728c36f4759c08b02ff59d0c = NULL;
    }

    assertFrameObject(frame_f3ab324e728c36f4759c08b02ff59d0c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_same);
    Py_DECREF(var_same);
    var_same = NULL;
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

    Py_XDECREF(var_same);
    var_same = NULL;
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
    CHECK_OBJECT(par_p1);
    Py_DECREF(par_p1);
    CHECK_OBJECT(par_p2);
    Py_DECREF(par_p2);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_p1);
    Py_DECREF(par_p1);
    CHECK_OBJECT(par_p2);
    Py_DECREF(par_p2);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$qconfig$$$function__10_activation_is_memoryless(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig = python_pars[0];
    PyObject *var__is_memoryless = NULL;
    PyObject *var_act = NULL;
    struct Nuitka_FrameObject *frame_aed5ff6147e3f132df4f91839d0d3b81;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_aed5ff6147e3f132df4f91839d0d3b81 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__10_activation_is_memoryless$$$function__1__is_memoryless();

        assert(var__is_memoryless == NULL);
        var__is_memoryless = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_aed5ff6147e3f132df4f91839d0d3b81)) {
        Py_XDECREF(cache_frame_aed5ff6147e3f132df4f91839d0d3b81);

#if _DEBUG_REFCOUNTS
        if (cache_frame_aed5ff6147e3f132df4f91839d0d3b81 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_aed5ff6147e3f132df4f91839d0d3b81 = MAKE_FUNCTION_FRAME(codeobj_aed5ff6147e3f132df4f91839d0d3b81, module_torch$ao$quantization$qconfig, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_aed5ff6147e3f132df4f91839d0d3b81->m_type_description == NULL);
    frame_aed5ff6147e3f132df4f91839d0d3b81 = cache_frame_aed5ff6147e3f132df4f91839d0d3b81;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_aed5ff6147e3f132df4f91839d0d3b81);
    assert(Py_REFCNT(frame_aed5ff6147e3f132df4f91839d0d3b81) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_qconfig);
        tmp_called_instance_1 = par_qconfig;
        frame_aed5ff6147e3f132df4f91839d0d3b81->m_frame.f_lineno = 375;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[60]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_act == NULL);
        var_act = tmp_assign_source_2;
    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_and_left_truth_1;
        nuitka_bool tmp_and_left_value_1;
        nuitka_bool tmp_and_right_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(var_act);
        tmp_isinstance_inst_1 = var_act;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[81]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[81]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_and_left_truth_1 = tmp_and_left_value_1 == NUITKA_BOOL_TRUE ? 1 : 0;
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(var_act);
        tmp_expression_value_1 = var_act;
        tmp_attribute_value_1 = mod_consts[82];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 376;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_1 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        tmp_condition_result_1 = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_condition_result_1 = tmp_and_left_value_1;
        and_end_1:;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var__is_memoryless);
        tmp_called_value_1 = var__is_memoryless;
        CHECK_OBJECT(var_act);
        tmp_expression_value_2 = var_act;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[82]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_aed5ff6147e3f132df4f91839d0d3b81->m_frame.f_lineno = 377;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 377;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var__is_memoryless);
        tmp_called_value_2 = var__is_memoryless;
        CHECK_OBJECT(var_act);
        tmp_args_element_value_2 = var_act;
        frame_aed5ff6147e3f132df4f91839d0d3b81->m_frame.f_lineno = 379;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 379;
            type_description_1 = "ooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_aed5ff6147e3f132df4f91839d0d3b81, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_aed5ff6147e3f132df4f91839d0d3b81->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_aed5ff6147e3f132df4f91839d0d3b81, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_aed5ff6147e3f132df4f91839d0d3b81,
        type_description_1,
        par_qconfig,
        var__is_memoryless,
        var_act
    );


    // Release cached frame if used for exception.
    if (frame_aed5ff6147e3f132df4f91839d0d3b81 == cache_frame_aed5ff6147e3f132df4f91839d0d3b81) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_aed5ff6147e3f132df4f91839d0d3b81);
        cache_frame_aed5ff6147e3f132df4f91839d0d3b81 = NULL;
    }

    assertFrameObject(frame_aed5ff6147e3f132df4f91839d0d3b81);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var__is_memoryless);
    var__is_memoryless = NULL;
    Py_XDECREF(var_act);
    var_act = NULL;
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

    Py_XDECREF(var__is_memoryless);
    var__is_memoryless = NULL;
    Py_XDECREF(var_act);
    var_act = NULL;
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
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$qconfig$$$function__10_activation_is_memoryless$$$function__1__is_memoryless(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_observer = python_pars[0];
    struct Nuitka_FrameObject *frame_7d7846f6a46dc7dba645783548a32578;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_7d7846f6a46dc7dba645783548a32578 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_7d7846f6a46dc7dba645783548a32578)) {
        Py_XDECREF(cache_frame_7d7846f6a46dc7dba645783548a32578);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7d7846f6a46dc7dba645783548a32578 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7d7846f6a46dc7dba645783548a32578 = MAKE_FUNCTION_FRAME(codeobj_7d7846f6a46dc7dba645783548a32578, module_torch$ao$quantization$qconfig, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7d7846f6a46dc7dba645783548a32578->m_type_description == NULL);
    frame_7d7846f6a46dc7dba645783548a32578 = cache_frame_7d7846f6a46dc7dba645783548a32578;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7d7846f6a46dc7dba645783548a32578);
    assert(Py_REFCNT(frame_7d7846f6a46dc7dba645783548a32578) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_observer);
        tmp_expression_value_1 = par_observer;
        tmp_attribute_value_1 = mod_consts[84];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_observer);
        tmp_expression_value_2 = par_observer;
        tmp_and_right_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[84]);
        if (tmp_and_right_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 374;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        Py_INCREF(tmp_and_left_value_1);
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
        exception_tb = MAKE_TRACEBACK(frame_7d7846f6a46dc7dba645783548a32578, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7d7846f6a46dc7dba645783548a32578->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7d7846f6a46dc7dba645783548a32578, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7d7846f6a46dc7dba645783548a32578,
        type_description_1,
        par_observer
    );


    // Release cached frame if used for exception.
    if (frame_7d7846f6a46dc7dba645783548a32578 == cache_frame_7d7846f6a46dc7dba645783548a32578) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7d7846f6a46dc7dba645783548a32578);
        cache_frame_7d7846f6a46dc7dba645783548a32578 = NULL;
    }

    assertFrameObject(frame_7d7846f6a46dc7dba645783548a32578);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_observer);
    Py_DECREF(par_observer);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_observer);
    Py_DECREF(par_observer);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$qconfig$$$function__11_is_reuse_input_qconfig(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig = python_pars[0];
    struct Nuitka_FrameObject *frame_961fd03549ee3901dedbe54963e46ee1;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_961fd03549ee3901dedbe54963e46ee1 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_961fd03549ee3901dedbe54963e46ee1)) {
        Py_XDECREF(cache_frame_961fd03549ee3901dedbe54963e46ee1);

#if _DEBUG_REFCOUNTS
        if (cache_frame_961fd03549ee3901dedbe54963e46ee1 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_961fd03549ee3901dedbe54963e46ee1 = MAKE_FUNCTION_FRAME(codeobj_961fd03549ee3901dedbe54963e46ee1, module_torch$ao$quantization$qconfig, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_961fd03549ee3901dedbe54963e46ee1->m_type_description == NULL);
    frame_961fd03549ee3901dedbe54963e46ee1 = cache_frame_961fd03549ee3901dedbe54963e46ee1;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_961fd03549ee3901dedbe54963e46ee1);
    assert(Py_REFCNT(frame_961fd03549ee3901dedbe54963e46ee1) == 2);

    // Framed code:
    {
        int tmp_and_left_truth_1;
        PyObject *tmp_and_left_value_1;
        PyObject *tmp_and_right_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        int tmp_and_left_truth_2;
        PyObject *tmp_and_left_value_2;
        PyObject *tmp_and_right_value_2;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_qconfig);
        tmp_cmp_expr_left_1 = par_qconfig;
        tmp_cmp_expr_right_1 = Py_None;
        tmp_and_left_value_1 = (tmp_cmp_expr_left_1 != tmp_cmp_expr_right_1) ? Py_True : Py_False;
        tmp_and_left_truth_1 = CHECK_IF_TRUE(tmp_and_left_value_1);
        if (tmp_and_left_truth_1 == 1) {
            goto and_right_1;
        } else {
            goto and_left_1;
        }
        and_right_1:;
        CHECK_OBJECT(par_qconfig);
        tmp_called_instance_1 = par_qconfig;
        frame_961fd03549ee3901dedbe54963e46ee1->m_frame.f_lineno = 383;
        tmp_isinstance_inst_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[60]);
        if (tmp_isinstance_inst_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[85]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[85]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_1);

            exception_lineno = 383;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_inst_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_left_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_left_truth_2 = CHECK_IF_TRUE(tmp_and_left_value_2);
        if (tmp_and_left_truth_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 383;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        if (tmp_and_left_truth_2 == 1) {
            goto and_right_2;
        } else {
            goto and_left_2;
        }
        and_right_2:;
        CHECK_OBJECT(par_qconfig);
        tmp_called_instance_2 = par_qconfig;
        frame_961fd03549ee3901dedbe54963e46ee1->m_frame.f_lineno = 384;
        tmp_isinstance_inst_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[48]);
        if (tmp_isinstance_inst_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_isinstance_inst_2);

            exception_lineno = 384;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_inst_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 384;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_and_right_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_and_right_value_1 = tmp_and_right_value_2;
        goto and_end_2;
        and_left_2:;
        tmp_and_right_value_1 = tmp_and_left_value_2;
        and_end_2:;
        tmp_return_value = tmp_and_right_value_1;
        goto and_end_1;
        and_left_1:;
        tmp_return_value = tmp_and_left_value_1;
        and_end_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_961fd03549ee3901dedbe54963e46ee1, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_961fd03549ee3901dedbe54963e46ee1->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_961fd03549ee3901dedbe54963e46ee1, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_961fd03549ee3901dedbe54963e46ee1,
        type_description_1,
        par_qconfig
    );


    // Release cached frame if used for exception.
    if (frame_961fd03549ee3901dedbe54963e46ee1 == cache_frame_961fd03549ee3901dedbe54963e46ee1) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_961fd03549ee3901dedbe54963e46ee1);
        cache_frame_961fd03549ee3901dedbe54963e46ee1 = NULL;
    }

    assertFrameObject(frame_961fd03549ee3901dedbe54963e46ee1);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig);
    Py_DECREF(par_qconfig);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__10_activation_is_memoryless(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__10_activation_is_memoryless,
        mod_consts[158],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_aed5ff6147e3f132df4f91839d0d3b81,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$qconfig,
        mod_consts[83],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__10_activation_is_memoryless$$$function__1__is_memoryless() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__10_activation_is_memoryless$$$function__1__is_memoryless,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[80],
#endif
        codeobj_7d7846f6a46dc7dba645783548a32578,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$qconfig,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__11_is_reuse_input_qconfig(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__11_is_reuse_input_qconfig,
        mod_consts[159],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_961fd03549ee3901dedbe54963e46ee1,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$qconfig,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__1___new__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__1___new__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[124],
#endif
        codeobj_c04901482e215dbb1e27e11345262dcc,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$qconfig,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__2___new__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__2___new__,
        mod_consts[4],
#if PYTHON_VERSION >= 0x300
        mod_consts[128],
#endif
        codeobj_8db0f7d3684eddf5db5290d1535abe8b,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$qconfig,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__3_get_default_qconfig(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__3_get_default_qconfig,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ef51443691b890059f66eeb7a086d827,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$qconfig,
        mod_consts[21],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__4_get_default_qat_qconfig(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__4_get_default_qat_qconfig,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6fca4459fe7787d769ba04f8d0541797,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$qconfig,
        mod_consts[36],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__5_get_default_qconfig_dict(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__5_get_default_qconfig_dict,
        mod_consts[149],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1008f2b38780dcf3e888840ab258bb60,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$qconfig,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__6_get_default_qat_qconfig_dict(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__6_get_default_qat_qconfig_dict,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_1343c3f6307518b732fb65e4ef8934ca,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$qconfig,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__7_assert_valid_qconfig(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__7_assert_valid_qconfig,
        mod_consts[153],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_602b67d776fd526226c88bb1eda9d087,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$qconfig,
        mod_consts[54],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr,
        mod_consts[155],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9e6cd73aa894e7bf356edcaa0766ec6f,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$qconfig,
        mod_consts[61],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr$$$function__1_get_factory_kwargs_based_on_module_device(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr$$$function__1_get_factory_kwargs_based_on_module_device,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        mod_consts[57],
#endif
        codeobj_21a3e023881d3c5f1a71be8c6600e3cf,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$qconfig,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr$$$function__2_configure_constructor_to_put_obs_on_module_device(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr$$$function__2_configure_constructor_to_put_obs_on_module_device,
        mod_consts[58],
#if PYTHON_VERSION >= 0x300
        mod_consts[59],
#endif
        codeobj_f1a97312980ef961fa122c9a135369ee,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$qconfig,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__9_qconfig_equals(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__9_qconfig_equals,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f5ca362b2d570e471ab5a12460244bbb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torch$ao$quantization$qconfig,
        mod_consts[75],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__9_qconfig_equals$$$function__1_partial_equals() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$qconfig$$$function__9_qconfig_equals$$$function__1_partial_equals,
        mod_consts[69],
#if PYTHON_VERSION >= 0x300
        mod_consts[70],
#endif
        codeobj_f3ab324e728c36f4759c08b02ff59d0c,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$qconfig,
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

function_impl_code functable_torch$ao$quantization$qconfig[] = {
    impl_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr$$$function__1_get_factory_kwargs_based_on_module_device,
    impl_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr$$$function__2_configure_constructor_to_put_obs_on_module_device,
    impl_torch$ao$quantization$qconfig$$$function__9_qconfig_equals$$$function__1_partial_equals,
    impl_torch$ao$quantization$qconfig$$$function__10_activation_is_memoryless$$$function__1__is_memoryless,
    impl_torch$ao$quantization$qconfig$$$function__1___new__,
    impl_torch$ao$quantization$qconfig$$$function__2___new__,
    impl_torch$ao$quantization$qconfig$$$function__3_get_default_qconfig,
    impl_torch$ao$quantization$qconfig$$$function__4_get_default_qat_qconfig,
    impl_torch$ao$quantization$qconfig$$$function__5_get_default_qconfig_dict,
    impl_torch$ao$quantization$qconfig$$$function__6_get_default_qat_qconfig_dict,
    impl_torch$ao$quantization$qconfig$$$function__7_assert_valid_qconfig,
    impl_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr,
    impl_torch$ao$quantization$qconfig$$$function__9_qconfig_equals,
    impl_torch$ao$quantization$qconfig$$$function__10_activation_is_memoryless,
    impl_torch$ao$quantization$qconfig$$$function__11_is_reuse_input_qconfig,
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

    function_impl_code *current = functable_torch$ao$quantization$qconfig;
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

    if (offset > sizeof(functable_torch$ao$quantization$qconfig) || offset < 0) {
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
        functable_torch$ao$quantization$qconfig[offset],
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
        module_torch$ao$quantization$qconfig,
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
PyObject *modulecode_torch$ao$quantization$qconfig(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.ao.quantization.qconfig");

    // Store the module for future use.
    module_torch$ao$quantization$qconfig = module;

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
        PRINT_STRING("torch.ao.quantization.qconfig: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.ao.quantization.qconfig: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.ao.quantization.qconfig: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$ao$quantization$qconfig\n");

    moduledict_torch$ao$quantization$qconfig = MODULE_DICT(module_torch$ao$quantization$qconfig);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$ao$quantization$qconfig,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$ao$quantization$qconfig,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[38]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$ao$quantization$qconfig,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$ao$quantization$qconfig,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$ao$quantization$qconfig,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$ao$quantization$qconfig);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$ao$quantization$qconfig);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
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
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    PyObject *tmp_import_from_2__module = NULL;
    PyObject *tmp_import_from_3__module = NULL;
    struct Nuitka_FrameObject *frame_c1f5a6cb5c694958c3d0b55b6c22559f;
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
    PyObject *locals_torch$ao$quantization$qconfig$$$class__1_QConfig_40 = NULL;
    PyObject *tmp_dictset_value;
    struct Nuitka_FrameObject *frame_11e1455dbda773194bc90438c14441ee_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
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
    PyObject *locals_torch$ao$quantization$qconfig$$$class__2_QConfigDynamic_67 = NULL;
    struct Nuitka_FrameObject *frame_46707185297d34a5bd557a7dbcd79d42_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = Py_None;
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_2);
    }
    frame_c1f5a6cb5c694958c3d0b55b6c22559f = MAKE_MODULE_FRAME(codeobj_c1f5a6cb5c694958c3d0b55b6c22559f, module_torch$ao$quantization$qconfig);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c1f5a6cb5c694958c3d0b55b6c22559f);
    assert(Py_REFCNT(frame_c1f5a6cb5c694958c3d0b55b6c22559f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[90], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[89]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[89]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[91], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[92], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[93];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$ao$quantization$qconfig;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = mod_consts[94];
        tmp_level_value_1 = mod_consts[24];
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 1;
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
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[95],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_4 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[95]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 1;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[95], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        tmp_assign_source_5 = IMPORT_HARD_TYPING();
        assert(!(tmp_assign_source_5 == NULL));
        assert(tmp_import_from_1__module == NULL);
        Py_INCREF(tmp_assign_source_5);
        tmp_import_from_1__module = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[96],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[96]);
        }

        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[96], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[97],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[97]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[97], tmp_assign_source_7);
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[44];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$ao$quantization$qconfig;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[24];
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 4;
        tmp_assign_source_8 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_4;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[98];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$ao$quantization$qconfig;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[24];
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 5;
        tmp_import_name_from_4 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[0],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[0]);
        }

        Py_DECREF(tmp_import_name_from_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[99];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$ao$quantization$qconfig;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[100];
        tmp_level_value_4 = mod_consts[24];
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 6;
        tmp_assign_source_10 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_2__module == NULL);
        tmp_import_from_2__module = tmp_assign_source_10;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[22],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[22]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[22], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_6;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_6 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[81],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[81]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[81], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_7;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_7 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_7)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_7,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[101],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_7, mod_consts[101]);
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[101], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_import_name_from_8;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_8 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_8)) {
            tmp_assign_source_14 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_8,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[102],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_14 = IMPORT_NAME(tmp_import_name_from_8, mod_consts[102]);
        }

        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[102], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_import_name_from_9;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_9 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_9)) {
            tmp_assign_source_15 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_9,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[27],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_15 = IMPORT_NAME(tmp_import_name_from_9, mod_consts[27]);
        }

        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_import_name_from_10;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_10 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_10)) {
            tmp_assign_source_16 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_10,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[28],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_16 = IMPORT_NAME(tmp_import_name_from_10, mod_consts[28]);
        }

        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[28], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_import_name_from_11;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_11 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_11)) {
            tmp_assign_source_17 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_11,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[103],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_17 = IMPORT_NAME(tmp_import_name_from_11, mod_consts[103]);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[103], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_import_name_from_12;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_12 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_12)) {
            tmp_assign_source_18 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_12,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[33],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_18 = IMPORT_NAME(tmp_import_name_from_12, mod_consts[33]);
        }

        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[33], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_import_name_from_13;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_13 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_13)) {
            tmp_assign_source_19 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_13,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[31],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_19 = IMPORT_NAME(tmp_import_name_from_13, mod_consts[31]);
        }

        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_19);
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_import_name_from_14;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_14 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_14)) {
            tmp_assign_source_20 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_14,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[32],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_20 = IMPORT_NAME(tmp_import_name_from_14, mod_consts[32]);
        }

        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[32], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_import_name_from_15;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_15 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_15)) {
            tmp_assign_source_21 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_15,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[104],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_21 = IMPORT_NAME(tmp_import_name_from_15, mod_consts[104]);
        }

        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[104], tmp_assign_source_21);
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_import_name_from_16;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_16 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_16)) {
            tmp_assign_source_22 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_16,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[105],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_22 = IMPORT_NAME(tmp_import_name_from_16, mod_consts[105]);
        }

        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[105], tmp_assign_source_22);
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
        PyObject *tmp_assign_source_23;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[71];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torch$ao$quantization$qconfig;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[106];
        tmp_level_value_5 = mod_consts[30];
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 21;
        tmp_assign_source_23 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_3__module == NULL);
        tmp_import_from_3__module = tmp_assign_source_23;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_import_name_from_17;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_17 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_17)) {
            tmp_assign_source_24 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_17,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[11],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_24 = IMPORT_NAME(tmp_import_name_from_17, mod_consts[11]);
        }

        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[11], tmp_assign_source_24);
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_import_name_from_18;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_18 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_18)) {
            tmp_assign_source_25 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_18,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[23],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_25 = IMPORT_NAME(tmp_import_name_from_18, mod_consts[23]);
        }

        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_25);
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_import_name_from_19;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_19 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_19)) {
            tmp_assign_source_26 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_19,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[86],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_26 = IMPORT_NAME(tmp_import_name_from_19, mod_consts[86]);
        }

        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_26);
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_import_name_from_20;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_20 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_20)) {
            tmp_assign_source_27 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_20,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[107],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_27 = IMPORT_NAME(tmp_import_name_from_20, mod_consts[107]);
        }

        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[107], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_import_name_from_21;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_21 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_21)) {
            tmp_assign_source_28 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_21,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[85],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_28 = IMPORT_NAME(tmp_import_name_from_21, mod_consts[85]);
        }

        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[85], tmp_assign_source_28);
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_import_name_from_22;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_22 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_22)) {
            tmp_assign_source_29 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_22,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[108],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_29 = IMPORT_NAME(tmp_import_name_from_22, mod_consts[108]);
        }

        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_29);
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_import_name_from_23;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_23 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_23)) {
            tmp_assign_source_30 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_23,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[109],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_30 = IMPORT_NAME(tmp_import_name_from_23, mod_consts[109]);
        }

        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[109], tmp_assign_source_30);
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_import_name_from_24;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_24 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_24)) {
            tmp_assign_source_31 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_24,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[110],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_31 = IMPORT_NAME(tmp_import_name_from_24, mod_consts[110]);
        }

        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[110], tmp_assign_source_31);
    }
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_import_name_from_25;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_25 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_25)) {
            tmp_assign_source_32 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_25,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[111],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_32 = IMPORT_NAME(tmp_import_name_from_25, mod_consts[111]);
        }

        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[111], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;
        PyObject *tmp_import_name_from_26;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_26 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_26)) {
            tmp_assign_source_33 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_26,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[112],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_33 = IMPORT_NAME(tmp_import_name_from_26, mod_consts[112]);
        }

        if (tmp_assign_source_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[112], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_import_name_from_27;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_27 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_27)) {
            tmp_assign_source_34 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_27,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[15],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_34 = IMPORT_NAME(tmp_import_name_from_27, mod_consts[15]);
        }

        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_import_name_from_28;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_28 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_28)) {
            tmp_assign_source_35 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_28,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[113],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_35 = IMPORT_NAME(tmp_import_name_from_28, mod_consts[113]);
        }

        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[113], tmp_assign_source_35);
    }
    {
        PyObject *tmp_assign_source_36;
        PyObject *tmp_import_name_from_29;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_29 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_29)) {
            tmp_assign_source_36 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_29,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[19],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_36 = IMPORT_NAME(tmp_import_name_from_29, mod_consts[19]);
        }

        if (tmp_assign_source_36 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[19], tmp_assign_source_36);
    }
    {
        PyObject *tmp_assign_source_37;
        PyObject *tmp_import_name_from_30;
        CHECK_OBJECT(tmp_import_from_3__module);
        tmp_import_name_from_30 = tmp_import_from_3__module;
        if (PyModule_Check(tmp_import_name_from_30)) {
            tmp_assign_source_37 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_30,
                (PyObject *)moduledict_torch$ao$quantization$qconfig,
                mod_consts[114],
                mod_consts[24]
            );
        } else {
            tmp_assign_source_37 = IMPORT_NAME(tmp_import_name_from_30, mod_consts[114]);
        }

        if (tmp_assign_source_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto try_except_handler_3;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[114], tmp_assign_source_37);
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
        PyObject *tmp_assign_source_38;
        PyObject *tmp_name_value_6;
        PyObject *tmp_globals_arg_value_6;
        PyObject *tmp_locals_arg_value_6;
        PyObject *tmp_fromlist_value_6;
        PyObject *tmp_level_value_6;
        tmp_name_value_6 = mod_consts[6];
        tmp_globals_arg_value_6 = (PyObject *)moduledict_torch$ao$quantization$qconfig;
        tmp_locals_arg_value_6 = Py_None;
        tmp_fromlist_value_6 = Py_None;
        tmp_level_value_6 = mod_consts[24];
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 37;
        tmp_assign_source_38 = IMPORT_MODULE5(tmp_name_value_6, tmp_globals_arg_value_6, tmp_locals_arg_value_6, tmp_fromlist_value_6, tmp_level_value_6);
        if (tmp_assign_source_38 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 37;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[6], tmp_assign_source_38);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_39;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_arg_element_1;
        PyObject *tmp_call_arg_element_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        tmp_call_arg_element_1 = mod_consts[3];
        tmp_call_arg_element_2 = MAKE_LIST2(mod_consts[60],mod_consts[48]);
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 40;
        {
            PyObject *call_args[] = {tmp_call_arg_element_1, tmp_call_arg_element_2};
            tmp_tuple_element_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_call_arg_element_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        tmp_assign_source_39 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_39, 0, tmp_tuple_element_1);
        assert(tmp_class_creation_1__bases_orig == NULL);
        tmp_class_creation_1__bases_orig = tmp_assign_source_39;
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_1__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_1__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_40 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_40 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_40;
    }
    {
        PyObject *tmp_assign_source_41;
        tmp_assign_source_41 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_41;
    }
    {
        PyObject *tmp_assign_source_42;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_1__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[24];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_42 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_42 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_42;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[115]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_43;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[115]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[3];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_2 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 40;
        tmp_assign_source_43 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_43 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_43;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[116]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_4;
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
        tmp_mod_expr_left_1 = mod_consts[117];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[118];
        tmp_getattr_default_1 = mod_consts[119];
        tmp_tuple_element_3 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[118]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_4;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 40;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_4;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_44;
        tmp_assign_source_44 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_44;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_45;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torch$ao$quantization$qconfig$$$class__1_QConfig_40 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[120];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$qconfig$$$class__1_QConfig_40, mod_consts[121], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[122];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$qconfig$$$class__1_QConfig_40, mod_consts[87], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        tmp_dictset_value = mod_consts[3];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$qconfig$$$class__1_QConfig_40, mod_consts[123], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        frame_11e1455dbda773194bc90438c14441ee_2 = MAKE_CLASS_FRAME(codeobj_11e1455dbda773194bc90438c14441ee, module_torch$ao$quantization$qconfig, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_11e1455dbda773194bc90438c14441ee_2);
        assert(Py_REFCNT(frame_11e1455dbda773194bc90438c14441ee_2) == 2);

        // Framed code:


        tmp_dictset_value = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__1___new__();

        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$qconfig$$$class__1_QConfig_40, mod_consts[4], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_2 = "o";
            goto frame_exception_exit_2;
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_11e1455dbda773194bc90438c14441ee_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_11e1455dbda773194bc90438c14441ee_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_11e1455dbda773194bc90438c14441ee_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_11e1455dbda773194bc90438c14441ee_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_11e1455dbda773194bc90438c14441ee_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;

        goto try_except_handler_6;
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


                exception_lineno = 40;

                goto try_except_handler_6;
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
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$qconfig$$$class__1_QConfig_40, mod_consts[125], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;

            goto try_except_handler_6;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_46;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_3 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_4 = mod_consts[3];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_4 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_torch$ao$quantization$qconfig$$$class__1_QConfig_40;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 40;
            tmp_assign_source_46 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_46 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 40;

                goto try_except_handler_6;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_46;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_45 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_45);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        Py_DECREF(locals_torch$ao$quantization$qconfig$$$class__1_QConfig_40);
        locals_torch$ao$quantization$qconfig$$$class__1_QConfig_40 = NULL;
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

        Py_DECREF(locals_torch$ao$quantization$qconfig$$$class__1_QConfig_40);
        locals_torch$ao$quantization$qconfig$$$class__1_QConfig_40 = NULL;
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
        CHECK_OBJECT(outline_0_var___class__);
        Py_DECREF(outline_0_var___class__);
        outline_0_var___class__ = NULL;
        goto outline_result_1;
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

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 40;
        goto try_except_handler_4;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_45);
    }
    goto try_end_4;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
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
        PyObject *tmp_assign_source_47;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_arg_element_3;
        PyObject *tmp_call_arg_element_4;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[95]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[95]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_7;
        }
        tmp_call_arg_element_3 = mod_consts[9];
        tmp_call_arg_element_4 = MAKE_LIST2(mod_consts[60],mod_consts[48]);
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 67;
        {
            PyObject *call_args[] = {tmp_call_arg_element_3, tmp_call_arg_element_4};
            tmp_tuple_element_5 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_call_arg_element_4);
        if (tmp_tuple_element_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_7;
        }
        tmp_assign_source_47 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_assign_source_47, 0, tmp_tuple_element_5);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_47;
    }
    {
        PyObject *tmp_assign_source_48;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_48 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_48 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_48;
    }
    {
        PyObject *tmp_assign_source_49;
        tmp_assign_source_49 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_49;
    }
    {
        PyObject *tmp_assign_source_50;
        PyObject *tmp_metaclass_value_2;
        nuitka_bool tmp_condition_result_5;
        int tmp_truth_name_2;
        PyObject *tmp_type_arg_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_bases_value_2;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_class_creation_2__bases);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_7;
        }
        tmp_condition_result_5 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_5 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_2;
        } else {
            goto condexpr_false_2;
        }
        condexpr_true_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_expression_value_6 = tmp_class_creation_2__bases;
        tmp_subscript_value_2 = mod_consts[24];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_7;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_7;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_50 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_50 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_50;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[115]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_51;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[115]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_7;
        }
        tmp_tuple_element_6 = mod_consts[9];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_6 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_6);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 67;
        tmp_assign_source_51 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_51 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_7;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_51;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[116]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_7;
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
        PyObject *tmp_tuple_element_7;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[117];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[118];
        tmp_getattr_default_2 = mod_consts[119];
        tmp_tuple_element_7 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_7;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[118]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_7);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_7;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_7;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 67;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_7;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_52;
        tmp_assign_source_52 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_52;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_53;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torch$ao$quantization$qconfig$$$class__2_QConfigDynamic_67 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[120];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$qconfig$$$class__2_QConfigDynamic_67, mod_consts[121], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[126];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$qconfig$$$class__2_QConfigDynamic_67, mod_consts[87], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_9;
        }
        tmp_dictset_value = mod_consts[9];
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$qconfig$$$class__2_QConfigDynamic_67, mod_consts[123], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_9;
        }
        frame_46707185297d34a5bd557a7dbcd79d42_3 = MAKE_CLASS_FRAME(codeobj_46707185297d34a5bd557a7dbcd79d42, module_torch$ao$quantization$qconfig, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_46707185297d34a5bd557a7dbcd79d42_3);
        assert(Py_REFCNT(frame_46707185297d34a5bd557a7dbcd79d42_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_expression_value_11;
            PyObject *tmp_expression_value_12;
            tmp_expression_value_12 = PyObject_GetItem(locals_torch$ao$quantization$qconfig$$$class__2_QConfigDynamic_67, mod_consts[44]);

            if (tmp_expression_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

                    if (unlikely(tmp_expression_value_12 == NULL)) {
                        tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                    }

                    if (tmp_expression_value_12 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 83;
                        type_description_2 = "o";
                        goto frame_exception_exit_3;
                    }
                    Py_INCREF(tmp_expression_value_12);
                } else {
                    goto frame_exception_exit_3;
                }
            }

            tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[0]);
            Py_DECREF(tmp_expression_value_12);
            if (tmp_expression_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[127]);
            Py_DECREF(tmp_expression_value_11);
            if (tmp_tuple_element_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(2);
            {
                PyObject *tmp_expression_value_13;
                PyObject *tmp_expression_value_14;
                PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_8);
                tmp_expression_value_14 = PyObject_GetItem(locals_torch$ao$quantization$qconfig$$$class__2_QConfigDynamic_67, mod_consts[44]);

                if (tmp_expression_value_14 == NULL) {
                    if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

                        if (unlikely(tmp_expression_value_14 == NULL)) {
                            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
                        }

                        if (tmp_expression_value_14 == NULL) {
                            assert(ERROR_OCCURRED());

                            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                            exception_lineno = 83;
                            type_description_2 = "o";
                            goto tuple_build_exception_3;
                        }
                        Py_INCREF(tmp_expression_value_14);
                    } else {
                        goto tuple_build_exception_3;
                    }
                }

                tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[0]);
                Py_DECREF(tmp_expression_value_14);
                if (tmp_expression_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 83;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                tmp_tuple_element_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[127]);
                Py_DECREF(tmp_expression_value_13);
                if (tmp_tuple_element_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 83;
                    type_description_2 = "o";
                    goto tuple_build_exception_3;
                }
                PyTuple_SET_ITEM(tmp_defaults_1, 1, tmp_tuple_element_8);
            }
            goto tuple_build_noexception_3;
            // Exception handling pass through code for tuple_build:
            tuple_build_exception_3:;
            Py_DECREF(tmp_defaults_1);
            goto frame_exception_exit_3;
            // Finished with no exception for tuple_build:
            tuple_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__2___new__(tmp_defaults_1);

            tmp_res = PyObject_SetItem(locals_torch$ao$quantization$qconfig$$$class__2_QConfigDynamic_67, mod_consts[4], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 83;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_46707185297d34a5bd557a7dbcd79d42_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_46707185297d34a5bd557a7dbcd79d42_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_46707185297d34a5bd557a7dbcd79d42_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_46707185297d34a5bd557a7dbcd79d42_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_46707185297d34a5bd557a7dbcd79d42_3);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_2;
        frame_no_exception_2:;
        goto skip_nested_handling_2;
        nested_frame_exit_2:;

        goto try_except_handler_9;
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


                exception_lineno = 67;

                goto try_except_handler_9;
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
        tmp_res = PyObject_SetItem(locals_torch$ao$quantization$qconfig$$$class__2_QConfigDynamic_67, mod_consts[125], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;

            goto try_except_handler_9;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_54;
            PyObject *tmp_called_value_6;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_9;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_6 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_9 = mod_consts[9];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_9 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_9);
            tmp_tuple_element_9 = locals_torch$ao$quantization$qconfig$$$class__2_QConfigDynamic_67;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 67;
            tmp_assign_source_54 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_54 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 67;

                goto try_except_handler_9;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_54;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_53 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_53);
        goto try_return_handler_9;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        Py_DECREF(locals_torch$ao$quantization$qconfig$$$class__2_QConfigDynamic_67);
        locals_torch$ao$quantization$qconfig$$$class__2_QConfigDynamic_67 = NULL;
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

        Py_DECREF(locals_torch$ao$quantization$qconfig$$$class__2_QConfigDynamic_67);
        locals_torch$ao$quantization$qconfig$$$class__2_QConfigDynamic_67 = NULL;
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
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 67;
        goto try_except_handler_7;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[9], tmp_assign_source_53);
    }
    goto try_end_5;
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
    exception_type = exception_keeper_type_9;
    exception_value = exception_keeper_value_9;
    exception_tb = exception_keeper_tb_9;
    exception_lineno = exception_keeper_lineno_9;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
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
    {
        PyObject *tmp_assign_source_55;
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_kw_call_value_1_1;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_kw_call_value_0_1 == NULL)) {
            tmp_kw_call_value_0_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_kw_call_value_1_1 == NULL)) {
            tmp_kw_call_value_1_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 92;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_assign_source_55 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_7, kw_values, mod_consts[16]);
        }

        if (tmp_assign_source_55 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[20], tmp_assign_source_55);
    }
    {
        PyObject *tmp_assign_source_56;
        PyObject *tmp_called_value_8;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_kw_call_value_1_2;
        tmp_called_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_8 == NULL)) {
            tmp_called_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_kw_call_value_0_2 == NULL)) {
            tmp_kw_call_value_0_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_kw_call_value_1_2 == NULL)) {
            tmp_kw_call_value_1_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_kw_call_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 98;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};

            tmp_assign_source_56 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_8, kw_values, mod_consts[129]);
        }

        if (tmp_assign_source_56 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[130], tmp_assign_source_56);
    }
    {
        PyObject *tmp_assign_source_57;
        PyObject *tmp_called_value_9;
        PyObject *tmp_kw_call_value_0_3;
        PyObject *tmp_kw_call_value_1_3;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[112]);

        if (unlikely(tmp_kw_call_value_0_3 == NULL)) {
            tmp_kw_call_value_0_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[112]);
        }

        if (tmp_kw_call_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_kw_call_value_1_3 == NULL)) {
            tmp_kw_call_value_1_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_kw_call_value_1_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 104;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_3, tmp_kw_call_value_1_3};

            tmp_assign_source_57 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_9, kw_values, mod_consts[16]);
        }

        if (tmp_assign_source_57 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[131], tmp_assign_source_57);
    }
    {
        PyObject *tmp_assign_source_58;
        PyObject *tmp_called_value_10;
        PyObject *tmp_kw_call_value_0_4;
        PyObject *tmp_kw_call_value_1_4;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_kw_call_value_0_4 == NULL)) {
            tmp_kw_call_value_0_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_kw_call_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[19]);

        if (unlikely(tmp_kw_call_value_1_4 == NULL)) {
            tmp_kw_call_value_1_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[19]);
        }

        if (tmp_kw_call_value_1_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 110;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_4, tmp_kw_call_value_1_4};

            tmp_assign_source_58 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_10, kw_values, mod_consts[16]);
        }

        if (tmp_assign_source_58 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[132], tmp_assign_source_58);
    }
    {
        PyObject *tmp_assign_source_59;
        PyObject *tmp_called_value_11;
        PyObject *tmp_kw_call_value_0_5;
        PyObject *tmp_called_value_12;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_kw_call_value_0_6;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_value_1_5;
        PyObject *tmp_called_value_13;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_kw_call_value_0_7;
        PyObject *tmp_expression_value_18;
        tmp_called_value_11 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_11 == NULL)) {
            tmp_called_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_called_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[12]);
        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[133]);
        if (tmp_kw_call_value_0_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_12);

            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 116;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_6};

            tmp_kw_call_value_0_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_12, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_12);
        Py_DECREF(tmp_kw_call_value_0_6);
        if (tmp_kw_call_value_0_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_5);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_called_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[12]);
        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_5);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_5);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[135]);
        if (tmp_kw_call_value_0_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_5);
            Py_DECREF(tmp_called_value_13);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 117;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_7};

            tmp_kw_call_value_1_5 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_13, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_13);
        Py_DECREF(tmp_kw_call_value_0_7);
        if (tmp_kw_call_value_1_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_5);

            exception_lineno = 117;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 116;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_5, tmp_kw_call_value_1_5};

            tmp_assign_source_59 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_11, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_5);
        Py_DECREF(tmp_kw_call_value_1_5);
        if (tmp_assign_source_59 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[136], tmp_assign_source_59);
    }
    {
        PyObject *tmp_assign_source_60;
        PyObject *tmp_called_value_14;
        PyObject *tmp_kw_call_value_0_8;
        PyObject *tmp_called_value_15;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_kw_call_value_0_9;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_kw_call_value_1_6;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_kw_call_value_0_10;
        PyObject *tmp_expression_value_22;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_called_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[12]);
        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[135]);
        if (tmp_kw_call_value_0_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_15);

            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 122;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_9};

            tmp_kw_call_value_0_8 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_15, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_15);
        Py_DECREF(tmp_kw_call_value_0_9);
        if (tmp_kw_call_value_0_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[107]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[107]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_8);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[12]);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_8);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_8);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[135]);
        if (tmp_kw_call_value_0_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_8);
            Py_DECREF(tmp_called_value_16);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 123;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_10};

            tmp_kw_call_value_1_6 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_16, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_16);
        Py_DECREF(tmp_kw_call_value_0_10);
        if (tmp_kw_call_value_1_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_8);

            exception_lineno = 123;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 122;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_8, tmp_kw_call_value_1_6};

            tmp_assign_source_60 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_14, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_8);
        Py_DECREF(tmp_kw_call_value_1_6);
        if (tmp_assign_source_60 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 122;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[137], tmp_assign_source_60);
    }
    {
        PyObject *tmp_assign_source_61;
        PyObject *tmp_called_value_17;
        PyObject *tmp_kw_call_value_0_11;
        PyObject *tmp_kw_call_value_1_7;
        tmp_called_value_17 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_17 == NULL)) {
            tmp_called_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_11 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[109]);

        if (unlikely(tmp_kw_call_value_0_11 == NULL)) {
            tmp_kw_call_value_0_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[109]);
        }

        if (tmp_kw_call_value_0_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_kw_call_value_1_7 == NULL)) {
            tmp_kw_call_value_1_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_kw_call_value_1_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 129;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 128;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_11, tmp_kw_call_value_1_7};

            tmp_assign_source_61 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_17, kw_values, mod_consts[16]);
        }

        if (tmp_assign_source_61 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 128;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[138], tmp_assign_source_61);
    }
    {
        PyObject *tmp_assign_source_62;
        PyObject *tmp_called_value_18;
        PyObject *tmp_kw_call_value_0_12;
        PyObject *tmp_kw_call_value_1_8;
        tmp_called_value_18 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_18 == NULL)) {
            tmp_called_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_12 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_kw_call_value_0_12 == NULL)) {
            tmp_kw_call_value_0_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_kw_call_value_0_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[110]);

        if (unlikely(tmp_kw_call_value_1_8 == NULL)) {
            tmp_kw_call_value_1_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[110]);
        }

        if (tmp_kw_call_value_1_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 134;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_12, tmp_kw_call_value_1_8};

            tmp_assign_source_62 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_18, kw_values, mod_consts[16]);
        }

        if (tmp_assign_source_62 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 134;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[139], tmp_assign_source_62);
    }
    {
        PyObject *tmp_assign_source_63;
        PyObject *tmp_called_value_19;
        PyObject *tmp_kw_call_value_0_13;
        PyObject *tmp_kw_call_value_1_9;
        tmp_called_value_19 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_19 == NULL)) {
            tmp_called_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_13 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[113]);

        if (unlikely(tmp_kw_call_value_0_13 == NULL)) {
            tmp_kw_call_value_0_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[113]);
        }

        if (tmp_kw_call_value_0_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_9 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[111]);

        if (unlikely(tmp_kw_call_value_1_9 == NULL)) {
            tmp_kw_call_value_1_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[111]);
        }

        if (tmp_kw_call_value_1_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 141;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_13, tmp_kw_call_value_1_9};

            tmp_assign_source_63 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_19, kw_values, mod_consts[16]);
        }

        if (tmp_assign_source_63 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[140], tmp_assign_source_63);
    }
    {
        PyObject *tmp_assign_source_64;
        PyObject *tmp_called_value_20;
        PyObject *tmp_kw_call_value_0_14;
        PyObject *tmp_kw_call_value_1_10;
        tmp_called_value_20 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_20 == NULL)) {
            tmp_called_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_kw_call_value_0_14 == NULL)) {
            tmp_kw_call_value_0_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_kw_call_value_0_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_10 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_kw_call_value_1_10 == NULL)) {
            tmp_kw_call_value_1_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_kw_call_value_1_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 146;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 145;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_14, tmp_kw_call_value_1_10};

            tmp_assign_source_64 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_20, kw_values, mod_consts[16]);
        }

        if (tmp_assign_source_64 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 145;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[29], tmp_assign_source_64);
    }
    {
        PyObject *tmp_assign_source_65;
        PyObject *tmp_called_value_21;
        PyObject *tmp_kw_call_value_0_15;
        PyObject *tmp_kw_call_value_1_11;
        tmp_called_value_21 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_21 == NULL)) {
            tmp_called_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_15 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[102]);

        if (unlikely(tmp_kw_call_value_0_15 == NULL)) {
            tmp_kw_call_value_0_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[102]);
        }

        if (tmp_kw_call_value_0_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_11 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_kw_call_value_1_11 == NULL)) {
            tmp_kw_call_value_1_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_kw_call_value_1_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 151;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_15, tmp_kw_call_value_1_11};

            tmp_assign_source_65 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_21, kw_values, mod_consts[16]);
        }

        if (tmp_assign_source_65 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[141], tmp_assign_source_65);
    }
    {
        PyObject *tmp_assign_source_66;
        PyObject *tmp_called_value_22;
        PyObject *tmp_kw_call_value_0_16;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_kw_call_value_1_12;
        tmp_called_value_22 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_22 == NULL)) {
            tmp_called_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[0]);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[127]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_kw_call_value_0_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_12 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[28]);

        if (unlikely(tmp_kw_call_value_1_12 == NULL)) {
            tmp_kw_call_value_1_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[28]);
        }

        if (tmp_kw_call_value_1_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_16);

            exception_lineno = 158;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 157;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_16, tmp_kw_call_value_1_12};

            tmp_assign_source_66 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_22, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_16);
        if (tmp_assign_source_66 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[142], tmp_assign_source_66);
    }
    {
        PyObject *tmp_assign_source_67;
        PyObject *tmp_called_value_23;
        PyObject *tmp_kw_call_value_0_17;
        PyObject *tmp_kw_call_value_1_13;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        tmp_called_value_23 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_23 == NULL)) {
            tmp_called_value_23 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_17 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[101]);

        if (unlikely(tmp_kw_call_value_0_17 == NULL)) {
            tmp_kw_call_value_0_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[101]);
        }

        if (tmp_kw_call_value_0_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_26 == NULL)) {
            tmp_expression_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[0]);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[127]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_kw_call_value_1_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 163;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_17, tmp_kw_call_value_1_13};

            tmp_assign_source_67 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_23, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_1_13);
        if (tmp_assign_source_67 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[143], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_called_value_24;
        PyObject *tmp_kw_call_value_0_18;
        PyObject *tmp_kw_call_value_1_14;
        tmp_called_value_24 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_24 == NULL)) {
            tmp_called_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_18 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[103]);

        if (unlikely(tmp_kw_call_value_0_18 == NULL)) {
            tmp_kw_call_value_0_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[103]);
        }

        if (tmp_kw_call_value_0_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_14 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[33]);

        if (unlikely(tmp_kw_call_value_1_14 == NULL)) {
            tmp_kw_call_value_1_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[33]);
        }

        if (tmp_kw_call_value_1_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 171;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_18, tmp_kw_call_value_1_14};

            tmp_assign_source_68 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_24, kw_values, mod_consts[16]);
        }

        if (tmp_assign_source_68 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[34], tmp_assign_source_68);
    }
    {
        PyObject *tmp_assign_source_69;
        PyObject *tmp_called_value_25;
        PyObject *tmp_kw_call_value_0_19;
        PyObject *tmp_kw_call_value_1_15;
        tmp_called_value_25 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_25 == NULL)) {
            tmp_called_value_25 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_19 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[114]);

        if (unlikely(tmp_kw_call_value_0_19 == NULL)) {
            tmp_kw_call_value_0_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[114]);
        }

        if (tmp_kw_call_value_0_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_15 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_kw_call_value_1_15 == NULL)) {
            tmp_kw_call_value_1_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_kw_call_value_1_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 177;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 176;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_19, tmp_kw_call_value_1_15};

            tmp_assign_source_69 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_25, kw_values, mod_consts[16]);
        }

        if (tmp_assign_source_69 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[41], tmp_assign_source_69);
    }
    {
        PyObject *tmp_assign_source_70;
        PyObject *tmp_defaults_2;
        tmp_defaults_2 = mod_consts[144];
        Py_INCREF(tmp_defaults_2);


        tmp_assign_source_70 = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__3_get_default_qconfig(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_70);
    }
    {
        PyObject *tmp_assign_source_71;
        PyObject *tmp_called_value_26;
        PyObject *tmp_kw_call_value_0_20;
        PyObject *tmp_called_value_27;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_kw_call_value_0_21;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_kw_call_value_1_16;
        tmp_called_value_26 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_26 == NULL)) {
            tmp_called_value_26 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_called_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[12]);
        if (tmp_called_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_21 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[133]);
        if (tmp_kw_call_value_0_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_27);

            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 204;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_21};

            tmp_kw_call_value_0_20 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_27, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_27);
        Py_DECREF(tmp_kw_call_value_0_21);
        if (tmp_kw_call_value_0_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_16 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[104]);

        if (unlikely(tmp_kw_call_value_1_16 == NULL)) {
            tmp_kw_call_value_1_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[104]);
        }

        if (tmp_kw_call_value_1_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_20);

            exception_lineno = 205;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 204;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_20, tmp_kw_call_value_1_16};

            tmp_assign_source_71 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_26, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_20);
        if (tmp_assign_source_71 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[145], tmp_assign_source_71);
    }
    {
        PyObject *tmp_assign_source_72;
        PyObject *tmp_called_value_28;
        PyObject *tmp_kw_call_value_0_22;
        PyObject *tmp_called_value_29;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_kw_call_value_0_23;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_kw_call_value_1_17;
        tmp_called_value_28 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_value_28 == NULL)) {
            tmp_called_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_29 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_expression_value_29 == NULL)) {
            tmp_expression_value_29 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_called_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[12]);
        if (tmp_called_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[133]);
        if (tmp_kw_call_value_0_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_29);

            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 207;
        {
            PyObject *kw_values[1] = {tmp_kw_call_value_0_23};

            tmp_kw_call_value_0_22 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_29, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_called_value_29);
        Py_DECREF(tmp_kw_call_value_0_23);
        if (tmp_kw_call_value_0_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_17 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[105]);

        if (unlikely(tmp_kw_call_value_1_17 == NULL)) {
            tmp_kw_call_value_1_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[105]);
        }

        if (tmp_kw_call_value_1_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_22);

            exception_lineno = 208;

            goto frame_exception_exit_1;
        }
        frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame.f_lineno = 207;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_22, tmp_kw_call_value_1_17};

            tmp_assign_source_72 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_28, kw_values, mod_consts[16]);
        }

        Py_DECREF(tmp_kw_call_value_0_22);
        if (tmp_assign_source_72 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 207;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_72);
    }
    {
        PyObject *tmp_assign_source_73;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[147];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_73 = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__4_get_default_qat_qconfig(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_73);
    }
    {
        PyObject *tmp_assign_source_74;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[148];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_74 = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__5_get_default_qconfig_dict(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[149], tmp_assign_source_74);
    }
    {
        PyObject *tmp_assign_source_75;
        PyObject *tmp_defaults_5;
        tmp_defaults_5 = mod_consts[147];
        Py_INCREF(tmp_defaults_5);


        tmp_assign_source_75 = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__6_get_default_qat_qconfig_dict(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[150], tmp_assign_source_75);
    }
    {
        PyObject *tmp_assign_source_76;
        PyObject *tmp_annotations_1;
        PyObject *tmp_dict_key_1;
        PyObject *tmp_dict_value_1;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_subscript_value_3;
        tmp_dict_key_1 = mod_consts[35];
        tmp_expression_value_31 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_31 == NULL)) {
            tmp_expression_value_31 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_subscript_value_3 == NULL)) {
            tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_3);
        if (tmp_dict_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;

            goto frame_exception_exit_1;
        }
        tmp_annotations_1 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_32;
            PyObject *tmp_expression_value_33;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[151];
            tmp_expression_value_33 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[44]);

            if (unlikely(tmp_expression_value_33 == NULL)) {
                tmp_expression_value_33 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[44]);
            }

            if (tmp_expression_value_33 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto dict_build_exception_1;
            }
            tmp_expression_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[0]);
            if (tmp_expression_value_32 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto dict_build_exception_1;
            }
            tmp_dict_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[1]);
            Py_DECREF(tmp_expression_value_32);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 271;

                goto dict_build_exception_1;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            Py_DECREF(tmp_dict_value_1);
            assert(!(tmp_res != 0));
            tmp_dict_key_1 = mod_consts[152];
            tmp_dict_value_1 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_1, tmp_dict_key_1, tmp_dict_value_1);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_1;
        // Exception handling pass through code for dict_build:
        dict_build_exception_1:;
        Py_DECREF(tmp_annotations_1);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_1:;


        tmp_assign_source_76 = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__7_assert_valid_qconfig(tmp_annotations_1);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[153], tmp_assign_source_76);
    }
    {
        PyObject *tmp_assign_source_77;
        PyObject *tmp_expression_value_34;
        PyObject *tmp_subscript_value_4;
        tmp_expression_value_34 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_34 == NULL)) {
            tmp_expression_value_34 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_expression_value_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_subscript_value_4 == NULL)) {
            tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_subscript_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        tmp_assign_source_77 = LOOKUP_SUBSCRIPT(tmp_expression_value_34, tmp_subscript_value_4);
        if (tmp_assign_source_77 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[154], tmp_assign_source_77);
    }
    {
        PyObject *tmp_assign_source_78;
        PyObject *tmp_annotations_2;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_dict_key_2 = mod_consts[35];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        assert(!(tmp_dict_value_2 == NULL));
        tmp_annotations_2 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_35;
            PyObject *tmp_subscript_value_5;
            PyObject *tmp_expression_value_36;
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[62];
            tmp_expression_value_35 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[96]);

            if (unlikely(tmp_expression_value_35 == NULL)) {
                tmp_expression_value_35 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
            }

            if (tmp_expression_value_35 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto dict_build_exception_2;
            }
            tmp_expression_value_36 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[0]);

            if (unlikely(tmp_expression_value_36 == NULL)) {
                tmp_expression_value_36 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
            }

            if (tmp_expression_value_36 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto dict_build_exception_2;
            }
            tmp_subscript_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[1]);
            if (tmp_subscript_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto dict_build_exception_2;
            }
            tmp_dict_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_35, tmp_subscript_value_5);
            Py_DECREF(tmp_subscript_value_5);
            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            Py_DECREF(tmp_dict_value_2);
            assert(!(tmp_res != 0));
            tmp_dict_key_2 = mod_consts[152];
            tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[97]);

            if (unlikely(tmp_dict_value_2 == NULL)) {
                tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[97]);
            }

            if (tmp_dict_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 298;

                goto dict_build_exception_2;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_2, tmp_dict_value_2);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_annotations_2);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_assign_source_78 = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__8_add_module_to_qconfig_obs_ctr(tmp_annotations_2);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[155], tmp_assign_source_78);
    }
    {
        PyObject *tmp_assign_source_79;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_3;
        PyObject *tmp_dict_value_3;
        tmp_dict_key_3 = mod_consts[156];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 2 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        tmp_dict_key_3 = mod_consts[74];
        tmp_dict_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[154]);

        if (unlikely(tmp_dict_value_3 == NULL)) {
            tmp_dict_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[154]);
        }

        if (tmp_dict_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;

            goto dict_build_exception_3;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_3, tmp_dict_value_3);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_3;
        // Exception handling pass through code for dict_build:
        dict_build_exception_3:;
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_3:;


        tmp_assign_source_79 = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__9_qconfig_equals(tmp_annotations_3);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[157], tmp_assign_source_79);
    }
    {
        PyObject *tmp_assign_source_80;
        PyObject *tmp_annotations_4;
        PyObject *tmp_dict_key_4;
        PyObject *tmp_dict_value_4;
        tmp_dict_key_4 = mod_consts[35];
        tmp_dict_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_dict_value_4 == NULL)) {
            tmp_dict_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_dict_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;

            goto frame_exception_exit_1;
        }
        tmp_annotations_4 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_4, tmp_dict_value_4);
        assert(!(tmp_res != 0));


        tmp_assign_source_80 = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__10_activation_is_memoryless(tmp_annotations_4);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_80);
    }
    {
        PyObject *tmp_assign_source_81;
        PyObject *tmp_annotations_5;
        PyObject *tmp_dict_key_5;
        PyObject *tmp_dict_value_5;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_subscript_value_6;
        tmp_dict_key_5 = mod_consts[35];
        tmp_expression_value_37 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[96]);

        if (unlikely(tmp_expression_value_37 == NULL)) {
            tmp_expression_value_37 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[96]);
        }

        if (tmp_expression_value_37 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
        tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_subscript_value_6 == NULL)) {
            tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_subscript_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_37, tmp_subscript_value_6);
        if (tmp_dict_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 381;

            goto frame_exception_exit_1;
        }
        tmp_annotations_5 = _PyDict_NewPresized( 1 );
        tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_5, tmp_dict_value_5);
        Py_DECREF(tmp_dict_value_5);
        assert(!(tmp_res != 0));


        tmp_assign_source_81 = MAKE_FUNCTION_torch$ao$quantization$qconfig$$$function__11_is_reuse_input_qconfig(tmp_annotations_5);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)mod_consts[159], tmp_assign_source_81);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_3;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c1f5a6cb5c694958c3d0b55b6c22559f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c1f5a6cb5c694958c3d0b55b6c22559f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c1f5a6cb5c694958c3d0b55b6c22559f, exception_lineno);
    }



    assertFrameObject(frame_c1f5a6cb5c694958c3d0b55b6c22559f);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_3:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.ao.quantization.qconfig", false);

    Py_INCREF(module_torch$ao$quantization$qconfig);
    return module_torch$ao$quantization$qconfig;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$qconfig, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$ao$quantization$qconfig", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
