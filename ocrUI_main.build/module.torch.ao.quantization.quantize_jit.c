/* Generated code for Python module 'torch.ao.quantization.quantize_jit'
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

/* The "module_torch$ao$quantization$quantize_jit" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torch$ao$quantization$quantize_jit;
PyDictObject *moduledict_torch$ao$quantization$quantize_jit;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[107];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[107];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torch.ao.quantization.quantize_jit"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 107; i++) {
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
void checkModuleConstants_torch$ao$quantization$quantize_jit(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 107; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_8ea51984e190ef19a2bb6e6266befecd;
static PyCodeObject *codeobj_bcfab4fa3665466586e806bedf15ab68;
static PyCodeObject *codeobj_4977f15cb03c0657188f1e2f02711df8;
static PyCodeObject *codeobj_1f8fe02fb2039795ec03edacbfff7166;
static PyCodeObject *codeobj_5dcecedb6cb608b8386cc4b1af428b42;
static PyCodeObject *codeobj_5f06581d50d731ec6f474b977c2c16b0;
static PyCodeObject *codeobj_4a079a06c5d9acf2811ea2aa660ff79c;
static PyCodeObject *codeobj_34abb074626a9e5fd9560d8d3353df67;
static PyCodeObject *codeobj_8b87de2135ff95168be55979580eb734;
static PyCodeObject *codeobj_c59f4c73613db3aaa5b31b3b30a3d00e;
static PyCodeObject *codeobj_51ea2ce119b13751eab5b123d2f8d412;
static PyCodeObject *codeobj_a24e55113de060af44ec9c955f69b632;
static PyCodeObject *codeobj_c837bc533b292b8a0a63172f65acfc59;
static PyCodeObject *codeobj_9ae6db19c4e39a72657eb5164b0f4470;
static PyCodeObject *codeobj_ce538ebe75303611a1187d4390ee4fbf;
static PyCodeObject *codeobj_5be126d24a14429d3b59a53ff463b1a7;
static PyCodeObject *codeobj_f3e1dc9c25cc98ca2a070475714d4a70;
static PyCodeObject *codeobj_cede5b856423f76eed60a6e3bc2347a3;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[89]); CHECK_OBJECT(module_filename_obj);
    codeobj_8ea51984e190ef19a2bb6e6266befecd = MAKE_CODE_OBJECT(module_filename_obj, 29, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[90], mod_consts[90], mod_consts[91], NULL, 1, 0, 0);
    codeobj_bcfab4fa3665466586e806bedf15ab68 = MAKE_CODE_OBJECT(module_filename_obj, 80, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[92], NULL, 1, 0, 0);
    codeobj_4977f15cb03c0657188f1e2f02711df8 = MAKE_CODE_OBJECT(module_filename_obj, 50, CO_GENERATOR | CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[34], mod_consts[34], mod_consts[93], NULL, 1, 0, 0);
    codeobj_1f8fe02fb2039795ec03edacbfff7166 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[94], mod_consts[94], NULL, NULL, 0, 0, 0);
    codeobj_5dcecedb6cb608b8386cc4b1af428b42 = MAKE_CODE_OBJECT(module_filename_obj, 11, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[27], mod_consts[27], mod_consts[95], NULL, 1, 0, 0);
    codeobj_5f06581d50d731ec6f474b977c2c16b0 = MAKE_CODE_OBJECT(module_filename_obj, 7, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[26], mod_consts[26], mod_consts[95], NULL, 1, 0, 0);
    codeobj_4a079a06c5d9acf2811ea2aa660ff79c = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[56], mod_consts[56], mod_consts[96], NULL, 5, 0, 0);
    codeobj_34abb074626a9e5fd9560d8d3353df67 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[97], NULL, 4, 0, 0);
    codeobj_8b87de2135ff95168be55979580eb734 = MAKE_CODE_OBJECT(module_filename_obj, 104, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[66], mod_consts[66], mod_consts[98], NULL, 7, 0, 0);
    codeobj_c59f4c73613db3aaa5b31b3b30a3d00e = MAKE_CODE_OBJECT(module_filename_obj, 100, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[60], mod_consts[60], mod_consts[99], NULL, 4, 0, 0);
    codeobj_51ea2ce119b13751eab5b123d2f8d412 = MAKE_CODE_OBJECT(module_filename_obj, 96, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[64], mod_consts[64], mod_consts[99], NULL, 4, 0, 0);
    codeobj_a24e55113de060af44ec9c955f69b632 = MAKE_CODE_OBJECT(module_filename_obj, 31, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[100], NULL, 2, 0, 0);
    codeobj_c837bc533b292b8a0a63172f65acfc59 = MAKE_CODE_OBJECT(module_filename_obj, 69, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[59], mod_consts[59], mod_consts[101], NULL, 3, 0, 0);
    codeobj_9ae6db19c4e39a72657eb5164b0f4470 = MAKE_CODE_OBJECT(module_filename_obj, 65, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[63], mod_consts[63], mod_consts[101], NULL, 3, 0, 0);
    codeobj_ce538ebe75303611a1187d4390ee4fbf = MAKE_CODE_OBJECT(module_filename_obj, 174, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[102], NULL, 4, 0, 0);
    codeobj_5be126d24a14429d3b59a53ff463b1a7 = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[87], mod_consts[87], mod_consts[103], NULL, 6, 0, 0);
    codeobj_f3e1dc9c25cc98ca2a070475714d4a70 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[16], mod_consts[16], mod_consts[104], NULL, 1, 0, 0);
    codeobj_cede5b856423f76eed60a6e3bc2347a3 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[30], mod_consts[30], mod_consts[105], NULL, 1, 0, 0);
}

// The module function declarations.
static PyObject *MAKE_GENERATOR_torch$ao$quantization$quantize_jit$$$function__6__prepare_jit$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


static PyObject *MAKE_GENERATOR_torch$ao$quantization$quantize_jit$$$function__9__convert_jit$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure);


NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__2_complex_call_helper_pos_star_list(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__10_convert_jit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__11_convert_dynamic_jit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__12__quantize_jit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__13_quantize_jit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__14_quantize_dynamic_jit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__1__check_is_script_module();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__2__check_forward_method();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__3_script_qconfig();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__4_script_qconfig_dict();


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__5_fuse_conv_bn_jit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__6__prepare_jit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__7_prepare_jit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__8_prepare_dynamic_jit(PyObject *defaults);


static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__9__convert_jit(PyObject *defaults);


// The module function definitions.
static PyObject *impl_torch$ao$quantization$quantize_jit$$$function__1__check_is_script_module(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    struct Nuitka_FrameObject *frame_5f06581d50d731ec6f474b977c2c16b0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5f06581d50d731ec6f474b977c2c16b0 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5f06581d50d731ec6f474b977c2c16b0)) {
        Py_XDECREF(cache_frame_5f06581d50d731ec6f474b977c2c16b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5f06581d50d731ec6f474b977c2c16b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5f06581d50d731ec6f474b977c2c16b0 = MAKE_FUNCTION_FRAME(codeobj_5f06581d50d731ec6f474b977c2c16b0, module_torch$ao$quantization$quantize_jit, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5f06581d50d731ec6f474b977c2c16b0->m_type_description == NULL);
    frame_5f06581d50d731ec6f474b977c2c16b0 = cache_frame_5f06581d50d731ec6f474b977c2c16b0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5f06581d50d731ec6f474b977c2c16b0);
    assert(Py_REFCNT(frame_5f06581d50d731ec6f474b977c2c16b0) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_model);
        tmp_isinstance_inst_1 = par_model;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[2]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 8;
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_unicode_arg_1;
        PyObject *tmp_type_arg_1;
        tmp_add_expr_left_1 = mod_consts[3];
        CHECK_OBJECT(par_model);
        tmp_type_arg_1 = par_model;
        tmp_unicode_arg_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        assert(!(tmp_unicode_arg_1 == NULL));
        tmp_add_expr_right_1 = BUILTIN_UNICODE1(tmp_unicode_arg_1);
        Py_DECREF(tmp_unicode_arg_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_1 = BINARY_OPERATION_ADD_OBJECT_UNICODE_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 9;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5f06581d50d731ec6f474b977c2c16b0->m_frame.f_lineno = 9;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 9;
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
        exception_tb = MAKE_TRACEBACK(frame_5f06581d50d731ec6f474b977c2c16b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5f06581d50d731ec6f474b977c2c16b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5f06581d50d731ec6f474b977c2c16b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5f06581d50d731ec6f474b977c2c16b0,
        type_description_1,
        par_model
    );


    // Release cached frame if used for exception.
    if (frame_5f06581d50d731ec6f474b977c2c16b0 == cache_frame_5f06581d50d731ec6f474b977c2c16b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5f06581d50d731ec6f474b977c2c16b0);
        cache_frame_5f06581d50d731ec6f474b977c2c16b0 = NULL;
    }

    assertFrameObject(frame_5f06581d50d731ec6f474b977c2c16b0);

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
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$quantize_jit$$$function__2__check_forward_method(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    struct Nuitka_FrameObject *frame_5dcecedb6cb608b8386cc4b1af428b42;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5dcecedb6cb608b8386cc4b1af428b42 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5dcecedb6cb608b8386cc4b1af428b42)) {
        Py_XDECREF(cache_frame_5dcecedb6cb608b8386cc4b1af428b42);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5dcecedb6cb608b8386cc4b1af428b42 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5dcecedb6cb608b8386cc4b1af428b42 = MAKE_FUNCTION_FRAME(codeobj_5dcecedb6cb608b8386cc4b1af428b42, module_torch$ao$quantization$quantize_jit, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5dcecedb6cb608b8386cc4b1af428b42->m_type_description == NULL);
    frame_5dcecedb6cb608b8386cc4b1af428b42 = cache_frame_5dcecedb6cb608b8386cc4b1af428b42;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5dcecedb6cb608b8386cc4b1af428b42);
    assert(Py_REFCNT(frame_5dcecedb6cb608b8386cc4b1af428b42) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_model);
        tmp_expression_value_1 = par_model;
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_5dcecedb6cb608b8386cc4b1af428b42->m_frame.f_lineno = 12;
        tmp_operand_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[5],
            PyTuple_GET_ITEM(mod_consts[6], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 12;
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
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[7];
        frame_5dcecedb6cb608b8386cc4b1af428b42->m_frame.f_lineno = 13;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 13;
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
        exception_tb = MAKE_TRACEBACK(frame_5dcecedb6cb608b8386cc4b1af428b42, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5dcecedb6cb608b8386cc4b1af428b42->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5dcecedb6cb608b8386cc4b1af428b42, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5dcecedb6cb608b8386cc4b1af428b42,
        type_description_1,
        par_model
    );


    // Release cached frame if used for exception.
    if (frame_5dcecedb6cb608b8386cc4b1af428b42 == cache_frame_5dcecedb6cb608b8386cc4b1af428b42) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5dcecedb6cb608b8386cc4b1af428b42);
        cache_frame_5dcecedb6cb608b8386cc4b1af428b42 = NULL;
    }

    assertFrameObject(frame_5dcecedb6cb608b8386cc4b1af428b42);

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
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$quantize_jit$$$function__3_script_qconfig(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig = python_pars[0];
    struct Nuitka_FrameObject *frame_f3e1dc9c25cc98ca2a070475714d4a70;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f3e1dc9c25cc98ca2a070475714d4a70 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f3e1dc9c25cc98ca2a070475714d4a70)) {
        Py_XDECREF(cache_frame_f3e1dc9c25cc98ca2a070475714d4a70);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f3e1dc9c25cc98ca2a070475714d4a70 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f3e1dc9c25cc98ca2a070475714d4a70 = MAKE_FUNCTION_FRAME(codeobj_f3e1dc9c25cc98ca2a070475714d4a70, module_torch$ao$quantization$quantize_jit, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f3e1dc9c25cc98ca2a070475714d4a70->m_type_description == NULL);
    frame_f3e1dc9c25cc98ca2a070475714d4a70 = cache_frame_f3e1dc9c25cc98ca2a070475714d4a70;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f3e1dc9c25cc98ca2a070475714d4a70);
    assert(Py_REFCNT(frame_f3e1dc9c25cc98ca2a070475714d4a70) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_called_instance_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[8]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[8]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 20;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[1]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[9]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_qconfig);
        tmp_called_instance_1 = par_qconfig;
        frame_f3e1dc9c25cc98ca2a070475714d4a70->m_frame.f_lineno = 21;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[10]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f3e1dc9c25cc98ca2a070475714d4a70->m_frame.f_lineno = 21;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[1]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[9]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_qconfig);
        tmp_called_instance_2 = par_qconfig;
        frame_f3e1dc9c25cc98ca2a070475714d4a70->m_frame.f_lineno = 22;
        tmp_args_element_value_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[11]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f3e1dc9c25cc98ca2a070475714d4a70->m_frame.f_lineno = 22;
        tmp_expression_value_4 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[4]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 22;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_f3e1dc9c25cc98ca2a070475714d4a70->m_frame.f_lineno = 20;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};

            tmp_return_value = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
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

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_f3e1dc9c25cc98ca2a070475714d4a70, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f3e1dc9c25cc98ca2a070475714d4a70->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f3e1dc9c25cc98ca2a070475714d4a70, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f3e1dc9c25cc98ca2a070475714d4a70,
        type_description_1,
        par_qconfig
    );


    // Release cached frame if used for exception.
    if (frame_f3e1dc9c25cc98ca2a070475714d4a70 == cache_frame_f3e1dc9c25cc98ca2a070475714d4a70) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f3e1dc9c25cc98ca2a070475714d4a70);
        cache_frame_f3e1dc9c25cc98ca2a070475714d4a70 = NULL;
    }

    assertFrameObject(frame_f3e1dc9c25cc98ca2a070475714d4a70);

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


static PyObject *impl_torch$ao$quantization$quantize_jit$$$function__4_script_qconfig_dict(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_qconfig_dict = python_pars[0];
    PyObject *outline_0_var_k = NULL;
    PyObject *outline_0_var_v = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_dictcontraction_1__$0 = NULL;
    PyObject *tmp_dictcontraction_1__contraction = NULL;
    PyObject *tmp_dictcontraction_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_cede5b856423f76eed60a6e3bc2347a3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_8ea51984e190ef19a2bb6e6266befecd_2;
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
    PyObject *tmp_dictset_value;
    PyObject *tmp_dictset_dict;
    PyObject *tmp_dictset_key;
    int tmp_res;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_8ea51984e190ef19a2bb6e6266befecd_2 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;
    static struct Nuitka_FrameObject *cache_frame_cede5b856423f76eed60a6e3bc2347a3 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cede5b856423f76eed60a6e3bc2347a3)) {
        Py_XDECREF(cache_frame_cede5b856423f76eed60a6e3bc2347a3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cede5b856423f76eed60a6e3bc2347a3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cede5b856423f76eed60a6e3bc2347a3 = MAKE_FUNCTION_FRAME(codeobj_cede5b856423f76eed60a6e3bc2347a3, module_torch$ao$quantization$quantize_jit, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cede5b856423f76eed60a6e3bc2347a3->m_type_description == NULL);
    frame_cede5b856423f76eed60a6e3bc2347a3 = cache_frame_cede5b856423f76eed60a6e3bc2347a3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cede5b856423f76eed60a6e3bc2347a3);
    assert(Py_REFCNT(frame_cede5b856423f76eed60a6e3bc2347a3) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_qconfig_dict);
        tmp_expression_value_1 = par_qconfig_dict;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[14]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        frame_cede5b856423f76eed60a6e3bc2347a3->m_frame.f_lineno = 29;
        tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_1 = "o";
            goto try_except_handler_1;
        }
        assert(tmp_dictcontraction_1__$0 == NULL);
        tmp_dictcontraction_1__$0 = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_DICT_EMPTY();
        assert(tmp_dictcontraction_1__contraction == NULL);
        tmp_dictcontraction_1__contraction = tmp_assign_source_2;
    }
    if (isFrameUnusable(cache_frame_8ea51984e190ef19a2bb6e6266befecd_2)) {
        Py_XDECREF(cache_frame_8ea51984e190ef19a2bb6e6266befecd_2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8ea51984e190ef19a2bb6e6266befecd_2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8ea51984e190ef19a2bb6e6266befecd_2 = MAKE_FUNCTION_FRAME(codeobj_8ea51984e190ef19a2bb6e6266befecd, module_torch$ao$quantization$quantize_jit, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8ea51984e190ef19a2bb6e6266befecd_2->m_type_description == NULL);
    frame_8ea51984e190ef19a2bb6e6266befecd_2 = cache_frame_8ea51984e190ef19a2bb6e6266befecd_2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8ea51984e190ef19a2bb6e6266befecd_2);
    assert(Py_REFCNT(frame_8ea51984e190ef19a2bb6e6266befecd_2) == 2);

    // Framed code:
    // Tried code:
    loop_start_1:;
    {
        PyObject *tmp_next_source_1;
        PyObject *tmp_assign_source_3;
        CHECK_OBJECT(tmp_dictcontraction_1__$0);
        tmp_next_source_1 = tmp_dictcontraction_1__$0;
        tmp_assign_source_3 = ITERATOR_NEXT(tmp_next_source_1);
        if (tmp_assign_source_3 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_1;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_2 = "oo";
                exception_lineno = 29;
                goto try_except_handler_2;
            }
        }

        {
            PyObject *old = tmp_dictcontraction_1__iter_value_0;
            tmp_dictcontraction_1__iter_value_0 = tmp_assign_source_3;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(tmp_dictcontraction_1__iter_value_0);
        tmp_iter_arg_2 = tmp_dictcontraction_1__iter_value_0;
        tmp_assign_source_4 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "oo";
            goto try_except_handler_3;
        }
        {
            PyObject *old = tmp_dictcontraction$tuple_unpack_1__source_iter;
            tmp_dictcontraction$tuple_unpack_1__source_iter = tmp_assign_source_4;
            Py_XDECREF(old);
        }

    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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
            exception_lineno = 29;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_1;
            tmp_dictcontraction$tuple_unpack_1__element_1 = tmp_assign_source_5;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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
            exception_lineno = 29;
            goto try_except_handler_4;
        }
        {
            PyObject *old = tmp_dictcontraction$tuple_unpack_1__element_2;
            tmp_dictcontraction$tuple_unpack_1__element_2 = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_iterator_name_1;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
        tmp_iterator_name_1 = tmp_dictcontraction$tuple_unpack_1__source_iter;
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
                    exception_lineno = 29;
                    goto try_except_handler_4;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[15];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_2 = "oo";
            exception_lineno = 29;
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

    CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
    Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
    tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
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

    Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
    tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;
    Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
    tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_2;
    // End of try:
    try_end_2:;
    CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__source_iter);
    Py_DECREF(tmp_dictcontraction$tuple_unpack_1__source_iter);
    tmp_dictcontraction$tuple_unpack_1__source_iter = NULL;
    {
        PyObject *tmp_assign_source_7;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_1);
        tmp_assign_source_7 = tmp_dictcontraction$tuple_unpack_1__element_1;
        {
            PyObject *old = outline_0_var_k;
            outline_0_var_k = tmp_assign_source_7;
            Py_INCREF(outline_0_var_k);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_1);
    tmp_dictcontraction$tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_dictcontraction$tuple_unpack_1__element_2);
        tmp_assign_source_8 = tmp_dictcontraction$tuple_unpack_1__element_2;
        {
            PyObject *old = outline_0_var_v;
            outline_0_var_v = tmp_assign_source_8;
            Py_INCREF(outline_0_var_v);
            Py_XDECREF(old);
        }

    }
    Py_XDECREF(tmp_dictcontraction$tuple_unpack_1__element_2);
    tmp_dictcontraction$tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(outline_0_var_v);
        tmp_truth_name_1 = CHECK_IF_TRUE(outline_0_var_v);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[16]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[16]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(outline_0_var_v);
        tmp_args_element_value_1 = outline_0_var_v;
        frame_8ea51984e190ef19a2bb6e6266befecd_2->m_frame.f_lineno = 29;
        tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        if (tmp_dictset_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_dictset_value = Py_None;
        Py_INCREF(tmp_dictset_value);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_dictcontraction_1__contraction);
        tmp_dictset_dict = tmp_dictcontraction_1__contraction;
        CHECK_OBJECT(outline_0_var_k);
        tmp_dictset_key = outline_0_var_k;
        assert(PyDict_CheckExact(tmp_dictset_dict));
        tmp_res = PyDict_SetItem(tmp_dictset_dict, tmp_dictset_key, tmp_dictset_value);

        Py_DECREF(tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 29;
            type_description_2 = "oo";
            goto try_except_handler_2;
        }
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 29;
        type_description_2 = "oo";
        goto try_except_handler_2;
    }
    goto loop_start_1;
    loop_end_1:;
    CHECK_OBJECT(tmp_dictcontraction_1__contraction);
    tmp_return_value = tmp_dictcontraction_1__contraction;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_2;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_2:;
    CHECK_OBJECT(tmp_dictcontraction_1__$0);
    Py_DECREF(tmp_dictcontraction_1__$0);
    tmp_dictcontraction_1__$0 = NULL;
    CHECK_OBJECT(tmp_dictcontraction_1__contraction);
    Py_DECREF(tmp_dictcontraction_1__contraction);
    tmp_dictcontraction_1__contraction = NULL;
    Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
    tmp_dictcontraction_1__iter_value_0 = NULL;
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

    CHECK_OBJECT(tmp_dictcontraction_1__$0);
    Py_DECREF(tmp_dictcontraction_1__$0);
    tmp_dictcontraction_1__$0 = NULL;
    CHECK_OBJECT(tmp_dictcontraction_1__contraction);
    Py_DECREF(tmp_dictcontraction_1__contraction);
    tmp_dictcontraction_1__contraction = NULL;
    Py_XDECREF(tmp_dictcontraction_1__iter_value_0);
    tmp_dictcontraction_1__iter_value_0 = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_8ea51984e190ef19a2bb6e6266befecd_2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8ea51984e190ef19a2bb6e6266befecd_2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8ea51984e190ef19a2bb6e6266befecd_2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8ea51984e190ef19a2bb6e6266befecd_2,
        type_description_2,
        outline_0_var_k,
        outline_0_var_v
    );


    // Release cached frame if used for exception.
    if (frame_8ea51984e190ef19a2bb6e6266befecd_2 == cache_frame_8ea51984e190ef19a2bb6e6266befecd_2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8ea51984e190ef19a2bb6e6266befecd_2);
        cache_frame_8ea51984e190ef19a2bb6e6266befecd_2 = NULL;
    }

    assertFrameObject(frame_8ea51984e190ef19a2bb6e6266befecd_2);

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
    Py_XDECREF(outline_0_var_k);
    outline_0_var_k = NULL;
    Py_XDECREF(outline_0_var_v);
    outline_0_var_v = NULL;
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

    Py_XDECREF(outline_0_var_k);
    outline_0_var_k = NULL;
    Py_XDECREF(outline_0_var_v);
    outline_0_var_v = NULL;
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
    exception_lineno = 29;
    goto frame_exception_exit_1;
    outline_result_1:;
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_cede5b856423f76eed60a6e3bc2347a3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cede5b856423f76eed60a6e3bc2347a3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cede5b856423f76eed60a6e3bc2347a3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cede5b856423f76eed60a6e3bc2347a3,
        type_description_1,
        par_qconfig_dict
    );


    // Release cached frame if used for exception.
    if (frame_cede5b856423f76eed60a6e3bc2347a3 == cache_frame_cede5b856423f76eed60a6e3bc2347a3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cede5b856423f76eed60a6e3bc2347a3);
        cache_frame_cede5b856423f76eed60a6e3bc2347a3 = NULL;
    }

    assertFrameObject(frame_cede5b856423f76eed60a6e3bc2347a3);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_2:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_qconfig_dict);
    Py_DECREF(par_qconfig_dict);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig_dict);
    Py_DECREF(par_qconfig_dict);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$quantize_jit$$$function__5_fuse_conv_bn_jit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    PyObject *par_inplace = python_pars[1];
    PyObject *var_model_c = NULL;
    struct Nuitka_FrameObject *frame_a24e55113de060af44ec9c955f69b632;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_a24e55113de060af44ec9c955f69b632 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a24e55113de060af44ec9c955f69b632)) {
        Py_XDECREF(cache_frame_a24e55113de060af44ec9c955f69b632);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a24e55113de060af44ec9c955f69b632 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a24e55113de060af44ec9c955f69b632 = MAKE_FUNCTION_FRAME(codeobj_a24e55113de060af44ec9c955f69b632, module_torch$ao$quantization$quantize_jit, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a24e55113de060af44ec9c955f69b632->m_type_description == NULL);
    frame_a24e55113de060af44ec9c955f69b632 = cache_frame_a24e55113de060af44ec9c955f69b632;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a24e55113de060af44ec9c955f69b632);
    assert(Py_REFCNT(frame_a24e55113de060af44ec9c955f69b632) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_a24e55113de060af44ec9c955f69b632->m_frame.f_lineno = 38;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[20], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 38;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_model);
        tmp_expression_value_2 = par_model;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 39;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_model_c == NULL);
        var_model_c = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_model_c);
        tmp_args_element_value_1 = var_model_c;
        frame_a24e55113de060af44ec9c955f69b632->m_frame.f_lineno = 40;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[21], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 40;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_model_c;
            assert(old != NULL);
            var_model_c = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_inplace);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_inplace);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 41;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_model);
        tmp_called_instance_3 = par_model;
        CHECK_OBJECT(var_model_c);
        tmp_args_element_value_2 = var_model_c;
        frame_a24e55113de060af44ec9c955f69b632->m_frame.f_lineno = 42;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[22], tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_model_c);
        tmp_args_element_value_3 = var_model_c;
        frame_a24e55113de060af44ec9c955f69b632->m_frame.f_lineno = 44;
        tmp_assign_source_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_3);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_model;
            assert(old != NULL);
            par_model = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    branch_end_1:;
    if (par_model == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 45;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_model;
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
        exception_tb = MAKE_TRACEBACK(frame_a24e55113de060af44ec9c955f69b632, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a24e55113de060af44ec9c955f69b632->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a24e55113de060af44ec9c955f69b632, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a24e55113de060af44ec9c955f69b632,
        type_description_1,
        par_model,
        par_inplace,
        var_model_c
    );


    // Release cached frame if used for exception.
    if (frame_a24e55113de060af44ec9c955f69b632 == cache_frame_a24e55113de060af44ec9c955f69b632) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a24e55113de060af44ec9c955f69b632);
        cache_frame_a24e55113de060af44ec9c955f69b632 = NULL;
    }

    assertFrameObject(frame_a24e55113de060af44ec9c955f69b632);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_model);
    par_model = NULL;
    Py_XDECREF(var_model_c);
    var_model_c = NULL;
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

    Py_XDECREF(par_model);
    par_model = NULL;
    Py_XDECREF(var_model_c);
    var_model_c = NULL;
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


static PyObject *impl_torch$ao$quantization$quantize_jit$$$function__6__prepare_jit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    PyObject *par_qconfig_dict = python_pars[1];
    PyObject *par_inplace = python_pars[2];
    PyObject *par_quant_type = python_pars[3];
    PyObject *var_scripted_qconfig_dict = NULL;
    PyObject *var_model_c = NULL;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_34abb074626a9e5fd9560d8d3353df67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_34abb074626a9e5fd9560d8d3353df67 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_34abb074626a9e5fd9560d8d3353df67)) {
        Py_XDECREF(cache_frame_34abb074626a9e5fd9560d8d3353df67);

#if _DEBUG_REFCOUNTS
        if (cache_frame_34abb074626a9e5fd9560d8d3353df67 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_34abb074626a9e5fd9560d8d3353df67 = MAKE_FUNCTION_FRAME(codeobj_34abb074626a9e5fd9560d8d3353df67, module_torch$ao$quantization$quantize_jit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_34abb074626a9e5fd9560d8d3353df67->m_type_description == NULL);
    frame_34abb074626a9e5fd9560d8d3353df67 = cache_frame_34abb074626a9e5fd9560d8d3353df67;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_34abb074626a9e5fd9560d8d3353df67);
    assert(Py_REFCNT(frame_34abb074626a9e5fd9560d8d3353df67) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_args_element_value_1 = par_model;
        frame_34abb074626a9e5fd9560d8d3353df67->m_frame.f_lineno = 48;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[27]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[27]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_args_element_value_2 = par_model;
        frame_34abb074626a9e5fd9560d8d3353df67->m_frame.f_lineno = 49;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_all_arg_1;
        {
            PyObject *tmp_assign_source_1;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_3;
            PyObject *tmp_expression_value_1;
            CHECK_OBJECT(par_qconfig_dict);
            tmp_expression_value_1 = par_qconfig_dict;
            tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[28]);
            if (tmp_called_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            frame_34abb074626a9e5fd9560d8d3353df67->m_frame.f_lineno = 50;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
            Py_DECREF(tmp_called_value_3);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 50;
                type_description_1 = "oooooo";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_1;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_all_arg_1 = MAKE_GENERATOR_torch$ao$quantization$quantize_jit$$$function__6__prepare_jit$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_operand_value_1 = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 50;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        assert(!(tmp_res == -1));
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
        tmp_make_exception_arg_1 = mod_consts[29];
        frame_34abb074626a9e5fd9560d8d3353df67->m_frame.f_lineno = 51;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 51;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[30]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[30]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_qconfig_dict);
        tmp_args_element_value_3 = par_qconfig_dict;
        frame_34abb074626a9e5fd9560d8d3353df67->m_frame.f_lineno = 52;
        tmp_assign_source_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 52;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_scripted_qconfig_dict == NULL);
        var_scripted_qconfig_dict = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_args_element_value_4 = par_model;
        CHECK_OBJECT(par_inplace);
        tmp_args_element_value_5 = par_inplace;
        frame_34abb074626a9e5fd9560d8d3353df67->m_frame.f_lineno = 53;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 53;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_model;
            assert(old != NULL);
            par_model = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[32]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_expression_value_4 = par_model;
        tmp_args_element_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[4]);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 54;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_7 = mod_consts[33];
        CHECK_OBJECT(var_scripted_qconfig_dict);
        tmp_args_element_value_8 = var_scripted_qconfig_dict;
        CHECK_OBJECT(par_inplace);
        tmp_args_element_value_9 = par_inplace;
        CHECK_OBJECT(par_quant_type);
        tmp_args_element_value_10 = par_quant_type;
        frame_34abb074626a9e5fd9560d8d3353df67->m_frame.f_lineno = 54;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9, tmp_args_element_value_10};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS5(tmp_called_value_6, call_args);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        assert(var_model_c == NULL);
        var_model_c = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_condition_result_2;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_inplace);
        tmp_truth_name_1 = CHECK_IF_TRUE(par_inplace);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 59;
            type_description_1 = "oooooo";
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
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_11;
        CHECK_OBJECT(par_model);
        tmp_called_instance_1 = par_model;
        CHECK_OBJECT(var_model_c);
        tmp_args_element_value_11 = var_model_c;
        frame_34abb074626a9e5fd9560d8d3353df67->m_frame.f_lineno = 60;
        tmp_call_result_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[22], tmp_args_element_value_11);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 60;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_model_c);
        tmp_args_element_value_12 = var_model_c;
        frame_34abb074626a9e5fd9560d8d3353df67->m_frame.f_lineno = 62;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_12);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_model;
            assert(old != NULL);
            par_model = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_end_2:;
    if (par_model == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 63;
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_model;
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
        exception_tb = MAKE_TRACEBACK(frame_34abb074626a9e5fd9560d8d3353df67, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_34abb074626a9e5fd9560d8d3353df67->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_34abb074626a9e5fd9560d8d3353df67, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_34abb074626a9e5fd9560d8d3353df67,
        type_description_1,
        par_model,
        par_qconfig_dict,
        par_inplace,
        par_quant_type,
        var_scripted_qconfig_dict,
        var_model_c
    );


    // Release cached frame if used for exception.
    if (frame_34abb074626a9e5fd9560d8d3353df67 == cache_frame_34abb074626a9e5fd9560d8d3353df67) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_34abb074626a9e5fd9560d8d3353df67);
        cache_frame_34abb074626a9e5fd9560d8d3353df67 = NULL;
    }

    assertFrameObject(frame_34abb074626a9e5fd9560d8d3353df67);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_model);
    par_model = NULL;
    CHECK_OBJECT(var_scripted_qconfig_dict);
    Py_DECREF(var_scripted_qconfig_dict);
    var_scripted_qconfig_dict = NULL;
    Py_XDECREF(var_model_c);
    var_model_c = NULL;
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

    Py_XDECREF(par_model);
    par_model = NULL;
    Py_XDECREF(var_scripted_qconfig_dict);
    var_scripted_qconfig_dict = NULL;
    Py_XDECREF(var_model_c);
    var_model_c = NULL;
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
    CHECK_OBJECT(par_qconfig_dict);
    Py_DECREF(par_qconfig_dict);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    CHECK_OBJECT(par_quant_type);
    Py_DECREF(par_quant_type);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig_dict);
    Py_DECREF(par_qconfig_dict);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    CHECK_OBJECT(par_quant_type);
    Py_DECREF(par_quant_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct torch$ao$quantization$quantize_jit$$$function__6__prepare_jit$$$genexpr__1_genexpr_locals {
    PyObject *var_x;
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

static PyObject *torch$ao$quantization$quantize_jit$$$function__6__prepare_jit$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$ao$quantization$quantize_jit$$$function__6__prepare_jit$$$genexpr__1_genexpr_locals *generator_heap = (struct torch$ao$quantization$quantize_jit$$$function__6__prepare_jit$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_x = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_4977f15cb03c0657188f1e2f02711df8, module_torch$ao$quantization$quantize_jit, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 50;
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
            PyObject *old = generator_heap->var_x;
            generator_heap->var_x = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_x);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_x);
        tmp_isinstance_inst_1 = generator_heap->var_x;
        tmp_isinstance_cls_1 = (PyObject *)&PyUnicode_Type;
        generator_heap->tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (generator_heap->tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 50;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_expression_value_1 = (generator_heap->tmp_res != 0) ? Py_True : Py_False;
        Py_INCREF(tmp_expression_value_1);
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_isinstance_inst_1, sizeof(PyObject *), &tmp_isinstance_cls_1, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 50;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 50;
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
            generator_heap->var_x
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

    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;
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
    Py_XDECREF(generator_heap->var_x);
    generator_heap->var_x = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$ao$quantization$quantize_jit$$$function__6__prepare_jit$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$ao$quantization$quantize_jit$$$function__6__prepare_jit$$$genexpr__1_genexpr_context,
        module_torch$ao$quantization$quantize_jit,
        mod_consts[34],
#if PYTHON_VERSION >= 0x350
        mod_consts[35],
#endif
        codeobj_4977f15cb03c0657188f1e2f02711df8,
        closure,
        1,
        sizeof(struct torch$ao$quantization$quantize_jit$$$function__6__prepare_jit$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_torch$ao$quantization$quantize_jit$$$function__7_prepare_jit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    PyObject *par_qconfig_dict = python_pars[1];
    PyObject *par_inplace = python_pars[2];
    struct Nuitka_FrameObject *frame_9ae6db19c4e39a72657eb5164b0f4470;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9ae6db19c4e39a72657eb5164b0f4470 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9ae6db19c4e39a72657eb5164b0f4470)) {
        Py_XDECREF(cache_frame_9ae6db19c4e39a72657eb5164b0f4470);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9ae6db19c4e39a72657eb5164b0f4470 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9ae6db19c4e39a72657eb5164b0f4470 = MAKE_FUNCTION_FRAME(codeobj_9ae6db19c4e39a72657eb5164b0f4470, module_torch$ao$quantization$quantize_jit, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9ae6db19c4e39a72657eb5164b0f4470->m_type_description == NULL);
    frame_9ae6db19c4e39a72657eb5164b0f4470 = cache_frame_9ae6db19c4e39a72657eb5164b0f4470;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9ae6db19c4e39a72657eb5164b0f4470);
    assert(Py_REFCNT(frame_9ae6db19c4e39a72657eb5164b0f4470) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9ae6db19c4e39a72657eb5164b0f4470->m_frame.f_lineno = 66;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[36], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 66;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_kw_call_arg_value_0_1 = par_model;
        CHECK_OBJECT(par_qconfig_dict);
        tmp_kw_call_arg_value_1_1 = par_qconfig_dict;
        CHECK_OBJECT(par_inplace);
        tmp_kw_call_arg_value_2_1 = par_inplace;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_9ae6db19c4e39a72657eb5164b0f4470->m_frame.f_lineno = 67;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[40]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
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
        exception_tb = MAKE_TRACEBACK(frame_9ae6db19c4e39a72657eb5164b0f4470, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9ae6db19c4e39a72657eb5164b0f4470->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9ae6db19c4e39a72657eb5164b0f4470, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9ae6db19c4e39a72657eb5164b0f4470,
        type_description_1,
        par_model,
        par_qconfig_dict,
        par_inplace
    );


    // Release cached frame if used for exception.
    if (frame_9ae6db19c4e39a72657eb5164b0f4470 == cache_frame_9ae6db19c4e39a72657eb5164b0f4470) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9ae6db19c4e39a72657eb5164b0f4470);
        cache_frame_9ae6db19c4e39a72657eb5164b0f4470 = NULL;
    }

    assertFrameObject(frame_9ae6db19c4e39a72657eb5164b0f4470);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_qconfig_dict);
    Py_DECREF(par_qconfig_dict);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_qconfig_dict);
    Py_DECREF(par_qconfig_dict);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$quantize_jit$$$function__8_prepare_dynamic_jit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    PyObject *par_qconfig_dict = python_pars[1];
    PyObject *par_inplace = python_pars[2];
    struct Nuitka_FrameObject *frame_c837bc533b292b8a0a63172f65acfc59;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c837bc533b292b8a0a63172f65acfc59 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c837bc533b292b8a0a63172f65acfc59)) {
        Py_XDECREF(cache_frame_c837bc533b292b8a0a63172f65acfc59);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c837bc533b292b8a0a63172f65acfc59 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c837bc533b292b8a0a63172f65acfc59 = MAKE_FUNCTION_FRAME(codeobj_c837bc533b292b8a0a63172f65acfc59, module_torch$ao$quantization$quantize_jit, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c837bc533b292b8a0a63172f65acfc59->m_type_description == NULL);
    frame_c837bc533b292b8a0a63172f65acfc59 = cache_frame_c837bc533b292b8a0a63172f65acfc59;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c837bc533b292b8a0a63172f65acfc59);
    assert(Py_REFCNT(frame_c837bc533b292b8a0a63172f65acfc59) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c837bc533b292b8a0a63172f65acfc59->m_frame.f_lineno = 70;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[41], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[37]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[37]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_kw_call_arg_value_0_1 = par_model;
        CHECK_OBJECT(par_qconfig_dict);
        tmp_kw_call_arg_value_1_1 = par_qconfig_dict;
        CHECK_OBJECT(par_inplace);
        tmp_kw_call_arg_value_2_1 = par_inplace;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        frame_c837bc533b292b8a0a63172f65acfc59->m_frame.f_lineno = 71;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[40]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
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
        exception_tb = MAKE_TRACEBACK(frame_c837bc533b292b8a0a63172f65acfc59, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c837bc533b292b8a0a63172f65acfc59->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c837bc533b292b8a0a63172f65acfc59, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c837bc533b292b8a0a63172f65acfc59,
        type_description_1,
        par_model,
        par_qconfig_dict,
        par_inplace
    );


    // Release cached frame if used for exception.
    if (frame_c837bc533b292b8a0a63172f65acfc59 == cache_frame_c837bc533b292b8a0a63172f65acfc59) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c837bc533b292b8a0a63172f65acfc59);
        cache_frame_c837bc533b292b8a0a63172f65acfc59 = NULL;
    }

    assertFrameObject(frame_c837bc533b292b8a0a63172f65acfc59);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_qconfig_dict);
    Py_DECREF(par_qconfig_dict);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_qconfig_dict);
    Py_DECREF(par_qconfig_dict);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$quantize_jit$$$function__9__convert_jit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    PyObject *par_inplace = python_pars[1];
    PyObject *par_debug = python_pars[2];
    PyObject *par_quant_type = python_pars[3];
    PyObject *par_preserved_attrs = python_pars[4];
    PyObject *var_model_c = NULL;
    nuitka_bool var_is_xpu = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_genexpr_1__$0 = NULL;
    struct Nuitka_FrameObject *frame_4a079a06c5d9acf2811ea2aa660ff79c;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_4a079a06c5d9acf2811ea2aa660ff79c = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4a079a06c5d9acf2811ea2aa660ff79c)) {
        Py_XDECREF(cache_frame_4a079a06c5d9acf2811ea2aa660ff79c);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4a079a06c5d9acf2811ea2aa660ff79c == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4a079a06c5d9acf2811ea2aa660ff79c = MAKE_FUNCTION_FRAME(codeobj_4a079a06c5d9acf2811ea2aa660ff79c, module_torch$ao$quantization$quantize_jit, sizeof(nuitka_bool)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4a079a06c5d9acf2811ea2aa660ff79c->m_type_description == NULL);
    frame_4a079a06c5d9acf2811ea2aa660ff79c = cache_frame_4a079a06c5d9acf2811ea2aa660ff79c;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4a079a06c5d9acf2811ea2aa660ff79c);
    assert(Py_REFCNT(frame_4a079a06c5d9acf2811ea2aa660ff79c) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[26]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[26]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_args_element_value_1 = par_model;
        frame_4a079a06c5d9acf2811ea2aa660ff79c->m_frame.f_lineno = 75;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_model);
        tmp_called_instance_1 = par_model;
        frame_4a079a06c5d9acf2811ea2aa660ff79c->m_frame.f_lineno = 76;
        tmp_call_result_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[43]);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 76;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_model);
        tmp_expression_value_1 = par_model;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 77;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        assert(var_model_c == NULL);
        var_model_c = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[18]);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_model_c);
        tmp_args_element_value_2 = var_model_c;
        tmp_args_element_value_3 = mod_consts[33];
        CHECK_OBJECT(par_inplace);
        tmp_args_element_value_4 = par_inplace;
        CHECK_OBJECT(par_debug);
        tmp_args_element_value_5 = par_debug;
        CHECK_OBJECT(par_quant_type);
        tmp_args_element_value_6 = par_quant_type;
        frame_4a079a06c5d9acf2811ea2aa660ff79c->m_frame.f_lineno = 78;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_2 = CALL_METHOD_WITH_ARGS5(
                tmp_called_instance_2,
                mod_consts[44],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 78;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_model_c;
            assert(old != NULL);
            var_model_c = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_debug);
        tmp_operand_value_1 = par_debug;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 79;
            type_description_1 = "oooooob";
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
        nuitka_bool tmp_assign_source_3;
        PyObject *tmp_all_arg_1;
        PyObject *tmp_capi_result_1;
        int tmp_truth_name_1;
        {
            PyObject *tmp_assign_source_4;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_instance_3;
            CHECK_OBJECT(par_model);
            tmp_called_instance_3 = par_model;
            frame_4a079a06c5d9acf2811ea2aa660ff79c->m_frame.f_lineno = 80;
            tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[45]);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }
            tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 80;
                type_description_1 = "oooooob";
                goto frame_exception_exit_1;
            }
            assert(tmp_genexpr_1__$0 == NULL);
            tmp_genexpr_1__$0 = tmp_assign_source_4;
        }
        // Tried code:
        {
            struct Nuitka_CellObject *tmp_closure_1[1];

            tmp_closure_1[0] = Nuitka_Cell_New0(tmp_genexpr_1__$0);

            tmp_all_arg_1 = MAKE_GENERATOR_torch$ao$quantization$quantize_jit$$$function__9__convert_jit$$$genexpr__1_genexpr(tmp_closure_1);

            goto try_return_handler_2;
        }
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        CHECK_OBJECT(tmp_genexpr_1__$0);
        Py_DECREF(tmp_genexpr_1__$0);
        tmp_genexpr_1__$0 = NULL;
        goto outline_result_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_result_1:;
        tmp_capi_result_1 = BUILTIN_ALL(tmp_all_arg_1);
        Py_DECREF(tmp_all_arg_1);
        if (tmp_capi_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_capi_result_1);
        assert(!(tmp_truth_name_1 == -1));
        tmp_assign_source_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_capi_result_1);
        var_is_xpu = tmp_assign_source_3;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        assert(var_is_xpu != NUITKA_BOOL_UNASSIGNED);
        tmp_operand_value_2 = (var_is_xpu == NUITKA_BOOL_TRUE) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
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
        PyObject *tmp_called_instance_4;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(par_model);
        tmp_called_instance_4 = par_model;
        frame_4a079a06c5d9acf2811ea2aa660ff79c->m_frame.f_lineno = 84;
        tmp_call_result_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[46]);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_preserved_attrs);
        tmp_cmp_expr_left_1 = par_preserved_attrs;
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
        tmp_assign_source_5 = MAKE_LIST_EMPTY(0);
        {
            PyObject *old = par_preserved_attrs;
            assert(old != NULL);
            par_preserved_attrs = tmp_assign_source_5;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_model_c);
        tmp_args_element_value_7 = var_model_c;
        CHECK_OBJECT(par_quant_type);
        tmp_args_element_value_8 = par_quant_type;
        CHECK_OBJECT(par_preserved_attrs);
        tmp_args_element_value_9 = par_preserved_attrs;
        frame_4a079a06c5d9acf2811ea2aa660ff79c->m_frame.f_lineno = 87;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_6 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_5,
                mod_consts[47],
                call_args
            );
        }

        Py_DECREF(tmp_called_instance_5);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_model_c;
            assert(old != NULL);
            var_model_c = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        nuitka_bool tmp_condition_result_4;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_inplace);
        tmp_truth_name_2 = CHECK_IF_TRUE(par_inplace);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_instance_6;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_10;
        CHECK_OBJECT(par_model);
        tmp_called_instance_6 = par_model;
        CHECK_OBJECT(var_model_c);
        tmp_args_element_value_10 = var_model_c;
        frame_4a079a06c5d9acf2811ea2aa660ff79c->m_frame.f_lineno = 89;
        tmp_call_result_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_6, mod_consts[22], tmp_args_element_value_10);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_11;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[23]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[23]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_model_c);
        tmp_args_element_value_11 = var_model_c;
        frame_4a079a06c5d9acf2811ea2aa660ff79c->m_frame.f_lineno = 91;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_11);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_model;
            assert(old != NULL);
            par_model = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_end_4:;
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_6;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[18]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[48]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        if (par_model == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 92;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_6 = par_model;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[49]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 92;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        frame_4a079a06c5d9acf2811ea2aa660ff79c->m_frame.f_lineno = 92;
        tmp_call_result_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_12);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_12);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_call_result_6;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_9;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[18]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[50]);
        Py_DECREF(tmp_expression_value_7);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        if (par_model == NULL) {
            Py_DECREF(tmp_called_value_4);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 93;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_9 = par_model;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[49]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 93;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        frame_4a079a06c5d9acf2811ea2aa660ff79c->m_frame.f_lineno = 93;
        tmp_call_result_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooob";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_6);
    }
    if (par_model == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[24]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 94;
        type_description_1 = "oooooob";
        goto frame_exception_exit_1;
    }

    tmp_return_value = par_model;
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
        exception_tb = MAKE_TRACEBACK(frame_4a079a06c5d9acf2811ea2aa660ff79c, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4a079a06c5d9acf2811ea2aa660ff79c->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4a079a06c5d9acf2811ea2aa660ff79c, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4a079a06c5d9acf2811ea2aa660ff79c,
        type_description_1,
        par_model,
        par_inplace,
        par_debug,
        par_quant_type,
        par_preserved_attrs,
        var_model_c,
        (int)var_is_xpu
    );


    // Release cached frame if used for exception.
    if (frame_4a079a06c5d9acf2811ea2aa660ff79c == cache_frame_4a079a06c5d9acf2811ea2aa660ff79c) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4a079a06c5d9acf2811ea2aa660ff79c);
        cache_frame_4a079a06c5d9acf2811ea2aa660ff79c = NULL;
    }

    assertFrameObject(frame_4a079a06c5d9acf2811ea2aa660ff79c);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_model);
    par_model = NULL;
    Py_XDECREF(par_preserved_attrs);
    par_preserved_attrs = NULL;
    Py_XDECREF(var_model_c);
    var_model_c = NULL;
    var_is_xpu = NUITKA_BOOL_UNASSIGNED;
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

    Py_XDECREF(par_model);
    par_model = NULL;
    Py_XDECREF(par_preserved_attrs);
    par_preserved_attrs = NULL;
    Py_XDECREF(var_model_c);
    var_model_c = NULL;
    var_is_xpu = NUITKA_BOOL_UNASSIGNED;
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
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    CHECK_OBJECT(par_debug);
    Py_DECREF(par_debug);
    CHECK_OBJECT(par_quant_type);
    Py_DECREF(par_quant_type);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    CHECK_OBJECT(par_debug);
    Py_DECREF(par_debug);
    CHECK_OBJECT(par_quant_type);
    Py_DECREF(par_quant_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



struct torch$ao$quantization$quantize_jit$$$function__9__convert_jit$$$genexpr__1_genexpr_locals {
    PyObject *var_p;
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

static PyObject *torch$ao$quantization$quantize_jit$$$function__9__convert_jit$$$genexpr__1_genexpr_context(struct Nuitka_GeneratorObject *generator, PyObject *yield_return_value) {
    CHECK_OBJECT(generator);
    assert(Nuitka_Generator_Check((PyObject *)generator));
    CHECK_OBJECT_X(yield_return_value);

    // Heap access if used.
    struct torch$ao$quantization$quantize_jit$$$function__9__convert_jit$$$genexpr__1_genexpr_locals *generator_heap = (struct torch$ao$quantization$quantize_jit$$$function__9__convert_jit$$$genexpr__1_genexpr_locals *)generator->m_heap_storage;

    // Dispatch to yield based on return label index:
    switch(generator->m_yield_return_index) {
    case 1: goto yield_return_1;
    }

    // Local variable initialization
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_m_frame = NULL;
    generator_heap->var_p = NULL;
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
        cache_m_frame = MAKE_FUNCTION_FRAME(codeobj_bcfab4fa3665466586e806bedf15ab68, module_torch$ao$quantization$quantize_jit, sizeof(void *)+sizeof(void *));
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
                generator_heap->exception_lineno = 80;
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
            PyObject *old = generator_heap->var_p;
            generator_heap->var_p = tmp_assign_source_2;
            Py_INCREF(generator_heap->var_p);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        NUITKA_MAY_BE_UNUSED PyObject *tmp_yield_result_1;
        CHECK_OBJECT(generator_heap->var_p);
        tmp_expression_value_3 = generator_heap->var_p;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[51]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 80;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[52]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 80;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_cmp_expr_right_1 = mod_consts[53];
        tmp_expression_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 80;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        Nuitka_PreserveHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        generator->m_yield_return_index = 1;
        return tmp_expression_value_1;
        yield_return_1:
        Nuitka_RestoreHeap(generator_heap->yield_tmps, &tmp_cmp_expr_left_1, sizeof(PyObject *), &tmp_cmp_expr_right_1, sizeof(PyObject *), &tmp_expression_value_2, sizeof(PyObject *), &tmp_expression_value_3, sizeof(PyObject *), NULL);
        if (yield_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


            generator_heap->exception_lineno = 80;
            generator_heap->type_description_1 = "No";
            goto try_except_handler_2;
        }
        tmp_yield_result_1 = yield_return_value;
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&generator_heap->exception_type, &generator_heap->exception_value, &generator_heap->exception_tb);


        generator_heap->exception_lineno = 80;
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
            generator_heap->var_p
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

    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;
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
    Py_XDECREF(generator_heap->var_p);
    generator_heap->var_p = NULL;


    return NULL;

    function_exception_exit:

    assert(generator_heap->exception_type);
    RESTORE_ERROR_OCCURRED(generator_heap->exception_type, generator_heap->exception_value, generator_heap->exception_tb);

    return NULL;

}

static PyObject *MAKE_GENERATOR_torch$ao$quantization$quantize_jit$$$function__9__convert_jit$$$genexpr__1_genexpr(struct Nuitka_CellObject **closure) {
    return Nuitka_Generator_New(
        torch$ao$quantization$quantize_jit$$$function__9__convert_jit$$$genexpr__1_genexpr_context,
        module_torch$ao$quantization$quantize_jit,
        mod_consts[34],
#if PYTHON_VERSION >= 0x350
        mod_consts[54],
#endif
        codeobj_bcfab4fa3665466586e806bedf15ab68,
        closure,
        1,
        sizeof(struct torch$ao$quantization$quantize_jit$$$function__9__convert_jit$$$genexpr__1_genexpr_locals)
    );
}


static PyObject *impl_torch$ao$quantization$quantize_jit$$$function__10_convert_jit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    PyObject *par_inplace = python_pars[1];
    PyObject *par_debug = python_pars[2];
    PyObject *par_preserved_attrs = python_pars[3];
    struct Nuitka_FrameObject *frame_51ea2ce119b13751eab5b123d2f8d412;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_51ea2ce119b13751eab5b123d2f8d412 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_51ea2ce119b13751eab5b123d2f8d412)) {
        Py_XDECREF(cache_frame_51ea2ce119b13751eab5b123d2f8d412);

#if _DEBUG_REFCOUNTS
        if (cache_frame_51ea2ce119b13751eab5b123d2f8d412 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_51ea2ce119b13751eab5b123d2f8d412 = MAKE_FUNCTION_FRAME(codeobj_51ea2ce119b13751eab5b123d2f8d412, module_torch$ao$quantization$quantize_jit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_51ea2ce119b13751eab5b123d2f8d412->m_type_description == NULL);
    frame_51ea2ce119b13751eab5b123d2f8d412 = cache_frame_51ea2ce119b13751eab5b123d2f8d412;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_51ea2ce119b13751eab5b123d2f8d412);
    assert(Py_REFCNT(frame_51ea2ce119b13751eab5b123d2f8d412) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_51ea2ce119b13751eab5b123d2f8d412->m_frame.f_lineno = 97;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[55], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_kw_call_arg_value_0_1 = par_model;
        CHECK_OBJECT(par_inplace);
        tmp_kw_call_arg_value_1_1 = par_inplace;
        CHECK_OBJECT(par_debug);
        tmp_kw_call_arg_value_2_1 = par_debug;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_preserved_attrs);
        tmp_kw_call_dict_value_1_1 = par_preserved_attrs;
        frame_51ea2ce119b13751eab5b123d2f8d412->m_frame.f_lineno = 98;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[57]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_51ea2ce119b13751eab5b123d2f8d412, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_51ea2ce119b13751eab5b123d2f8d412->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_51ea2ce119b13751eab5b123d2f8d412, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_51ea2ce119b13751eab5b123d2f8d412,
        type_description_1,
        par_model,
        par_inplace,
        par_debug,
        par_preserved_attrs
    );


    // Release cached frame if used for exception.
    if (frame_51ea2ce119b13751eab5b123d2f8d412 == cache_frame_51ea2ce119b13751eab5b123d2f8d412) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_51ea2ce119b13751eab5b123d2f8d412);
        cache_frame_51ea2ce119b13751eab5b123d2f8d412 = NULL;
    }

    assertFrameObject(frame_51ea2ce119b13751eab5b123d2f8d412);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    CHECK_OBJECT(par_debug);
    Py_DECREF(par_debug);
    CHECK_OBJECT(par_preserved_attrs);
    Py_DECREF(par_preserved_attrs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    CHECK_OBJECT(par_debug);
    Py_DECREF(par_debug);
    CHECK_OBJECT(par_preserved_attrs);
    Py_DECREF(par_preserved_attrs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$quantize_jit$$$function__11_convert_dynamic_jit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    PyObject *par_inplace = python_pars[1];
    PyObject *par_debug = python_pars[2];
    PyObject *par_preserved_attrs = python_pars[3];
    struct Nuitka_FrameObject *frame_c59f4c73613db3aaa5b31b3b30a3d00e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_c59f4c73613db3aaa5b31b3b30a3d00e = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_c59f4c73613db3aaa5b31b3b30a3d00e)) {
        Py_XDECREF(cache_frame_c59f4c73613db3aaa5b31b3b30a3d00e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c59f4c73613db3aaa5b31b3b30a3d00e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c59f4c73613db3aaa5b31b3b30a3d00e = MAKE_FUNCTION_FRAME(codeobj_c59f4c73613db3aaa5b31b3b30a3d00e, module_torch$ao$quantization$quantize_jit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c59f4c73613db3aaa5b31b3b30a3d00e->m_type_description == NULL);
    frame_c59f4c73613db3aaa5b31b3b30a3d00e = cache_frame_c59f4c73613db3aaa5b31b3b30a3d00e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c59f4c73613db3aaa5b31b3b30a3d00e);
    assert(Py_REFCNT(frame_c59f4c73613db3aaa5b31b3b30a3d00e) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_c59f4c73613db3aaa5b31b3b30a3d00e->m_frame.f_lineno = 101;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[58], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[56]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[56]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_kw_call_arg_value_0_1 = par_model;
        CHECK_OBJECT(par_inplace);
        tmp_kw_call_arg_value_1_1 = par_inplace;
        CHECK_OBJECT(par_debug);
        tmp_kw_call_arg_value_2_1 = par_debug;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_preserved_attrs);
        tmp_kw_call_dict_value_1_1 = par_preserved_attrs;
        frame_c59f4c73613db3aaa5b31b3b30a3d00e->m_frame.f_lineno = 102;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[57]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_c59f4c73613db3aaa5b31b3b30a3d00e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c59f4c73613db3aaa5b31b3b30a3d00e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c59f4c73613db3aaa5b31b3b30a3d00e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c59f4c73613db3aaa5b31b3b30a3d00e,
        type_description_1,
        par_model,
        par_inplace,
        par_debug,
        par_preserved_attrs
    );


    // Release cached frame if used for exception.
    if (frame_c59f4c73613db3aaa5b31b3b30a3d00e == cache_frame_c59f4c73613db3aaa5b31b3b30a3d00e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c59f4c73613db3aaa5b31b3b30a3d00e);
        cache_frame_c59f4c73613db3aaa5b31b3b30a3d00e = NULL;
    }

    assertFrameObject(frame_c59f4c73613db3aaa5b31b3b30a3d00e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    CHECK_OBJECT(par_debug);
    Py_DECREF(par_debug);
    CHECK_OBJECT(par_preserved_attrs);
    Py_DECREF(par_preserved_attrs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    CHECK_OBJECT(par_debug);
    Py_DECREF(par_debug);
    CHECK_OBJECT(par_preserved_attrs);
    Py_DECREF(par_preserved_attrs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$quantize_jit$$$function__12__quantize_jit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    PyObject *par_qconfig_dict = python_pars[1];
    PyObject *par_run_fn = python_pars[2];
    PyObject *par_run_args = python_pars[3];
    PyObject *par_inplace = python_pars[4];
    PyObject *par_debug = python_pars[5];
    PyObject *par_quant_type = python_pars[6];
    struct Nuitka_FrameObject *frame_8b87de2135ff95168be55979580eb734;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_8b87de2135ff95168be55979580eb734 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8b87de2135ff95168be55979580eb734)) {
        Py_XDECREF(cache_frame_8b87de2135ff95168be55979580eb734);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8b87de2135ff95168be55979580eb734 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8b87de2135ff95168be55979580eb734 = MAKE_FUNCTION_FRAME(codeobj_8b87de2135ff95168be55979580eb734, module_torch$ao$quantization$quantize_jit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8b87de2135ff95168be55979580eb734->m_type_description == NULL);
    frame_8b87de2135ff95168be55979580eb734 = cache_frame_8b87de2135ff95168be55979580eb734;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8b87de2135ff95168be55979580eb734);
    assert(Py_REFCNT(frame_8b87de2135ff95168be55979580eb734) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_quant_type);
        tmp_cmp_expr_left_1 = par_quant_type;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[42]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[59]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[59]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_args_element_value_1 = par_model;
        CHECK_OBJECT(par_qconfig_dict);
        tmp_args_element_value_2 = par_qconfig_dict;
        CHECK_OBJECT(par_inplace);
        tmp_args_element_value_3 = par_inplace;
        frame_8b87de2135ff95168be55979580eb734->m_frame.f_lineno = 108;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_model;
            assert(old != NULL);
            par_model = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[60]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[60]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_args_element_value_4 = par_model;
        tmp_args_element_value_5 = Py_True;
        CHECK_OBJECT(par_debug);
        tmp_args_element_value_6 = par_debug;
        frame_8b87de2135ff95168be55979580eb734->m_frame.f_lineno = 109;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_2 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_model;
            assert(old != NULL);
            par_model = tmp_assign_source_2;
            Py_DECREF(old);
        }

    }
    goto branch_end_1;
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_1;
        CHECK_OBJECT(par_run_fn);
        tmp_operand_value_1 = par_run_fn;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 111;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_raise_value_1;
        tmp_raise_type_1 = PyExc_AssertionError;
        tmp_raise_value_1 = mod_consts[61];
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        Py_INCREF(tmp_raise_value_1);
        exception_lineno = 111;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_2;
        CHECK_OBJECT(par_run_args);
        tmp_operand_value_2 = par_run_args;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_raise_value_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        tmp_raise_value_2 = mod_consts[62];
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        Py_INCREF(tmp_raise_value_2);
        exception_lineno = 112;
        RAISE_EXCEPTION_WITH_VALUE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[63]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[63]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_args_element_value_7 = par_model;
        CHECK_OBJECT(par_qconfig_dict);
        tmp_args_element_value_8 = par_qconfig_dict;
        CHECK_OBJECT(par_inplace);
        tmp_args_element_value_9 = par_inplace;
        frame_8b87de2135ff95168be55979580eb734->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_model;
            assert(old != NULL);
            par_model = tmp_assign_source_3;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_dircall_arg1_1;
        PyObject *tmp_dircall_arg2_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_dircall_arg3_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_run_fn);
        tmp_dircall_arg1_1 = par_run_fn;
        CHECK_OBJECT(par_model);
        tmp_tuple_element_1 = par_model;
        tmp_dircall_arg2_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_dircall_arg2_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_run_args);
        tmp_dircall_arg3_1 = par_run_args;
        Py_INCREF(tmp_dircall_arg1_1);
        Py_INCREF(tmp_dircall_arg3_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1, tmp_dircall_arg2_1, tmp_dircall_arg3_1};
            tmp_call_result_1 = impl___main__$$$function__2_complex_call_helper_pos_star_list(dir_call_args);
        }
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[64]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[64]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_args_element_value_10 = par_model;
        tmp_args_element_value_11 = Py_True;
        CHECK_OBJECT(par_debug);
        tmp_args_element_value_12 = par_debug;
        frame_8b87de2135ff95168be55979580eb734->m_frame.f_lineno = 115;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_model;
            assert(old != NULL);
            par_model = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    branch_end_1:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_4;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[18]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[48]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_expression_value_4 = par_model;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[49]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 117;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b87de2135ff95168be55979580eb734->m_frame.f_lineno = 117;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_13);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_expression_value_7;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[18]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[50]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_expression_value_7 = par_model;
        tmp_args_element_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[49]);
        if (tmp_args_element_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 118;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        frame_8b87de2135ff95168be55979580eb734->m_frame.f_lineno = 118;
        tmp_call_result_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_14);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_14);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_8b87de2135ff95168be55979580eb734, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8b87de2135ff95168be55979580eb734->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8b87de2135ff95168be55979580eb734, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8b87de2135ff95168be55979580eb734,
        type_description_1,
        par_model,
        par_qconfig_dict,
        par_run_fn,
        par_run_args,
        par_inplace,
        par_debug,
        par_quant_type
    );


    // Release cached frame if used for exception.
    if (frame_8b87de2135ff95168be55979580eb734 == cache_frame_8b87de2135ff95168be55979580eb734) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8b87de2135ff95168be55979580eb734);
        cache_frame_8b87de2135ff95168be55979580eb734 = NULL;
    }

    assertFrameObject(frame_8b87de2135ff95168be55979580eb734);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(par_model);
    tmp_return_value = par_model;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    par_model = NULL;
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

    Py_XDECREF(par_model);
    par_model = NULL;
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
    CHECK_OBJECT(par_qconfig_dict);
    Py_DECREF(par_qconfig_dict);
    CHECK_OBJECT(par_run_fn);
    Py_DECREF(par_run_fn);
    CHECK_OBJECT(par_run_args);
    Py_DECREF(par_run_args);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    CHECK_OBJECT(par_debug);
    Py_DECREF(par_debug);
    CHECK_OBJECT(par_quant_type);
    Py_DECREF(par_quant_type);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_qconfig_dict);
    Py_DECREF(par_qconfig_dict);
    CHECK_OBJECT(par_run_fn);
    Py_DECREF(par_run_fn);
    CHECK_OBJECT(par_run_args);
    Py_DECREF(par_run_args);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    CHECK_OBJECT(par_debug);
    Py_DECREF(par_debug);
    CHECK_OBJECT(par_quant_type);
    Py_DECREF(par_quant_type);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$quantize_jit$$$function__13_quantize_jit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    PyObject *par_qconfig_dict = python_pars[1];
    PyObject *par_run_fn = python_pars[2];
    PyObject *par_run_args = python_pars[3];
    PyObject *par_inplace = python_pars[4];
    PyObject *par_debug = python_pars[5];
    struct Nuitka_FrameObject *frame_5be126d24a14429d3b59a53ff463b1a7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_5be126d24a14429d3b59a53ff463b1a7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_5be126d24a14429d3b59a53ff463b1a7)) {
        Py_XDECREF(cache_frame_5be126d24a14429d3b59a53ff463b1a7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5be126d24a14429d3b59a53ff463b1a7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5be126d24a14429d3b59a53ff463b1a7 = MAKE_FUNCTION_FRAME(codeobj_5be126d24a14429d3b59a53ff463b1a7, module_torch$ao$quantization$quantize_jit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5be126d24a14429d3b59a53ff463b1a7->m_type_description == NULL);
    frame_5be126d24a14429d3b59a53ff463b1a7 = cache_frame_5be126d24a14429d3b59a53ff463b1a7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5be126d24a14429d3b59a53ff463b1a7);
    assert(Py_REFCNT(frame_5be126d24a14429d3b59a53ff463b1a7) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_5be126d24a14429d3b59a53ff463b1a7->m_frame.f_lineno = 171;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[65], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_arg_value_2_1;
        PyObject *tmp_kw_call_arg_value_3_1;
        PyObject *tmp_kw_call_arg_value_4_1;
        PyObject *tmp_kw_call_arg_value_5_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_kw_call_arg_value_0_1 = par_model;
        CHECK_OBJECT(par_qconfig_dict);
        tmp_kw_call_arg_value_1_1 = par_qconfig_dict;
        CHECK_OBJECT(par_run_fn);
        tmp_kw_call_arg_value_2_1 = par_run_fn;
        CHECK_OBJECT(par_run_args);
        tmp_kw_call_arg_value_3_1 = par_run_args;
        CHECK_OBJECT(par_inplace);
        tmp_kw_call_arg_value_4_1 = par_inplace;
        CHECK_OBJECT(par_debug);
        tmp_kw_call_arg_value_5_1 = par_debug;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        frame_5be126d24a14429d3b59a53ff463b1a7->m_frame.f_lineno = 172;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1, tmp_kw_call_arg_value_2_1, tmp_kw_call_arg_value_3_1, tmp_kw_call_arg_value_4_1, tmp_kw_call_arg_value_5_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS6_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[40]);
        }

        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5be126d24a14429d3b59a53ff463b1a7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5be126d24a14429d3b59a53ff463b1a7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5be126d24a14429d3b59a53ff463b1a7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5be126d24a14429d3b59a53ff463b1a7,
        type_description_1,
        par_model,
        par_qconfig_dict,
        par_run_fn,
        par_run_args,
        par_inplace,
        par_debug
    );


    // Release cached frame if used for exception.
    if (frame_5be126d24a14429d3b59a53ff463b1a7 == cache_frame_5be126d24a14429d3b59a53ff463b1a7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5be126d24a14429d3b59a53ff463b1a7);
        cache_frame_5be126d24a14429d3b59a53ff463b1a7 = NULL;
    }

    assertFrameObject(frame_5be126d24a14429d3b59a53ff463b1a7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_qconfig_dict);
    Py_DECREF(par_qconfig_dict);
    CHECK_OBJECT(par_run_fn);
    Py_DECREF(par_run_fn);
    CHECK_OBJECT(par_run_args);
    Py_DECREF(par_run_args);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    CHECK_OBJECT(par_debug);
    Py_DECREF(par_debug);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_qconfig_dict);
    Py_DECREF(par_qconfig_dict);
    CHECK_OBJECT(par_run_fn);
    Py_DECREF(par_run_fn);
    CHECK_OBJECT(par_run_args);
    Py_DECREF(par_run_args);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    CHECK_OBJECT(par_debug);
    Py_DECREF(par_debug);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torch$ao$quantization$quantize_jit$$$function__14_quantize_dynamic_jit(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    PyObject *par_qconfig_dict = python_pars[1];
    PyObject *par_inplace = python_pars[2];
    PyObject *par_debug = python_pars[3];
    struct Nuitka_FrameObject *frame_ce538ebe75303611a1187d4390ee4fbf;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ce538ebe75303611a1187d4390ee4fbf = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ce538ebe75303611a1187d4390ee4fbf)) {
        Py_XDECREF(cache_frame_ce538ebe75303611a1187d4390ee4fbf);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ce538ebe75303611a1187d4390ee4fbf == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ce538ebe75303611a1187d4390ee4fbf = MAKE_FUNCTION_FRAME(codeobj_ce538ebe75303611a1187d4390ee4fbf, module_torch$ao$quantization$quantize_jit, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ce538ebe75303611a1187d4390ee4fbf->m_type_description == NULL);
    frame_ce538ebe75303611a1187d4390ee4fbf = cache_frame_ce538ebe75303611a1187d4390ee4fbf;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ce538ebe75303611a1187d4390ee4fbf);
    assert(Py_REFCNT(frame_ce538ebe75303611a1187d4390ee4fbf) == 2);

    // Framed code:
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[0]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[18]);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ce538ebe75303611a1187d4390ee4fbf->m_frame.f_lineno = 212;
        tmp_call_result_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[19],
            PyTuple_GET_ITEM(mod_consts[68], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_arg_value_1_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_kw_call_dict_value_2_1;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[66]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[66]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_model);
        tmp_kw_call_arg_value_0_1 = par_model;
        CHECK_OBJECT(par_qconfig_dict);
        tmp_kw_call_arg_value_1_1 = par_qconfig_dict;
        CHECK_OBJECT(par_inplace);
        tmp_kw_call_dict_value_0_1 = par_inplace;
        CHECK_OBJECT(par_debug);
        tmp_kw_call_dict_value_1_1 = par_debug;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[38]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_2_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[42]);
        if (tmp_kw_call_dict_value_2_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ce538ebe75303611a1187d4390ee4fbf->m_frame.f_lineno = 213;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1, tmp_kw_call_arg_value_1_1};
            PyObject *kw_values[3] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1, tmp_kw_call_dict_value_2_1};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[69]);
        }

        Py_DECREF(tmp_kw_call_dict_value_2_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
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

    goto function_return_exit;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ce538ebe75303611a1187d4390ee4fbf, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ce538ebe75303611a1187d4390ee4fbf->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ce538ebe75303611a1187d4390ee4fbf, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ce538ebe75303611a1187d4390ee4fbf,
        type_description_1,
        par_model,
        par_qconfig_dict,
        par_inplace,
        par_debug
    );


    // Release cached frame if used for exception.
    if (frame_ce538ebe75303611a1187d4390ee4fbf == cache_frame_ce538ebe75303611a1187d4390ee4fbf) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ce538ebe75303611a1187d4390ee4fbf);
        cache_frame_ce538ebe75303611a1187d4390ee4fbf = NULL;
    }

    assertFrameObject(frame_ce538ebe75303611a1187d4390ee4fbf);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_qconfig_dict);
    Py_DECREF(par_qconfig_dict);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    CHECK_OBJECT(par_debug);
    Py_DECREF(par_debug);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_qconfig_dict);
    Py_DECREF(par_qconfig_dict);
    CHECK_OBJECT(par_inplace);
    Py_DECREF(par_inplace);
    CHECK_OBJECT(par_debug);
    Py_DECREF(par_debug);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__10_convert_jit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantize_jit$$$function__10_convert_jit,
        mod_consts[64],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_51ea2ce119b13751eab5b123d2f8d412,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$quantize_jit,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__11_convert_dynamic_jit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantize_jit$$$function__11_convert_dynamic_jit,
        mod_consts[60],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c59f4c73613db3aaa5b31b3b30a3d00e,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$quantize_jit,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__12__quantize_jit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantize_jit$$$function__12__quantize_jit,
        mod_consts[66],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_8b87de2135ff95168be55979580eb734,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$quantize_jit,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__13_quantize_jit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantize_jit$$$function__13_quantize_jit,
        mod_consts[87],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5be126d24a14429d3b59a53ff463b1a7,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$quantize_jit,
        mod_consts[67],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__14_quantize_dynamic_jit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantize_jit$$$function__14_quantize_dynamic_jit,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_ce538ebe75303611a1187d4390ee4fbf,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$quantize_jit,
        mod_consts[70],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__1__check_is_script_module() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantize_jit$$$function__1__check_is_script_module,
        mod_consts[26],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5f06581d50d731ec6f474b977c2c16b0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$quantize_jit,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__2__check_forward_method() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantize_jit$$$function__2__check_forward_method,
        mod_consts[27],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_5dcecedb6cb608b8386cc4b1af428b42,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$quantize_jit,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__3_script_qconfig() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantize_jit$$$function__3_script_qconfig,
        mod_consts[16],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_f3e1dc9c25cc98ca2a070475714d4a70,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$quantize_jit,
        mod_consts[13],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__4_script_qconfig_dict() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantize_jit$$$function__4_script_qconfig_dict,
        mod_consts[30],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cede5b856423f76eed60a6e3bc2347a3,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$quantize_jit,
        mod_consts[17],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__5_fuse_conv_bn_jit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantize_jit$$$function__5_fuse_conv_bn_jit,
        mod_consts[31],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_a24e55113de060af44ec9c955f69b632,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$quantize_jit,
        mod_consts[25],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__6__prepare_jit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantize_jit$$$function__6__prepare_jit,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_34abb074626a9e5fd9560d8d3353df67,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$quantize_jit,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__7_prepare_jit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantize_jit$$$function__7_prepare_jit,
        mod_consts[63],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_9ae6db19c4e39a72657eb5164b0f4470,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$quantize_jit,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__8_prepare_dynamic_jit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantize_jit$$$function__8_prepare_dynamic_jit,
        mod_consts[59],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c837bc533b292b8a0a63172f65acfc59,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$quantize_jit,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__9__convert_jit(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torch$ao$quantization$quantize_jit$$$function__9__convert_jit,
        mod_consts[56],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_4a079a06c5d9acf2811ea2aa660ff79c,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_torch$ao$quantization$quantize_jit,
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

function_impl_code functable_torch$ao$quantization$quantize_jit[] = {
    impl_torch$ao$quantization$quantize_jit$$$function__1__check_is_script_module,
    impl_torch$ao$quantization$quantize_jit$$$function__2__check_forward_method,
    impl_torch$ao$quantization$quantize_jit$$$function__3_script_qconfig,
    impl_torch$ao$quantization$quantize_jit$$$function__4_script_qconfig_dict,
    impl_torch$ao$quantization$quantize_jit$$$function__5_fuse_conv_bn_jit,
    impl_torch$ao$quantization$quantize_jit$$$function__6__prepare_jit,
    impl_torch$ao$quantization$quantize_jit$$$function__7_prepare_jit,
    impl_torch$ao$quantization$quantize_jit$$$function__8_prepare_dynamic_jit,
    impl_torch$ao$quantization$quantize_jit$$$function__9__convert_jit,
    impl_torch$ao$quantization$quantize_jit$$$function__10_convert_jit,
    impl_torch$ao$quantization$quantize_jit$$$function__11_convert_dynamic_jit,
    impl_torch$ao$quantization$quantize_jit$$$function__12__quantize_jit,
    impl_torch$ao$quantization$quantize_jit$$$function__13_quantize_jit,
    impl_torch$ao$quantization$quantize_jit$$$function__14_quantize_dynamic_jit,
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

    function_impl_code *current = functable_torch$ao$quantization$quantize_jit;
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

    if (offset > sizeof(functable_torch$ao$quantization$quantize_jit) || offset < 0) {
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
        functable_torch$ao$quantization$quantize_jit[offset],
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
        module_torch$ao$quantization$quantize_jit,
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
PyObject *modulecode_torch$ao$quantization$quantize_jit(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torch.ao.quantization.quantize_jit");

    // Store the module for future use.
    module_torch$ao$quantization$quantize_jit = module;

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
        PRINT_STRING("torch.ao.quantization.quantize_jit: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.ao.quantization.quantize_jit: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torch.ao.quantization.quantize_jit: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorch$ao$quantization$quantize_jit\n");

    moduledict_torch$ao$quantization$quantize_jit = MODULE_DICT(module_torch$ao$quantization$quantize_jit);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torch$ao$quantization$quantize_jit,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torch$ao$quantization$quantize_jit,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[106]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torch$ao$quantization$quantize_jit,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torch$ao$quantization$quantize_jit,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torch$ao$quantization$quantize_jit,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torch$ao$quantization$quantize_jit);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torch$ao$quantization$quantize_jit);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    struct Nuitka_FrameObject *frame_1f8fe02fb2039795ec03edacbfff7166;
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
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[71], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[72], tmp_assign_source_2);
    }
    frame_1f8fe02fb2039795ec03edacbfff7166 = MAKE_MODULE_FRAME(codeobj_1f8fe02fb2039795ec03edacbfff7166, module_torch$ao$quantization$quantize_jit);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1f8fe02fb2039795ec03edacbfff7166);
    assert(Py_REFCNT(frame_1f8fe02fb2039795ec03edacbfff7166) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[74], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[73]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[73]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[75], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[76], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[0];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torch$ao$quantization$quantize_jit;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[77];
        frame_1f8fe02fb2039795ec03edacbfff7166->m_frame.f_lineno = 2;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[0], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[78];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torch$ao$quantization$quantize_jit;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[79];
        tmp_level_value_2 = mod_consts[77];
        frame_1f8fe02fb2039795ec03edacbfff7166->m_frame.f_lineno = 3;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torch$ao$quantization$quantize_jit,
                mod_consts[8],
                mod_consts[77]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[8]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[8], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_2;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[80];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torch$ao$quantization$quantize_jit;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[81];
        tmp_level_value_3 = mod_consts[77];
        frame_1f8fe02fb2039795ec03edacbfff7166->m_frame.f_lineno = 4;
        tmp_import_name_from_2 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torch$ao$quantization$quantize_jit,
                mod_consts[38],
                mod_consts[77]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[38]);
        }

        Py_DECREF(tmp_import_name_from_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 4;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[38], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_import_name_from_3;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[82];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torch$ao$quantization$quantize_jit;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[83];
        tmp_level_value_4 = mod_consts[77];
        frame_1f8fe02fb2039795ec03edacbfff7166->m_frame.f_lineno = 5;
        tmp_import_name_from_3 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_import_name_from_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torch$ao$quantization$quantize_jit,
                mod_consts[23],
                mod_consts[77]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[23]);
        }

        Py_DECREF(tmp_import_name_from_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[23], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;


        tmp_assign_source_8 = MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__1__check_is_script_module();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[26], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;


        tmp_assign_source_9 = MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__2__check_forward_method();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[27], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;


        tmp_assign_source_10 = MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__3_script_qconfig();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[16], tmp_assign_source_10);
    }
    {
        PyObject *tmp_assign_source_11;


        tmp_assign_source_11 = MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__4_script_qconfig_dict();

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[30], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_defaults_1;
        tmp_defaults_1 = mod_consts[84];
        Py_INCREF(tmp_defaults_1);


        tmp_assign_source_12 = MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__5_fuse_conv_bn_jit(tmp_defaults_1);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_12);
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_defaults_2;
        PyObject *tmp_tuple_element_1;
        tmp_tuple_element_1 = Py_False;
        tmp_defaults_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_1;
            PyTuple_SET_ITEM0(tmp_defaults_2, 0, tmp_tuple_element_1);
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto tuple_build_exception_1;
            }
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 47;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_defaults_2, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_defaults_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;


        tmp_assign_source_13 = MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__6__prepare_jit(tmp_defaults_2);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[37], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[84];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_14 = MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__7_prepare_jit(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[63], tmp_assign_source_14);
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_defaults_4;
        tmp_defaults_4 = mod_consts[84];
        Py_INCREF(tmp_defaults_4);


        tmp_assign_source_15 = MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__8_prepare_dynamic_jit(tmp_defaults_4);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[59], tmp_assign_source_15);
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_defaults_5;
        PyObject *tmp_tuple_element_2;
        tmp_tuple_element_2 = Py_False;
        tmp_defaults_5 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_2;
            PyTuple_SET_ITEM0(tmp_defaults_5, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = Py_False;
            PyTuple_SET_ITEM0(tmp_defaults_5, 1, tmp_tuple_element_2);
            tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_expression_value_2 == NULL)) {
                tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_expression_value_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto tuple_build_exception_2;
            }
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 73;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_defaults_5, 2, tmp_tuple_element_2);
            tmp_tuple_element_2 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_5, 3, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_defaults_5);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;


        tmp_assign_source_16 = MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__9__convert_jit(tmp_defaults_5);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[56], tmp_assign_source_16);
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = mod_consts[85];
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_17 = MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__10_convert_jit(tmp_defaults_6);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[64], tmp_assign_source_17);
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_defaults_7;
        tmp_defaults_7 = mod_consts[85];
        Py_INCREF(tmp_defaults_7);


        tmp_assign_source_18 = MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__11_convert_dynamic_jit(tmp_defaults_7);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[60], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_defaults_8;
        PyObject *tmp_tuple_element_3;
        tmp_tuple_element_3 = Py_None;
        tmp_defaults_8 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM0(tmp_defaults_8, 0, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_None;
            PyTuple_SET_ITEM0(tmp_defaults_8, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_False;
            PyTuple_SET_ITEM0(tmp_defaults_8, 2, tmp_tuple_element_3);
            tmp_tuple_element_3 = Py_False;
            PyTuple_SET_ITEM0(tmp_defaults_8, 3, tmp_tuple_element_3);
            tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[38]);

            if (unlikely(tmp_expression_value_3 == NULL)) {
                tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[38]);
            }

            if (tmp_expression_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_3;
            }
            tmp_tuple_element_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[39]);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 104;

                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_defaults_8, 4, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_defaults_8);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;


        tmp_assign_source_19 = MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__12__quantize_jit(tmp_defaults_8);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[66], tmp_assign_source_19);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1f8fe02fb2039795ec03edacbfff7166, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1f8fe02fb2039795ec03edacbfff7166->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1f8fe02fb2039795ec03edacbfff7166, exception_lineno);
    }



    assertFrameObject(frame_1f8fe02fb2039795ec03edacbfff7166);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_1:;
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_defaults_9;
        tmp_defaults_9 = mod_consts[86];
        Py_INCREF(tmp_defaults_9);


        tmp_assign_source_20 = MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__13_quantize_jit(tmp_defaults_9);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[87], tmp_assign_source_20);
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_defaults_10;
        tmp_defaults_10 = mod_consts[86];
        Py_INCREF(tmp_defaults_10);


        tmp_assign_source_21 = MAKE_FUNCTION_torch$ao$quantization$quantize_jit$$$function__14_quantize_dynamic_jit(tmp_defaults_10);

        UPDATE_STRING_DICT1(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)mod_consts[88], tmp_assign_source_21);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torch.ao.quantization.quantize_jit", false);

    Py_INCREF(module_torch$ao$quantization$quantize_jit);
    return module_torch$ao$quantization$quantize_jit;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torch$ao$quantization$quantize_jit, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torch$ao$quantization$quantize_jit", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
