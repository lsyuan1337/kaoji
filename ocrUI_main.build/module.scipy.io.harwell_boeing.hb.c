/* Generated code for Python module 'scipy.io.harwell_boeing.hb'
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

/* The "module_scipy$io$harwell_boeing$hb" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_scipy$io$harwell_boeing$hb;
PyDictObject *moduledict_scipy$io$harwell_boeing$hb;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[260];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[260];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("scipy.io.harwell_boeing.hb"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 260; i++) {
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
void checkModuleConstants_scipy$io$harwell_boeing$hb(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 260; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_4cc2485ebb83a63af5ac01a2e92f30c3;
static PyCodeObject *codeobj_d3e45af51badf33c8f61f25aae3f5db1;
static PyCodeObject *codeobj_32e2c0e8cbf8487c2a479c826485dbad;
static PyCodeObject *codeobj_d25f54c44ce9e4671cce20190f28d090;
static PyCodeObject *codeobj_233f07dfbd088de3fdf58f78cec8e875;
static PyCodeObject *codeobj_b0c653888873cae870e43ae2c8cc443f;
static PyCodeObject *codeobj_a8c870835b8d4891de7ba15d8e4e2c18;
static PyCodeObject *codeobj_5070dd77cc4aec78a75556711c1106c3;
static PyCodeObject *codeobj_ba3bc58c2fca6134c30fe2eb32c6ef9a;
static PyCodeObject *codeobj_21633eb5cf88f1fb114519a5471da259;
static PyCodeObject *codeobj_7f2b60de701bae8eb94d771b1ac9d6ac;
static PyCodeObject *codeobj_63471265663335d37b4abf444bc4360e;
static PyCodeObject *codeobj_cbf9cfe4a500608a8f9d134189a859fb;
static PyCodeObject *codeobj_b0c2dafd22b673654bf9cb4272975353;
static PyCodeObject *codeobj_e6e115e75587ef2af2e867e2fbd064e7;
static PyCodeObject *codeobj_3c60e870bc7e96cd347f92ec2c7f05d2;
static PyCodeObject *codeobj_3b4f5d3e1b5e08e3aee1e59a6659ee66;
static PyCodeObject *codeobj_ff402aa9e00337d4bbb3159d876138d5;
static PyCodeObject *codeobj_032c1d28309effb86d2888c632ef4c52;
static PyCodeObject *codeobj_16df74a84411d3ebdb4bb683dfc064b0;
static PyCodeObject *codeobj_d62e12bc70a5dd098510fe9170637348;
static PyCodeObject *codeobj_a885af5c1f91203dc081f15b5c367ca8;
static PyCodeObject *codeobj_c06f66e29131adca42daed6ed849a495;
static PyCodeObject *codeobj_6a0c186bda6403387db932037b971c77;
static PyCodeObject *codeobj_1ea928f12c9ac5fb549d9fbf0f1e6436;
static PyCodeObject *codeobj_9751aee207b4e57e80d39edb1784f5c0;
static PyCodeObject *codeobj_f26fe65bb302d137c0096ce879504c33;
static PyCodeObject *codeobj_3e0abf947a208e56ac91311a0586c0de;
static PyCodeObject *codeobj_9b6d65c2f4ea78f1daf854696c7eacf7;
static PyCodeObject *codeobj_18ae6c3623c95d3d59503ada56f548bb;
static PyCodeObject *codeobj_8bd46b9ddf6f206fa7710ac5a1cc862d;
static PyCodeObject *codeobj_4c57b98927fb2497d34d6d0998e45059;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[235]); CHECK_OBJECT(module_filename_obj);
    codeobj_4cc2485ebb83a63af5ac01a2e92f30c3 = MAKE_CODE_OBJECT(module_filename_obj, 383, CO_NOFREE, mod_consts[236], mod_consts[236], mod_consts[237], NULL, 1, 0, 0);
    codeobj_d3e45af51badf33c8f61f25aae3f5db1 = MAKE_CODE_OBJECT(module_filename_obj, 384, CO_NOFREE, mod_consts[236], mod_consts[236], mod_consts[237], NULL, 1, 0, 0);
    codeobj_32e2c0e8cbf8487c2a479c826485dbad = MAKE_CODE_OBJECT(module_filename_obj, 385, CO_NOFREE, mod_consts[236], mod_consts[236], mod_consts[237], NULL, 1, 0, 0);
    codeobj_d25f54c44ce9e4671cce20190f28d090 = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[238], mod_consts[238], NULL, NULL, 0, 0, 0);
    codeobj_233f07dfbd088de3fdf58f78cec8e875 = MAKE_CODE_OBJECT(module_filename_obj, 423, CO_NOFREE, mod_consts[168], mod_consts[168], mod_consts[239], NULL, 0, 0, 0);
    codeobj_b0c653888873cae870e43ae2c8cc443f = MAKE_CODE_OBJECT(module_filename_obj, 362, CO_NOFREE, mod_consts[31], mod_consts[31], mod_consts[239], NULL, 0, 0, 0);
    codeobj_a8c870835b8d4891de7ba15d8e4e2c18 = MAKE_CODE_OBJECT(module_filename_obj, 424, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[208], mod_consts[208], mod_consts[240], NULL, 3, 0, 0);
    codeobj_5070dd77cc4aec78a75556711c1106c3 = MAKE_CODE_OBJECT(module_filename_obj, 209, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[208], mod_consts[208], mod_consts[241], NULL, 16, 0, 0);
    codeobj_ba3bc58c2fca6134c30fe2eb32c6ef9a = MAKE_CODE_OBJECT(module_filename_obj, 400, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[208], mod_consts[208], mod_consts[242], NULL, 4, 0, 0);
    codeobj_21633eb5cf88f1fb114519a5471da259 = MAKE_CODE_OBJECT(module_filename_obj, 418, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[222], mod_consts[222], mod_consts[243], NULL, 1, 0, 0);
    codeobj_7f2b60de701bae8eb94d771b1ac9d6ac = MAKE_CODE_OBJECT(module_filename_obj, 300, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[49], mod_consts[49], mod_consts[244], NULL, 2, 0, 0);
    codeobj_63471265663335d37b4abf444bc4360e = MAKE_CODE_OBJECT(module_filename_obj, 507, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[162], mod_consts[162], mod_consts[245], NULL, 1, 0, 0);
    codeobj_cbf9cfe4a500608a8f9d134189a859fb = MAKE_CODE_OBJECT(module_filename_obj, 40, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[106], mod_consts[106], mod_consts[246], NULL, 2, 0, 0);
    codeobj_b0c2dafd22b673654bf9cb4272975353 = MAKE_CODE_OBJECT(module_filename_obj, 106, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[35], mod_consts[35], mod_consts[247], NULL, 2, 0, 0);
    codeobj_e6e115e75587ef2af2e867e2fbd064e7 = MAKE_CODE_OBJECT(module_filename_obj, 309, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[160], mod_consts[160], mod_consts[248], NULL, 2, 0, 0);
    codeobj_3c60e870bc7e96cd347f92ec2c7f05d2 = MAKE_CODE_OBJECT(module_filename_obj, 563, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[171], mod_consts[171], mod_consts[249], mod_consts[250], 1, 0, 0);
    codeobj_3b4f5d3e1b5e08e3aee1e59a6659ee66 = MAKE_CODE_OBJECT(module_filename_obj, 333, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[161], mod_consts[161], mod_consts[251], NULL, 3, 0, 0);
    codeobj_ff402aa9e00337d4bbb3159d876138d5 = MAKE_CODE_OBJECT(module_filename_obj, 281, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[138], mod_consts[138], mod_consts[252], NULL, 1, 0, 0);
    codeobj_032c1d28309effb86d2888c632ef4c52 = MAKE_CODE_OBJECT(module_filename_obj, 412, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[38], mod_consts[38], mod_consts[243], NULL, 1, 0, 0);
    codeobj_16df74a84411d3ebdb4bb683dfc064b0 = MAKE_CODE_OBJECT(module_filename_obj, 47, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[170], mod_consts[170], mod_consts[253], NULL, 6, 0, 0);
    codeobj_d62e12bc70a5dd098510fe9170637348 = MAKE_CODE_OBJECT(module_filename_obj, 124, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[157], mod_consts[157], mod_consts[254], NULL, 2, 0, 0);
    codeobj_a885af5c1f91203dc081f15b5c367ca8 = MAKE_CODE_OBJECT(module_filename_obj, 387, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[62], mod_consts[62], mod_consts[255], NULL, 2, 0, 0);
    codeobj_c06f66e29131adca42daed6ed849a495 = MAKE_CODE_OBJECT(module_filename_obj, 470, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[233], mod_consts[233], mod_consts[256], NULL, 1, 0, 0);
    codeobj_6a0c186bda6403387db932037b971c77 = MAKE_CODE_OBJECT(module_filename_obj, 518, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[234], mod_consts[234], mod_consts[257], NULL, 3, 0, 0);
    codeobj_1ea928f12c9ac5fb549d9fbf0f1e6436 = MAKE_CODE_OBJECT(module_filename_obj, 447, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[79], mod_consts[79], mod_consts[243], NULL, 1, 0, 0);
    codeobj_9751aee207b4e57e80d39edb1784f5c0 = MAKE_CODE_OBJECT(module_filename_obj, 463, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[169], mod_consts[169], mod_consts[243], NULL, 1, 0, 0);
    codeobj_f26fe65bb302d137c0096ce879504c33 = MAKE_CODE_OBJECT(module_filename_obj, 459, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[67], mod_consts[67], mod_consts[243], NULL, 1, 0, 0);
    codeobj_3e0abf947a208e56ac91311a0586c0de = MAKE_CODE_OBJECT(module_filename_obj, 455, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[65], mod_consts[65], mod_consts[243], NULL, 1, 0, 0);
    codeobj_9b6d65c2f4ea78f1daf854696c7eacf7 = MAKE_CODE_OBJECT(module_filename_obj, 443, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[78], mod_consts[78], mod_consts[243], NULL, 1, 0, 0);
    codeobj_18ae6c3623c95d3d59503ada56f548bb = MAKE_CODE_OBJECT(module_filename_obj, 451, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[227], mod_consts[227], mod_consts[243], NULL, 1, 0, 0);
    codeobj_8bd46b9ddf6f206fa7710ac5a1cc862d = MAKE_CODE_OBJECT(module_filename_obj, 336, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[135], mod_consts[135], mod_consts[258], NULL, 4, 0, 0);
    codeobj_4c57b98927fb2497d34d6d0998e45059 = MAKE_CODE_OBJECT(module_filename_obj, 466, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[176], mod_consts[176], mod_consts[259], NULL, 2, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__10___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__11_fortran_format();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__12___repr__();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__13___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__14_title();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__15_key();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__16_type();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__17_structure();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__18_storage();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__19_read_matrix();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__1__nbytes_full();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__20_write_matrix();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__21_hb_read();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__21_hb_read$$$function__1__get_matrix();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__22_hb_write(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__22_hb_write$$$function__1__set_matrix(struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__2_from_data(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__2_from_data$$$function__1__nlines();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__3_from_file();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__4___init__(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__5_dump();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__6__expect_int(PyObject *defaults);


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__7__read_hb_data();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__8__write_data();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__8__write_data$$$function__1_write_array();


static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__9_from_fortran();


// The module function definitions.
static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__1__nbytes_full(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fmt = python_pars[0];
    PyObject *par_nlines = python_pars[1];
    struct Nuitka_FrameObject *frame_cbf9cfe4a500608a8f9d134189a859fb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_cbf9cfe4a500608a8f9d134189a859fb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_cbf9cfe4a500608a8f9d134189a859fb)) {
        Py_XDECREF(cache_frame_cbf9cfe4a500608a8f9d134189a859fb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_cbf9cfe4a500608a8f9d134189a859fb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_cbf9cfe4a500608a8f9d134189a859fb = MAKE_FUNCTION_FRAME(codeobj_cbf9cfe4a500608a8f9d134189a859fb, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_cbf9cfe4a500608a8f9d134189a859fb->m_type_description == NULL);
    frame_cbf9cfe4a500608a8f9d134189a859fb = cache_frame_cbf9cfe4a500608a8f9d134189a859fb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_cbf9cfe4a500608a8f9d134189a859fb);
    assert(Py_REFCNT(frame_cbf9cfe4a500608a8f9d134189a859fb) == 2);

    // Framed code:
    {
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(par_fmt);
        tmp_expression_value_1 = par_fmt;
        tmp_mult_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fmt);
        tmp_expression_value_2 = par_fmt;
        tmp_mult_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[1]);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[2];
        tmp_mult_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nlines);
        tmp_sub_expr_left_1 = par_nlines;
        tmp_sub_expr_right_1 = mod_consts[2];
        tmp_mult_expr_right_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 43;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
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
        exception_tb = MAKE_TRACEBACK(frame_cbf9cfe4a500608a8f9d134189a859fb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_cbf9cfe4a500608a8f9d134189a859fb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_cbf9cfe4a500608a8f9d134189a859fb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_cbf9cfe4a500608a8f9d134189a859fb,
        type_description_1,
        par_fmt,
        par_nlines
    );


    // Release cached frame if used for exception.
    if (frame_cbf9cfe4a500608a8f9d134189a859fb == cache_frame_cbf9cfe4a500608a8f9d134189a859fb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_cbf9cfe4a500608a8f9d134189a859fb);
        cache_frame_cbf9cfe4a500608a8f9d134189a859fb = NULL;
    }

    assertFrameObject(frame_cbf9cfe4a500608a8f9d134189a859fb);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto function_exception_exit;
    frame_no_exception_1:;

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_fmt);
    Py_DECREF(par_fmt);
    CHECK_OBJECT(par_nlines);
    Py_DECREF(par_nlines);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fmt);
    Py_DECREF(par_fmt);
    CHECK_OBJECT(par_nlines);
    Py_DECREF(par_nlines);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__2_from_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_m = python_pars[1];
    PyObject *par_title = python_pars[2];
    PyObject *par_key = python_pars[3];
    PyObject *par_mxtype = python_pars[4];
    PyObject *par_fmt = python_pars[5];
    PyObject *var_pointer = NULL;
    PyObject *var_indices = NULL;
    PyObject *var_values = NULL;
    PyObject *var_nrows = NULL;
    PyObject *var_ncols = NULL;
    PyObject *var_nnon_zeros = NULL;
    PyObject *var_pointer_fmt = NULL;
    PyObject *var_indices_fmt = NULL;
    PyObject *var_values_fmt = NULL;
    PyObject *var_tp = NULL;
    PyObject *var__nlines = NULL;
    PyObject *var_pointer_nlines = NULL;
    PyObject *var_indices_nlines = NULL;
    PyObject *var_values_nlines = NULL;
    PyObject *var_total_nlines = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_16df74a84411d3ebdb4bb683dfc064b0;
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
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_16df74a84411d3ebdb4bb683dfc064b0 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_16df74a84411d3ebdb4bb683dfc064b0)) {
        Py_XDECREF(cache_frame_16df74a84411d3ebdb4bb683dfc064b0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_16df74a84411d3ebdb4bb683dfc064b0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_16df74a84411d3ebdb4bb683dfc064b0 = MAKE_FUNCTION_FRAME(codeobj_16df74a84411d3ebdb4bb683dfc064b0, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_16df74a84411d3ebdb4bb683dfc064b0->m_type_description == NULL);
    frame_16df74a84411d3ebdb4bb683dfc064b0 = cache_frame_16df74a84411d3ebdb4bb683dfc064b0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_16df74a84411d3ebdb4bb683dfc064b0);
    assert(Py_REFCNT(frame_16df74a84411d3ebdb4bb683dfc064b0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_m);
        tmp_expression_value_1 = par_m;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 68;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[5], 0), mod_consts[6]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_m;
            assert(old != NULL);
            par_m = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_m);
        tmp_expression_value_2 = par_m;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[7]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 70;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pointer == NULL);
        var_pointer = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_m);
        tmp_expression_value_3 = par_m;
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[8]);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 71;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_indices == NULL);
        var_indices = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_m);
        tmp_expression_value_4 = par_m;
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[9]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 72;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_values == NULL);
        var_values = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(par_m);
        tmp_expression_value_5 = par_m;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[10]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_5 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;
            type_description_1 = "ooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 74;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
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


            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 74;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_7;
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

                    type_description_1 = "ooooooooooooooooooooo";
                    exception_lineno = 74;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[11];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooooooooooooooooo";
            exception_lineno = 74;
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
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_8 = tmp_tuple_unpack_1__element_1;
        assert(var_nrows == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_nrows = tmp_assign_source_8;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_9 = tmp_tuple_unpack_1__element_2;
        assert(var_ncols == NULL);
        Py_INCREF(tmp_assign_source_9);
        var_ncols = tmp_assign_source_9;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_expression_value_6;
        CHECK_OBJECT(par_m);
        tmp_expression_value_6 = par_m;
        tmp_assign_source_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[12]);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 75;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nnon_zeros == NULL);
        var_nnon_zeros = tmp_assign_source_10;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_fmt);
        tmp_cmp_expr_left_1 = par_fmt;
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
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_7 == NULL)) {
            tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[14]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[16]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pointer);
        tmp_add_expr_left_1 = var_pointer;
        tmp_add_expr_right_1 = mod_consts[2];
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 80;
        tmp_args_element_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 80;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 80;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pointer_fmt == NULL);
        var_pointer_fmt = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[14]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_10 == NULL)) {
            tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[16]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_indices);
        tmp_add_expr_left_2 = var_indices;
        tmp_add_expr_right_2 = mod_consts[2];
        tmp_args_element_value_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 81;
        tmp_args_element_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_4);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 81;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 81;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_indices_fmt == NULL);
        var_indices_fmt = tmp_assign_source_12;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_values);
        tmp_expression_value_12 = var_values;
        tmp_expression_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[17]);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[18]);
        Py_DECREF(tmp_expression_value_11);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[19]);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[20];
        tmp_cmp_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_2);

            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 83;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_2 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_7;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[14]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[16]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_values);
        tmp_args_element_value_7 = var_values;
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 84;
        tmp_args_element_value_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[22], tmp_args_element_value_7);
        if (tmp_args_element_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 84;
        tmp_operand_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_6);
        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_args_element_value_6);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_5 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 84;
        tmp_assign_source_13 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_5);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 84;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_values_fmt == NULL);
        var_values_fmt = tmp_assign_source_13;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_values);
        tmp_expression_value_18 = var_values;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[17]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[18]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_cmp_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_20 == NULL)) {
            tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[19]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_2 = mod_consts[23];
        tmp_cmp_expr_right_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_3);

            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 85;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_10;
        tmp_expression_value_21 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_expression_value_21 == NULL)) {
            tmp_expression_value_21 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_expression_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[14]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_22 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_22 == NULL)) {
            tmp_expression_value_22 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[16]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_values);
        tmp_args_element_value_10 = var_values;
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 86;
        tmp_args_element_value_9 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[22], tmp_args_element_value_10);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);
            Py_DECREF(tmp_called_value_9);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 86;
        tmp_operand_value_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_9);
        Py_DECREF(tmp_called_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_8 = UNARY_OPERATION(PyNumber_Negative, tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 86;
        tmp_assign_source_14 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_8, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_values_fmt == NULL);
        var_values_fmt = tmp_assign_source_14;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_expression_value_24;
        tmp_mod_expr_left_1 = mod_consts[24];
        CHECK_OBJECT(var_values);
        tmp_expression_value_24 = var_values;
        tmp_expression_value_23 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[17]);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[18]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 88;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 88;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_3:;
    branch_end_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[25];
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 90;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 90;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_1:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(par_mxtype);
        tmp_cmp_expr_left_4 = par_mxtype;
        tmp_cmp_expr_right_4 = Py_None;
        tmp_condition_result_4 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_11;
        tmp_called_instance_3 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_called_instance_3 == NULL)) {
            tmp_called_instance_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_values);
        tmp_args_element_value_11 = var_values;
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 93;
        tmp_operand_value_3 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[26], tmp_args_element_value_11);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
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
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[27];
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 94;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 94;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(var_values);
        tmp_expression_value_26 = var_values;
        tmp_expression_value_25 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[17]);
        if (tmp_expression_value_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[18]);
        Py_DECREF(tmp_expression_value_25);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_28 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_28 == NULL)) {
            tmp_expression_value_28 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_27 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[19]);
        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_3 = mod_consts[23];
        tmp_cmp_expr_right_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_27, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_27);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_5);

            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 95;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = mod_consts[28];
        assert(var_tp == NULL);
        Py_INCREF(tmp_assign_source_15);
        var_tp = tmp_assign_source_15;
    }
    goto branch_end_6;
    branch_no_6:;
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_29;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_expression_value_31;
        PyObject *tmp_expression_value_32;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(var_values);
        tmp_expression_value_30 = var_values;
        tmp_expression_value_29 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[17]);
        if (tmp_expression_value_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[18]);
        Py_DECREF(tmp_expression_value_29);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_32 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_32 == NULL)) {
            tmp_expression_value_32 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_32, mod_consts[19]);
        if (tmp_expression_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_4 = mod_consts[20];
        tmp_cmp_expr_right_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_31, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_31);
        if (tmp_cmp_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_cmp_expr_left_6);

            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 1) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = mod_consts[29];
        assert(var_tp == NULL);
        Py_INCREF(tmp_assign_source_16);
        var_tp = tmp_assign_source_16;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_expression_value_33;
        tmp_mod_expr_left_2 = mod_consts[30];
        CHECK_OBJECT(var_values);
        tmp_expression_value_33 = var_values;
        tmp_mod_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_33, mod_consts[17]);
        if (tmp_mod_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_make_exception_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 101;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 100;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_NotImplementedError, tmp_make_exception_arg_4);
        Py_DECREF(tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 100;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_7:;
    branch_end_6:;
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_10;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        tmp_called_value_10 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_value_10 == NULL)) {
            tmp_called_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_tp);
        tmp_args_element_value_12 = var_tp;
        tmp_args_element_value_13 = mod_consts[32];
        tmp_args_element_value_14 = mod_consts[33];
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 102;
        {
            PyObject *call_args[] = {tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_10, call_args);
        }

        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_mxtype;
            assert(old != NULL);
            par_mxtype = tmp_assign_source_17;
            Py_DECREF(old);
        }

    }
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_5;
        tmp_make_exception_arg_5 = mod_consts[34];
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 104;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_5 == NULL));
        exception_type = tmp_raise_type_5;
        exception_lineno = 104;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_18;


        tmp_assign_source_18 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__2_from_data$$$function__1__nlines();

        assert(var__nlines == NULL);
        var__nlines = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_11;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_expression_value_34;
        CHECK_OBJECT(var__nlines);
        tmp_called_value_11 = var__nlines;
        CHECK_OBJECT(var_pointer_fmt);
        tmp_args_element_value_15 = var_pointer_fmt;
        CHECK_OBJECT(var_pointer);
        tmp_expression_value_34 = var_pointer;
        tmp_args_element_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_34, mod_consts[37]);
        if (tmp_args_element_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 112;
        {
            PyObject *call_args[] = {tmp_args_element_value_15, tmp_args_element_value_16};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_11, call_args);
        }

        Py_DECREF(tmp_args_element_value_16);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pointer_nlines == NULL);
        var_pointer_nlines = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_expression_value_35;
        CHECK_OBJECT(var__nlines);
        tmp_called_value_12 = var__nlines;
        CHECK_OBJECT(var_indices_fmt);
        tmp_args_element_value_17 = var_indices_fmt;
        CHECK_OBJECT(var_indices);
        tmp_expression_value_35 = var_indices;
        tmp_args_element_value_18 = LOOKUP_ATTRIBUTE(tmp_expression_value_35, mod_consts[37]);
        if (tmp_args_element_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 113;
        {
            PyObject *call_args[] = {tmp_args_element_value_17, tmp_args_element_value_18};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_12, call_args);
        }

        Py_DECREF(tmp_args_element_value_18);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_indices_nlines == NULL);
        var_indices_nlines = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_expression_value_36;
        CHECK_OBJECT(var__nlines);
        tmp_called_value_13 = var__nlines;
        CHECK_OBJECT(var_values_fmt);
        tmp_args_element_value_19 = var_values_fmt;
        CHECK_OBJECT(var_values);
        tmp_expression_value_36 = var_values;
        tmp_args_element_value_20 = LOOKUP_ATTRIBUTE(tmp_expression_value_36, mod_consts[37]);
        if (tmp_args_element_value_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 114;
        {
            PyObject *call_args[] = {tmp_args_element_value_19, tmp_args_element_value_20};
            tmp_assign_source_21 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_13, call_args);
        }

        Py_DECREF(tmp_args_element_value_20);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_values_nlines == NULL);
        var_values_nlines = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        CHECK_OBJECT(var_pointer_nlines);
        tmp_add_expr_left_4 = var_pointer_nlines;
        CHECK_OBJECT(var_indices_nlines);
        tmp_add_expr_right_4 = var_indices_nlines;
        tmp_add_expr_left_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_values_nlines);
        tmp_add_expr_right_3 = var_values_nlines;
        tmp_assign_source_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 116;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total_nlines == NULL);
        var_total_nlines = tmp_assign_source_22;
    }
    {
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        PyObject *tmp_args_element_value_26;
        PyObject *tmp_args_element_value_27;
        PyObject *tmp_args_element_value_28;
        PyObject *tmp_args_element_value_29;
        PyObject *tmp_args_element_value_30;
        PyObject *tmp_args_element_value_31;
        PyObject *tmp_expression_value_37;
        PyObject *tmp_args_element_value_32;
        PyObject *tmp_expression_value_38;
        PyObject *tmp_args_element_value_33;
        PyObject *tmp_expression_value_39;
        CHECK_OBJECT(par_cls);
        tmp_called_value_14 = par_cls;
        CHECK_OBJECT(par_title);
        tmp_args_element_value_21 = par_title;
        CHECK_OBJECT(par_key);
        tmp_args_element_value_22 = par_key;
        CHECK_OBJECT(var_total_nlines);
        tmp_args_element_value_23 = var_total_nlines;
        CHECK_OBJECT(var_pointer_nlines);
        tmp_args_element_value_24 = var_pointer_nlines;
        CHECK_OBJECT(var_indices_nlines);
        tmp_args_element_value_25 = var_indices_nlines;
        CHECK_OBJECT(var_values_nlines);
        tmp_args_element_value_26 = var_values_nlines;
        CHECK_OBJECT(par_mxtype);
        tmp_args_element_value_27 = par_mxtype;
        CHECK_OBJECT(var_nrows);
        tmp_args_element_value_28 = var_nrows;
        CHECK_OBJECT(var_ncols);
        tmp_args_element_value_29 = var_ncols;
        CHECK_OBJECT(var_nnon_zeros);
        tmp_args_element_value_30 = var_nnon_zeros;
        CHECK_OBJECT(var_pointer_fmt);
        tmp_expression_value_37 = var_pointer_fmt;
        tmp_args_element_value_31 = LOOKUP_ATTRIBUTE(tmp_expression_value_37, mod_consts[38]);
        if (tmp_args_element_value_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_indices_fmt);
        tmp_expression_value_38 = var_indices_fmt;
        tmp_args_element_value_32 = LOOKUP_ATTRIBUTE(tmp_expression_value_38, mod_consts[38]);
        if (tmp_args_element_value_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_31);

            exception_lineno = 121;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_values_fmt);
        tmp_expression_value_39 = var_values_fmt;
        tmp_args_element_value_33 = LOOKUP_ATTRIBUTE(tmp_expression_value_39, mod_consts[38]);
        if (tmp_args_element_value_33 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_31);
            Py_DECREF(tmp_args_element_value_32);

            exception_lineno = 122;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame.f_lineno = 118;
        {
            PyObject *call_args[] = {tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25, tmp_args_element_value_26, tmp_args_element_value_27, tmp_args_element_value_28, tmp_args_element_value_29, tmp_args_element_value_30, tmp_args_element_value_31, tmp_args_element_value_32, tmp_args_element_value_33};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS13(tmp_called_value_14, call_args);
        }

        Py_DECREF(tmp_args_element_value_31);
        Py_DECREF(tmp_args_element_value_32);
        Py_DECREF(tmp_args_element_value_33);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 118;
            type_description_1 = "ooooooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_16df74a84411d3ebdb4bb683dfc064b0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_16df74a84411d3ebdb4bb683dfc064b0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_16df74a84411d3ebdb4bb683dfc064b0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_16df74a84411d3ebdb4bb683dfc064b0,
        type_description_1,
        par_cls,
        par_m,
        par_title,
        par_key,
        par_mxtype,
        par_fmt,
        var_pointer,
        var_indices,
        var_values,
        var_nrows,
        var_ncols,
        var_nnon_zeros,
        var_pointer_fmt,
        var_indices_fmt,
        var_values_fmt,
        var_tp,
        var__nlines,
        var_pointer_nlines,
        var_indices_nlines,
        var_values_nlines,
        var_total_nlines
    );


    // Release cached frame if used for exception.
    if (frame_16df74a84411d3ebdb4bb683dfc064b0 == cache_frame_16df74a84411d3ebdb4bb683dfc064b0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_16df74a84411d3ebdb4bb683dfc064b0);
        cache_frame_16df74a84411d3ebdb4bb683dfc064b0 = NULL;
    }

    assertFrameObject(frame_16df74a84411d3ebdb4bb683dfc064b0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    par_m = NULL;
    CHECK_OBJECT(par_mxtype);
    Py_DECREF(par_mxtype);
    par_mxtype = NULL;
    CHECK_OBJECT(var_pointer);
    Py_DECREF(var_pointer);
    var_pointer = NULL;
    CHECK_OBJECT(var_indices);
    Py_DECREF(var_indices);
    var_indices = NULL;
    CHECK_OBJECT(var_values);
    Py_DECREF(var_values);
    var_values = NULL;
    CHECK_OBJECT(var_nrows);
    Py_DECREF(var_nrows);
    var_nrows = NULL;
    CHECK_OBJECT(var_ncols);
    Py_DECREF(var_ncols);
    var_ncols = NULL;
    CHECK_OBJECT(var_nnon_zeros);
    Py_DECREF(var_nnon_zeros);
    var_nnon_zeros = NULL;
    CHECK_OBJECT(var_pointer_fmt);
    Py_DECREF(var_pointer_fmt);
    var_pointer_fmt = NULL;
    CHECK_OBJECT(var_indices_fmt);
    Py_DECREF(var_indices_fmt);
    var_indices_fmt = NULL;
    CHECK_OBJECT(var_values_fmt);
    Py_DECREF(var_values_fmt);
    var_values_fmt = NULL;
    CHECK_OBJECT(var_tp);
    Py_DECREF(var_tp);
    var_tp = NULL;
    CHECK_OBJECT(var__nlines);
    Py_DECREF(var__nlines);
    var__nlines = NULL;
    CHECK_OBJECT(var_pointer_nlines);
    Py_DECREF(var_pointer_nlines);
    var_pointer_nlines = NULL;
    CHECK_OBJECT(var_indices_nlines);
    Py_DECREF(var_indices_nlines);
    var_indices_nlines = NULL;
    CHECK_OBJECT(var_values_nlines);
    Py_DECREF(var_values_nlines);
    var_values_nlines = NULL;
    CHECK_OBJECT(var_total_nlines);
    Py_DECREF(var_total_nlines);
    var_total_nlines = NULL;
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

    Py_XDECREF(par_m);
    par_m = NULL;
    Py_XDECREF(par_mxtype);
    par_mxtype = NULL;
    Py_XDECREF(var_pointer);
    var_pointer = NULL;
    Py_XDECREF(var_indices);
    var_indices = NULL;
    Py_XDECREF(var_values);
    var_values = NULL;
    Py_XDECREF(var_nrows);
    var_nrows = NULL;
    Py_XDECREF(var_ncols);
    var_ncols = NULL;
    Py_XDECREF(var_nnon_zeros);
    var_nnon_zeros = NULL;
    Py_XDECREF(var_pointer_fmt);
    var_pointer_fmt = NULL;
    Py_XDECREF(var_indices_fmt);
    var_indices_fmt = NULL;
    Py_XDECREF(var_values_fmt);
    var_values_fmt = NULL;
    Py_XDECREF(var_tp);
    var_tp = NULL;
    Py_XDECREF(var__nlines);
    var__nlines = NULL;
    Py_XDECREF(var_pointer_nlines);
    var_pointer_nlines = NULL;
    Py_XDECREF(var_indices_nlines);
    var_indices_nlines = NULL;
    Py_XDECREF(var_values_nlines);
    var_values_nlines = NULL;
    Py_XDECREF(var_total_nlines);
    var_total_nlines = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_fmt);
    Py_DECREF(par_fmt);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_title);
    Py_DECREF(par_title);
    CHECK_OBJECT(par_key);
    Py_DECREF(par_key);
    CHECK_OBJECT(par_fmt);
    Py_DECREF(par_fmt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__2_from_data$$$function__1__nlines(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fmt = python_pars[0];
    PyObject *par_size = python_pars[1];
    PyObject *var_nlines = NULL;
    struct Nuitka_FrameObject *frame_b0c2dafd22b673654bf9cb4272975353;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_b0c2dafd22b673654bf9cb4272975353 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_b0c2dafd22b673654bf9cb4272975353)) {
        Py_XDECREF(cache_frame_b0c2dafd22b673654bf9cb4272975353);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b0c2dafd22b673654bf9cb4272975353 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b0c2dafd22b673654bf9cb4272975353 = MAKE_FUNCTION_FRAME(codeobj_b0c2dafd22b673654bf9cb4272975353, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b0c2dafd22b673654bf9cb4272975353->m_type_description == NULL);
    frame_b0c2dafd22b673654bf9cb4272975353 = cache_frame_b0c2dafd22b673654bf9cb4272975353;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b0c2dafd22b673654bf9cb4272975353);
    assert(Py_REFCNT(frame_b0c2dafd22b673654bf9cb4272975353) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_floordiv_expr_left_1;
        PyObject *tmp_floordiv_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_size);
        tmp_floordiv_expr_left_1 = par_size;
        CHECK_OBJECT(par_fmt);
        tmp_expression_value_1 = par_fmt;
        tmp_floordiv_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[0]);
        if (tmp_floordiv_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_FLOORDIV_OBJECT_OBJECT_OBJECT(tmp_floordiv_expr_left_1, tmp_floordiv_expr_right_1);
        Py_DECREF(tmp_floordiv_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        assert(var_nlines == NULL);
        var_nlines = tmp_assign_source_1;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_nlines);
        tmp_mult_expr_left_1 = var_nlines;
        CHECK_OBJECT(par_fmt);
        tmp_expression_value_2 = par_fmt;
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_size);
        tmp_cmp_expr_right_1 = par_size;
        tmp_condition_result_1 = RICH_COMPARE_NE_NBOOL_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "ooo";
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        CHECK_OBJECT(var_nlines);
        tmp_iadd_expr_left_1 = var_nlines;
        tmp_iadd_expr_right_1 = mod_consts[2];
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_LONG(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = tmp_iadd_expr_left_1;
        var_nlines = tmp_assign_source_2;

    }
    branch_no_1:;
    if (var_nlines == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[40]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 110;
        type_description_1 = "ooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_nlines;
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
        exception_tb = MAKE_TRACEBACK(frame_b0c2dafd22b673654bf9cb4272975353, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b0c2dafd22b673654bf9cb4272975353->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b0c2dafd22b673654bf9cb4272975353, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b0c2dafd22b673654bf9cb4272975353,
        type_description_1,
        par_fmt,
        par_size,
        var_nlines
    );


    // Release cached frame if used for exception.
    if (frame_b0c2dafd22b673654bf9cb4272975353 == cache_frame_b0c2dafd22b673654bf9cb4272975353) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b0c2dafd22b673654bf9cb4272975353);
        cache_frame_b0c2dafd22b673654bf9cb4272975353 = NULL;
    }

    assertFrameObject(frame_b0c2dafd22b673654bf9cb4272975353);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_nlines);
    var_nlines = NULL;
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

    Py_XDECREF(var_nlines);
    var_nlines = NULL;
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
    CHECK_OBJECT(par_fmt);
    Py_DECREF(par_fmt);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fmt);
    Py_DECREF(par_fmt);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__3_from_file(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_fid = python_pars[1];
    PyObject *var_line = NULL;
    PyObject *var_title = NULL;
    PyObject *var_key = NULL;
    PyObject *var_total_nlines = NULL;
    PyObject *var_pointer_nlines = NULL;
    PyObject *var_indices_nlines = NULL;
    PyObject *var_values_nlines = NULL;
    PyObject *var_rhs_nlines = NULL;
    PyObject *var_mxtype_s = NULL;
    PyObject *var_mxtype = NULL;
    PyObject *var_nrows = NULL;
    PyObject *var_ncols = NULL;
    PyObject *var_nnon_zeros = NULL;
    PyObject *var_nelementals = NULL;
    PyObject *var_ct = NULL;
    struct Nuitka_FrameObject *frame_d62e12bc70a5dd098510fe9170637348;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_d62e12bc70a5dd098510fe9170637348 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_d62e12bc70a5dd098510fe9170637348)) {
        Py_XDECREF(cache_frame_d62e12bc70a5dd098510fe9170637348);

#if _DEBUG_REFCOUNTS
        if (cache_frame_d62e12bc70a5dd098510fe9170637348 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_d62e12bc70a5dd098510fe9170637348 = MAKE_FUNCTION_FRAME(codeobj_d62e12bc70a5dd098510fe9170637348, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_d62e12bc70a5dd098510fe9170637348->m_type_description == NULL);
    frame_d62e12bc70a5dd098510fe9170637348 = cache_frame_d62e12bc70a5dd098510fe9170637348;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d62e12bc70a5dd098510fe9170637348);
    assert(Py_REFCNT(frame_d62e12bc70a5dd098510fe9170637348) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_fid);
        tmp_called_instance_1 = par_fid;
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 139;
        tmp_expression_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[41]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[42]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 139;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[43]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_line == NULL);
        var_line = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(var_line);
        tmp_len_arg_1 = var_line;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 72;
        tmp_condition_result_1 = RICH_COMPARE_LE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
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
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[44];
        CHECK_OBJECT(var_line);
        tmp_mod_expr_right_1 = var_line;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 141;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 141;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(var_line);
        tmp_expression_value_2 = var_line;
        tmp_subscript_value_1 = mod_consts[45];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_title == NULL);
        var_title = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_line);
        tmp_expression_value_3 = var_line;
        tmp_subscript_value_2 = mod_consts[46];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 144;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_key == NULL);
        var_key = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(par_fid);
        tmp_called_instance_2 = par_fid;
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 147;
        tmp_expression_value_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[41]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[42]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 147;
        tmp_assign_source_4 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[43]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 147;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_line;
            assert(old != NULL);
            var_line = tmp_assign_source_4;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_line);
        tmp_expression_value_5 = var_line;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[47]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 148;
        tmp_len_arg_2 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_len_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_2);
        Py_DECREF(tmp_len_arg_2);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 148;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 56;
        tmp_condition_result_2 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
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
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_mod_expr_left_2 = mod_consts[48];
        CHECK_OBJECT(var_line);
        tmp_mod_expr_right_2 = var_line;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 150;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 149;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 149;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_3;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_line);
        tmp_expression_value_6 = var_line;
        tmp_subscript_value_3 = mod_consts[50];
        tmp_args_element_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 151;
        tmp_assign_source_5 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 151;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_total_nlines == NULL);
        var_total_nlines = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_4;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_line);
        tmp_expression_value_7 = var_line;
        tmp_subscript_value_4 = mod_consts[51];
        tmp_args_element_value_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 152;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 152;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pointer_nlines == NULL);
        var_pointer_nlines = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_5;
        tmp_called_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_6 == NULL)) {
            tmp_called_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_line);
        tmp_expression_value_8 = var_line;
        tmp_subscript_value_5 = mod_consts[52];
        tmp_args_element_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_5);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 153;
        tmp_assign_source_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_6, tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 153;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_indices_nlines == NULL);
        var_indices_nlines = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_7;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_6;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_line);
        tmp_expression_value_9 = var_line;
        tmp_subscript_value_6 = mod_consts[53];
        tmp_args_element_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_6);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 154;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_7, tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_values_nlines == NULL);
        var_values_nlines = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(var_line);
        tmp_expression_value_11 = var_line;
        tmp_subscript_value_7 = mod_consts[54];
        tmp_expression_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_7);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[42]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 156;
        tmp_assign_source_9 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
        Py_DECREF(tmp_called_value_8);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_rhs_nlines == NULL);
        var_rhs_nlines = tmp_assign_source_9;
    }
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(var_rhs_nlines);
        tmp_cmp_expr_left_3 = var_rhs_nlines;
        tmp_cmp_expr_right_3 = mod_consts[55];
        tmp_condition_result_3 = RICH_COMPARE_EQ_NBOOL_OBJECT_UNICODE(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooooooooooooo";
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
        PyObject *tmp_assign_source_10;
        tmp_assign_source_10 = mod_consts[56];
        {
            PyObject *old = var_rhs_nlines;
            assert(old != NULL);
            var_rhs_nlines = tmp_assign_source_10;
            Py_INCREF(var_rhs_nlines);
            Py_DECREF(old);
        }

    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_9;
        PyObject *tmp_args_element_value_5;
        tmp_called_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_9 == NULL)) {
            tmp_called_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rhs_nlines);
        tmp_args_element_value_5 = var_rhs_nlines;
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 160;
        tmp_assign_source_11 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 160;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_rhs_nlines;
            assert(old != NULL);
            var_rhs_nlines = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_end_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        CHECK_OBJECT(var_rhs_nlines);
        tmp_cmp_expr_left_4 = var_rhs_nlines;
        tmp_cmp_expr_right_4 = mod_consts[56];
        tmp_operand_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 161;
            type_description_1 = "ooooooooooooooooo";
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
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        tmp_make_exception_arg_3 = mod_consts[57];
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 162;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 162;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_4:;
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_fid);
        tmp_called_instance_3 = par_fid;
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 166;
        tmp_expression_value_12 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[41]);
        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[42]);
        Py_DECREF(tmp_expression_value_12);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 166;
        tmp_assign_source_12 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_10, mod_consts[43]);

        Py_DECREF(tmp_called_value_10);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 166;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_line;
            assert(old != NULL);
            var_line = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_5;
        nuitka_digit tmp_cmp_expr_right_5;
        PyObject *tmp_len_arg_3;
        CHECK_OBJECT(var_line);
        tmp_len_arg_3 = var_line;
        tmp_cmp_expr_left_5 = BUILTIN_LEN(tmp_len_arg_3);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = 70;
        tmp_condition_result_5 = RICH_COMPARE_LT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        tmp_mod_expr_left_3 = mod_consts[58];
        CHECK_OBJECT(var_line);
        tmp_mod_expr_right_3 = var_line;
        tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        if (tmp_make_exception_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 168;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_4);
        Py_DECREF(tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 168;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_value_11;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(var_line);
        tmp_expression_value_14 = var_line;
        tmp_subscript_value_8 = mod_consts[59];
        tmp_expression_value_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_8);
        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[60]);
        Py_DECREF(tmp_expression_value_13);
        if (tmp_called_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 171;
        tmp_assign_source_13 = CALL_FUNCTION_NO_ARGS(tmp_called_value_11);
        Py_DECREF(tmp_called_value_11);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mxtype_s == NULL);
        var_mxtype_s = tmp_assign_source_13;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_cmp_expr_left_6;
        nuitka_digit tmp_cmp_expr_right_6;
        PyObject *tmp_len_arg_4;
        CHECK_OBJECT(var_mxtype_s);
        tmp_len_arg_4 = var_mxtype_s;
        tmp_cmp_expr_left_6 = BUILTIN_LEN(tmp_len_arg_4);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = 3;
        tmp_condition_result_6 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_6, tmp_cmp_expr_right_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_5;
        tmp_make_exception_arg_5 = mod_consts[61];
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 173;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_5 == NULL));
        exception_type = tmp_raise_type_5;
        exception_lineno = 173;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_args_element_value_6;
        tmp_called_instance_4 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[31]);

        if (unlikely(tmp_called_instance_4 == NULL)) {
            tmp_called_instance_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[31]);
        }

        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_mxtype_s);
        tmp_args_element_value_6 = var_mxtype_s;
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 175;
        tmp_assign_source_14 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_4, mod_consts[62], tmp_args_element_value_6);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 175;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_mxtype == NULL);
        var_mxtype = tmp_assign_source_14;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_cmp_expr_left_7;
        PyObject *tmp_cmp_expr_right_7;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(var_mxtype);
        tmp_expression_value_15 = var_mxtype;
        tmp_cmp_expr_left_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[63]);
        if (tmp_cmp_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_7 = MAKE_LIST2(mod_consts[29],mod_consts[28]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_7, tmp_cmp_expr_left_7);
        Py_DECREF(tmp_cmp_expr_left_7);
        Py_DECREF(tmp_cmp_expr_right_7);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 176;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_make_exception_arg_6;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        tmp_mod_expr_left_4 = mod_consts[64];
        CHECK_OBJECT(var_mxtype);
        tmp_mod_expr_right_4 = var_mxtype;
        tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        if (tmp_make_exception_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 178;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 177;
        tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_6);
        Py_DECREF(tmp_make_exception_arg_6);
        assert(!(tmp_raise_type_6 == NULL));
        exception_type = tmp_raise_type_6;
        exception_lineno = 177;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_cmp_expr_left_8;
        PyObject *tmp_cmp_expr_right_8;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(var_mxtype);
        tmp_expression_value_16 = var_mxtype;
        tmp_cmp_expr_left_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[65]);
        if (tmp_cmp_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_8 = mod_consts[32];
        tmp_operand_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_8, tmp_cmp_expr_right_8);
        Py_DECREF(tmp_cmp_expr_left_8);
        if (tmp_operand_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        Py_DECREF(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 179;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_7;
        PyObject *tmp_make_exception_arg_7;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        tmp_mod_expr_left_5 = mod_consts[66];
        CHECK_OBJECT(var_mxtype);
        tmp_mod_expr_right_5 = var_mxtype;
        tmp_make_exception_arg_7 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        if (tmp_make_exception_arg_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 181;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 180;
        tmp_raise_type_7 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_7);
        Py_DECREF(tmp_make_exception_arg_7);
        assert(!(tmp_raise_type_7 == NULL));
        exception_type = tmp_raise_type_7;
        exception_lineno = 180;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    {
        bool tmp_condition_result_9;
        PyObject *tmp_operand_value_3;
        PyObject *tmp_cmp_expr_left_9;
        PyObject *tmp_cmp_expr_right_9;
        PyObject *tmp_expression_value_17;
        CHECK_OBJECT(var_mxtype);
        tmp_expression_value_17 = var_mxtype;
        tmp_cmp_expr_left_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[67]);
        if (tmp_cmp_expr_left_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_9 = mod_consts[33];
        tmp_operand_value_3 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_9, tmp_cmp_expr_right_9);
        Py_DECREF(tmp_cmp_expr_left_9);
        if (tmp_operand_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_3);
        Py_DECREF(tmp_operand_value_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 182;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_9 != false) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        PyObject *tmp_raise_type_8;
        PyObject *tmp_make_exception_arg_8;
        tmp_make_exception_arg_8 = mod_consts[68];
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 183;
        tmp_raise_type_8 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_8);
        assert(!(tmp_raise_type_8 == NULL));
        exception_type = tmp_raise_type_8;
        exception_lineno = 183;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_operand_value_4;
        PyObject *tmp_cmp_expr_left_10;
        PyObject *tmp_cmp_expr_right_10;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_line);
        tmp_expression_value_18 = var_line;
        tmp_subscript_value_9 = mod_consts[69];
        tmp_cmp_expr_left_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_9);
        if (tmp_cmp_expr_left_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_10 = mod_consts[70];
        tmp_operand_value_4 = RICH_COMPARE_EQ_OBJECT_OBJECT_UNICODE(tmp_cmp_expr_left_10, tmp_cmp_expr_right_10);
        Py_DECREF(tmp_cmp_expr_left_10);
        if (tmp_operand_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_4);
        Py_DECREF(tmp_operand_value_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 185;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_9;
        PyObject *tmp_make_exception_arg_9;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        tmp_mod_expr_left_6 = mod_consts[71];
        CHECK_OBJECT(var_line);
        tmp_mod_expr_right_6 = var_line;
        tmp_make_exception_arg_9 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        if (tmp_make_exception_arg_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 186;
        tmp_raise_type_9 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_9);
        Py_DECREF(tmp_make_exception_arg_9);
        assert(!(tmp_raise_type_9 == NULL));
        exception_type = tmp_raise_type_9;
        exception_lineno = 186;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_12;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_10;
        tmp_called_value_12 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_12 == NULL)) {
            tmp_called_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_line);
        tmp_expression_value_19 = var_line;
        tmp_subscript_value_10 = mod_consts[51];
        tmp_args_element_value_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_10);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 188;
        tmp_assign_source_15 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_7);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nrows == NULL);
        var_nrows = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_13;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_11;
        tmp_called_value_13 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_13 == NULL)) {
            tmp_called_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_line);
        tmp_expression_value_20 = var_line;
        tmp_subscript_value_11 = mod_consts[52];
        tmp_args_element_value_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_11);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 189;
        tmp_assign_source_16 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_8);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ncols == NULL);
        var_ncols = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_14;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_12;
        tmp_called_value_14 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_14 == NULL)) {
            tmp_called_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_line);
        tmp_expression_value_21 = var_line;
        tmp_subscript_value_12 = mod_consts[53];
        tmp_args_element_value_9 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_12);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 190;
        tmp_assign_source_17 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_9);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nnon_zeros == NULL);
        var_nnon_zeros = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_15;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_13;
        tmp_called_value_15 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[49]);

        if (unlikely(tmp_called_value_15 == NULL)) {
            tmp_called_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[49]);
        }

        if (tmp_called_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_line);
        tmp_expression_value_22 = var_line;
        tmp_subscript_value_13 = mod_consts[72];
        tmp_args_element_value_10 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_13);
        if (tmp_args_element_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 191;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_10);
        Py_DECREF(tmp_args_element_value_10);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nelementals == NULL);
        var_nelementals = tmp_assign_source_18;
    }
    {
        bool tmp_condition_result_11;
        PyObject *tmp_operand_value_5;
        PyObject *tmp_cmp_expr_left_11;
        PyObject *tmp_cmp_expr_right_11;
        CHECK_OBJECT(var_nelementals);
        tmp_cmp_expr_left_11 = var_nelementals;
        tmp_cmp_expr_right_11 = mod_consts[56];
        tmp_operand_value_5 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_11, tmp_cmp_expr_right_11);
        if (tmp_operand_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_5);
        Py_DECREF(tmp_operand_value_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 192;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_11 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_11 != false) {
            goto branch_yes_11;
        } else {
            goto branch_no_11;
        }
    }
    branch_yes_11:;
    {
        PyObject *tmp_raise_type_10;
        PyObject *tmp_make_exception_arg_10;
        PyObject *tmp_mod_expr_left_7;
        PyObject *tmp_mod_expr_right_7;
        tmp_mod_expr_left_7 = mod_consts[73];
        CHECK_OBJECT(var_nelementals);
        tmp_mod_expr_right_7 = var_nelementals;
        tmp_make_exception_arg_10 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_7, tmp_mod_expr_right_7);
        if (tmp_make_exception_arg_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 193;
        tmp_raise_type_10 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_10);
        Py_DECREF(tmp_make_exception_arg_10);
        assert(!(tmp_raise_type_10 == NULL));
        exception_type = tmp_raise_type_10;
        exception_lineno = 193;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_11:;
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_16;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_called_instance_5;
        CHECK_OBJECT(par_fid);
        tmp_called_instance_5 = par_fid;
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 197;
        tmp_expression_value_23 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[41]);
        if (tmp_expression_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_16 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[42]);
        Py_DECREF(tmp_expression_value_23);
        if (tmp_called_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 197;
        tmp_assign_source_19 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_16, mod_consts[43]);

        Py_DECREF(tmp_called_value_16);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_line;
            assert(old != NULL);
            var_line = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_17;
        PyObject *tmp_expression_value_24;
        CHECK_OBJECT(var_line);
        tmp_expression_value_24 = var_line;
        tmp_called_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[74]);
        if (tmp_called_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 199;
        tmp_assign_source_20 = CALL_FUNCTION_NO_ARGS(tmp_called_value_17);
        Py_DECREF(tmp_called_value_17);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 199;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ct == NULL);
        var_ct = tmp_assign_source_20;
    }
    {
        bool tmp_condition_result_12;
        PyObject *tmp_cmp_expr_left_12;
        nuitka_digit tmp_cmp_expr_right_12;
        PyObject *tmp_len_arg_5;
        CHECK_OBJECT(var_ct);
        tmp_len_arg_5 = var_ct;
        tmp_cmp_expr_left_12 = BUILTIN_LEN(tmp_len_arg_5);
        if (tmp_cmp_expr_left_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_12 = 3;
        tmp_condition_result_12 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_12, tmp_cmp_expr_right_12);
        Py_DECREF(tmp_cmp_expr_left_12);
        if (tmp_condition_result_12 != false) {
            goto branch_yes_12;
        } else {
            goto branch_no_12;
        }
    }
    branch_yes_12:;
    {
        PyObject *tmp_raise_type_11;
        PyObject *tmp_make_exception_arg_11;
        PyObject *tmp_mod_expr_left_8;
        PyObject *tmp_mod_expr_right_8;
        tmp_mod_expr_left_8 = mod_consts[75];
        CHECK_OBJECT(var_ct);
        tmp_mod_expr_right_8 = var_ct;
        tmp_make_exception_arg_11 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_8, tmp_mod_expr_right_8);
        if (tmp_make_exception_arg_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 201;
        tmp_raise_type_11 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_11);
        Py_DECREF(tmp_make_exception_arg_11);
        assert(!(tmp_raise_type_11 == NULL));
        exception_type = tmp_raise_type_11;
        exception_lineno = 201;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_12:;
    {
        PyObject *tmp_called_value_18;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_args_element_value_14;
        PyObject *tmp_args_element_value_15;
        PyObject *tmp_args_element_value_16;
        PyObject *tmp_args_element_value_17;
        PyObject *tmp_args_element_value_18;
        PyObject *tmp_args_element_value_19;
        PyObject *tmp_args_element_value_20;
        PyObject *tmp_args_element_value_21;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_subscript_value_14;
        PyObject *tmp_args_element_value_22;
        PyObject *tmp_expression_value_26;
        PyObject *tmp_subscript_value_15;
        PyObject *tmp_args_element_value_23;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_subscript_value_16;
        PyObject *tmp_args_element_value_24;
        PyObject *tmp_args_element_value_25;
        CHECK_OBJECT(par_cls);
        tmp_called_value_18 = par_cls;
        CHECK_OBJECT(var_title);
        tmp_args_element_value_11 = var_title;
        CHECK_OBJECT(var_key);
        tmp_args_element_value_12 = var_key;
        CHECK_OBJECT(var_total_nlines);
        tmp_args_element_value_13 = var_total_nlines;
        CHECK_OBJECT(var_pointer_nlines);
        tmp_args_element_value_14 = var_pointer_nlines;
        CHECK_OBJECT(var_indices_nlines);
        tmp_args_element_value_15 = var_indices_nlines;
        CHECK_OBJECT(var_values_nlines);
        tmp_args_element_value_16 = var_values_nlines;
        CHECK_OBJECT(var_mxtype);
        tmp_args_element_value_17 = var_mxtype;
        CHECK_OBJECT(var_nrows);
        tmp_args_element_value_18 = var_nrows;
        CHECK_OBJECT(var_ncols);
        tmp_args_element_value_19 = var_ncols;
        CHECK_OBJECT(var_nnon_zeros);
        tmp_args_element_value_20 = var_nnon_zeros;
        CHECK_OBJECT(var_ct);
        tmp_expression_value_25 = var_ct;
        tmp_subscript_value_14 = mod_consts[56];
        tmp_args_element_value_21 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_25, tmp_subscript_value_14, 0);
        if (tmp_args_element_value_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ct);
        tmp_expression_value_26 = var_ct;
        tmp_subscript_value_15 = mod_consts[2];
        tmp_args_element_value_22 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_26, tmp_subscript_value_15, 1);
        if (tmp_args_element_value_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_21);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ct);
        tmp_expression_value_27 = var_ct;
        tmp_subscript_value_16 = mod_consts[76];
        tmp_args_element_value_23 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_27, tmp_subscript_value_16, 2);
        if (tmp_args_element_value_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_21);
            Py_DECREF(tmp_args_element_value_22);

            exception_lineno = 206;
            type_description_1 = "ooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_rhs_nlines);
        tmp_args_element_value_24 = var_rhs_nlines;
        CHECK_OBJECT(var_nelementals);
        tmp_args_element_value_25 = var_nelementals;
        frame_d62e12bc70a5dd098510fe9170637348->m_frame.f_lineno = 203;
        {
            PyObject *call_args[] = {tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13, tmp_args_element_value_14, tmp_args_element_value_15, tmp_args_element_value_16, tmp_args_element_value_17, tmp_args_element_value_18, tmp_args_element_value_19, tmp_args_element_value_20, tmp_args_element_value_21, tmp_args_element_value_22, tmp_args_element_value_23, tmp_args_element_value_24, tmp_args_element_value_25};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS15(tmp_called_value_18, call_args);
        }

        Py_DECREF(tmp_args_element_value_21);
        Py_DECREF(tmp_args_element_value_22);
        Py_DECREF(tmp_args_element_value_23);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "ooooooooooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_d62e12bc70a5dd098510fe9170637348, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d62e12bc70a5dd098510fe9170637348->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d62e12bc70a5dd098510fe9170637348, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_d62e12bc70a5dd098510fe9170637348,
        type_description_1,
        par_cls,
        par_fid,
        var_line,
        var_title,
        var_key,
        var_total_nlines,
        var_pointer_nlines,
        var_indices_nlines,
        var_values_nlines,
        var_rhs_nlines,
        var_mxtype_s,
        var_mxtype,
        var_nrows,
        var_ncols,
        var_nnon_zeros,
        var_nelementals,
        var_ct
    );


    // Release cached frame if used for exception.
    if (frame_d62e12bc70a5dd098510fe9170637348 == cache_frame_d62e12bc70a5dd098510fe9170637348) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_d62e12bc70a5dd098510fe9170637348);
        cache_frame_d62e12bc70a5dd098510fe9170637348 = NULL;
    }

    assertFrameObject(frame_d62e12bc70a5dd098510fe9170637348);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_line);
    Py_DECREF(var_line);
    var_line = NULL;
    CHECK_OBJECT(var_title);
    Py_DECREF(var_title);
    var_title = NULL;
    CHECK_OBJECT(var_key);
    Py_DECREF(var_key);
    var_key = NULL;
    CHECK_OBJECT(var_total_nlines);
    Py_DECREF(var_total_nlines);
    var_total_nlines = NULL;
    CHECK_OBJECT(var_pointer_nlines);
    Py_DECREF(var_pointer_nlines);
    var_pointer_nlines = NULL;
    CHECK_OBJECT(var_indices_nlines);
    Py_DECREF(var_indices_nlines);
    var_indices_nlines = NULL;
    CHECK_OBJECT(var_values_nlines);
    Py_DECREF(var_values_nlines);
    var_values_nlines = NULL;
    CHECK_OBJECT(var_rhs_nlines);
    Py_DECREF(var_rhs_nlines);
    var_rhs_nlines = NULL;
    CHECK_OBJECT(var_mxtype_s);
    Py_DECREF(var_mxtype_s);
    var_mxtype_s = NULL;
    CHECK_OBJECT(var_mxtype);
    Py_DECREF(var_mxtype);
    var_mxtype = NULL;
    CHECK_OBJECT(var_nrows);
    Py_DECREF(var_nrows);
    var_nrows = NULL;
    CHECK_OBJECT(var_ncols);
    Py_DECREF(var_ncols);
    var_ncols = NULL;
    CHECK_OBJECT(var_nnon_zeros);
    Py_DECREF(var_nnon_zeros);
    var_nnon_zeros = NULL;
    CHECK_OBJECT(var_nelementals);
    Py_DECREF(var_nelementals);
    var_nelementals = NULL;
    CHECK_OBJECT(var_ct);
    Py_DECREF(var_ct);
    var_ct = NULL;
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

    Py_XDECREF(var_line);
    var_line = NULL;
    Py_XDECREF(var_title);
    var_title = NULL;
    Py_XDECREF(var_key);
    var_key = NULL;
    Py_XDECREF(var_total_nlines);
    var_total_nlines = NULL;
    Py_XDECREF(var_pointer_nlines);
    var_pointer_nlines = NULL;
    Py_XDECREF(var_indices_nlines);
    var_indices_nlines = NULL;
    Py_XDECREF(var_values_nlines);
    var_values_nlines = NULL;
    Py_XDECREF(var_rhs_nlines);
    var_rhs_nlines = NULL;
    Py_XDECREF(var_mxtype_s);
    var_mxtype_s = NULL;
    Py_XDECREF(var_mxtype);
    var_mxtype = NULL;
    Py_XDECREF(var_nrows);
    var_nrows = NULL;
    Py_XDECREF(var_ncols);
    var_ncols = NULL;
    Py_XDECREF(var_nnon_zeros);
    var_nnon_zeros = NULL;
    Py_XDECREF(var_nelementals);
    var_nelementals = NULL;
    Py_XDECREF(var_ct);
    var_ct = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_fid);
    Py_DECREF(par_fid);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_fid);
    Py_DECREF(par_fid);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_title = python_pars[1];
    PyObject *par_key = python_pars[2];
    PyObject *par_total_nlines = python_pars[3];
    PyObject *par_pointer_nlines = python_pars[4];
    PyObject *par_indices_nlines = python_pars[5];
    PyObject *par_values_nlines = python_pars[6];
    PyObject *par_mxtype = python_pars[7];
    PyObject *par_nrows = python_pars[8];
    PyObject *par_ncols = python_pars[9];
    PyObject *par_nnon_zeros = python_pars[10];
    PyObject *par_pointer_format_str = python_pars[11];
    PyObject *par_indices_format_str = python_pars[12];
    PyObject *par_values_format_str = python_pars[13];
    PyObject *par_right_hand_sides_nlines = python_pars[14];
    PyObject *par_nelementals = python_pars[15];
    PyObject *var_parser = NULL;
    PyObject *var_pointer_format = NULL;
    PyObject *var_indices_format = NULL;
    PyObject *var_values_format = NULL;
    PyObject *var_values_dtype = NULL;
    struct Nuitka_FrameObject *frame_5070dd77cc4aec78a75556711c1106c3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_5070dd77cc4aec78a75556711c1106c3 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_5070dd77cc4aec78a75556711c1106c3)) {
        Py_XDECREF(cache_frame_5070dd77cc4aec78a75556711c1106c3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_5070dd77cc4aec78a75556711c1106c3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_5070dd77cc4aec78a75556711c1106c3 = MAKE_FUNCTION_FRAME(codeobj_5070dd77cc4aec78a75556711c1106c3, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_5070dd77cc4aec78a75556711c1106c3->m_type_description == NULL);
    frame_5070dd77cc4aec78a75556711c1106c3 = cache_frame_5070dd77cc4aec78a75556711c1106c3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_5070dd77cc4aec78a75556711c1106c3);
    assert(Py_REFCNT(frame_5070dd77cc4aec78a75556711c1106c3) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_title);
        tmp_assattr_value_1 = par_title;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[78], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_key);
        tmp_assattr_value_2 = par_key;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[79], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_title);
        tmp_cmp_expr_left_1 = par_title;
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
        tmp_assign_source_1 = mod_consts[80];
        {
            PyObject *old = par_title;
            assert(old != NULL);
            par_title = tmp_assign_source_1;
            Py_INCREF(par_title);
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        nuitka_digit tmp_cmp_expr_right_2;
        PyObject *tmp_len_arg_1;
        if (par_title == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[78]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 219;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_1 = par_title;
        tmp_cmp_expr_left_2 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 219;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = 72;
        tmp_condition_result_2 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
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
        tmp_make_exception_arg_1 = mod_consts[81];
        frame_5070dd77cc4aec78a75556711c1106c3->m_frame.f_lineno = 220;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 220;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        CHECK_OBJECT(par_key);
        tmp_cmp_expr_left_3 = par_key;
        tmp_cmp_expr_right_3 = Py_None;
        tmp_condition_result_3 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[82];
        {
            PyObject *old = par_key;
            assert(old != NULL);
            par_key = tmp_assign_source_2;
            Py_INCREF(par_key);
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_4;
        nuitka_digit tmp_cmp_expr_right_4;
        PyObject *tmp_len_arg_2;
        if (par_key == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_len_arg_2 = par_key;
        tmp_cmp_expr_left_4 = BUILTIN_LEN(tmp_len_arg_2);
        if (tmp_cmp_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 224;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_4 = 8;
        tmp_condition_result_4 = RICH_COMPARE_GT_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_left_4);
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_args_element_value_2;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[83]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[83]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_left_1 = mod_consts[85];
        if (par_key == NULL) {
            Py_DECREF(tmp_called_value_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[79]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_mod_expr_right_1 = par_key;
        tmp_args_element_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[86]);

        if (unlikely(tmp_args_element_value_2 == NULL)) {
            tmp_args_element_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[86]);
        }

        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5070dd77cc4aec78a75556711c1106c3->m_frame.f_lineno = 225;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_call_result_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 225;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_total_nlines);
        tmp_assattr_value_3 = par_total_nlines;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[87], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 227;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_pointer_nlines);
        tmp_assattr_value_4 = par_pointer_nlines;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[88], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 228;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_indices_nlines);
        tmp_assattr_value_5 = par_indices_nlines;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[89], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 229;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_6;
        PyObject *tmp_assattr_target_6;
        CHECK_OBJECT(par_values_nlines);
        tmp_assattr_value_6 = par_values_nlines;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_6 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_6, mod_consts[90], tmp_assattr_value_6);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 230;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[91]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[91]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5070dd77cc4aec78a75556711c1106c3->m_frame.f_lineno = 232;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 232;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_parser == NULL);
        var_parser = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_1 = var_parser;
        CHECK_OBJECT(par_pointer_format_str);
        tmp_args_element_value_3 = par_pointer_format_str;
        frame_5070dd77cc4aec78a75556711c1106c3->m_frame.f_lineno = 233;
        tmp_assign_source_4 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[92], tmp_args_element_value_3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 233;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pointer_format == NULL);
        var_pointer_format = tmp_assign_source_4;
    }
    {
        bool tmp_condition_result_5;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_pointer_format);
        tmp_isinstance_inst_1 = var_pointer_format;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 234;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_5 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_mod_expr_left_2 = mod_consts[93];
        CHECK_OBJECT(var_pointer_format);
        tmp_mod_expr_right_2 = var_pointer_format;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 236;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5070dd77cc4aec78a75556711c1106c3->m_frame.f_lineno = 235;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 235;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_2 = var_parser;
        CHECK_OBJECT(par_indices_format_str);
        tmp_args_element_value_4 = par_indices_format_str;
        frame_5070dd77cc4aec78a75556711c1106c3->m_frame.f_lineno = 238;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[92], tmp_args_element_value_4);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 238;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_indices_format == NULL);
        var_indices_format = tmp_assign_source_5;
    }
    {
        bool tmp_condition_result_6;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        CHECK_OBJECT(var_indices_format);
        tmp_isinstance_inst_2 = var_indices_format;
        tmp_isinstance_cls_2 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_isinstance_cls_2 == NULL)) {
            tmp_isinstance_cls_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 239;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        tmp_mod_expr_left_3 = mod_consts[94];
        CHECK_OBJECT(var_indices_format);
        tmp_mod_expr_right_3 = var_indices_format;
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 241;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5070dd77cc4aec78a75556711c1106c3->m_frame.f_lineno = 240;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 240;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_6:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(var_parser);
        tmp_called_instance_3 = var_parser;
        CHECK_OBJECT(par_values_format_str);
        tmp_args_element_value_5 = par_values_format_str;
        frame_5070dd77cc4aec78a75556711c1106c3->m_frame.f_lineno = 243;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_3, mod_consts[92], tmp_args_element_value_5);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 243;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_values_format == NULL);
        var_values_format = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_condition_result_7;
        PyObject *tmp_isinstance_inst_3;
        PyObject *tmp_isinstance_cls_3;
        CHECK_OBJECT(var_values_format);
        tmp_isinstance_inst_3 = var_values_format;
        tmp_isinstance_cls_3 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[21]);

        if (unlikely(tmp_isinstance_cls_3 == NULL)) {
            tmp_isinstance_cls_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[21]);
        }

        if (tmp_isinstance_cls_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_3, tmp_isinstance_cls_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 244;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_7 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_7 == NUITKA_BOOL_TRUE) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        bool tmp_condition_result_8;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_mxtype);
        tmp_expression_value_2 = par_mxtype;
        tmp_cmp_expr_left_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[63]);
        if (tmp_cmp_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_5 = MAKE_LIST2(mod_consts[29],mod_consts[95]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_5, tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_left_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 245;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_8 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_8 != false) {
            goto branch_yes_8;
        } else {
            goto branch_no_8;
        }
    }
    branch_yes_8:;
    {
        PyObject *tmp_raise_type_4;
        PyObject *tmp_make_exception_arg_4;
        PyObject *tmp_mod_expr_left_4;
        PyObject *tmp_mod_expr_right_4;
        PyObject *tmp_tuple_element_1;
        tmp_mod_expr_left_4 = mod_consts[96];
        CHECK_OBJECT(par_mxtype);
        tmp_tuple_element_1 = par_mxtype;
        tmp_mod_expr_right_4 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_4, 0, tmp_tuple_element_1);
        CHECK_OBJECT(var_values_format);
        tmp_tuple_element_1 = var_values_format;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_4, 1, tmp_tuple_element_1);
        tmp_make_exception_arg_4 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_4, tmp_mod_expr_right_4);
        Py_DECREF(tmp_mod_expr_right_4);
        if (tmp_make_exception_arg_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5070dd77cc4aec78a75556711c1106c3->m_frame.f_lineno = 246;
        tmp_raise_type_4 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_4);
        Py_DECREF(tmp_make_exception_arg_4);
        assert(!(tmp_raise_type_4 == NULL));
        exception_type = tmp_raise_type_4;
        exception_lineno = 246;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_8:;
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_3;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[97]);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 248;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_values_dtype == NULL);
        var_values_dtype = tmp_assign_source_7;
    }
    goto branch_end_7;
    branch_no_7:;
    {
        nuitka_bool tmp_condition_result_9;
        PyObject *tmp_isinstance_inst_4;
        PyObject *tmp_isinstance_cls_4;
        CHECK_OBJECT(var_values_format);
        tmp_isinstance_inst_4 = var_values_format;
        tmp_isinstance_cls_4 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[13]);

        if (unlikely(tmp_isinstance_cls_4 == NULL)) {
            tmp_isinstance_cls_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[13]);
        }

        if (tmp_isinstance_cls_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_4, tmp_isinstance_cls_4);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 249;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_9 = (tmp_res != 0) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_9 == NUITKA_BOOL_TRUE) {
            goto branch_yes_9;
        } else {
            goto branch_no_9;
        }
    }
    branch_yes_9:;
    {
        bool tmp_condition_result_10;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_mxtype);
        tmp_expression_value_4 = par_mxtype;
        tmp_cmp_expr_left_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[63]);
        if (tmp_cmp_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_6 = MAKE_LIST1(mod_consts[28]);
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_6, tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_left_6);
        Py_DECREF(tmp_cmp_expr_right_6);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_10 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_10 != false) {
            goto branch_yes_10;
        } else {
            goto branch_no_10;
        }
    }
    branch_yes_10:;
    {
        PyObject *tmp_raise_type_5;
        PyObject *tmp_make_exception_arg_5;
        PyObject *tmp_mod_expr_left_5;
        PyObject *tmp_mod_expr_right_5;
        PyObject *tmp_tuple_element_2;
        tmp_mod_expr_left_5 = mod_consts[96];
        CHECK_OBJECT(par_mxtype);
        tmp_tuple_element_2 = par_mxtype;
        tmp_mod_expr_right_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_5, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_values_format);
        tmp_tuple_element_2 = var_values_format;
        PyTuple_SET_ITEM0(tmp_mod_expr_right_5, 1, tmp_tuple_element_2);
        tmp_make_exception_arg_5 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_5, tmp_mod_expr_right_5);
        Py_DECREF(tmp_mod_expr_right_5);
        if (tmp_make_exception_arg_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5070dd77cc4aec78a75556711c1106c3->m_frame.f_lineno = 251;
        tmp_raise_type_5 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_5);
        Py_DECREF(tmp_make_exception_arg_5);
        assert(!(tmp_raise_type_5 == NULL));
        exception_type = tmp_raise_type_5;
        exception_lineno = 251;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_10:;
    {
        PyObject *tmp_assign_source_8;
        tmp_assign_source_8 = (PyObject *)&PyLong_Type;
        assert(var_values_dtype == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_values_dtype = tmp_assign_source_8;
    }
    goto branch_end_9;
    branch_no_9:;
    {
        PyObject *tmp_raise_type_6;
        PyObject *tmp_make_exception_arg_6;
        PyObject *tmp_mod_expr_left_6;
        PyObject *tmp_mod_expr_right_6;
        PyObject *tmp_tuple_element_3;
        tmp_mod_expr_left_6 = mod_consts[98];
        CHECK_OBJECT(var_values_format);
        tmp_tuple_element_3 = var_values_format;
        tmp_mod_expr_right_6 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_mod_expr_right_6, 0, tmp_tuple_element_3);
        tmp_make_exception_arg_6 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_6, tmp_mod_expr_right_6);
        Py_DECREF(tmp_mod_expr_right_6);
        if (tmp_make_exception_arg_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_5070dd77cc4aec78a75556711c1106c3->m_frame.f_lineno = 256;
        tmp_raise_type_6 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_6);
        Py_DECREF(tmp_make_exception_arg_6);
        assert(!(tmp_raise_type_6 == NULL));
        exception_type = tmp_raise_type_6;
        exception_lineno = 256;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooooooooooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_9:;
    branch_end_7:;
    {
        PyObject *tmp_assattr_value_7;
        PyObject *tmp_assattr_target_7;
        CHECK_OBJECT(var_pointer_format);
        tmp_assattr_value_7 = var_pointer_format;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_7 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_7, mod_consts[99], tmp_assattr_value_7);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_8;
        PyObject *tmp_assattr_target_8;
        CHECK_OBJECT(var_indices_format);
        tmp_assattr_value_8 = var_indices_format;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_8 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_8, mod_consts[100], tmp_assattr_value_8);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_9;
        PyObject *tmp_assattr_target_9;
        CHECK_OBJECT(var_values_format);
        tmp_assattr_value_9 = var_values_format;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_9 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_9, mod_consts[101], tmp_assattr_value_9);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 260;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_10;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_assattr_target_10;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[102]);
        if (tmp_assattr_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_10 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_10, mod_consts[103], tmp_assattr_value_10);
        Py_DECREF(tmp_assattr_value_10);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_11;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_assattr_target_11;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assattr_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[102]);
        if (tmp_assattr_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_11 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_11, mod_consts[104], tmp_assattr_value_11);
        Py_DECREF(tmp_assattr_value_11);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 263;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_12;
        PyObject *tmp_assattr_target_12;
        CHECK_OBJECT(var_values_dtype);
        tmp_assattr_value_12 = var_values_dtype;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_12 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_12, mod_consts[105], tmp_assattr_value_12);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 264;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_13;
        PyObject *tmp_assattr_target_13;
        CHECK_OBJECT(par_pointer_nlines);
        tmp_assattr_value_13 = par_pointer_nlines;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_13 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_13, mod_consts[88], tmp_assattr_value_13);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 266;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_14;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_assattr_target_14;
        tmp_called_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_value_3 == NULL)) {
            tmp_called_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pointer_format);
        tmp_args_element_value_6 = var_pointer_format;
        CHECK_OBJECT(par_pointer_nlines);
        tmp_args_element_value_7 = par_pointer_nlines;
        frame_5070dd77cc4aec78a75556711c1106c3->m_frame.f_lineno = 267;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assattr_value_14 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        if (tmp_assattr_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_14 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_14, mod_consts[107], tmp_assattr_value_14);
        Py_DECREF(tmp_assattr_value_14);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 267;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_15;
        PyObject *tmp_assattr_target_15;
        CHECK_OBJECT(par_indices_nlines);
        tmp_assattr_value_15 = par_indices_nlines;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_15 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_15, mod_consts[89], tmp_assattr_value_15);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 269;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_16;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_assattr_target_16;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_indices_format);
        tmp_args_element_value_8 = var_indices_format;
        CHECK_OBJECT(par_indices_nlines);
        tmp_args_element_value_9 = par_indices_nlines;
        frame_5070dd77cc4aec78a75556711c1106c3->m_frame.f_lineno = 270;
        {
            PyObject *call_args[] = {tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_assattr_value_16 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        if (tmp_assattr_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_16 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_16, mod_consts[108], tmp_assattr_value_16);
        Py_DECREF(tmp_assattr_value_16);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 270;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_17;
        PyObject *tmp_assattr_target_17;
        CHECK_OBJECT(par_values_nlines);
        tmp_assattr_value_17 = par_values_nlines;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_17 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_17, mod_consts[90], tmp_assattr_value_17);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 272;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_18;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_assattr_target_18;
        tmp_called_value_5 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[106]);

        if (unlikely(tmp_called_value_5 == NULL)) {
            tmp_called_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[106]);
        }

        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_values_format);
        tmp_args_element_value_10 = var_values_format;
        CHECK_OBJECT(par_values_nlines);
        tmp_args_element_value_11 = par_values_nlines;
        frame_5070dd77cc4aec78a75556711c1106c3->m_frame.f_lineno = 273;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11};
            tmp_assattr_value_18 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_5, call_args);
        }

        if (tmp_assattr_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_18 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_18, mod_consts[109], tmp_assattr_value_18);
        Py_DECREF(tmp_assattr_value_18);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 273;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_19;
        PyObject *tmp_assattr_target_19;
        CHECK_OBJECT(par_nrows);
        tmp_assattr_value_19 = par_nrows;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_19 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_19, mod_consts[110], tmp_assattr_value_19);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 275;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_20;
        PyObject *tmp_assattr_target_20;
        CHECK_OBJECT(par_ncols);
        tmp_assattr_value_20 = par_ncols;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_20 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_20, mod_consts[111], tmp_assattr_value_20);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 276;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_21;
        PyObject *tmp_assattr_target_21;
        CHECK_OBJECT(par_nnon_zeros);
        tmp_assattr_value_21 = par_nnon_zeros;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_21 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_21, mod_consts[112], tmp_assattr_value_21);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 277;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_22;
        PyObject *tmp_assattr_target_22;
        CHECK_OBJECT(par_nelementals);
        tmp_assattr_value_22 = par_nelementals;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_22 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_22, mod_consts[113], tmp_assattr_value_22);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 278;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_23;
        PyObject *tmp_assattr_target_23;
        if (par_mxtype == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[114]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 279;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_assattr_value_23 = par_mxtype;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_23 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_23, mod_consts[114], tmp_assattr_value_23);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_5070dd77cc4aec78a75556711c1106c3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_5070dd77cc4aec78a75556711c1106c3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_5070dd77cc4aec78a75556711c1106c3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_5070dd77cc4aec78a75556711c1106c3,
        type_description_1,
        par_self,
        par_title,
        par_key,
        par_total_nlines,
        par_pointer_nlines,
        par_indices_nlines,
        par_values_nlines,
        par_mxtype,
        par_nrows,
        par_ncols,
        par_nnon_zeros,
        par_pointer_format_str,
        par_indices_format_str,
        par_values_format_str,
        par_right_hand_sides_nlines,
        par_nelementals,
        var_parser,
        var_pointer_format,
        var_indices_format,
        var_values_format,
        var_values_dtype
    );


    // Release cached frame if used for exception.
    if (frame_5070dd77cc4aec78a75556711c1106c3 == cache_frame_5070dd77cc4aec78a75556711c1106c3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_5070dd77cc4aec78a75556711c1106c3);
        cache_frame_5070dd77cc4aec78a75556711c1106c3 = NULL;
    }

    assertFrameObject(frame_5070dd77cc4aec78a75556711c1106c3);

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
    Py_XDECREF(par_title);
    par_title = NULL;
    Py_XDECREF(par_key);
    par_key = NULL;
    CHECK_OBJECT(var_parser);
    Py_DECREF(var_parser);
    var_parser = NULL;
    CHECK_OBJECT(var_pointer_format);
    Py_DECREF(var_pointer_format);
    var_pointer_format = NULL;
    CHECK_OBJECT(var_indices_format);
    Py_DECREF(var_indices_format);
    var_indices_format = NULL;
    CHECK_OBJECT(var_values_format);
    Py_DECREF(var_values_format);
    var_values_format = NULL;
    CHECK_OBJECT(var_values_dtype);
    Py_DECREF(var_values_dtype);
    var_values_dtype = NULL;
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

    Py_XDECREF(par_title);
    par_title = NULL;
    Py_XDECREF(par_key);
    par_key = NULL;
    Py_XDECREF(var_parser);
    var_parser = NULL;
    Py_XDECREF(var_pointer_format);
    var_pointer_format = NULL;
    Py_XDECREF(var_indices_format);
    var_indices_format = NULL;
    Py_XDECREF(var_values_format);
    var_values_format = NULL;
    Py_XDECREF(var_values_dtype);
    var_values_dtype = NULL;
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
    CHECK_OBJECT(par_total_nlines);
    Py_DECREF(par_total_nlines);
    CHECK_OBJECT(par_pointer_nlines);
    Py_DECREF(par_pointer_nlines);
    CHECK_OBJECT(par_indices_nlines);
    Py_DECREF(par_indices_nlines);
    CHECK_OBJECT(par_values_nlines);
    Py_DECREF(par_values_nlines);
    CHECK_OBJECT(par_mxtype);
    Py_DECREF(par_mxtype);
    CHECK_OBJECT(par_nrows);
    Py_DECREF(par_nrows);
    CHECK_OBJECT(par_ncols);
    Py_DECREF(par_ncols);
    CHECK_OBJECT(par_nnon_zeros);
    Py_DECREF(par_nnon_zeros);
    CHECK_OBJECT(par_pointer_format_str);
    Py_DECREF(par_pointer_format_str);
    CHECK_OBJECT(par_indices_format_str);
    Py_DECREF(par_indices_format_str);
    CHECK_OBJECT(par_values_format_str);
    Py_DECREF(par_values_format_str);
    CHECK_OBJECT(par_right_hand_sides_nlines);
    Py_DECREF(par_right_hand_sides_nlines);
    CHECK_OBJECT(par_nelementals);
    Py_DECREF(par_nelementals);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_total_nlines);
    Py_DECREF(par_total_nlines);
    CHECK_OBJECT(par_pointer_nlines);
    Py_DECREF(par_pointer_nlines);
    CHECK_OBJECT(par_indices_nlines);
    Py_DECREF(par_indices_nlines);
    CHECK_OBJECT(par_values_nlines);
    Py_DECREF(par_values_nlines);
    CHECK_OBJECT(par_mxtype);
    Py_DECREF(par_mxtype);
    CHECK_OBJECT(par_nrows);
    Py_DECREF(par_nrows);
    CHECK_OBJECT(par_ncols);
    Py_DECREF(par_ncols);
    CHECK_OBJECT(par_nnon_zeros);
    Py_DECREF(par_nnon_zeros);
    CHECK_OBJECT(par_pointer_format_str);
    Py_DECREF(par_pointer_format_str);
    CHECK_OBJECT(par_indices_format_str);
    Py_DECREF(par_indices_format_str);
    CHECK_OBJECT(par_values_format_str);
    Py_DECREF(par_values_format_str);
    CHECK_OBJECT(par_right_hand_sides_nlines);
    Py_DECREF(par_right_hand_sides_nlines);
    CHECK_OBJECT(par_nelementals);
    Py_DECREF(par_nelementals);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__5_dump(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *var_header = NULL;
    PyObject *var_pffmt = NULL;
    PyObject *var_iffmt = NULL;
    PyObject *var_vffmt = NULL;
    struct Nuitka_FrameObject *frame_ff402aa9e00337d4bbb3159d876138d5;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    bool tmp_result;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_ff402aa9e00337d4bbb3159d876138d5 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_ff402aa9e00337d4bbb3159d876138d5)) {
        Py_XDECREF(cache_frame_ff402aa9e00337d4bbb3159d876138d5);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ff402aa9e00337d4bbb3159d876138d5 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ff402aa9e00337d4bbb3159d876138d5 = MAKE_FUNCTION_FRAME(codeobj_ff402aa9e00337d4bbb3159d876138d5, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ff402aa9e00337d4bbb3159d876138d5->m_type_description == NULL);
    frame_ff402aa9e00337d4bbb3159d876138d5 = cache_frame_ff402aa9e00337d4bbb3159d876138d5;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ff402aa9e00337d4bbb3159d876138d5);
    assert(Py_REFCNT(frame_ff402aa9e00337d4bbb3159d876138d5) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[78]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[116]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ff402aa9e00337d4bbb3159d876138d5->m_frame.f_lineno = 283;
        tmp_add_expr_left_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_1, mod_consts[117]);

        Py_DECREF(tmp_called_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_expression_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[79]);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[116]);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ff402aa9e00337d4bbb3159d876138d5->m_frame.f_lineno = 283;
        tmp_add_expr_right_1 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_2, mod_consts[118]);

        Py_DECREF(tmp_called_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_list_element_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_assign_source_1, 0, tmp_list_element_1);
        assert(var_header == NULL);
        var_header = tmp_assign_source_1;
    }
    {
        PyObject *tmp_list_arg_value_1;
        PyObject *tmp_item_value_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_header);
        tmp_list_arg_value_1 = var_header;
        tmp_mod_expr_left_1 = mod_consts[119];
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[87]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_expression_value_8;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_6 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[88]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 286;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_7 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[89]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_8 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[90]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 287;
                type_description_1 = "ooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_item_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_item_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_1, tmp_item_value_1);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_list_arg_value_2;
        PyObject *tmp_item_value_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_header);
        tmp_list_arg_value_2 = var_header;
        tmp_mod_expr_left_2 = mod_consts[120];
        CHECK_OBJECT(par_self);
        tmp_expression_value_11 = par_self;
        tmp_expression_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[114]);
        if (tmp_expression_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[38]);
        Py_DECREF(tmp_expression_value_10);
        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[116]);
        Py_DECREF(tmp_expression_value_9);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ff402aa9e00337d4bbb3159d876138d5->m_frame.f_lineno = 289;
        tmp_tuple_element_2 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_3, mod_consts[121]);

        Py_DECREF(tmp_called_value_3);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(5);
        {
            PyObject *tmp_expression_value_12;
            PyObject *tmp_expression_value_13;
            PyObject *tmp_expression_value_14;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_expression_value_12 = par_self;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[110]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 289;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_expression_value_13 = par_self;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[111]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 2, tmp_tuple_element_2);
            CHECK_OBJECT(par_self);
            tmp_expression_value_14 = par_self;
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[112]);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 290;
                type_description_1 = "ooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 3, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[56];
            PyTuple_SET_ITEM0(tmp_mod_expr_right_2, 4, tmp_tuple_element_2);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_item_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_item_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_2, tmp_item_value_2);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_expression_value_16;
        CHECK_OBJECT(par_self);
        tmp_expression_value_16 = par_self;
        tmp_expression_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[99]);
        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[38]);
        Py_DECREF(tmp_expression_value_15);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pffmt == NULL);
        var_pffmt = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_expression_value_18;
        CHECK_OBJECT(par_self);
        tmp_expression_value_18 = par_self;
        tmp_expression_value_17 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[100]);
        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[38]);
        Py_DECREF(tmp_expression_value_17);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_iffmt == NULL);
        var_iffmt = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_expression_value_20;
        CHECK_OBJECT(par_self);
        tmp_expression_value_20 = par_self;
        tmp_expression_value_19 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[101]);
        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[38]);
        Py_DECREF(tmp_expression_value_19);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 294;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_vffmt == NULL);
        var_vffmt = tmp_assign_source_4;
    }
    {
        PyObject *tmp_list_arg_value_3;
        PyObject *tmp_item_value_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_21;
        CHECK_OBJECT(var_header);
        tmp_list_arg_value_3 = var_header;
        tmp_mod_expr_left_3 = mod_consts[122];
        CHECK_OBJECT(var_pffmt);
        tmp_expression_value_21 = var_pffmt;
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[116]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        frame_ff402aa9e00337d4bbb3159d876138d5->m_frame.f_lineno = 296;
        tmp_tuple_element_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_4, mod_consts[123]);

        Py_DECREF(tmp_called_value_4);
        if (tmp_tuple_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_3 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_22;
            PyObject *tmp_called_value_6;
            PyObject *tmp_expression_value_23;
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_iffmt);
            tmp_expression_value_22 = var_iffmt;
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_22, mod_consts[116]);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "ooooo";
                goto tuple_build_exception_3;
            }
            frame_ff402aa9e00337d4bbb3159d876138d5->m_frame.f_lineno = 296;
            tmp_tuple_element_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_5, mod_consts[123]);

            Py_DECREF(tmp_called_value_5);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "ooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var_vffmt);
            tmp_expression_value_23 = var_vffmt;
            tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_23, mod_consts[116]);
            if (tmp_called_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "ooooo";
                goto tuple_build_exception_3;
            }
            frame_ff402aa9e00337d4bbb3159d876138d5->m_frame.f_lineno = 296;
            tmp_tuple_element_3 = CALL_FUNCTION_WITH_POSARGS1(tmp_called_value_6, mod_consts[124]);

            Py_DECREF(tmp_called_value_6);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 296;
                type_description_1 = "ooooo";
                goto tuple_build_exception_3;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_3, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_3;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_3:;
        Py_DECREF(tmp_mod_expr_right_3);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_3:;
        tmp_item_value_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        Py_DECREF(tmp_mod_expr_right_3);
        if (tmp_item_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 296;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_result = LIST_APPEND1(tmp_list_arg_value_3, tmp_item_value_3);
        assert(!(tmp_result == false));
    }
    {
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        tmp_str_arg_value_1 = mod_consts[125];
        CHECK_OBJECT(var_header);
        tmp_iterable_value_1 = var_header;
        tmp_return_value = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 297;
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
        exception_tb = MAKE_TRACEBACK(frame_ff402aa9e00337d4bbb3159d876138d5, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ff402aa9e00337d4bbb3159d876138d5->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ff402aa9e00337d4bbb3159d876138d5, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ff402aa9e00337d4bbb3159d876138d5,
        type_description_1,
        par_self,
        var_header,
        var_pffmt,
        var_iffmt,
        var_vffmt
    );


    // Release cached frame if used for exception.
    if (frame_ff402aa9e00337d4bbb3159d876138d5 == cache_frame_ff402aa9e00337d4bbb3159d876138d5) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ff402aa9e00337d4bbb3159d876138d5);
        cache_frame_ff402aa9e00337d4bbb3159d876138d5 = NULL;
    }

    assertFrameObject(frame_ff402aa9e00337d4bbb3159d876138d5);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_header);
    Py_DECREF(var_header);
    var_header = NULL;
    CHECK_OBJECT(var_pffmt);
    Py_DECREF(var_pffmt);
    var_pffmt = NULL;
    CHECK_OBJECT(var_iffmt);
    Py_DECREF(var_iffmt);
    var_iffmt = NULL;
    CHECK_OBJECT(var_vffmt);
    Py_DECREF(var_vffmt);
    var_vffmt = NULL;
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

    Py_XDECREF(var_header);
    var_header = NULL;
    Py_XDECREF(var_pffmt);
    var_pffmt = NULL;
    Py_XDECREF(var_iffmt);
    var_iffmt = NULL;
    Py_XDECREF(var_vffmt);
    var_vffmt = NULL;
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


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__6__expect_int(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_value = python_pars[0];
    PyObject *par_msg = python_pars[1];
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_7f2b60de701bae8eb94d771b1ac9d6ac;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
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
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_7f2b60de701bae8eb94d771b1ac9d6ac = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_7f2b60de701bae8eb94d771b1ac9d6ac)) {
        Py_XDECREF(cache_frame_7f2b60de701bae8eb94d771b1ac9d6ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7f2b60de701bae8eb94d771b1ac9d6ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7f2b60de701bae8eb94d771b1ac9d6ac = MAKE_FUNCTION_FRAME(codeobj_7f2b60de701bae8eb94d771b1ac9d6ac, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7f2b60de701bae8eb94d771b1ac9d6ac->m_type_description == NULL);
    frame_7f2b60de701bae8eb94d771b1ac9d6ac = cache_frame_7f2b60de701bae8eb94d771b1ac9d6ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7f2b60de701bae8eb94d771b1ac9d6ac);
    assert(Py_REFCNT(frame_7f2b60de701bae8eb94d771b1ac9d6ac) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_int_arg_1;
        CHECK_OBJECT(par_value);
        tmp_int_arg_1 = par_value;
        tmp_return_value = PyNumber_Int(tmp_int_arg_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 302;
            type_description_1 = "ooo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_7f2b60de701bae8eb94d771b1ac9d6ac, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_7f2b60de701bae8eb94d771b1ac9d6ac, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ValueError;
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
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_1);
        var_e = tmp_assign_source_1;
    }
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        CHECK_OBJECT(par_msg);
        tmp_cmp_expr_left_2 = par_msg;
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
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = mod_consts[127];
        {
            PyObject *old = par_msg;
            assert(old != NULL);
            par_msg = tmp_assign_source_2;
            Py_INCREF(par_msg);
            Py_DECREF(old);
        }

    }
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_raise_cause_1;
        CHECK_OBJECT(par_msg);
        tmp_mod_expr_left_1 = par_msg;
        CHECK_OBJECT(par_value);
        tmp_mod_expr_right_1 = par_value;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 306;
            type_description_1 = "ooo";
            goto try_except_handler_4;
        }
        frame_7f2b60de701bae8eb94d771b1ac9d6ac->m_frame.f_lineno = 306;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        CHECK_OBJECT(var_e);
        tmp_raise_cause_1 = var_e;
        exception_type = tmp_raise_type_1;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 306;
        RAISE_EXCEPTION_WITH_CAUSE(&exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
        type_description_1 = "ooo";
        goto try_except_handler_4;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 301;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_7f2b60de701bae8eb94d771b1ac9d6ac->m_frame) frame_7f2b60de701bae8eb94d771b1ac9d6ac->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

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
        exception_tb = MAKE_TRACEBACK(frame_7f2b60de701bae8eb94d771b1ac9d6ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7f2b60de701bae8eb94d771b1ac9d6ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7f2b60de701bae8eb94d771b1ac9d6ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7f2b60de701bae8eb94d771b1ac9d6ac,
        type_description_1,
        par_value,
        par_msg,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_7f2b60de701bae8eb94d771b1ac9d6ac == cache_frame_7f2b60de701bae8eb94d771b1ac9d6ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7f2b60de701bae8eb94d771b1ac9d6ac);
        cache_frame_7f2b60de701bae8eb94d771b1ac9d6ac = NULL;
    }

    assertFrameObject(frame_7f2b60de701bae8eb94d771b1ac9d6ac);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_msg);
    Py_DECREF(par_msg);
    par_msg = NULL;
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

    Py_XDECREF(par_msg);
    par_msg = NULL;
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
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_value);
    Py_DECREF(par_value);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__7__read_hb_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_content = python_pars[0];
    PyObject *par_header = python_pars[1];
    PyObject *var_ptr_string = NULL;
    PyObject *var_ptr = NULL;
    PyObject *var_ind_string = NULL;
    PyObject *var_ind = NULL;
    PyObject *var_val_string = NULL;
    PyObject *var_val = NULL;
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_e6e115e75587ef2af2e867e2fbd064e7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_e6e115e75587ef2af2e867e2fbd064e7 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_e6e115e75587ef2af2e867e2fbd064e7)) {
        Py_XDECREF(cache_frame_e6e115e75587ef2af2e867e2fbd064e7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_e6e115e75587ef2af2e867e2fbd064e7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_e6e115e75587ef2af2e867e2fbd064e7 = MAKE_FUNCTION_FRAME(codeobj_e6e115e75587ef2af2e867e2fbd064e7, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_e6e115e75587ef2af2e867e2fbd064e7->m_type_description == NULL);
    frame_e6e115e75587ef2af2e867e2fbd064e7 = cache_frame_e6e115e75587ef2af2e867e2fbd064e7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_e6e115e75587ef2af2e867e2fbd064e7);
    assert(Py_REFCNT(frame_e6e115e75587ef2af2e867e2fbd064e7) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_str_arg_value_1;
        PyObject *tmp_iterable_value_1;
        PyObject *tmp_list_element_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        tmp_str_arg_value_1 = mod_consts[55];
        CHECK_OBJECT(par_content);
        tmp_expression_value_1 = par_content;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[128]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_header);
        tmp_expression_value_2 = par_header;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[107]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 311;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e6e115e75587ef2af2e867e2fbd064e7->m_frame.f_lineno = 311;
        tmp_list_element_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_list_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iterable_value_1 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_instance_1;
            PyList_SET_ITEM(tmp_iterable_value_1, 0, tmp_list_element_1);
            CHECK_OBJECT(par_content);
            tmp_called_instance_1 = par_content;
            frame_e6e115e75587ef2af2e867e2fbd064e7->m_frame.f_lineno = 312;
            tmp_list_element_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[41]);
            if (tmp_list_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 312;
                type_description_1 = "ooooooooo";
                goto list_build_exception_1;
            }
            PyList_SET_ITEM(tmp_iterable_value_1, 1, tmp_list_element_1);
        }
        goto list_build_noexception_1;
        // Exception handling pass through code for list_build:
        list_build_exception_1:;
        Py_DECREF(tmp_iterable_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_1:;
        tmp_assign_source_1 = UNICODE_JOIN(tmp_str_arg_value_1, tmp_iterable_value_1);
        Py_DECREF(tmp_iterable_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 311;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ptr_string == NULL);
        var_ptr_string = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[129]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ptr_string);
        tmp_tuple_element_1 = var_ptr_string;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[130]);
        frame_e6e115e75587ef2af2e867e2fbd064e7->m_frame.f_lineno = 313;
        tmp_assign_source_2 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 313;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ptr == NULL);
        var_ptr = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_str_arg_value_2;
        PyObject *tmp_iterable_value_2;
        PyObject *tmp_list_element_2;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_5;
        tmp_str_arg_value_2 = mod_consts[55];
        CHECK_OBJECT(par_content);
        tmp_expression_value_4 = par_content;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[128]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_header);
        tmp_expression_value_5 = par_header;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[108]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 316;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e6e115e75587ef2af2e867e2fbd064e7->m_frame.f_lineno = 316;
        tmp_list_element_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_list_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iterable_value_2 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_instance_2;
            PyList_SET_ITEM(tmp_iterable_value_2, 0, tmp_list_element_2);
            CHECK_OBJECT(par_content);
            tmp_called_instance_2 = par_content;
            frame_e6e115e75587ef2af2e867e2fbd064e7->m_frame.f_lineno = 317;
            tmp_list_element_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[41]);
            if (tmp_list_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 317;
                type_description_1 = "ooooooooo";
                goto list_build_exception_2;
            }
            PyList_SET_ITEM(tmp_iterable_value_2, 1, tmp_list_element_2);
        }
        goto list_build_noexception_2;
        // Exception handling pass through code for list_build:
        list_build_exception_2:;
        Py_DECREF(tmp_iterable_value_2);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_2:;
        tmp_assign_source_3 = UNICODE_JOIN(tmp_str_arg_value_2, tmp_iterable_value_2);
        Py_DECREF(tmp_iterable_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 316;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ind_string == NULL);
        var_ind_string = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[129]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ind_string);
        tmp_tuple_element_2 = var_ind_string;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[130]);
        frame_e6e115e75587ef2af2e867e2fbd064e7->m_frame.f_lineno = 318;
        tmp_assign_source_4 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 318;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ind == NULL);
        var_ind = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_str_arg_value_3;
        PyObject *tmp_iterable_value_3;
        PyObject *tmp_list_element_3;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_8;
        tmp_str_arg_value_3 = mod_consts[55];
        CHECK_OBJECT(par_content);
        tmp_expression_value_7 = par_content;
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[128]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_header);
        tmp_expression_value_8 = par_header;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[109]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 321;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_e6e115e75587ef2af2e867e2fbd064e7->m_frame.f_lineno = 321;
        tmp_list_element_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_5, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_list_element_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_iterable_value_3 = MAKE_LIST_EMPTY(2);
        {
            PyObject *tmp_called_instance_3;
            PyList_SET_ITEM(tmp_iterable_value_3, 0, tmp_list_element_3);
            CHECK_OBJECT(par_content);
            tmp_called_instance_3 = par_content;
            frame_e6e115e75587ef2af2e867e2fbd064e7->m_frame.f_lineno = 322;
            tmp_list_element_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[41]);
            if (tmp_list_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 322;
                type_description_1 = "ooooooooo";
                goto list_build_exception_3;
            }
            PyList_SET_ITEM(tmp_iterable_value_3, 1, tmp_list_element_3);
        }
        goto list_build_noexception_3;
        // Exception handling pass through code for list_build:
        list_build_exception_3:;
        Py_DECREF(tmp_iterable_value_3);
        goto frame_exception_exit_1;
        // Finished with no exception for list_build:
        list_build_noexception_3:;
        tmp_assign_source_5 = UNICODE_JOIN(tmp_str_arg_value_3, tmp_iterable_value_3);
        Py_DECREF(tmp_iterable_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 321;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_val_string == NULL);
        var_val_string = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[15]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[129]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_val_string);
        tmp_kw_call_arg_value_0_1 = var_val_string;
        CHECK_OBJECT(par_header);
        tmp_expression_value_10 = par_header;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[105]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 324;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_1_1 = mod_consts[131];
        frame_e6e115e75587ef2af2e867e2fbd064e7->m_frame.f_lineno = 323;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_6 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[132]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 323;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_val == NULL);
        var_val = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_expression_value_11;
        tmp_called_value_7 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[133]);

        if (unlikely(tmp_called_value_7 == NULL)) {
            tmp_called_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[133]);
        }

        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_val);
        tmp_tuple_element_3 = var_val;
        tmp_kw_call_arg_value_0_2 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_sub_expr_left_1;
            PyObject *tmp_sub_expr_right_1;
            PyObject *tmp_sub_expr_left_2;
            PyObject *tmp_sub_expr_right_2;
            PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(var_ind);
            tmp_sub_expr_left_1 = var_ind;
            tmp_sub_expr_right_1 = mod_consts[2];
            tmp_tuple_element_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_2, 1, tmp_tuple_element_3);
            CHECK_OBJECT(var_ptr);
            tmp_sub_expr_left_2 = var_ptr;
            tmp_sub_expr_right_2 = mod_consts[2];
            tmp_tuple_element_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 327;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_2, 2, tmp_tuple_element_3);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        CHECK_OBJECT(par_header);
        tmp_expression_value_11 = par_header;
        tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[110]);
        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 328;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_0_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_12;
            PyTuple_SET_ITEM(tmp_kw_call_dict_value_0_2, 0, tmp_tuple_element_4);
            CHECK_OBJECT(par_header);
            tmp_expression_value_12 = par_header;
            tmp_tuple_element_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[111]);
            if (tmp_tuple_element_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 328;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_kw_call_dict_value_0_2, 1, tmp_tuple_element_4);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        goto try_except_handler_2;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        frame_e6e115e75587ef2af2e867e2fbd064e7->m_frame.f_lineno = 327;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[134]);
        }

        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 327;
            type_description_1 = "ooooooooo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_e6e115e75587ef2af2e867e2fbd064e7, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_e6e115e75587ef2af2e867e2fbd064e7, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_ValueError;
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
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_e = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_1;
        CHECK_OBJECT(var_e);
        tmp_raise_type_1 = var_e;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 330;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooooo";
        goto try_except_handler_4;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_1;
    branch_no_1:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 326;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_e6e115e75587ef2af2e867e2fbd064e7->m_frame) frame_e6e115e75587ef2af2e867e2fbd064e7->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooooo";
    goto try_except_handler_3;
    branch_end_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

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
        exception_tb = MAKE_TRACEBACK(frame_e6e115e75587ef2af2e867e2fbd064e7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_e6e115e75587ef2af2e867e2fbd064e7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_e6e115e75587ef2af2e867e2fbd064e7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_e6e115e75587ef2af2e867e2fbd064e7,
        type_description_1,
        par_content,
        par_header,
        var_ptr_string,
        var_ptr,
        var_ind_string,
        var_ind,
        var_val_string,
        var_val,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_e6e115e75587ef2af2e867e2fbd064e7 == cache_frame_e6e115e75587ef2af2e867e2fbd064e7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_e6e115e75587ef2af2e867e2fbd064e7);
        cache_frame_e6e115e75587ef2af2e867e2fbd064e7 = NULL;
    }

    assertFrameObject(frame_e6e115e75587ef2af2e867e2fbd064e7);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_ptr_string);
    Py_DECREF(var_ptr_string);
    var_ptr_string = NULL;
    CHECK_OBJECT(var_ptr);
    Py_DECREF(var_ptr);
    var_ptr = NULL;
    CHECK_OBJECT(var_ind_string);
    Py_DECREF(var_ind_string);
    var_ind_string = NULL;
    CHECK_OBJECT(var_ind);
    Py_DECREF(var_ind);
    var_ind = NULL;
    CHECK_OBJECT(var_val_string);
    Py_DECREF(var_val_string);
    var_val_string = NULL;
    CHECK_OBJECT(var_val);
    Py_DECREF(var_val);
    var_val = NULL;
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

    Py_XDECREF(var_ptr_string);
    var_ptr_string = NULL;
    Py_XDECREF(var_ptr);
    var_ptr = NULL;
    Py_XDECREF(var_ind_string);
    var_ind_string = NULL;
    Py_XDECREF(var_ind);
    var_ind = NULL;
    Py_XDECREF(var_val_string);
    var_val_string = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
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
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_header);
    Py_DECREF(par_header);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_content);
    Py_DECREF(par_content);
    CHECK_OBJECT(par_header);
    Py_DECREF(par_header);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__8__write_data(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_m = python_pars[0];
    PyObject *par_fid = python_pars[1];
    PyObject *par_header = python_pars[2];
    PyObject *var_write_array = NULL;
    struct Nuitka_FrameObject *frame_3b4f5d3e1b5e08e3aee1e59a6659ee66;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_3b4f5d3e1b5e08e3aee1e59a6659ee66 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3b4f5d3e1b5e08e3aee1e59a6659ee66)) {
        Py_XDECREF(cache_frame_3b4f5d3e1b5e08e3aee1e59a6659ee66);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3b4f5d3e1b5e08e3aee1e59a6659ee66 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3b4f5d3e1b5e08e3aee1e59a6659ee66 = MAKE_FUNCTION_FRAME(codeobj_3b4f5d3e1b5e08e3aee1e59a6659ee66, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3b4f5d3e1b5e08e3aee1e59a6659ee66->m_type_description == NULL);
    frame_3b4f5d3e1b5e08e3aee1e59a6659ee66 = cache_frame_3b4f5d3e1b5e08e3aee1e59a6659ee66;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3b4f5d3e1b5e08e3aee1e59a6659ee66);
    assert(Py_REFCNT(frame_3b4f5d3e1b5e08e3aee1e59a6659ee66) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_m);
        tmp_expression_value_1 = par_m;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3b4f5d3e1b5e08e3aee1e59a6659ee66->m_frame.f_lineno = 334;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[5], 0), mod_consts[6]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_m;
            assert(old != NULL);
            par_m = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;


        tmp_assign_source_2 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__8__write_data$$$function__1_write_array();

        assert(var_write_array == NULL);
        var_write_array = tmp_assign_source_2;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_fid);
        tmp_expression_value_2 = par_fid;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[137]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_header);
        tmp_called_instance_1 = par_header;
        frame_3b4f5d3e1b5e08e3aee1e59a6659ee66->m_frame.f_lineno = 351;
        tmp_args_element_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[138]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 351;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3b4f5d3e1b5e08e3aee1e59a6659ee66->m_frame.f_lineno = 351;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 351;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_instance_2;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(par_fid);
        tmp_called_instance_2 = par_fid;
        frame_3b4f5d3e1b5e08e3aee1e59a6659ee66->m_frame.f_lineno = 352;
        tmp_call_result_2 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[137],
            PyTuple_GET_ITEM(mod_consts[43], 0)
        );

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_2);
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_call_result_3;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_write_array);
        tmp_called_value_3 = var_write_array;
        CHECK_OBJECT(par_fid);
        tmp_args_element_value_2 = par_fid;
        CHECK_OBJECT(par_m);
        tmp_expression_value_3 = par_m;
        tmp_add_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[7]);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = mod_consts[2];
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_header);
        tmp_expression_value_4 = par_header;
        tmp_args_element_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[88]);
        if (tmp_args_element_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);

            exception_lineno = 354;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_header);
        tmp_expression_value_5 = par_header;
        tmp_args_element_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[99]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_4);

            exception_lineno = 355;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3b4f5d3e1b5e08e3aee1e59a6659ee66->m_frame.f_lineno = 354;
        {
            PyObject *call_args[] = {tmp_args_element_value_2, tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_call_result_3 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        Py_DECREF(tmp_args_element_value_4);
        Py_DECREF(tmp_args_element_value_5);
        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_3);
    }
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_call_result_4;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_8;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_args_element_value_9;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_write_array);
        tmp_called_value_4 = var_write_array;
        CHECK_OBJECT(par_fid);
        tmp_args_element_value_6 = par_fid;
        CHECK_OBJECT(par_m);
        tmp_expression_value_6 = par_m;
        tmp_add_expr_left_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[8]);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[2];
        tmp_args_element_value_7 = BINARY_OPERATION_ADD_OBJECT_OBJECT_LONG(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_args_element_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_header);
        tmp_expression_value_7 = par_header;
        tmp_args_element_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[89]);
        if (tmp_args_element_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);

            exception_lineno = 356;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_header);
        tmp_expression_value_8 = par_header;
        tmp_args_element_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[100]);
        if (tmp_args_element_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_7);
            Py_DECREF(tmp_args_element_value_8);

            exception_lineno = 357;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3b4f5d3e1b5e08e3aee1e59a6659ee66->m_frame.f_lineno = 356;
        {
            PyObject *call_args[] = {tmp_args_element_value_6, tmp_args_element_value_7, tmp_args_element_value_8, tmp_args_element_value_9};
            tmp_call_result_4 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_7);
        Py_DECREF(tmp_args_element_value_8);
        Py_DECREF(tmp_args_element_value_9);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 356;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_5;
        PyObject *tmp_args_element_value_10;
        PyObject *tmp_args_element_value_11;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_element_value_12;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_args_element_value_13;
        PyObject *tmp_expression_value_11;
        CHECK_OBJECT(var_write_array);
        tmp_called_value_5 = var_write_array;
        CHECK_OBJECT(par_fid);
        tmp_args_element_value_10 = par_fid;
        CHECK_OBJECT(par_m);
        tmp_expression_value_9 = par_m;
        tmp_args_element_value_11 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[9]);
        if (tmp_args_element_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_header);
        tmp_expression_value_10 = par_header;
        tmp_args_element_value_12 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[90]);
        if (tmp_args_element_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_11);

            exception_lineno = 358;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_header);
        tmp_expression_value_11 = par_header;
        tmp_args_element_value_13 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[101]);
        if (tmp_args_element_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_11);
            Py_DECREF(tmp_args_element_value_12);

            exception_lineno = 359;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_3b4f5d3e1b5e08e3aee1e59a6659ee66->m_frame.f_lineno = 358;
        {
            PyObject *call_args[] = {tmp_args_element_value_10, tmp_args_element_value_11, tmp_args_element_value_12, tmp_args_element_value_13};
            tmp_call_result_5 = CALL_FUNCTION_WITH_ARGS4(tmp_called_value_5, call_args);
        }

        Py_DECREF(tmp_args_element_value_11);
        Py_DECREF(tmp_args_element_value_12);
        Py_DECREF(tmp_args_element_value_13);
        if (tmp_call_result_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 358;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_5);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_3b4f5d3e1b5e08e3aee1e59a6659ee66, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3b4f5d3e1b5e08e3aee1e59a6659ee66->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3b4f5d3e1b5e08e3aee1e59a6659ee66, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3b4f5d3e1b5e08e3aee1e59a6659ee66,
        type_description_1,
        par_m,
        par_fid,
        par_header,
        var_write_array
    );


    // Release cached frame if used for exception.
    if (frame_3b4f5d3e1b5e08e3aee1e59a6659ee66 == cache_frame_3b4f5d3e1b5e08e3aee1e59a6659ee66) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3b4f5d3e1b5e08e3aee1e59a6659ee66);
        cache_frame_3b4f5d3e1b5e08e3aee1e59a6659ee66 = NULL;
    }

    assertFrameObject(frame_3b4f5d3e1b5e08e3aee1e59a6659ee66);

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
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    par_m = NULL;
    CHECK_OBJECT(var_write_array);
    Py_DECREF(var_write_array);
    var_write_array = NULL;
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

    Py_XDECREF(par_m);
    par_m = NULL;
    Py_XDECREF(var_write_array);
    var_write_array = NULL;
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
    CHECK_OBJECT(par_fid);
    Py_DECREF(par_fid);
    CHECK_OBJECT(par_header);
    Py_DECREF(par_header);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fid);
    Py_DECREF(par_fid);
    CHECK_OBJECT(par_header);
    Py_DECREF(par_header);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__8__write_data$$$function__1_write_array(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_f = python_pars[0];
    PyObject *par_ar = python_pars[1];
    PyObject *par_nlines = python_pars[2];
    PyObject *par_fmt = python_pars[3];
    PyObject *var_pyfmt = NULL;
    PyObject *var_pyfmt_full = NULL;
    PyObject *var_full = NULL;
    PyObject *var_row = NULL;
    PyObject *var_nremain = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_8bd46b9ddf6f206fa7710ac5a1cc862d;
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
    static struct Nuitka_FrameObject *cache_frame_8bd46b9ddf6f206fa7710ac5a1cc862d = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_8bd46b9ddf6f206fa7710ac5a1cc862d)) {
        Py_XDECREF(cache_frame_8bd46b9ddf6f206fa7710ac5a1cc862d);

#if _DEBUG_REFCOUNTS
        if (cache_frame_8bd46b9ddf6f206fa7710ac5a1cc862d == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_8bd46b9ddf6f206fa7710ac5a1cc862d = MAKE_FUNCTION_FRAME(codeobj_8bd46b9ddf6f206fa7710ac5a1cc862d, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_8bd46b9ddf6f206fa7710ac5a1cc862d->m_type_description == NULL);
    frame_8bd46b9ddf6f206fa7710ac5a1cc862d = cache_frame_8bd46b9ddf6f206fa7710ac5a1cc862d;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_8bd46b9ddf6f206fa7710ac5a1cc862d);
    assert(Py_REFCNT(frame_8bd46b9ddf6f206fa7710ac5a1cc862d) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_fmt);
        tmp_expression_value_1 = par_fmt;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[139]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pyfmt == NULL);
        var_pyfmt = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(var_pyfmt);
        tmp_mult_expr_left_1 = var_pyfmt;
        CHECK_OBJECT(par_fmt);
        tmp_expression_value_2 = par_fmt;
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[0]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 340;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pyfmt_full == NULL);
        var_pyfmt_full = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_stop_value_1;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(par_ar);
        tmp_expression_value_3 = par_ar;
        CHECK_OBJECT(par_nlines);
        tmp_sub_expr_left_1 = par_nlines;
        tmp_sub_expr_right_1 = mod_consts[2];
        tmp_mult_expr_left_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_mult_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fmt);
        tmp_expression_value_4 = par_fmt;
        tmp_mult_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[0]);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_2);

            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_value_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_left_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_stop_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        Py_DECREF(tmp_stop_value_1);
        assert(!(tmp_subscript_value_1 == NULL));
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 344;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_full == NULL);
        var_full = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(var_full);
        tmp_expression_value_5 = var_full;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[140]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_nlines);
        tmp_sub_expr_left_2 = par_nlines;
        tmp_sub_expr_right_2 = mod_consts[2];
        tmp_tuple_element_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_LONG(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 345;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_6;
            PyTuple_SET_ITEM(tmp_args_element_value_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_fmt);
            tmp_expression_value_6 = par_fmt;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[0]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 345;
                type_description_1 = "ooooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_args_element_value_1, 1, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        frame_8bd46b9ddf6f206fa7710ac5a1cc862d->m_frame.f_lineno = 345;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 345;
            type_description_1 = "ooooooooo";
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
                type_description_1 = "ooooooooo";
                exception_lineno = 345;
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
            PyObject *old = var_row;
            var_row = tmp_assign_source_6;
            Py_INCREF(var_row);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_arg_1;
        if (par_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[141]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = par_f;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[137]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        if (var_pyfmt_full == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[142]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 346;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }

        tmp_mod_expr_left_1 = var_pyfmt_full;
        CHECK_OBJECT(var_row);
        tmp_tuple_arg_1 = var_row;
        tmp_mod_expr_right_1 = PySequence_Tuple(tmp_tuple_arg_1);
        if (tmp_mod_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 346;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 346;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        tmp_add_expr_right_1 = mod_consts[125];
        tmp_args_element_value_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 346;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        frame_8bd46b9ddf6f206fa7710ac5a1cc862d->m_frame.f_lineno = 346;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 346;
            type_description_1 = "ooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 345;
        type_description_1 = "ooooooooo";
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
        PyObject *tmp_assign_source_7;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_ar);
        tmp_expression_value_8 = par_ar;
        tmp_sub_expr_left_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[37]);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_full);
        tmp_expression_value_9 = var_full;
        tmp_sub_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[37]);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_3);

            exception_lineno = 347;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_7 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 347;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_nremain == NULL);
        var_nremain = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(var_nremain);
        tmp_cmp_expr_left_1 = var_nremain;
        tmp_cmp_expr_right_1 = mod_consts[56];
        tmp_condition_result_1 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 348;
            type_description_1 = "ooooooooo";
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
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_tuple_arg_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_start_value_1;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_stop_value_2;
        if (par_f == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[141]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 349;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_10 = par_f;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[137]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pyfmt);
        tmp_mult_expr_left_3 = var_pyfmt;
        CHECK_OBJECT(var_nremain);
        tmp_mult_expr_right_3 = var_nremain;
        tmp_mod_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_mod_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 349;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_ar);
        tmp_expression_value_11 = par_ar;
        CHECK_OBJECT(par_ar);
        tmp_expression_value_12 = par_ar;
        tmp_sub_expr_left_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[37]);
        if (tmp_sub_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_mod_expr_left_2);

            exception_lineno = 349;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_nremain);
        tmp_sub_expr_right_4 = var_nremain;
        tmp_start_value_1 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_left_4);
        if (tmp_start_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_mod_expr_left_2);

            exception_lineno = 349;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_stop_value_2 = Py_None;
        tmp_subscript_value_2 = MAKE_SLICE_OBJECT2(tmp_start_value_1, tmp_stop_value_2);
        Py_DECREF(tmp_start_value_1);
        assert(!(tmp_subscript_value_2 == NULL));
        tmp_tuple_arg_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_2);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_tuple_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_mod_expr_left_2);

            exception_lineno = 349;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_2 = PySequence_Tuple(tmp_tuple_arg_2);
        Py_DECREF(tmp_tuple_arg_2);
        if (tmp_mod_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);
            Py_DECREF(tmp_mod_expr_left_2);

            exception_lineno = 349;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = BINARY_OPERATION_MOD_OBJECT_OBJECT_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_left_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 349;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = mod_consts[125];
        tmp_args_element_value_3 = BINARY_OPERATION_ADD_OBJECT_OBJECT_UNICODE(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 349;
            type_description_1 = "ooooooooo";
            goto frame_exception_exit_1;
        }
        frame_8bd46b9ddf6f206fa7710ac5a1cc862d->m_frame.f_lineno = 349;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 349;
            type_description_1 = "ooooooooo";
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
        exception_tb = MAKE_TRACEBACK(frame_8bd46b9ddf6f206fa7710ac5a1cc862d, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_8bd46b9ddf6f206fa7710ac5a1cc862d->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_8bd46b9ddf6f206fa7710ac5a1cc862d, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_8bd46b9ddf6f206fa7710ac5a1cc862d,
        type_description_1,
        par_f,
        par_ar,
        par_nlines,
        par_fmt,
        var_pyfmt,
        var_pyfmt_full,
        var_full,
        var_row,
        var_nremain
    );


    // Release cached frame if used for exception.
    if (frame_8bd46b9ddf6f206fa7710ac5a1cc862d == cache_frame_8bd46b9ddf6f206fa7710ac5a1cc862d) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_8bd46b9ddf6f206fa7710ac5a1cc862d);
        cache_frame_8bd46b9ddf6f206fa7710ac5a1cc862d = NULL;
    }

    assertFrameObject(frame_8bd46b9ddf6f206fa7710ac5a1cc862d);

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
    CHECK_OBJECT(var_pyfmt);
    Py_DECREF(var_pyfmt);
    var_pyfmt = NULL;
    Py_XDECREF(var_pyfmt_full);
    var_pyfmt_full = NULL;
    CHECK_OBJECT(var_full);
    Py_DECREF(var_full);
    var_full = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_nremain);
    var_nremain = NULL;
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

    Py_XDECREF(var_pyfmt);
    var_pyfmt = NULL;
    Py_XDECREF(var_pyfmt_full);
    var_pyfmt_full = NULL;
    Py_XDECREF(var_full);
    var_full = NULL;
    Py_XDECREF(var_row);
    var_row = NULL;
    Py_XDECREF(var_nremain);
    var_nremain = NULL;
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
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_ar);
    Py_DECREF(par_ar);
    CHECK_OBJECT(par_nlines);
    Py_DECREF(par_nlines);
    CHECK_OBJECT(par_fmt);
    Py_DECREF(par_fmt);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_f);
    Py_DECREF(par_f);
    CHECK_OBJECT(par_ar);
    Py_DECREF(par_ar);
    CHECK_OBJECT(par_nlines);
    Py_DECREF(par_nlines);
    CHECK_OBJECT(par_fmt);
    Py_DECREF(par_fmt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__9_from_fortran(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_cls = python_pars[0];
    PyObject *par_fmt = python_pars[1];
    PyObject *var_value_type = NULL;
    PyObject *var_structure = NULL;
    PyObject *var_storage = NULL;
    PyObject *var_e = NULL;
    struct Nuitka_FrameObject *frame_a885af5c1f91203dc081f15b5c367ca8;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
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
    bool tmp_result;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_a885af5c1f91203dc081f15b5c367ca8 = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a885af5c1f91203dc081f15b5c367ca8)) {
        Py_XDECREF(cache_frame_a885af5c1f91203dc081f15b5c367ca8);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a885af5c1f91203dc081f15b5c367ca8 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a885af5c1f91203dc081f15b5c367ca8 = MAKE_FUNCTION_FRAME(codeobj_a885af5c1f91203dc081f15b5c367ca8, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a885af5c1f91203dc081f15b5c367ca8->m_type_description == NULL);
    frame_a885af5c1f91203dc081f15b5c367ca8 = cache_frame_a885af5c1f91203dc081f15b5c367ca8;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a885af5c1f91203dc081f15b5c367ca8);
    assert(Py_REFCNT(frame_a885af5c1f91203dc081f15b5c367ca8) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        nuitka_digit tmp_cmp_expr_right_1;
        PyObject *tmp_len_arg_1;
        CHECK_OBJECT(par_fmt);
        tmp_len_arg_1 = par_fmt;
        tmp_cmp_expr_left_1 = BUILTIN_LEN(tmp_len_arg_1);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 389;
            type_description_1 = "oooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = 3;
        tmp_condition_result_1 = RICH_COMPARE_NE_CBOOL_LONG_DIGIT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
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
        tmp_make_exception_arg_1 = mod_consts[143];
        frame_a885af5c1f91203dc081f15b5c367ca8->m_frame.f_lineno = 390;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 390;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_2 = par_cls;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[144]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_fmt);
        tmp_expression_value_3 = par_fmt;
        tmp_subscript_value_2 = mod_consts[56];
        tmp_subscript_value_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 393;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(var_value_type == NULL);
        var_value_type = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_5 = par_cls;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[145]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_fmt);
        tmp_expression_value_6 = par_fmt;
        tmp_subscript_value_4 = mod_consts[2];
        tmp_subscript_value_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_4, 1);
        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_4);

            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_4);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 394;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(var_structure == NULL);
        var_structure = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(par_cls);
        tmp_expression_value_8 = par_cls;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[146]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(par_fmt);
        tmp_expression_value_9 = par_fmt;
        tmp_subscript_value_6 = mod_consts[76];
        tmp_subscript_value_5 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_9, tmp_subscript_value_6, 2);
        if (tmp_subscript_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_7);

            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_5);
        Py_DECREF(tmp_expression_value_7);
        Py_DECREF(tmp_subscript_value_5);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 395;
            type_description_1 = "oooooo";
            goto try_except_handler_2;
        }
        assert(var_storage == NULL);
        var_storage = tmp_assign_source_3;
    }
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_cls);
        tmp_called_value_1 = par_cls;
        CHECK_OBJECT(var_value_type);
        tmp_args_element_value_1 = var_value_type;
        CHECK_OBJECT(var_structure);
        tmp_args_element_value_2 = var_structure;
        CHECK_OBJECT(var_storage);
        tmp_args_element_value_3 = var_storage;
        frame_a885af5c1f91203dc081f15b5c367ca8->m_frame.f_lineno = 396;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 396;
            type_description_1 = "oooooo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_a885af5c1f91203dc081f15b5c367ca8, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_a885af5c1f91203dc081f15b5c367ca8, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_KeyError;
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
    {
        PyObject *tmp_assign_source_4;
        tmp_assign_source_4 = EXC_VALUE(PyThreadState_GET());
        assert(var_e == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_e = tmp_assign_source_4;
    }
    // Tried code:
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_raise_cause_1;
        tmp_mod_expr_left_1 = mod_consts[147];
        CHECK_OBJECT(par_fmt);
        tmp_mod_expr_right_1 = par_fmt;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 398;
            type_description_1 = "oooooo";
            goto try_except_handler_4;
        }
        frame_a885af5c1f91203dc081f15b5c367ca8->m_frame.f_lineno = 398;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        CHECK_OBJECT(var_e);
        tmp_raise_cause_1 = var_e;
        exception_type = tmp_raise_type_2;
        exception_value = NULL;
        Py_INCREF(tmp_raise_cause_1);
        exception_lineno = 398;
        RAISE_EXCEPTION_WITH_CAUSE(&exception_type, &exception_value, &exception_tb, tmp_raise_cause_1);
        type_description_1 = "oooooo";
        goto try_except_handler_4;
    }
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    Py_XDECREF(var_e);
    var_e = NULL;

    // Re-raise.
    exception_type = exception_keeper_type_2;
    exception_value = exception_keeper_value_2;
    exception_tb = exception_keeper_tb_2;
    exception_lineno = exception_keeper_lineno_2;

    goto try_except_handler_3;
    // End of try:
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 392;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_a885af5c1f91203dc081f15b5c367ca8->m_frame) frame_a885af5c1f91203dc081f15b5c367ca8->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "oooooo";
    goto try_except_handler_3;
    branch_end_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
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

    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

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
        exception_tb = MAKE_TRACEBACK(frame_a885af5c1f91203dc081f15b5c367ca8, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a885af5c1f91203dc081f15b5c367ca8->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a885af5c1f91203dc081f15b5c367ca8, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a885af5c1f91203dc081f15b5c367ca8,
        type_description_1,
        par_cls,
        par_fmt,
        var_value_type,
        var_structure,
        var_storage,
        var_e
    );


    // Release cached frame if used for exception.
    if (frame_a885af5c1f91203dc081f15b5c367ca8 == cache_frame_a885af5c1f91203dc081f15b5c367ca8) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a885af5c1f91203dc081f15b5c367ca8);
        cache_frame_a885af5c1f91203dc081f15b5c367ca8 = NULL;
    }

    assertFrameObject(frame_a885af5c1f91203dc081f15b5c367ca8);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_value_type);
    Py_DECREF(var_value_type);
    var_value_type = NULL;
    CHECK_OBJECT(var_structure);
    Py_DECREF(var_structure);
    var_structure = NULL;
    CHECK_OBJECT(var_storage);
    Py_DECREF(var_storage);
    var_storage = NULL;
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

    Py_XDECREF(var_value_type);
    var_value_type = NULL;
    Py_XDECREF(var_structure);
    var_structure = NULL;
    Py_XDECREF(var_storage);
    var_storage = NULL;
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
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_fmt);
    Py_DECREF(par_fmt);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_cls);
    Py_DECREF(par_cls);
    CHECK_OBJECT(par_fmt);
    Py_DECREF(par_fmt);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__10___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_value_type = python_pars[1];
    PyObject *par_structure = python_pars[2];
    PyObject *par_storage = python_pars[3];
    struct Nuitka_FrameObject *frame_ba3bc58c2fca6134c30fe2eb32c6ef9a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_ba3bc58c2fca6134c30fe2eb32c6ef9a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_ba3bc58c2fca6134c30fe2eb32c6ef9a)) {
        Py_XDECREF(cache_frame_ba3bc58c2fca6134c30fe2eb32c6ef9a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_ba3bc58c2fca6134c30fe2eb32c6ef9a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_ba3bc58c2fca6134c30fe2eb32c6ef9a = MAKE_FUNCTION_FRAME(codeobj_ba3bc58c2fca6134c30fe2eb32c6ef9a, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_ba3bc58c2fca6134c30fe2eb32c6ef9a->m_type_description == NULL);
    frame_ba3bc58c2fca6134c30fe2eb32c6ef9a = cache_frame_ba3bc58c2fca6134c30fe2eb32c6ef9a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_ba3bc58c2fca6134c30fe2eb32c6ef9a);
    assert(Py_REFCNT(frame_ba3bc58c2fca6134c30fe2eb32c6ef9a) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_value_type);
        tmp_assattr_value_1 = par_value_type;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[63], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 401;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_structure);
        tmp_assattr_value_2 = par_structure;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[65], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 402;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_storage);
        tmp_assattr_value_3 = par_storage;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[67], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 403;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_value_type);
        tmp_cmp_expr_left_1 = par_value_type;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_cmp_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[148]);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_1, tmp_cmp_expr_left_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooo";
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
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        tmp_mod_expr_left_1 = mod_consts[149];
        CHECK_OBJECT(par_value_type);
        tmp_mod_expr_right_1 = par_value_type;
        tmp_make_exception_arg_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        if (tmp_make_exception_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ba3bc58c2fca6134c30fe2eb32c6ef9a->m_frame.f_lineno = 406;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        Py_DECREF(tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 406;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_structure);
        tmp_cmp_expr_left_2 = par_structure;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_cmp_expr_right_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[150]);
        if (tmp_cmp_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_2, tmp_cmp_expr_left_2);
        Py_DECREF(tmp_cmp_expr_right_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 407;
            type_description_1 = "oooo";
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
        PyObject *tmp_mod_expr_left_2;
        PyObject *tmp_mod_expr_right_2;
        tmp_mod_expr_left_2 = mod_consts[151];
        CHECK_OBJECT(par_structure);
        tmp_mod_expr_right_2 = par_structure;
        tmp_make_exception_arg_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        if (tmp_make_exception_arg_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 408;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ba3bc58c2fca6134c30fe2eb32c6ef9a->m_frame.f_lineno = 408;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        Py_DECREF(tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 408;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_storage);
        tmp_cmp_expr_left_3 = par_storage;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[152]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PySequence_Contains(tmp_cmp_expr_right_3, tmp_cmp_expr_left_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;
            type_description_1 = "oooo";
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
        PyObject *tmp_raise_type_3;
        PyObject *tmp_make_exception_arg_3;
        PyObject *tmp_mod_expr_left_3;
        PyObject *tmp_mod_expr_right_3;
        tmp_mod_expr_left_3 = mod_consts[153];
        CHECK_OBJECT(par_storage);
        tmp_mod_expr_right_3 = par_storage;
        tmp_make_exception_arg_3 = BINARY_OPERATION_MOD_OBJECT_UNICODE_OBJECT(tmp_mod_expr_left_3, tmp_mod_expr_right_3);
        if (tmp_make_exception_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 410;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        frame_ba3bc58c2fca6134c30fe2eb32c6ef9a->m_frame.f_lineno = 410;
        tmp_raise_type_3 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_3);
        Py_DECREF(tmp_make_exception_arg_3);
        assert(!(tmp_raise_type_3 == NULL));
        exception_type = tmp_raise_type_3;
        exception_lineno = 410;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_3:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_ba3bc58c2fca6134c30fe2eb32c6ef9a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_ba3bc58c2fca6134c30fe2eb32c6ef9a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_ba3bc58c2fca6134c30fe2eb32c6ef9a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_ba3bc58c2fca6134c30fe2eb32c6ef9a,
        type_description_1,
        par_self,
        par_value_type,
        par_structure,
        par_storage
    );


    // Release cached frame if used for exception.
    if (frame_ba3bc58c2fca6134c30fe2eb32c6ef9a == cache_frame_ba3bc58c2fca6134c30fe2eb32c6ef9a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_ba3bc58c2fca6134c30fe2eb32c6ef9a);
        cache_frame_ba3bc58c2fca6134c30fe2eb32c6ef9a = NULL;
    }

    assertFrameObject(frame_ba3bc58c2fca6134c30fe2eb32c6ef9a);

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
    CHECK_OBJECT(par_value_type);
    Py_DECREF(par_value_type);
    CHECK_OBJECT(par_structure);
    Py_DECREF(par_structure);
    CHECK_OBJECT(par_storage);
    Py_DECREF(par_storage);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_value_type);
    Py_DECREF(par_value_type);
    CHECK_OBJECT(par_structure);
    Py_DECREF(par_structure);
    CHECK_OBJECT(par_storage);
    Py_DECREF(par_storage);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__11_fortran_format(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_032c1d28309effb86d2888c632ef4c52;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_032c1d28309effb86d2888c632ef4c52 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_032c1d28309effb86d2888c632ef4c52)) {
        Py_XDECREF(cache_frame_032c1d28309effb86d2888c632ef4c52);

#if _DEBUG_REFCOUNTS
        if (cache_frame_032c1d28309effb86d2888c632ef4c52 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_032c1d28309effb86d2888c632ef4c52 = MAKE_FUNCTION_FRAME(codeobj_032c1d28309effb86d2888c632ef4c52, module_scipy$io$harwell_boeing$hb, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_032c1d28309effb86d2888c632ef4c52->m_type_description == NULL);
    frame_032c1d28309effb86d2888c632ef4c52 = cache_frame_032c1d28309effb86d2888c632ef4c52;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_032c1d28309effb86d2888c632ef4c52);
    assert(Py_REFCNT(frame_032c1d28309effb86d2888c632ef4c52) == 2);

    // Framed code:
    {
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[148]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_subscript_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[63]);
        if (tmp_subscript_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_expression_value_1);

            exception_lineno = 414;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        Py_DECREF(tmp_expression_value_1);
        Py_DECREF(tmp_subscript_value_1);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_expression_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[150]);
        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 415;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_subscript_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[65]);
        if (tmp_subscript_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);
            Py_DECREF(tmp_expression_value_4);

            exception_lineno = 415;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        Py_DECREF(tmp_expression_value_4);
        Py_DECREF(tmp_subscript_value_2);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 415;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 415;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_expression_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[152]);
        if (tmp_expression_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 416;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_subscript_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[67]);
        if (tmp_subscript_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);
            Py_DECREF(tmp_expression_value_7);

            exception_lineno = 416;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_7);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 416;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 416;
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
        exception_tb = MAKE_TRACEBACK(frame_032c1d28309effb86d2888c632ef4c52, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_032c1d28309effb86d2888c632ef4c52->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_032c1d28309effb86d2888c632ef4c52, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_032c1d28309effb86d2888c632ef4c52,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_032c1d28309effb86d2888c632ef4c52 == cache_frame_032c1d28309effb86d2888c632ef4c52) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_032c1d28309effb86d2888c632ef4c52);
        cache_frame_032c1d28309effb86d2888c632ef4c52 = NULL;
    }

    assertFrameObject(frame_032c1d28309effb86d2888c632ef4c52);

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


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__12___repr__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_21633eb5cf88f1fb114519a5471da259;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_21633eb5cf88f1fb114519a5471da259 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_21633eb5cf88f1fb114519a5471da259)) {
        Py_XDECREF(cache_frame_21633eb5cf88f1fb114519a5471da259);

#if _DEBUG_REFCOUNTS
        if (cache_frame_21633eb5cf88f1fb114519a5471da259 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_21633eb5cf88f1fb114519a5471da259 = MAKE_FUNCTION_FRAME(codeobj_21633eb5cf88f1fb114519a5471da259, module_scipy$io$harwell_boeing$hb, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_21633eb5cf88f1fb114519a5471da259->m_type_description == NULL);
    frame_21633eb5cf88f1fb114519a5471da259 = cache_frame_21633eb5cf88f1fb114519a5471da259;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_21633eb5cf88f1fb114519a5471da259);
    assert(Py_REFCNT(frame_21633eb5cf88f1fb114519a5471da259) == 2);

    // Framed code:
    {
        PyObject *tmp_mod_expr_left_1;
        PyObject *tmp_mod_expr_right_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_expression_value_1;
        tmp_mod_expr_left_1 = mod_consts[154];
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        if (tmp_tuple_element_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(3);
        {
            PyObject *tmp_expression_value_2;
            PyObject *tmp_expression_value_3;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_2 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[65]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_self);
            tmp_expression_value_3 = par_self;
            tmp_tuple_element_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[67]);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 420;
                type_description_1 = "o";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 2, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        tmp_return_value = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 420;
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
        exception_tb = MAKE_TRACEBACK(frame_21633eb5cf88f1fb114519a5471da259, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_21633eb5cf88f1fb114519a5471da259->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_21633eb5cf88f1fb114519a5471da259, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_21633eb5cf88f1fb114519a5471da259,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_21633eb5cf88f1fb114519a5471da259 == cache_frame_21633eb5cf88f1fb114519a5471da259) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_21633eb5cf88f1fb114519a5471da259);
        cache_frame_21633eb5cf88f1fb114519a5471da259 = NULL;
    }

    assertFrameObject(frame_21633eb5cf88f1fb114519a5471da259);

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


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__13___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_file = python_pars[1];
    PyObject *par_hb_info = python_pars[2];
    struct Nuitka_FrameObject *frame_a8c870835b8d4891de7ba15d8e4e2c18;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_a8c870835b8d4891de7ba15d8e4e2c18 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_a8c870835b8d4891de7ba15d8e4e2c18)) {
        Py_XDECREF(cache_frame_a8c870835b8d4891de7ba15d8e4e2c18);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a8c870835b8d4891de7ba15d8e4e2c18 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a8c870835b8d4891de7ba15d8e4e2c18 = MAKE_FUNCTION_FRAME(codeobj_a8c870835b8d4891de7ba15d8e4e2c18, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a8c870835b8d4891de7ba15d8e4e2c18->m_type_description == NULL);
    frame_a8c870835b8d4891de7ba15d8e4e2c18 = cache_frame_a8c870835b8d4891de7ba15d8e4e2c18;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a8c870835b8d4891de7ba15d8e4e2c18);
    assert(Py_REFCNT(frame_a8c870835b8d4891de7ba15d8e4e2c18) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_file);
        tmp_assattr_value_1 = par_file;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[155], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 435;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_hb_info);
        tmp_cmp_expr_left_1 = par_hb_info;
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
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_assattr_target_2;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_file);
        tmp_args_element_value_1 = par_file;
        frame_a8c870835b8d4891de7ba15d8e4e2c18->m_frame.f_lineno = 437;
        tmp_assattr_value_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[157], tmp_args_element_value_1);
        if (tmp_assattr_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[158], tmp_assattr_value_2);
        Py_DECREF(tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 437;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_hb_info);
        tmp_assattr_value_3 = par_hb_info;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[158], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 441;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    branch_end_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a8c870835b8d4891de7ba15d8e4e2c18, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a8c870835b8d4891de7ba15d8e4e2c18->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a8c870835b8d4891de7ba15d8e4e2c18, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a8c870835b8d4891de7ba15d8e4e2c18,
        type_description_1,
        par_self,
        par_file,
        par_hb_info
    );


    // Release cached frame if used for exception.
    if (frame_a8c870835b8d4891de7ba15d8e4e2c18 == cache_frame_a8c870835b8d4891de7ba15d8e4e2c18) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a8c870835b8d4891de7ba15d8e4e2c18);
        cache_frame_a8c870835b8d4891de7ba15d8e4e2c18 = NULL;
    }

    assertFrameObject(frame_a8c870835b8d4891de7ba15d8e4e2c18);

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
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_hb_info);
    Py_DECREF(par_hb_info);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_file);
    Py_DECREF(par_file);
    CHECK_OBJECT(par_hb_info);
    Py_DECREF(par_hb_info);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__14_title(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9b6d65c2f4ea78f1daf854696c7eacf7;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9b6d65c2f4ea78f1daf854696c7eacf7 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9b6d65c2f4ea78f1daf854696c7eacf7)) {
        Py_XDECREF(cache_frame_9b6d65c2f4ea78f1daf854696c7eacf7);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9b6d65c2f4ea78f1daf854696c7eacf7 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9b6d65c2f4ea78f1daf854696c7eacf7 = MAKE_FUNCTION_FRAME(codeobj_9b6d65c2f4ea78f1daf854696c7eacf7, module_scipy$io$harwell_boeing$hb, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9b6d65c2f4ea78f1daf854696c7eacf7->m_type_description == NULL);
    frame_9b6d65c2f4ea78f1daf854696c7eacf7 = cache_frame_9b6d65c2f4ea78f1daf854696c7eacf7;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9b6d65c2f4ea78f1daf854696c7eacf7);
    assert(Py_REFCNT(frame_9b6d65c2f4ea78f1daf854696c7eacf7) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[158]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[78]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 445;
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
        exception_tb = MAKE_TRACEBACK(frame_9b6d65c2f4ea78f1daf854696c7eacf7, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9b6d65c2f4ea78f1daf854696c7eacf7->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9b6d65c2f4ea78f1daf854696c7eacf7, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9b6d65c2f4ea78f1daf854696c7eacf7,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9b6d65c2f4ea78f1daf854696c7eacf7 == cache_frame_9b6d65c2f4ea78f1daf854696c7eacf7) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9b6d65c2f4ea78f1daf854696c7eacf7);
        cache_frame_9b6d65c2f4ea78f1daf854696c7eacf7 = NULL;
    }

    assertFrameObject(frame_9b6d65c2f4ea78f1daf854696c7eacf7);

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


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__15_key(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_1ea928f12c9ac5fb549d9fbf0f1e6436;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1ea928f12c9ac5fb549d9fbf0f1e6436 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_1ea928f12c9ac5fb549d9fbf0f1e6436)) {
        Py_XDECREF(cache_frame_1ea928f12c9ac5fb549d9fbf0f1e6436);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1ea928f12c9ac5fb549d9fbf0f1e6436 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1ea928f12c9ac5fb549d9fbf0f1e6436 = MAKE_FUNCTION_FRAME(codeobj_1ea928f12c9ac5fb549d9fbf0f1e6436, module_scipy$io$harwell_boeing$hb, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1ea928f12c9ac5fb549d9fbf0f1e6436->m_type_description == NULL);
    frame_1ea928f12c9ac5fb549d9fbf0f1e6436 = cache_frame_1ea928f12c9ac5fb549d9fbf0f1e6436;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1ea928f12c9ac5fb549d9fbf0f1e6436);
    assert(Py_REFCNT(frame_1ea928f12c9ac5fb549d9fbf0f1e6436) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[158]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[79]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 449;
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
        exception_tb = MAKE_TRACEBACK(frame_1ea928f12c9ac5fb549d9fbf0f1e6436, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1ea928f12c9ac5fb549d9fbf0f1e6436->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1ea928f12c9ac5fb549d9fbf0f1e6436, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1ea928f12c9ac5fb549d9fbf0f1e6436,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_1ea928f12c9ac5fb549d9fbf0f1e6436 == cache_frame_1ea928f12c9ac5fb549d9fbf0f1e6436) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1ea928f12c9ac5fb549d9fbf0f1e6436);
        cache_frame_1ea928f12c9ac5fb549d9fbf0f1e6436 = NULL;
    }

    assertFrameObject(frame_1ea928f12c9ac5fb549d9fbf0f1e6436);

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


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__16_type(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_18ae6c3623c95d3d59503ada56f548bb;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_18ae6c3623c95d3d59503ada56f548bb = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_18ae6c3623c95d3d59503ada56f548bb)) {
        Py_XDECREF(cache_frame_18ae6c3623c95d3d59503ada56f548bb);

#if _DEBUG_REFCOUNTS
        if (cache_frame_18ae6c3623c95d3d59503ada56f548bb == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_18ae6c3623c95d3d59503ada56f548bb = MAKE_FUNCTION_FRAME(codeobj_18ae6c3623c95d3d59503ada56f548bb, module_scipy$io$harwell_boeing$hb, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_18ae6c3623c95d3d59503ada56f548bb->m_type_description == NULL);
    frame_18ae6c3623c95d3d59503ada56f548bb = cache_frame_18ae6c3623c95d3d59503ada56f548bb;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_18ae6c3623c95d3d59503ada56f548bb);
    assert(Py_REFCNT(frame_18ae6c3623c95d3d59503ada56f548bb) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[158]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[114]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[63]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 453;
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
        exception_tb = MAKE_TRACEBACK(frame_18ae6c3623c95d3d59503ada56f548bb, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_18ae6c3623c95d3d59503ada56f548bb->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_18ae6c3623c95d3d59503ada56f548bb, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_18ae6c3623c95d3d59503ada56f548bb,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_18ae6c3623c95d3d59503ada56f548bb == cache_frame_18ae6c3623c95d3d59503ada56f548bb) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_18ae6c3623c95d3d59503ada56f548bb);
        cache_frame_18ae6c3623c95d3d59503ada56f548bb = NULL;
    }

    assertFrameObject(frame_18ae6c3623c95d3d59503ada56f548bb);

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


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__17_structure(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_3e0abf947a208e56ac91311a0586c0de;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_3e0abf947a208e56ac91311a0586c0de = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_3e0abf947a208e56ac91311a0586c0de)) {
        Py_XDECREF(cache_frame_3e0abf947a208e56ac91311a0586c0de);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3e0abf947a208e56ac91311a0586c0de == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3e0abf947a208e56ac91311a0586c0de = MAKE_FUNCTION_FRAME(codeobj_3e0abf947a208e56ac91311a0586c0de, module_scipy$io$harwell_boeing$hb, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3e0abf947a208e56ac91311a0586c0de->m_type_description == NULL);
    frame_3e0abf947a208e56ac91311a0586c0de = cache_frame_3e0abf947a208e56ac91311a0586c0de;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3e0abf947a208e56ac91311a0586c0de);
    assert(Py_REFCNT(frame_3e0abf947a208e56ac91311a0586c0de) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[158]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[114]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[65]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 457;
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
        exception_tb = MAKE_TRACEBACK(frame_3e0abf947a208e56ac91311a0586c0de, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3e0abf947a208e56ac91311a0586c0de->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3e0abf947a208e56ac91311a0586c0de, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3e0abf947a208e56ac91311a0586c0de,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_3e0abf947a208e56ac91311a0586c0de == cache_frame_3e0abf947a208e56ac91311a0586c0de) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3e0abf947a208e56ac91311a0586c0de);
        cache_frame_3e0abf947a208e56ac91311a0586c0de = NULL;
    }

    assertFrameObject(frame_3e0abf947a208e56ac91311a0586c0de);

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


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__18_storage(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_f26fe65bb302d137c0096ce879504c33;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_f26fe65bb302d137c0096ce879504c33 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_f26fe65bb302d137c0096ce879504c33)) {
        Py_XDECREF(cache_frame_f26fe65bb302d137c0096ce879504c33);

#if _DEBUG_REFCOUNTS
        if (cache_frame_f26fe65bb302d137c0096ce879504c33 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_f26fe65bb302d137c0096ce879504c33 = MAKE_FUNCTION_FRAME(codeobj_f26fe65bb302d137c0096ce879504c33, module_scipy$io$harwell_boeing$hb, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_f26fe65bb302d137c0096ce879504c33->m_type_description == NULL);
    frame_f26fe65bb302d137c0096ce879504c33 = cache_frame_f26fe65bb302d137c0096ce879504c33;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_f26fe65bb302d137c0096ce879504c33);
    assert(Py_REFCNT(frame_f26fe65bb302d137c0096ce879504c33) == 2);

    // Framed code:
    {
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_self);
        tmp_expression_value_3 = par_self;
        tmp_expression_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[158]);
        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[114]);
        Py_DECREF(tmp_expression_value_2);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        tmp_return_value = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[67]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
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
        exception_tb = MAKE_TRACEBACK(frame_f26fe65bb302d137c0096ce879504c33, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_f26fe65bb302d137c0096ce879504c33->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_f26fe65bb302d137c0096ce879504c33, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_f26fe65bb302d137c0096ce879504c33,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_f26fe65bb302d137c0096ce879504c33 == cache_frame_f26fe65bb302d137c0096ce879504c33) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_f26fe65bb302d137c0096ce879504c33);
        cache_frame_f26fe65bb302d137c0096ce879504c33 = NULL;
    }

    assertFrameObject(frame_f26fe65bb302d137c0096ce879504c33);

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


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__19_read_matrix(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    struct Nuitka_FrameObject *frame_9751aee207b4e57e80d39edb1784f5c0;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9751aee207b4e57e80d39edb1784f5c0 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9751aee207b4e57e80d39edb1784f5c0)) {
        Py_XDECREF(cache_frame_9751aee207b4e57e80d39edb1784f5c0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9751aee207b4e57e80d39edb1784f5c0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9751aee207b4e57e80d39edb1784f5c0 = MAKE_FUNCTION_FRAME(codeobj_9751aee207b4e57e80d39edb1784f5c0, module_scipy$io$harwell_boeing$hb, sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9751aee207b4e57e80d39edb1784f5c0->m_type_description == NULL);
    frame_9751aee207b4e57e80d39edb1784f5c0 = cache_frame_9751aee207b4e57e80d39edb1784f5c0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9751aee207b4e57e80d39edb1784f5c0);
    assert(Py_REFCNT(frame_9751aee207b4e57e80d39edb1784f5c0) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[160]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[160]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[155]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[158]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_1);

            exception_lineno = 464;
            type_description_1 = "o";
            goto frame_exception_exit_1;
        }
        frame_9751aee207b4e57e80d39edb1784f5c0->m_frame.f_lineno = 464;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_1);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
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
        exception_tb = MAKE_TRACEBACK(frame_9751aee207b4e57e80d39edb1784f5c0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9751aee207b4e57e80d39edb1784f5c0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9751aee207b4e57e80d39edb1784f5c0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9751aee207b4e57e80d39edb1784f5c0,
        type_description_1,
        par_self
    );


    // Release cached frame if used for exception.
    if (frame_9751aee207b4e57e80d39edb1784f5c0 == cache_frame_9751aee207b4e57e80d39edb1784f5c0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9751aee207b4e57e80d39edb1784f5c0);
        cache_frame_9751aee207b4e57e80d39edb1784f5c0 = NULL;
    }

    assertFrameObject(frame_9751aee207b4e57e80d39edb1784f5c0);

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


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__20_write_matrix(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_m = python_pars[1];
    struct Nuitka_FrameObject *frame_4c57b98927fb2497d34d6d0998e45059;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_4c57b98927fb2497d34d6d0998e45059 = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_4c57b98927fb2497d34d6d0998e45059)) {
        Py_XDECREF(cache_frame_4c57b98927fb2497d34d6d0998e45059);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4c57b98927fb2497d34d6d0998e45059 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4c57b98927fb2497d34d6d0998e45059 = MAKE_FUNCTION_FRAME(codeobj_4c57b98927fb2497d34d6d0998e45059, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4c57b98927fb2497d34d6d0998e45059->m_type_description == NULL);
    frame_4c57b98927fb2497d34d6d0998e45059 = cache_frame_4c57b98927fb2497d34d6d0998e45059;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4c57b98927fb2497d34d6d0998e45059);
    assert(Py_REFCNT(frame_4c57b98927fb2497d34d6d0998e45059) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[161]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[161]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_m);
        tmp_args_element_value_1 = par_m;
        CHECK_OBJECT(par_self);
        tmp_expression_value_1 = par_self;
        tmp_args_element_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[155]);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_2 = par_self;
        tmp_args_element_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[158]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_args_element_value_2);

            exception_lineno = 467;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        frame_4c57b98927fb2497d34d6d0998e45059->m_frame.f_lineno = 467;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_1, call_args);
        }

        Py_DECREF(tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
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
        exception_tb = MAKE_TRACEBACK(frame_4c57b98927fb2497d34d6d0998e45059, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4c57b98927fb2497d34d6d0998e45059->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4c57b98927fb2497d34d6d0998e45059, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4c57b98927fb2497d34d6d0998e45059,
        type_description_1,
        par_self,
        par_m
    );


    // Release cached frame if used for exception.
    if (frame_4c57b98927fb2497d34d6d0998e45059 == cache_frame_4c57b98927fb2497d34d6d0998e45059) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4c57b98927fb2497d34d6d0998e45059);
        cache_frame_4c57b98927fb2497d34d6d0998e45059 = NULL;
    }

    assertFrameObject(frame_4c57b98927fb2497d34d6d0998e45059);

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
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__21_hb_read(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path_or_open_file = python_pars[0];
    PyObject *var__get_matrix = NULL;
    PyObject *var_f = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_c06f66e29131adca42daed6ed849a495;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
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
    static struct Nuitka_FrameObject *cache_frame_c06f66e29131adca42daed6ed849a495 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;


        tmp_assign_source_1 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__21_hb_read$$$function__1__get_matrix();

        assert(var__get_matrix == NULL);
        var__get_matrix = tmp_assign_source_1;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_c06f66e29131adca42daed6ed849a495)) {
        Py_XDECREF(cache_frame_c06f66e29131adca42daed6ed849a495);

#if _DEBUG_REFCOUNTS
        if (cache_frame_c06f66e29131adca42daed6ed849a495 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_c06f66e29131adca42daed6ed849a495 = MAKE_FUNCTION_FRAME(codeobj_c06f66e29131adca42daed6ed849a495, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_c06f66e29131adca42daed6ed849a495->m_type_description == NULL);
    frame_c06f66e29131adca42daed6ed849a495 = cache_frame_c06f66e29131adca42daed6ed849a495;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_c06f66e29131adca42daed6ed849a495);
    assert(Py_REFCNT(frame_c06f66e29131adca42daed6ed849a495) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_path_or_open_file);
        tmp_expression_value_1 = par_path_or_open_file;
        tmp_attribute_value_1 = mod_consts[128];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_1, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 511;
            type_description_1 = "ooo";
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
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(var__get_matrix);
        tmp_called_value_1 = var__get_matrix;
        CHECK_OBJECT(par_path_or_open_file);
        tmp_args_element_value_1 = par_path_or_open_file;
        frame_c06f66e29131adca42daed6ed849a495->m_frame.f_lineno = 512;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 512;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_1;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_open_filename_1;
        CHECK_OBJECT(par_path_or_open_file);
        tmp_open_filename_1 = par_path_or_open_file;
        tmp_assign_source_2 = BUILTIN_OPEN(tmp_open_filename_1, NULL, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_called_value_2 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[164]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        frame_c06f66e29131adca42daed6ed849a495->m_frame.f_lineno = 514;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_2);
        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_3 = tmp_with_1__source;
        tmp_assign_source_4 = LOOKUP_SPECIAL(tmp_expression_value_3, mod_consts[165]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 514;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_4;
    }
    {
        nuitka_bool tmp_assign_source_5;
        tmp_assign_source_5 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_6 = tmp_with_1__enter;
        assert(var_f == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_f = tmp_assign_source_6;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var__get_matrix);
        tmp_called_value_3 = var__get_matrix;
        CHECK_OBJECT(var_f);
        tmp_args_element_value_2 = var_f;
        frame_c06f66e29131adca42daed6ed849a495->m_frame.f_lineno = 515;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_c06f66e29131adca42daed6ed849a495, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_c06f66e29131adca42daed6ed849a495, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        tmp_cmp_expr_left_1 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_1 = PyExc_BaseException;
        tmp_res = EXCEPTION_MATCH_BOOL(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        assert(!(tmp_res == -1));
        tmp_condition_result_2 = (tmp_res != 0) ? true : false;
        if (tmp_condition_result_2 != false) {
            goto branch_yes_2;
        } else {
            goto branch_no_2;
        }
    }
    branch_yes_2:;
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_7;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_4 = tmp_with_1__exit;
        tmp_args_element_value_3 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_4 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_5 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_c06f66e29131adca42daed6ed849a495->m_frame.f_lineno = 515;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_4, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooo";
            goto try_except_handler_5;
        }
        tmp_condition_result_3 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_3 != false) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 515;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c06f66e29131adca42daed6ed849a495->m_frame) frame_c06f66e29131adca42daed6ed849a495->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_5;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 514;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_c06f66e29131adca42daed6ed849a495->m_frame) frame_c06f66e29131adca42daed6ed849a495->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooo";
    goto try_except_handler_5;
    branch_end_2:;
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
        bool tmp_condition_result_4;
        nuitka_bool tmp_cmp_expr_left_2;
        nuitka_bool tmp_cmp_expr_right_2;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_2 = tmp_with_1__indicator;
        tmp_cmp_expr_right_2 = NUITKA_BOOL_TRUE;
        tmp_condition_result_4 = (tmp_cmp_expr_left_2 == tmp_cmp_expr_right_2) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_called_value_5;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        frame_c06f66e29131adca42daed6ed849a495->m_frame.f_lineno = 515;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_5, mod_consts[166]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;
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
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_c06f66e29131adca42daed6ed849a495->m_frame.f_lineno = 515;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[166]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 515;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_5:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_6;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_c06f66e29131adca42daed6ed849a495->m_frame.f_lineno = 515;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[166]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 515;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_6:;
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
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
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
        exception_tb = MAKE_TRACEBACK(frame_c06f66e29131adca42daed6ed849a495, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_c06f66e29131adca42daed6ed849a495->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_c06f66e29131adca42daed6ed849a495, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_c06f66e29131adca42daed6ed849a495,
        type_description_1,
        par_path_or_open_file,
        var__get_matrix,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_c06f66e29131adca42daed6ed849a495 == cache_frame_c06f66e29131adca42daed6ed849a495) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_c06f66e29131adca42daed6ed849a495);
        cache_frame_c06f66e29131adca42daed6ed849a495 = NULL;
    }

    assertFrameObject(frame_c06f66e29131adca42daed6ed849a495);

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
    Py_XDECREF(var__get_matrix);
    var__get_matrix = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
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

    Py_XDECREF(var__get_matrix);
    var__get_matrix = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
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
    CHECK_OBJECT(par_path_or_open_file);
    Py_DECREF(par_path_or_open_file);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path_or_open_file);
    Py_DECREF(par_path_or_open_file);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__21_hb_read$$$function__1__get_matrix(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fid = python_pars[0];
    PyObject *var_hb = NULL;
    struct Nuitka_FrameObject *frame_63471265663335d37b4abf444bc4360e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_63471265663335d37b4abf444bc4360e = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_63471265663335d37b4abf444bc4360e)) {
        Py_XDECREF(cache_frame_63471265663335d37b4abf444bc4360e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_63471265663335d37b4abf444bc4360e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_63471265663335d37b4abf444bc4360e = MAKE_FUNCTION_FRAME(codeobj_63471265663335d37b4abf444bc4360e, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_63471265663335d37b4abf444bc4360e->m_type_description == NULL);
    frame_63471265663335d37b4abf444bc4360e = cache_frame_63471265663335d37b4abf444bc4360e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_63471265663335d37b4abf444bc4360e);
    assert(Py_REFCNT(frame_63471265663335d37b4abf444bc4360e) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fid);
        tmp_args_element_value_1 = par_fid;
        frame_63471265663335d37b4abf444bc4360e->m_frame.f_lineno = 508;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 508;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
        assert(var_hb == NULL);
        var_hb = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(var_hb);
        tmp_called_instance_1 = var_hb;
        frame_63471265663335d37b4abf444bc4360e->m_frame.f_lineno = 509;
        tmp_return_value = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[169]);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 509;
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
        exception_tb = MAKE_TRACEBACK(frame_63471265663335d37b4abf444bc4360e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_63471265663335d37b4abf444bc4360e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_63471265663335d37b4abf444bc4360e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_63471265663335d37b4abf444bc4360e,
        type_description_1,
        par_fid,
        var_hb
    );


    // Release cached frame if used for exception.
    if (frame_63471265663335d37b4abf444bc4360e == cache_frame_63471265663335d37b4abf444bc4360e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_63471265663335d37b4abf444bc4360e);
        cache_frame_63471265663335d37b4abf444bc4360e = NULL;
    }

    assertFrameObject(frame_63471265663335d37b4abf444bc4360e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_hb);
    Py_DECREF(var_hb);
    var_hb = NULL;
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

    Py_XDECREF(var_hb);
    var_hb = NULL;
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
    CHECK_OBJECT(par_fid);
    Py_DECREF(par_fid);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fid);
    Py_DECREF(par_fid);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__22_hb_write(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_path_or_open_file = python_pars[0];
    struct Nuitka_CellObject *par_m = Nuitka_Cell_New1(python_pars[1]);
    struct Nuitka_CellObject *par_hb_info = Nuitka_Cell_New1(python_pars[2]);
    PyObject *var__set_matrix = NULL;
    PyObject *var_f = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_6a0c186bda6403387db932037b971c77;
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
    static struct Nuitka_FrameObject *cache_frame_6a0c186bda6403387db932037b971c77 = NULL;
    PyObject *exception_keeper_type_5;
    PyObject *exception_keeper_value_5;
    PyTracebackObject *exception_keeper_tb_5;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_5;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6a0c186bda6403387db932037b971c77)) {
        Py_XDECREF(cache_frame_6a0c186bda6403387db932037b971c77);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6a0c186bda6403387db932037b971c77 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6a0c186bda6403387db932037b971c77 = MAKE_FUNCTION_FRAME(codeobj_6a0c186bda6403387db932037b971c77, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6a0c186bda6403387db932037b971c77->m_type_description == NULL);
    frame_6a0c186bda6403387db932037b971c77 = cache_frame_6a0c186bda6403387db932037b971c77;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6a0c186bda6403387db932037b971c77);
    assert(Py_REFCNT(frame_6a0c186bda6403387db932037b971c77) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_m));
        tmp_expression_value_1 = Nuitka_Cell_GET(par_m);
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "occoo";
            goto frame_exception_exit_1;
        }
        frame_6a0c186bda6403387db932037b971c77->m_frame.f_lineno = 558;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[5], 0), mod_consts[6]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 558;
            type_description_1 = "occoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_m);
            PyCell_SET(par_m, tmp_assign_source_1);
            Py_XDECREF(old);
        }

    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(Nuitka_Cell_GET(par_hb_info));
        tmp_cmp_expr_left_1 = Nuitka_Cell_GET(par_hb_info);
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
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[156]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[156]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "occoo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(Nuitka_Cell_GET(par_m));
        tmp_args_element_value_1 = Nuitka_Cell_GET(par_m);
        frame_6a0c186bda6403387db932037b971c77->m_frame.f_lineno = 561;
        tmp_assign_source_2 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[170], tmp_args_element_value_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 561;
            type_description_1 = "occoo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = Nuitka_Cell_GET(par_hb_info);
            PyCell_SET(par_hb_info, tmp_assign_source_2);
            Py_XDECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_3;
        struct Nuitka_CellObject *tmp_closure_1[2];

        tmp_closure_1[0] = par_hb_info;
        Py_INCREF(tmp_closure_1[0]);
        tmp_closure_1[1] = par_m;
        Py_INCREF(tmp_closure_1[1]);

        tmp_assign_source_3 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__22_hb_write$$$function__1__set_matrix(tmp_closure_1);

        assert(var__set_matrix == NULL);
        var__set_matrix = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_attribute_value_1;
        CHECK_OBJECT(par_path_or_open_file);
        tmp_expression_value_2 = par_path_or_open_file;
        tmp_attribute_value_1 = mod_consts[137];
        tmp_res = BUILTIN_HASATTR_BOOL(tmp_expression_value_2, tmp_attribute_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 567;
            type_description_1 = "occoo";
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
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(var__set_matrix);
        tmp_called_value_2 = var__set_matrix;
        CHECK_OBJECT(par_path_or_open_file);
        tmp_args_element_value_2 = par_path_or_open_file;
        frame_6a0c186bda6403387db932037b971c77->m_frame.f_lineno = 568;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 568;
            type_description_1 = "occoo";
            goto frame_exception_exit_1;
        }
        goto frame_return_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    // Tried code:
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_open_filename_1;
        PyObject *tmp_open_mode_1;
        CHECK_OBJECT(par_path_or_open_file);
        tmp_open_filename_1 = par_path_or_open_file;
        tmp_open_mode_1 = mod_consts[173];
        tmp_assign_source_4 = BUILTIN_OPEN(tmp_open_filename_1, tmp_open_mode_1, NULL, NULL, NULL, NULL, NULL, NULL);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "occoo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_3 = tmp_with_1__source;
        tmp_called_value_3 = LOOKUP_SPECIAL(tmp_expression_value_3, mod_consts[164]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "occoo";
            goto try_except_handler_2;
        }
        frame_6a0c186bda6403387db932037b971c77->m_frame.f_lineno = 570;
        tmp_assign_source_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_3);
        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "occoo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__enter == NULL);
        tmp_with_1__enter = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_4 = tmp_with_1__source;
        tmp_assign_source_6 = LOOKUP_SPECIAL(tmp_expression_value_4, mod_consts[165]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 570;
            type_description_1 = "occoo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__exit == NULL);
        tmp_with_1__exit = tmp_assign_source_6;
    }
    {
        nuitka_bool tmp_assign_source_7;
        tmp_assign_source_7 = NUITKA_BOOL_TRUE;
        tmp_with_1__indicator = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        CHECK_OBJECT(tmp_with_1__enter);
        tmp_assign_source_8 = tmp_with_1__enter;
        assert(var_f == NULL);
        Py_INCREF(tmp_assign_source_8);
        var_f = tmp_assign_source_8;
    }
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var__set_matrix);
        tmp_called_value_4 = var__set_matrix;
        CHECK_OBJECT(var_f);
        tmp_args_element_value_3 = var_f;
        frame_6a0c186bda6403387db932037b971c77->m_frame.f_lineno = 571;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "occoo";
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
        exception_keeper_tb_1 = MAKE_TRACEBACK(frame_6a0c186bda6403387db932037b971c77, exception_keeper_lineno_1);
    } else if (exception_keeper_lineno_1 != 0) {
        exception_keeper_tb_1 = ADD_TRACEBACK(exception_keeper_tb_1, frame_6a0c186bda6403387db932037b971c77, exception_keeper_lineno_1);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_1, &exception_keeper_value_1, &exception_keeper_tb_1);
    // Tried code:
    {
        bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        tmp_cmp_expr_left_2 = EXC_TYPE(PyThreadState_GET());
        tmp_cmp_expr_right_2 = PyExc_BaseException;
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
        nuitka_bool tmp_assign_source_9;
        tmp_assign_source_9 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_9;
    }
    {
        bool tmp_condition_result_4;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_5;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_5 = tmp_with_1__exit;
        tmp_args_element_value_4 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_5 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_6 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_6a0c186bda6403387db932037b971c77->m_frame.f_lineno = 571;
        {
            PyObject *call_args[] = {tmp_args_element_value_4, tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_5, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "occoo";
            goto try_except_handler_5;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "occoo";
            goto try_except_handler_5;
        }
        tmp_condition_result_4 = (tmp_res == 0) ? true : false;
        if (tmp_condition_result_4 != false) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 571;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6a0c186bda6403387db932037b971c77->m_frame) frame_6a0c186bda6403387db932037b971c77->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "occoo";
    goto try_except_handler_5;
    branch_no_4:;
    goto branch_end_3;
    branch_no_3:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 570;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_6a0c186bda6403387db932037b971c77->m_frame) frame_6a0c186bda6403387db932037b971c77->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "occoo";
    goto try_except_handler_5;
    branch_end_3:;
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
        bool tmp_condition_result_5;
        nuitka_bool tmp_cmp_expr_left_3;
        nuitka_bool tmp_cmp_expr_right_3;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_3 = tmp_with_1__indicator;
        tmp_cmp_expr_right_3 = NUITKA_BOOL_TRUE;
        tmp_condition_result_5 = (tmp_cmp_expr_left_3 == tmp_cmp_expr_right_3) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_called_value_6;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        frame_6a0c186bda6403387db932037b971c77->m_frame.f_lineno = 571;
        tmp_call_result_1 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_6, mod_consts[166]);

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "occoo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_5:;
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
        bool tmp_condition_result_6;
        nuitka_bool tmp_cmp_expr_left_4;
        nuitka_bool tmp_cmp_expr_right_4;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_4 = tmp_with_1__indicator;
        tmp_cmp_expr_right_4 = NUITKA_BOOL_TRUE;
        tmp_condition_result_6 = (tmp_cmp_expr_left_4 == tmp_cmp_expr_right_4) ? true : false;
        if (tmp_condition_result_6 != false) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_6a0c186bda6403387db932037b971c77->m_frame.f_lineno = 571;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[166]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_3);
            Py_XDECREF(exception_keeper_value_3);
            Py_XDECREF(exception_keeper_tb_3);

            exception_lineno = 571;
            type_description_1 = "occoo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_6:;
    // Re-raise.
    exception_type = exception_keeper_type_3;
    exception_value = exception_keeper_value_3;
    exception_tb = exception_keeper_tb_3;
    exception_lineno = exception_keeper_lineno_3;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
    {
        bool tmp_condition_result_7;
        nuitka_bool tmp_cmp_expr_left_5;
        nuitka_bool tmp_cmp_expr_right_5;
        assert(tmp_with_1__indicator != NUITKA_BOOL_UNASSIGNED);
        tmp_cmp_expr_left_5 = tmp_with_1__indicator;
        tmp_cmp_expr_right_5 = NUITKA_BOOL_TRUE;
        tmp_condition_result_7 = (tmp_cmp_expr_left_5 == tmp_cmp_expr_right_5) ? true : false;
        if (tmp_condition_result_7 != false) {
            goto branch_yes_7;
        } else {
            goto branch_no_7;
        }
    }
    branch_yes_7:;
    {
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_8 = tmp_with_1__exit;
        frame_6a0c186bda6403387db932037b971c77->m_frame.f_lineno = 571;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_8, mod_consts[166]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 571;
            type_description_1 = "occoo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_7:;
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
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    CHECK_OBJECT(tmp_with_1__exit);
    Py_DECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    branch_end_2:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6a0c186bda6403387db932037b971c77, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6a0c186bda6403387db932037b971c77->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6a0c186bda6403387db932037b971c77, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6a0c186bda6403387db932037b971c77,
        type_description_1,
        par_path_or_open_file,
        par_m,
        par_hb_info,
        var__set_matrix,
        var_f
    );


    // Release cached frame if used for exception.
    if (frame_6a0c186bda6403387db932037b971c77 == cache_frame_6a0c186bda6403387db932037b971c77) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6a0c186bda6403387db932037b971c77);
        cache_frame_6a0c186bda6403387db932037b971c77 = NULL;
    }

    assertFrameObject(frame_6a0c186bda6403387db932037b971c77);

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
    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    par_m = NULL;
    CHECK_OBJECT(par_hb_info);
    Py_DECREF(par_hb_info);
    par_hb_info = NULL;
    Py_XDECREF(var__set_matrix);
    var__set_matrix = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
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

    CHECK_OBJECT(par_m);
    Py_DECREF(par_m);
    par_m = NULL;
    CHECK_OBJECT(par_hb_info);
    Py_DECREF(par_hb_info);
    par_hb_info = NULL;
    Py_XDECREF(var__set_matrix);
    var__set_matrix = NULL;
    Py_XDECREF(var_f);
    var_f = NULL;
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
    CHECK_OBJECT(par_path_or_open_file);
    Py_DECREF(par_path_or_open_file);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_path_or_open_file);
    Py_DECREF(par_path_or_open_file);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_scipy$io$harwell_boeing$hb$$$function__22_hb_write$$$function__1__set_matrix(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_fid = python_pars[0];
    PyObject *var_hb = NULL;
    struct Nuitka_FrameObject *frame_3c60e870bc7e96cd347f92ec2c7f05d2;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_3c60e870bc7e96cd347f92ec2c7f05d2 = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_3c60e870bc7e96cd347f92ec2c7f05d2)) {
        Py_XDECREF(cache_frame_3c60e870bc7e96cd347f92ec2c7f05d2);

#if _DEBUG_REFCOUNTS
        if (cache_frame_3c60e870bc7e96cd347f92ec2c7f05d2 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_3c60e870bc7e96cd347f92ec2c7f05d2 = MAKE_FUNCTION_FRAME(codeobj_3c60e870bc7e96cd347f92ec2c7f05d2, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_3c60e870bc7e96cd347f92ec2c7f05d2->m_type_description == NULL);
    frame_3c60e870bc7e96cd347f92ec2c7f05d2 = cache_frame_3c60e870bc7e96cd347f92ec2c7f05d2;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_3c60e870bc7e96cd347f92ec2c7f05d2);
    assert(Py_REFCNT(frame_3c60e870bc7e96cd347f92ec2c7f05d2) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        tmp_called_value_1 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[168]);

        if (unlikely(tmp_called_value_1 == NULL)) {
            tmp_called_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[168]);
        }

        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_fid);
        tmp_args_element_value_1 = par_fid;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[175]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 564;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_2 = Nuitka_Cell_GET(self->m_closure[0]);
        frame_3c60e870bc7e96cd347f92ec2c7f05d2->m_frame.f_lineno = 564;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_1 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_1, call_args);
        }

        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 564;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        assert(var_hb == NULL);
        var_hb = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(var_hb);
        tmp_expression_value_1 = var_hb;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[176]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }
        if (Nuitka_Cell_GET(self->m_closure[1]) == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[177]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 565;
            type_description_1 = "oocc";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_3 = Nuitka_Cell_GET(self->m_closure[1]);
        frame_3c60e870bc7e96cd347f92ec2c7f05d2->m_frame.f_lineno = 565;
        tmp_return_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_3);
        Py_DECREF(tmp_called_value_2);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 565;
            type_description_1 = "oocc";
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
        exception_tb = MAKE_TRACEBACK(frame_3c60e870bc7e96cd347f92ec2c7f05d2, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_3c60e870bc7e96cd347f92ec2c7f05d2->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_3c60e870bc7e96cd347f92ec2c7f05d2, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_3c60e870bc7e96cd347f92ec2c7f05d2,
        type_description_1,
        par_fid,
        var_hb,
        self->m_closure[0],
        self->m_closure[1]
    );


    // Release cached frame if used for exception.
    if (frame_3c60e870bc7e96cd347f92ec2c7f05d2 == cache_frame_3c60e870bc7e96cd347f92ec2c7f05d2) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_3c60e870bc7e96cd347f92ec2c7f05d2);
        cache_frame_3c60e870bc7e96cd347f92ec2c7f05d2 = NULL;
    }

    assertFrameObject(frame_3c60e870bc7e96cd347f92ec2c7f05d2);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_hb);
    Py_DECREF(var_hb);
    var_hb = NULL;
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

    Py_XDECREF(var_hb);
    var_hb = NULL;
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
    CHECK_OBJECT(par_fid);
    Py_DECREF(par_fid);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_fid);
    Py_DECREF(par_fid);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__10___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__10___init__,
        mod_consts[208],
#if PYTHON_VERSION >= 0x300
        mod_consts[220],
#endif
        codeobj_ba3bc58c2fca6134c30fe2eb32c6ef9a,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__11_fortran_format() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__11_fortran_format,
        mod_consts[38],
#if PYTHON_VERSION >= 0x300
        mod_consts[221],
#endif
        codeobj_032c1d28309effb86d2888c632ef4c52,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__12___repr__() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__12___repr__,
        mod_consts[222],
#if PYTHON_VERSION >= 0x300
        mod_consts[223],
#endif
        codeobj_21633eb5cf88f1fb114519a5471da259,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__13___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__13___init__,
        mod_consts[208],
#if PYTHON_VERSION >= 0x300
        mod_consts[224],
#endif
        codeobj_a8c870835b8d4891de7ba15d8e4e2c18,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        mod_consts[159],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__14_title() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__14_title,
        mod_consts[78],
#if PYTHON_VERSION >= 0x300
        mod_consts[225],
#endif
        codeobj_9b6d65c2f4ea78f1daf854696c7eacf7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__15_key() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__15_key,
        mod_consts[79],
#if PYTHON_VERSION >= 0x300
        mod_consts[226],
#endif
        codeobj_1ea928f12c9ac5fb549d9fbf0f1e6436,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__16_type() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__16_type,
        mod_consts[227],
#if PYTHON_VERSION >= 0x300
        mod_consts[228],
#endif
        codeobj_18ae6c3623c95d3d59503ada56f548bb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__17_structure() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__17_structure,
        mod_consts[65],
#if PYTHON_VERSION >= 0x300
        mod_consts[229],
#endif
        codeobj_3e0abf947a208e56ac91311a0586c0de,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__18_storage() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__18_storage,
        mod_consts[67],
#if PYTHON_VERSION >= 0x300
        mod_consts[230],
#endif
        codeobj_f26fe65bb302d137c0096ce879504c33,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__19_read_matrix() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__19_read_matrix,
        mod_consts[169],
#if PYTHON_VERSION >= 0x300
        mod_consts[231],
#endif
        codeobj_9751aee207b4e57e80d39edb1784f5c0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__1__nbytes_full() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__1__nbytes_full,
        mod_consts[106],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_cbf9cfe4a500608a8f9d134189a859fb,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        mod_consts[3],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__20_write_matrix() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__20_write_matrix,
        mod_consts[176],
#if PYTHON_VERSION >= 0x300
        mod_consts[232],
#endif
        codeobj_4c57b98927fb2497d34d6d0998e45059,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__21_hb_read() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__21_hb_read,
        mod_consts[233],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_c06f66e29131adca42daed6ed849a495,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        mod_consts[167],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__21_hb_read$$$function__1__get_matrix() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__21_hb_read$$$function__1__get_matrix,
        mod_consts[162],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_63471265663335d37b4abf444bc4360e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__22_hb_write(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__22_hb_write,
        mod_consts[234],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_6a0c186bda6403387db932037b971c77,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        mod_consts[174],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__22_hb_write$$$function__1__set_matrix(struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__22_hb_write$$$function__1__set_matrix,
        mod_consts[171],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_3c60e870bc7e96cd347f92ec2c7f05d2,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        closure,
        2
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__2_from_data(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__2_from_data,
        mod_consts[170],
#if PYTHON_VERSION >= 0x300
        mod_consts[205],
#endif
        codeobj_16df74a84411d3ebdb4bb683dfc064b0,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        mod_consts[39],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__2_from_data$$$function__1__nlines() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__2_from_data$$$function__1__nlines,
        mod_consts[35],
#if PYTHON_VERSION >= 0x300
        mod_consts[36],
#endif
        codeobj_b0c2dafd22b673654bf9cb4272975353,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__3_from_file() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__3_from_file,
        mod_consts[157],
#if PYTHON_VERSION >= 0x300
        mod_consts[206],
#endif
        codeobj_d62e12bc70a5dd098510fe9170637348,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        mod_consts[77],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__4___init__(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__4___init__,
        mod_consts[208],
#if PYTHON_VERSION >= 0x300
        mod_consts[209],
#endif
        codeobj_5070dd77cc4aec78a75556711c1106c3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        mod_consts[115],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__5_dump() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__5_dump,
        mod_consts[138],
#if PYTHON_VERSION >= 0x300
        mod_consts[210],
#endif
        codeobj_ff402aa9e00337d4bbb3159d876138d5,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        mod_consts[126],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__6__expect_int(PyObject *defaults) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__6__expect_int,
        mod_consts[49],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_7f2b60de701bae8eb94d771b1ac9d6ac,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__7__read_hb_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__7__read_hb_data,
        mod_consts[160],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_e6e115e75587ef2af2e867e2fbd064e7,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__8__write_data() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__8__write_data,
        mod_consts[161],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_3b4f5d3e1b5e08e3aee1e59a6659ee66,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__8__write_data$$$function__1_write_array() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__8__write_data$$$function__1_write_array,
        mod_consts[135],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_8bd46b9ddf6f206fa7710ac5a1cc862d,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__9_from_fortran() {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_scipy$io$harwell_boeing$hb$$$function__9_from_fortran,
        mod_consts[62],
#if PYTHON_VERSION >= 0x300
        mod_consts[218],
#endif
        codeobj_a885af5c1f91203dc081f15b5c367ca8,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        NULL,
#endif
        module_scipy$io$harwell_boeing$hb,
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

function_impl_code functable_scipy$io$harwell_boeing$hb[] = {
    impl_scipy$io$harwell_boeing$hb$$$function__2_from_data$$$function__1__nlines,
    impl_scipy$io$harwell_boeing$hb$$$function__8__write_data$$$function__1_write_array,
    impl_scipy$io$harwell_boeing$hb$$$function__21_hb_read$$$function__1__get_matrix,
    impl_scipy$io$harwell_boeing$hb$$$function__22_hb_write$$$function__1__set_matrix,
    impl_scipy$io$harwell_boeing$hb$$$function__1__nbytes_full,
    impl_scipy$io$harwell_boeing$hb$$$function__2_from_data,
    impl_scipy$io$harwell_boeing$hb$$$function__3_from_file,
    impl_scipy$io$harwell_boeing$hb$$$function__4___init__,
    impl_scipy$io$harwell_boeing$hb$$$function__5_dump,
    impl_scipy$io$harwell_boeing$hb$$$function__6__expect_int,
    impl_scipy$io$harwell_boeing$hb$$$function__7__read_hb_data,
    impl_scipy$io$harwell_boeing$hb$$$function__8__write_data,
    impl_scipy$io$harwell_boeing$hb$$$function__9_from_fortran,
    impl_scipy$io$harwell_boeing$hb$$$function__10___init__,
    impl_scipy$io$harwell_boeing$hb$$$function__11_fortran_format,
    impl_scipy$io$harwell_boeing$hb$$$function__12___repr__,
    impl_scipy$io$harwell_boeing$hb$$$function__13___init__,
    impl_scipy$io$harwell_boeing$hb$$$function__14_title,
    impl_scipy$io$harwell_boeing$hb$$$function__15_key,
    impl_scipy$io$harwell_boeing$hb$$$function__16_type,
    impl_scipy$io$harwell_boeing$hb$$$function__17_structure,
    impl_scipy$io$harwell_boeing$hb$$$function__18_storage,
    impl_scipy$io$harwell_boeing$hb$$$function__19_read_matrix,
    impl_scipy$io$harwell_boeing$hb$$$function__20_write_matrix,
    impl_scipy$io$harwell_boeing$hb$$$function__21_hb_read,
    impl_scipy$io$harwell_boeing$hb$$$function__22_hb_write,
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

    function_impl_code *current = functable_scipy$io$harwell_boeing$hb;
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

    if (offset > sizeof(functable_scipy$io$harwell_boeing$hb) || offset < 0) {
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
        functable_scipy$io$harwell_boeing$hb[offset],
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
        module_scipy$io$harwell_boeing$hb,
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
PyObject *modulecode_scipy$io$harwell_boeing$hb(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("scipy.io.harwell_boeing.hb");

    // Store the module for future use.
    module_scipy$io$harwell_boeing$hb = module;

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
        PRINT_STRING("scipy.io.harwell_boeing.hb: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.io.harwell_boeing.hb: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("scipy.io.harwell_boeing.hb: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in initscipy$io$harwell_boeing$hb\n");

    moduledict_scipy$io$harwell_boeing$hb = MODULE_DICT(module_scipy$io$harwell_boeing$hb);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_scipy$io$harwell_boeing$hb,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_scipy$io$harwell_boeing$hb,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[55]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_scipy$io$harwell_boeing$hb,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$io$harwell_boeing$hb,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_scipy$io$harwell_boeing$hb,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_scipy$io$harwell_boeing$hb);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_scipy$io$harwell_boeing$hb);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    PyObject *outline_4_var_i = NULL;
    PyObject *outline_4_var_j = NULL;
    PyObject *outline_5_var_i = NULL;
    PyObject *outline_5_var_j = NULL;
    PyObject *outline_6_var_i = NULL;
    PyObject *outline_6_var_j = NULL;
    PyObject *outline_7_var___class__ = NULL;
    PyObject *tmp_HBMatrixType$listcomp$tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_HBMatrixType$listcomp$tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter = NULL;
    PyObject *tmp_HBMatrixType$listcomp$tuple_unpack_2__element_1 = NULL;
    PyObject *tmp_HBMatrixType$listcomp$tuple_unpack_2__element_2 = NULL;
    PyObject *tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter = NULL;
    PyObject *tmp_HBMatrixType$listcomp$tuple_unpack_3__element_1 = NULL;
    PyObject *tmp_HBMatrixType$listcomp$tuple_unpack_3__element_2 = NULL;
    PyObject *tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter = NULL;
    PyObject *tmp_HBMatrixType$listcomp_1__$0 = NULL;
    PyObject *tmp_HBMatrixType$listcomp_1__contraction = NULL;
    PyObject *tmp_HBMatrixType$listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_HBMatrixType$listcomp_2__$0 = NULL;
    PyObject *tmp_HBMatrixType$listcomp_2__contraction = NULL;
    PyObject *tmp_HBMatrixType$listcomp_2__iter_value_0 = NULL;
    PyObject *tmp_HBMatrixType$listcomp_3__$0 = NULL;
    PyObject *tmp_HBMatrixType$listcomp_3__contraction = NULL;
    PyObject *tmp_HBMatrixType$listcomp_3__iter_value_0 = NULL;
    PyObject *tmp_class_creation_1__bases = NULL;
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__metaclass = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__bases = NULL;
    PyObject *tmp_class_creation_2__bases_orig = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__metaclass = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
    PyObject *tmp_class_creation_3__prepared = NULL;
    PyObject *tmp_class_creation_4__class_decl_dict = NULL;
    PyObject *tmp_class_creation_4__prepared = NULL;
    PyObject *tmp_class_creation_5__class_decl_dict = NULL;
    PyObject *tmp_class_creation_5__prepared = NULL;
    PyObject *tmp_import_from_1__module = NULL;
    struct Nuitka_FrameObject *frame_d25f54c44ce9e4671cce20190f28d090;
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
    int tmp_res;
    PyObject *locals_scipy$io$harwell_boeing$hb$$$class__1_MalformedHeader_32 = NULL;
    PyObject *tmp_dictset_value;
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
    PyObject *locals_scipy$io$harwell_boeing$hb$$$class__2_LineOverflow_36 = NULL;
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
    PyObject *locals_scipy$io$harwell_boeing$hb$$$class__3_HBInfo_46 = NULL;
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
    PyObject *locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362 = NULL;
    struct Nuitka_FrameObject *frame_b0c653888873cae870e43ae2c8cc443f_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    struct Nuitka_FrameObject *frame_4cc2485ebb83a63af5ac01a2e92f30c3_3;
    NUITKA_MAY_BE_UNUSED char const *type_description_3 = NULL;
    PyObject *tmp_iterator_attempt;
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
    static struct Nuitka_FrameObject *cache_frame_4cc2485ebb83a63af5ac01a2e92f30c3_3 = NULL;
    PyObject *exception_keeper_type_14;
    PyObject *exception_keeper_value_14;
    PyTracebackObject *exception_keeper_tb_14;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_14;
    struct Nuitka_FrameObject *frame_d3e45af51badf33c8f61f25aae3f5db1_4;
    NUITKA_MAY_BE_UNUSED char const *type_description_4 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_d3e45af51badf33c8f61f25aae3f5db1_4 = NULL;
    PyObject *exception_keeper_type_18;
    PyObject *exception_keeper_value_18;
    PyTracebackObject *exception_keeper_tb_18;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_18;
    struct Nuitka_FrameObject *frame_32e2c0e8cbf8487c2a479c826485dbad_5;
    NUITKA_MAY_BE_UNUSED char const *type_description_5 = NULL;
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
    static struct Nuitka_FrameObject *cache_frame_32e2c0e8cbf8487c2a479c826485dbad_5 = NULL;
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
    PyObject *exception_keeper_type_25;
    PyObject *exception_keeper_value_25;
    PyTracebackObject *exception_keeper_tb_25;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_25;
    PyObject *locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423 = NULL;
    struct Nuitka_FrameObject *frame_233f07dfbd088de3fdf58f78cec8e875_6;
    NUITKA_MAY_BE_UNUSED char const *type_description_6 = NULL;
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

    // Module code.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = mod_consts[178];
        UPDATE_STRING_DICT0(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[179], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[180], tmp_assign_source_2);
    }
    frame_d25f54c44ce9e4671cce20190f28d090 = MAKE_MODULE_FRAME(codeobj_d25f54c44ce9e4671cce20190f28d090, module_scipy$io$harwell_boeing$hb);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_d25f54c44ce9e4671cce20190f28d090);
    assert(Py_REFCNT(frame_d25f54c44ce9e4671cce20190f28d090) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_assattr_target_1 == NULL)) {
            tmp_assattr_target_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        assert(!(tmp_assattr_target_1 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[182], tmp_assattr_value_1);
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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[181]);

        if (unlikely(tmp_assattr_target_2 == NULL)) {
            tmp_assattr_target_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[181]);
        }

        assert(!(tmp_assattr_target_2 == NULL));
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[183], tmp_assattr_value_2);
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
        UPDATE_STRING_DICT0(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[184], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[83];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_scipy$io$harwell_boeing$hb;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[56];
        frame_d25f54c44ce9e4671cce20190f28d090->m_frame.f_lineno = 21;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[83], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[185];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_scipy$io$harwell_boeing$hb;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = Py_None;
        tmp_level_value_2 = mod_consts[56];
        frame_d25f54c44ce9e4671cce20190f28d090->m_frame.f_lineno = 23;
        tmp_assign_source_5 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 23;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[15], tmp_assign_source_5);
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[186];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_scipy$io$harwell_boeing$hb;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = mod_consts[187];
        tmp_level_value_3 = mod_consts[56];
        frame_d25f54c44ce9e4671cce20190f28d090->m_frame.f_lineno = 24;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_6 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_scipy$io$harwell_boeing$hb,
                mod_consts[133],
                mod_consts[56]
            );
        } else {
            tmp_assign_source_6 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[133]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 24;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_6);
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[188];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_scipy$io$harwell_boeing$hb;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[189];
        tmp_level_value_4 = mod_consts[56];
        frame_d25f54c44ce9e4671cce20190f28d090->m_frame.f_lineno = 25;
        tmp_assign_source_7 = IMPORT_MODULE5(tmp_name_value_4, tmp_globals_arg_value_4, tmp_locals_arg_value_4, tmp_fromlist_value_4, tmp_level_value_4);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto frame_exception_exit_1;
        }
        assert(tmp_import_from_1__module == NULL);
        tmp_import_from_1__module = tmp_assign_source_7;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_scipy$io$harwell_boeing$hb,
                mod_consts[91],
                mod_consts[56]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[91]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[91], tmp_assign_source_8);
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_9 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_scipy$io$harwell_boeing$hb,
                mod_consts[13],
                mod_consts[56]
            );
        } else {
            tmp_assign_source_9 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[13]);
        }

        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[13], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_4 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_10 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_scipy$io$harwell_boeing$hb,
                mod_consts[21],
                mod_consts[56]
            );
        } else {
            tmp_assign_source_10 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[21]);
        }

        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 25;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[21], tmp_assign_source_10);
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
        tmp_assign_source_11 = MAKE_LIST6(mod_consts[190]);
        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_11);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_dircall_arg1_1;
        tmp_dircall_arg1_1 = mod_consts[192];
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_12 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__bases == NULL);
        tmp_class_creation_1__bases = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        tmp_assign_source_13 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
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


            exception_lineno = 32;

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
        tmp_expression_value_1 = tmp_class_creation_1__bases;
        tmp_subscript_value_1 = mod_consts[56];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_bases_value_1 = tmp_class_creation_1__bases;
        tmp_assign_source_14 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__metaclass == NULL);
        tmp_class_creation_1__metaclass = tmp_assign_source_14;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_2 = tmp_class_creation_1__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_2, mod_consts[193]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_expression_value_3 = tmp_class_creation_1__metaclass;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[193]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        tmp_tuple_element_1 = mod_consts[194];
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__bases);
        tmp_tuple_element_1 = tmp_class_creation_1__bases;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
        tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
        frame_d25f54c44ce9e4671cce20190f28d090->m_frame.f_lineno = 32;
        tmp_assign_source_15 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_15;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_4;
        CHECK_OBJECT(tmp_class_creation_1__prepared);
        tmp_expression_value_4 = tmp_class_creation_1__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_4, mod_consts[195]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

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
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[196];
        CHECK_OBJECT(tmp_class_creation_1__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_1__metaclass;
        tmp_getattr_attr_1 = mod_consts[197];
        tmp_getattr_default_1 = mod_consts[198];
        tmp_tuple_element_2 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_5;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_type_arg_2 = tmp_class_creation_1__prepared;
            tmp_expression_value_5 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_5 == NULL));
            tmp_tuple_element_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[197]);
            Py_DECREF(tmp_expression_value_5);
            if (tmp_tuple_element_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_2);
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


            exception_lineno = 32;

            goto try_except_handler_2;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 32;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_2;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_16;
        tmp_assign_source_16 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_16;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_17;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_scipy$io$harwell_boeing$hb$$$class__1_MalformedHeader_32 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[199];
        tmp_res = PyObject_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__1_MalformedHeader_32, mod_consts[200], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        tmp_dictset_value = mod_consts[194];
        tmp_res = PyObject_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__1_MalformedHeader_32, mod_consts[201], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        {
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_1__bases;
            tmp_cmp_expr_right_1 = mod_consts[192];
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_4;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        tmp_dictset_value = mod_consts[192];
        tmp_res = PyObject_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__1_MalformedHeader_32, mod_consts[202], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 32;

            goto try_except_handler_4;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_18;
            PyObject *tmp_called_value_2;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_kwargs_value_2;
            CHECK_OBJECT(tmp_class_creation_1__metaclass);
            tmp_called_value_2 = tmp_class_creation_1__metaclass;
            tmp_tuple_element_3 = mod_consts[194];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__bases);
            tmp_tuple_element_3 = tmp_class_creation_1__bases;
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_3);
            tmp_tuple_element_3 = locals_scipy$io$harwell_boeing$hb$$$class__1_MalformedHeader_32;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_3);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_1__class_decl_dict;
            frame_d25f54c44ce9e4671cce20190f28d090->m_frame.f_lineno = 32;
            tmp_assign_source_18 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_18 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 32;

                goto try_except_handler_4;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_18;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_17 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_17);
        goto try_return_handler_4;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_4:;
        Py_DECREF(locals_scipy$io$harwell_boeing$hb$$$class__1_MalformedHeader_32);
        locals_scipy$io$harwell_boeing$hb$$$class__1_MalformedHeader_32 = NULL;
        goto try_return_handler_3;
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

        Py_DECREF(locals_scipy$io$harwell_boeing$hb$$$class__1_MalformedHeader_32);
        locals_scipy$io$harwell_boeing$hb$$$class__1_MalformedHeader_32 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_2;
        exception_value = exception_keeper_value_2;
        exception_tb = exception_keeper_tb_2;
        exception_lineno = exception_keeper_lineno_2;

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
        exception_keeper_type_3 = exception_type;
        exception_keeper_value_3 = exception_value;
        exception_keeper_tb_3 = exception_tb;
        exception_keeper_lineno_3 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_3;
        exception_value = exception_keeper_value_3;
        exception_tb = exception_keeper_tb_3;
        exception_lineno = exception_keeper_lineno_3;

        goto outline_exception_1;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_1:;
        exception_lineno = 32;
        goto try_except_handler_2;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[194], tmp_assign_source_17);
    }
    goto try_end_2;
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

    Py_XDECREF(tmp_class_creation_1__bases);
    tmp_class_creation_1__bases = NULL;
    Py_XDECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    Py_XDECREF(tmp_class_creation_1__metaclass);
    tmp_class_creation_1__metaclass = NULL;
    Py_XDECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_4;
    exception_value = exception_keeper_value_4;
    exception_tb = exception_keeper_tb_4;
    exception_lineno = exception_keeper_lineno_4;

    goto frame_exception_exit_1;
    // End of try:
    try_end_2:;
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
        PyObject *tmp_assign_source_19;
        PyObject *tmp_tuple_element_4;
        tmp_tuple_element_4 = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[203]);

        if (unlikely(tmp_tuple_element_4 == NULL)) {
            tmp_tuple_element_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[203]);
        }

        if (tmp_tuple_element_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_5;
        }
        tmp_assign_source_19 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_19, 0, tmp_tuple_element_4);
        assert(tmp_class_creation_2__bases_orig == NULL);
        tmp_class_creation_2__bases_orig = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_dircall_arg1_2;
        CHECK_OBJECT(tmp_class_creation_2__bases_orig);
        tmp_dircall_arg1_2 = tmp_class_creation_2__bases_orig;
        Py_INCREF(tmp_dircall_arg1_2);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_2};
            tmp_assign_source_20 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__bases == NULL);
        tmp_class_creation_2__bases = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        tmp_assign_source_21 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
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


            exception_lineno = 36;

            goto try_except_handler_5;
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
        tmp_subscript_value_2 = mod_consts[56];
        tmp_type_arg_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_2, 0);
        if (tmp_type_arg_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_5;
        }
        tmp_metaclass_value_2 = BUILTIN_TYPE1(tmp_type_arg_3);
        Py_DECREF(tmp_type_arg_3);
        if (tmp_metaclass_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_5;
        }
        goto condexpr_end_2;
        condexpr_false_2:;
        tmp_metaclass_value_2 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_2);
        condexpr_end_2:;
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_bases_value_2 = tmp_class_creation_2__bases;
        tmp_assign_source_22 = SELECT_METACLASS(tmp_metaclass_value_2, tmp_bases_value_2);
        Py_DECREF(tmp_metaclass_value_2);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__metaclass == NULL);
        tmp_class_creation_2__metaclass = tmp_assign_source_22;
    }
    {
        nuitka_bool tmp_condition_result_6;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_7 = tmp_class_creation_2__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_7, mod_consts[193]);
        tmp_condition_result_6 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_args_value_3;
        PyObject *tmp_tuple_element_5;
        PyObject *tmp_kwargs_value_3;
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_expression_value_8 = tmp_class_creation_2__metaclass;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[193]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_5;
        }
        tmp_tuple_element_5 = mod_consts[86];
        tmp_args_value_3 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__bases);
        tmp_tuple_element_5 = tmp_class_creation_2__bases;
        PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
        CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
        tmp_kwargs_value_3 = tmp_class_creation_2__class_decl_dict;
        frame_d25f54c44ce9e4671cce20190f28d090->m_frame.f_lineno = 36;
        tmp_assign_source_23 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_3, tmp_kwargs_value_3);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_3);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_5;
        }
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_23;
    }
    {
        bool tmp_condition_result_7;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(tmp_class_creation_2__prepared);
        tmp_expression_value_9 = tmp_class_creation_2__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_9, mod_consts[195]);
        tmp_operand_value_2 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_5;
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
        PyObject *tmp_tuple_element_6;
        PyObject *tmp_getattr_target_2;
        PyObject *tmp_getattr_attr_2;
        PyObject *tmp_getattr_default_2;
        tmp_raise_type_2 = PyExc_TypeError;
        tmp_mod_expr_left_2 = mod_consts[196];
        CHECK_OBJECT(tmp_class_creation_2__metaclass);
        tmp_getattr_target_2 = tmp_class_creation_2__metaclass;
        tmp_getattr_attr_2 = mod_consts[197];
        tmp_getattr_default_2 = mod_consts[198];
        tmp_tuple_element_6 = BUILTIN_GETATTR(tmp_getattr_target_2, tmp_getattr_attr_2, tmp_getattr_default_2);
        if (tmp_tuple_element_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_5;
        }
        tmp_mod_expr_right_2 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_10;
            PyObject *tmp_type_arg_4;
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 0, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_type_arg_4 = tmp_class_creation_2__prepared;
            tmp_expression_value_10 = BUILTIN_TYPE1(tmp_type_arg_4);
            assert(!(tmp_expression_value_10 == NULL));
            tmp_tuple_element_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[197]);
            Py_DECREF(tmp_expression_value_10);
            if (tmp_tuple_element_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_2, 1, tmp_tuple_element_6);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_2);
        goto try_except_handler_5;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_2 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_2, tmp_mod_expr_right_2);
        Py_DECREF(tmp_mod_expr_right_2);
        if (tmp_raise_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_5;
        }
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_value = tmp_raise_value_2;
        exception_lineno = 36;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_5;
    }
    branch_no_5:;
    goto branch_end_4;
    branch_no_4:;
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_24;
    }
    branch_end_4:;
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_scipy$io$harwell_boeing$hb$$$class__2_LineOverflow_36 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[199];
        tmp_res = PyObject_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__2_LineOverflow_36, mod_consts[200], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_7;
        }
        tmp_dictset_value = mod_consts[86];
        tmp_res = PyObject_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__2_LineOverflow_36, mod_consts[201], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_7;
        }
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


                exception_lineno = 36;

                goto try_except_handler_7;
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
        tmp_res = PyObject_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__2_LineOverflow_36, mod_consts[202], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 36;

            goto try_except_handler_7;
        }
        branch_no_6:;
        {
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_7;
            PyObject *tmp_kwargs_value_4;
            CHECK_OBJECT(tmp_class_creation_2__metaclass);
            tmp_called_value_4 = tmp_class_creation_2__metaclass;
            tmp_tuple_element_7 = mod_consts[86];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__bases);
            tmp_tuple_element_7 = tmp_class_creation_2__bases;
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_7);
            tmp_tuple_element_7 = locals_scipy$io$harwell_boeing$hb$$$class__2_LineOverflow_36;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_7);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_2__class_decl_dict;
            frame_d25f54c44ce9e4671cce20190f28d090->m_frame.f_lineno = 36;
            tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 36;

                goto try_except_handler_7;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_25 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_7;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_7:;
        Py_DECREF(locals_scipy$io$harwell_boeing$hb$$$class__2_LineOverflow_36);
        locals_scipy$io$harwell_boeing$hb$$$class__2_LineOverflow_36 = NULL;
        goto try_return_handler_6;
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

        Py_DECREF(locals_scipy$io$harwell_boeing$hb$$$class__2_LineOverflow_36);
        locals_scipy$io$harwell_boeing$hb$$$class__2_LineOverflow_36 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_5;
        exception_value = exception_keeper_value_5;
        exception_tb = exception_keeper_tb_5;
        exception_lineno = exception_keeper_lineno_5;

        goto try_except_handler_6;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
        CHECK_OBJECT(outline_1_var___class__);
        Py_DECREF(outline_1_var___class__);
        outline_1_var___class__ = NULL;
        goto outline_result_2;
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

        // Re-raise.
        exception_type = exception_keeper_type_6;
        exception_value = exception_keeper_value_6;
        exception_tb = exception_keeper_tb_6;
        exception_lineno = exception_keeper_lineno_6;

        goto outline_exception_2;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_2:;
        exception_lineno = 36;
        goto try_except_handler_5;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[86], tmp_assign_source_25);
    }
    goto try_end_3;
    // Exception handler code:
    try_except_handler_5:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
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
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_assign_source_27;


        tmp_assign_source_27 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__1__nbytes_full();

        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[106], tmp_assign_source_27);
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        tmp_assign_source_29 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_29;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_30;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_scipy$io$harwell_boeing$hb$$$class__3_HBInfo_46 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[199];
        tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__3_HBInfo_46, mod_consts[200], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[156];
        tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__3_HBInfo_46, mod_consts[201], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_classmethod_arg_1;
            PyObject *tmp_defaults_1;
            tmp_defaults_1 = mod_consts[204];
            Py_INCREF(tmp_defaults_1);


            tmp_classmethod_arg_1 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__2_from_data(tmp_defaults_1);

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_1);
            Py_DECREF(tmp_classmethod_arg_1);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__3_HBInfo_46, mod_consts[170], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_classmethod_arg_2;


            tmp_classmethod_arg_2 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__3_from_file();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_2);
            Py_DECREF(tmp_classmethod_arg_2);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__3_HBInfo_46, mod_consts[157], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_2;
            tmp_defaults_2 = mod_consts[207];
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__4___init__(tmp_defaults_2);

            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__3_HBInfo_46, mod_consts[208], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }


        tmp_dictset_value = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__5_dump();

        tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__3_HBInfo_46, mod_consts[138], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        {
            PyObject *tmp_assign_source_31;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_5;
            PyObject *tmp_tuple_element_8;
            PyObject *tmp_kwargs_value_5;
            tmp_called_value_5 = (PyObject *)&PyType_Type;
            tmp_tuple_element_8 = mod_consts[156];
            tmp_args_value_5 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
            tmp_tuple_element_8 = mod_consts[211];
            PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
            tmp_tuple_element_8 = locals_scipy$io$harwell_boeing$hb$$$class__3_HBInfo_46;
            PyTuple_SET_ITEM0(tmp_args_value_5, 2, tmp_tuple_element_8);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_5 = tmp_class_creation_3__class_decl_dict;
            frame_d25f54c44ce9e4671cce20190f28d090->m_frame.f_lineno = 46;
            tmp_assign_source_31 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_5, tmp_kwargs_value_5);
            Py_DECREF(tmp_args_value_5);
            if (tmp_assign_source_31 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 46;

                goto try_except_handler_10;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_31;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_30 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_30);
        goto try_return_handler_10;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_10:;
        Py_DECREF(locals_scipy$io$harwell_boeing$hb$$$class__3_HBInfo_46);
        locals_scipy$io$harwell_boeing$hb$$$class__3_HBInfo_46 = NULL;
        goto try_return_handler_9;
        // Exception handler code:
        try_except_handler_10:;
        exception_keeper_type_8 = exception_type;
        exception_keeper_value_8 = exception_value;
        exception_keeper_tb_8 = exception_tb;
        exception_keeper_lineno_8 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_scipy$io$harwell_boeing$hb$$$class__3_HBInfo_46);
        locals_scipy$io$harwell_boeing$hb$$$class__3_HBInfo_46 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_8;
        exception_value = exception_keeper_value_8;
        exception_tb = exception_keeper_tb_8;
        exception_lineno = exception_keeper_lineno_8;

        goto try_except_handler_9;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_9:;
        CHECK_OBJECT(outline_2_var___class__);
        Py_DECREF(outline_2_var___class__);
        outline_2_var___class__ = NULL;
        goto outline_result_3;
        // Exception handler code:
        try_except_handler_9:;
        exception_keeper_type_9 = exception_type;
        exception_keeper_value_9 = exception_value;
        exception_keeper_tb_9 = exception_tb;
        exception_keeper_lineno_9 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

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
        exception_lineno = 46;
        goto try_except_handler_8;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[156], tmp_assign_source_30);
    }
    goto try_end_4;
    // Exception handler code:
    try_except_handler_8:;
    exception_keeper_type_10 = exception_type;
    exception_keeper_value_10 = exception_value;
    exception_keeper_tb_10 = exception_tb;
    exception_keeper_lineno_10 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_10;
    exception_value = exception_keeper_value_10;
    exception_tb = exception_keeper_tb_10;
    exception_lineno = exception_keeper_lineno_10;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_defaults_3;
        tmp_defaults_3 = mod_consts[212];
        Py_INCREF(tmp_defaults_3);


        tmp_assign_source_32 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__6__expect_int(tmp_defaults_3);

        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[49], tmp_assign_source_32);
    }
    {
        PyObject *tmp_assign_source_33;


        tmp_assign_source_33 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__7__read_hb_data();

        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[160], tmp_assign_source_33);
    }
    {
        PyObject *tmp_assign_source_34;


        tmp_assign_source_34 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__8__write_data();

        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[161], tmp_assign_source_34);
    }
    {
        PyObject *tmp_assign_source_35;
        tmp_assign_source_35 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_35;
    }
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_36;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[199];
        tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[200], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[213];
        tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[179], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[31];
        tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[201], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = DICT_COPY(mod_consts[214]);
        tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[148], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = DICT_COPY(mod_consts[215]);
        tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[150], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = DICT_COPY(mod_consts[216]);
        tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[152], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_b0c653888873cae870e43ae2c8cc443f_2 = MAKE_CLASS_FRAME(codeobj_b0c653888873cae870e43ae2c8cc443f, module_scipy$io$harwell_boeing$hb, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b0c653888873cae870e43ae2c8cc443f_2);
        assert(Py_REFCNT(frame_b0c653888873cae870e43ae2c8cc443f_2) == 2);

        // Framed code:
        {
            PyObject *tmp_dict_seq_1;
            // Tried code:
            {
                PyObject *tmp_assign_source_38;
                PyObject *tmp_iter_arg_1;
                PyObject *tmp_called_value_6;
                PyObject *tmp_expression_value_11;
                tmp_expression_value_11 = DICT_GET_ITEM0(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[148]);

                if (unlikely(tmp_expression_value_11 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[148]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 383;
                    type_description_2 = "o";
                    goto try_except_handler_14;
                }

                if (tmp_expression_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 383;
                    type_description_2 = "o";
                    goto try_except_handler_14;
                }
                tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_11, mod_consts[217]);
                if (tmp_called_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 383;
                    type_description_2 = "o";
                    goto try_except_handler_14;
                }
                frame_b0c653888873cae870e43ae2c8cc443f_2->m_frame.f_lineno = 383;
                tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_6);
                Py_DECREF(tmp_called_value_6);
                if (tmp_iter_arg_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 383;
                    type_description_2 = "o";
                    goto try_except_handler_14;
                }
                tmp_assign_source_38 = MAKE_ITERATOR(tmp_iter_arg_1);
                Py_DECREF(tmp_iter_arg_1);
                if (tmp_assign_source_38 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 383;
                    type_description_2 = "o";
                    goto try_except_handler_14;
                }
                assert(tmp_HBMatrixType$listcomp_1__$0 == NULL);
                tmp_HBMatrixType$listcomp_1__$0 = tmp_assign_source_38;
            }
            {
                PyObject *tmp_assign_source_39;
                tmp_assign_source_39 = MAKE_LIST_EMPTY(0);
                assert(tmp_HBMatrixType$listcomp_1__contraction == NULL);
                tmp_HBMatrixType$listcomp_1__contraction = tmp_assign_source_39;
            }
            if (isFrameUnusable(cache_frame_4cc2485ebb83a63af5ac01a2e92f30c3_3)) {
                Py_XDECREF(cache_frame_4cc2485ebb83a63af5ac01a2e92f30c3_3);

#if _DEBUG_REFCOUNTS
                if (cache_frame_4cc2485ebb83a63af5ac01a2e92f30c3_3 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_4cc2485ebb83a63af5ac01a2e92f30c3_3 = MAKE_FUNCTION_FRAME(codeobj_4cc2485ebb83a63af5ac01a2e92f30c3, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }

            assert(cache_frame_4cc2485ebb83a63af5ac01a2e92f30c3_3->m_type_description == NULL);
            frame_4cc2485ebb83a63af5ac01a2e92f30c3_3 = cache_frame_4cc2485ebb83a63af5ac01a2e92f30c3_3;

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_4cc2485ebb83a63af5ac01a2e92f30c3_3);
            assert(Py_REFCNT(frame_4cc2485ebb83a63af5ac01a2e92f30c3_3) == 2);

            // Framed code:
            // Tried code:
            loop_start_1:;
            {
                PyObject *tmp_next_source_1;
                PyObject *tmp_assign_source_40;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp_1__$0);
                tmp_next_source_1 = tmp_HBMatrixType$listcomp_1__$0;
                tmp_assign_source_40 = ITERATOR_NEXT(tmp_next_source_1);
                if (tmp_assign_source_40 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_1;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_3 = "oo";
                        exception_lineno = 383;
                        goto try_except_handler_15;
                    }
                }

                {
                    PyObject *old = tmp_HBMatrixType$listcomp_1__iter_value_0;
                    tmp_HBMatrixType$listcomp_1__iter_value_0 = tmp_assign_source_40;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_41;
                PyObject *tmp_iter_arg_2;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp_1__iter_value_0);
                tmp_iter_arg_2 = tmp_HBMatrixType$listcomp_1__iter_value_0;
                tmp_assign_source_41 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_2);
                if (tmp_assign_source_41 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 383;
                    type_description_3 = "oo";
                    goto try_except_handler_16;
                }
                {
                    PyObject *old = tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter;
                    tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter = tmp_assign_source_41;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_42;
                PyObject *tmp_unpack_1;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter);
                tmp_unpack_1 = tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter;
                tmp_assign_source_42 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
                if (tmp_assign_source_42 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_3 = "oo";
                    exception_lineno = 383;
                    goto try_except_handler_17;
                }
                {
                    PyObject *old = tmp_HBMatrixType$listcomp$tuple_unpack_1__element_1;
                    tmp_HBMatrixType$listcomp$tuple_unpack_1__element_1 = tmp_assign_source_42;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_43;
                PyObject *tmp_unpack_2;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter);
                tmp_unpack_2 = tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter;
                tmp_assign_source_43 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
                if (tmp_assign_source_43 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_3 = "oo";
                    exception_lineno = 383;
                    goto try_except_handler_17;
                }
                {
                    PyObject *old = tmp_HBMatrixType$listcomp$tuple_unpack_1__element_2;
                    tmp_HBMatrixType$listcomp$tuple_unpack_1__element_2 = tmp_assign_source_43;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_iterator_name_1;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter);
                tmp_iterator_name_1 = tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter;
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

                            type_description_3 = "oo";
                            exception_lineno = 383;
                            goto try_except_handler_17;
                        }
                    }
                } else {
                    Py_DECREF(tmp_iterator_attempt);

                    exception_type = PyExc_ValueError;
                    Py_INCREF(PyExc_ValueError);
                    exception_value = mod_consts[11];
                    Py_INCREF(exception_value);
                    exception_tb = NULL;

                    type_description_3 = "oo";
                    exception_lineno = 383;
                    goto try_except_handler_17;
                }
            }
            goto try_end_5;
            // Exception handler code:
            try_except_handler_17:;
            exception_keeper_type_11 = exception_type;
            exception_keeper_value_11 = exception_value;
            exception_keeper_tb_11 = exception_tb;
            exception_keeper_lineno_11 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter);
            Py_DECREF(tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter);
            tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_11;
            exception_value = exception_keeper_value_11;
            exception_tb = exception_keeper_tb_11;
            exception_lineno = exception_keeper_lineno_11;

            goto try_except_handler_16;
            // End of try:
            try_end_5:;
            goto try_end_6;
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

            Py_XDECREF(tmp_HBMatrixType$listcomp$tuple_unpack_1__element_1);
            tmp_HBMatrixType$listcomp$tuple_unpack_1__element_1 = NULL;
            Py_XDECREF(tmp_HBMatrixType$listcomp$tuple_unpack_1__element_2);
            tmp_HBMatrixType$listcomp$tuple_unpack_1__element_2 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_12;
            exception_value = exception_keeper_value_12;
            exception_tb = exception_keeper_tb_12;
            exception_lineno = exception_keeper_lineno_12;

            goto try_except_handler_15;
            // End of try:
            try_end_6:;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter);
            Py_DECREF(tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter);
            tmp_HBMatrixType$listcomp$tuple_unpack_1__source_iter = NULL;
            {
                PyObject *tmp_assign_source_44;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_1__element_1);
                tmp_assign_source_44 = tmp_HBMatrixType$listcomp$tuple_unpack_1__element_1;
                {
                    PyObject *old = outline_4_var_i;
                    outline_4_var_i = tmp_assign_source_44;
                    Py_INCREF(outline_4_var_i);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(tmp_HBMatrixType$listcomp$tuple_unpack_1__element_1);
            tmp_HBMatrixType$listcomp$tuple_unpack_1__element_1 = NULL;

            {
                PyObject *tmp_assign_source_45;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_1__element_2);
                tmp_assign_source_45 = tmp_HBMatrixType$listcomp$tuple_unpack_1__element_2;
                {
                    PyObject *old = outline_4_var_j;
                    outline_4_var_j = tmp_assign_source_45;
                    Py_INCREF(outline_4_var_j);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(tmp_HBMatrixType$listcomp$tuple_unpack_1__element_2);
            tmp_HBMatrixType$listcomp$tuple_unpack_1__element_2 = NULL;

            {
                PyObject *tmp_append_list_1;
                PyObject *tmp_append_value_1;
                PyObject *tmp_tuple_element_9;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp_1__contraction);
                tmp_append_list_1 = tmp_HBMatrixType$listcomp_1__contraction;
                CHECK_OBJECT(outline_4_var_j);
                tmp_tuple_element_9 = outline_4_var_j;
                tmp_append_value_1 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_append_value_1, 0, tmp_tuple_element_9);
                CHECK_OBJECT(outline_4_var_i);
                tmp_tuple_element_9 = outline_4_var_i;
                PyTuple_SET_ITEM0(tmp_append_value_1, 1, tmp_tuple_element_9);
                tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 383;
                    type_description_3 = "oo";
                    goto try_except_handler_15;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_3 = "oo";
                goto try_except_handler_15;
            }
            goto loop_start_1;
            loop_end_1:;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp_1__contraction);
            tmp_dict_seq_1 = tmp_HBMatrixType$listcomp_1__contraction;
            Py_INCREF(tmp_dict_seq_1);
            goto try_return_handler_15;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_15:;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp_1__$0);
            Py_DECREF(tmp_HBMatrixType$listcomp_1__$0);
            tmp_HBMatrixType$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp_1__contraction);
            Py_DECREF(tmp_HBMatrixType$listcomp_1__contraction);
            tmp_HBMatrixType$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_HBMatrixType$listcomp_1__iter_value_0);
            tmp_HBMatrixType$listcomp_1__iter_value_0 = NULL;
            goto frame_return_exit_1;
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

            CHECK_OBJECT(tmp_HBMatrixType$listcomp_1__$0);
            Py_DECREF(tmp_HBMatrixType$listcomp_1__$0);
            tmp_HBMatrixType$listcomp_1__$0 = NULL;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp_1__contraction);
            Py_DECREF(tmp_HBMatrixType$listcomp_1__contraction);
            tmp_HBMatrixType$listcomp_1__contraction = NULL;
            Py_XDECREF(tmp_HBMatrixType$listcomp_1__iter_value_0);
            tmp_HBMatrixType$listcomp_1__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_13;
            exception_value = exception_keeper_value_13;
            exception_tb = exception_keeper_tb_13;
            exception_lineno = exception_keeper_lineno_13;

            goto frame_exception_exit_3;
            // End of try:


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_1;
            frame_return_exit_1:

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_14;
            frame_exception_exit_3:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_4cc2485ebb83a63af5ac01a2e92f30c3_3, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_4cc2485ebb83a63af5ac01a2e92f30c3_3->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_4cc2485ebb83a63af5ac01a2e92f30c3_3, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_4cc2485ebb83a63af5ac01a2e92f30c3_3,
                type_description_3,
                outline_4_var_i,
                outline_4_var_j
            );


            // Release cached frame if used for exception.
            if (frame_4cc2485ebb83a63af5ac01a2e92f30c3_3 == cache_frame_4cc2485ebb83a63af5ac01a2e92f30c3_3) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif
                Py_DECREF(cache_frame_4cc2485ebb83a63af5ac01a2e92f30c3_3);
                cache_frame_4cc2485ebb83a63af5ac01a2e92f30c3_3 = NULL;
            }

            assertFrameObject(frame_4cc2485ebb83a63af5ac01a2e92f30c3_3);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_2;
            frame_no_exception_1:;
            goto skip_nested_handling_1;
            nested_frame_exit_2:;
            type_description_2 = "o";
            goto try_except_handler_14;
            skip_nested_handling_1:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_14:;
            Py_XDECREF(outline_4_var_i);
            outline_4_var_i = NULL;
            Py_XDECREF(outline_4_var_j);
            outline_4_var_j = NULL;
            goto outline_result_5;
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

            Py_XDECREF(outline_4_var_i);
            outline_4_var_i = NULL;
            Py_XDECREF(outline_4_var_j);
            outline_4_var_j = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_14;
            exception_value = exception_keeper_value_14;
            exception_tb = exception_keeper_tb_14;
            exception_lineno = exception_keeper_lineno_14;

            goto outline_exception_5;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_5:;
            exception_lineno = 383;
            goto frame_exception_exit_2;
            outline_result_5:;
            tmp_dictset_value = TO_DICT(tmp_dict_seq_1, NULL);
            Py_DECREF(tmp_dict_seq_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[144], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 383;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_dict_seq_2;
            // Tried code:
            {
                PyObject *tmp_assign_source_46;
                PyObject *tmp_iter_arg_3;
                PyObject *tmp_called_value_7;
                PyObject *tmp_expression_value_12;
                tmp_expression_value_12 = DICT_GET_ITEM0(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[150]);

                if (unlikely(tmp_expression_value_12 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[150]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 384;
                    type_description_2 = "o";
                    goto try_except_handler_18;
                }

                if (tmp_expression_value_12 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 384;
                    type_description_2 = "o";
                    goto try_except_handler_18;
                }
                tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[217]);
                if (tmp_called_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 384;
                    type_description_2 = "o";
                    goto try_except_handler_18;
                }
                frame_b0c653888873cae870e43ae2c8cc443f_2->m_frame.f_lineno = 384;
                tmp_iter_arg_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_7);
                Py_DECREF(tmp_called_value_7);
                if (tmp_iter_arg_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 384;
                    type_description_2 = "o";
                    goto try_except_handler_18;
                }
                tmp_assign_source_46 = MAKE_ITERATOR(tmp_iter_arg_3);
                Py_DECREF(tmp_iter_arg_3);
                if (tmp_assign_source_46 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 384;
                    type_description_2 = "o";
                    goto try_except_handler_18;
                }
                assert(tmp_HBMatrixType$listcomp_2__$0 == NULL);
                tmp_HBMatrixType$listcomp_2__$0 = tmp_assign_source_46;
            }
            {
                PyObject *tmp_assign_source_47;
                tmp_assign_source_47 = MAKE_LIST_EMPTY(0);
                assert(tmp_HBMatrixType$listcomp_2__contraction == NULL);
                tmp_HBMatrixType$listcomp_2__contraction = tmp_assign_source_47;
            }
            if (isFrameUnusable(cache_frame_d3e45af51badf33c8f61f25aae3f5db1_4)) {
                Py_XDECREF(cache_frame_d3e45af51badf33c8f61f25aae3f5db1_4);

#if _DEBUG_REFCOUNTS
                if (cache_frame_d3e45af51badf33c8f61f25aae3f5db1_4 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_d3e45af51badf33c8f61f25aae3f5db1_4 = MAKE_FUNCTION_FRAME(codeobj_d3e45af51badf33c8f61f25aae3f5db1, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }

            assert(cache_frame_d3e45af51badf33c8f61f25aae3f5db1_4->m_type_description == NULL);
            frame_d3e45af51badf33c8f61f25aae3f5db1_4 = cache_frame_d3e45af51badf33c8f61f25aae3f5db1_4;

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_d3e45af51badf33c8f61f25aae3f5db1_4);
            assert(Py_REFCNT(frame_d3e45af51badf33c8f61f25aae3f5db1_4) == 2);

            // Framed code:
            // Tried code:
            loop_start_2:;
            {
                PyObject *tmp_next_source_2;
                PyObject *tmp_assign_source_48;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp_2__$0);
                tmp_next_source_2 = tmp_HBMatrixType$listcomp_2__$0;
                tmp_assign_source_48 = ITERATOR_NEXT(tmp_next_source_2);
                if (tmp_assign_source_48 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_2;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_3 = "oo";
                        exception_lineno = 384;
                        goto try_except_handler_19;
                    }
                }

                {
                    PyObject *old = tmp_HBMatrixType$listcomp_2__iter_value_0;
                    tmp_HBMatrixType$listcomp_2__iter_value_0 = tmp_assign_source_48;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_49;
                PyObject *tmp_iter_arg_4;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp_2__iter_value_0);
                tmp_iter_arg_4 = tmp_HBMatrixType$listcomp_2__iter_value_0;
                tmp_assign_source_49 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_4);
                if (tmp_assign_source_49 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 384;
                    type_description_3 = "oo";
                    goto try_except_handler_20;
                }
                {
                    PyObject *old = tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter;
                    tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter = tmp_assign_source_49;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_50;
                PyObject *tmp_unpack_3;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter);
                tmp_unpack_3 = tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter;
                tmp_assign_source_50 = UNPACK_NEXT(tmp_unpack_3, 0, 2);
                if (tmp_assign_source_50 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_3 = "oo";
                    exception_lineno = 384;
                    goto try_except_handler_21;
                }
                {
                    PyObject *old = tmp_HBMatrixType$listcomp$tuple_unpack_2__element_1;
                    tmp_HBMatrixType$listcomp$tuple_unpack_2__element_1 = tmp_assign_source_50;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_51;
                PyObject *tmp_unpack_4;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter);
                tmp_unpack_4 = tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter;
                tmp_assign_source_51 = UNPACK_NEXT(tmp_unpack_4, 1, 2);
                if (tmp_assign_source_51 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_3 = "oo";
                    exception_lineno = 384;
                    goto try_except_handler_21;
                }
                {
                    PyObject *old = tmp_HBMatrixType$listcomp$tuple_unpack_2__element_2;
                    tmp_HBMatrixType$listcomp$tuple_unpack_2__element_2 = tmp_assign_source_51;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_iterator_name_2;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter);
                tmp_iterator_name_2 = tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter;
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

                            type_description_3 = "oo";
                            exception_lineno = 384;
                            goto try_except_handler_21;
                        }
                    }
                } else {
                    Py_DECREF(tmp_iterator_attempt);

                    exception_type = PyExc_ValueError;
                    Py_INCREF(PyExc_ValueError);
                    exception_value = mod_consts[11];
                    Py_INCREF(exception_value);
                    exception_tb = NULL;

                    type_description_3 = "oo";
                    exception_lineno = 384;
                    goto try_except_handler_21;
                }
            }
            goto try_end_7;
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

            CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter);
            Py_DECREF(tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter);
            tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_15;
            exception_value = exception_keeper_value_15;
            exception_tb = exception_keeper_tb_15;
            exception_lineno = exception_keeper_lineno_15;

            goto try_except_handler_20;
            // End of try:
            try_end_7:;
            goto try_end_8;
            // Exception handler code:
            try_except_handler_20:;
            exception_keeper_type_16 = exception_type;
            exception_keeper_value_16 = exception_value;
            exception_keeper_tb_16 = exception_tb;
            exception_keeper_lineno_16 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(tmp_HBMatrixType$listcomp$tuple_unpack_2__element_1);
            tmp_HBMatrixType$listcomp$tuple_unpack_2__element_1 = NULL;
            Py_XDECREF(tmp_HBMatrixType$listcomp$tuple_unpack_2__element_2);
            tmp_HBMatrixType$listcomp$tuple_unpack_2__element_2 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_16;
            exception_value = exception_keeper_value_16;
            exception_tb = exception_keeper_tb_16;
            exception_lineno = exception_keeper_lineno_16;

            goto try_except_handler_19;
            // End of try:
            try_end_8:;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter);
            Py_DECREF(tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter);
            tmp_HBMatrixType$listcomp$tuple_unpack_2__source_iter = NULL;
            {
                PyObject *tmp_assign_source_52;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_2__element_1);
                tmp_assign_source_52 = tmp_HBMatrixType$listcomp$tuple_unpack_2__element_1;
                {
                    PyObject *old = outline_5_var_i;
                    outline_5_var_i = tmp_assign_source_52;
                    Py_INCREF(outline_5_var_i);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(tmp_HBMatrixType$listcomp$tuple_unpack_2__element_1);
            tmp_HBMatrixType$listcomp$tuple_unpack_2__element_1 = NULL;

            {
                PyObject *tmp_assign_source_53;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_2__element_2);
                tmp_assign_source_53 = tmp_HBMatrixType$listcomp$tuple_unpack_2__element_2;
                {
                    PyObject *old = outline_5_var_j;
                    outline_5_var_j = tmp_assign_source_53;
                    Py_INCREF(outline_5_var_j);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(tmp_HBMatrixType$listcomp$tuple_unpack_2__element_2);
            tmp_HBMatrixType$listcomp$tuple_unpack_2__element_2 = NULL;

            {
                PyObject *tmp_append_list_2;
                PyObject *tmp_append_value_2;
                PyObject *tmp_tuple_element_10;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp_2__contraction);
                tmp_append_list_2 = tmp_HBMatrixType$listcomp_2__contraction;
                CHECK_OBJECT(outline_5_var_j);
                tmp_tuple_element_10 = outline_5_var_j;
                tmp_append_value_2 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_append_value_2, 0, tmp_tuple_element_10);
                CHECK_OBJECT(outline_5_var_i);
                tmp_tuple_element_10 = outline_5_var_i;
                PyTuple_SET_ITEM0(tmp_append_value_2, 1, tmp_tuple_element_10);
                tmp_result = LIST_APPEND1(tmp_append_list_2, tmp_append_value_2);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 384;
                    type_description_3 = "oo";
                    goto try_except_handler_19;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;
                type_description_3 = "oo";
                goto try_except_handler_19;
            }
            goto loop_start_2;
            loop_end_2:;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp_2__contraction);
            tmp_dict_seq_2 = tmp_HBMatrixType$listcomp_2__contraction;
            Py_INCREF(tmp_dict_seq_2);
            goto try_return_handler_19;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_19:;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp_2__$0);
            Py_DECREF(tmp_HBMatrixType$listcomp_2__$0);
            tmp_HBMatrixType$listcomp_2__$0 = NULL;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp_2__contraction);
            Py_DECREF(tmp_HBMatrixType$listcomp_2__contraction);
            tmp_HBMatrixType$listcomp_2__contraction = NULL;
            Py_XDECREF(tmp_HBMatrixType$listcomp_2__iter_value_0);
            tmp_HBMatrixType$listcomp_2__iter_value_0 = NULL;
            goto frame_return_exit_2;
            // Exception handler code:
            try_except_handler_19:;
            exception_keeper_type_17 = exception_type;
            exception_keeper_value_17 = exception_value;
            exception_keeper_tb_17 = exception_tb;
            exception_keeper_lineno_17 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_HBMatrixType$listcomp_2__$0);
            Py_DECREF(tmp_HBMatrixType$listcomp_2__$0);
            tmp_HBMatrixType$listcomp_2__$0 = NULL;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp_2__contraction);
            Py_DECREF(tmp_HBMatrixType$listcomp_2__contraction);
            tmp_HBMatrixType$listcomp_2__contraction = NULL;
            Py_XDECREF(tmp_HBMatrixType$listcomp_2__iter_value_0);
            tmp_HBMatrixType$listcomp_2__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_17;
            exception_value = exception_keeper_value_17;
            exception_tb = exception_keeper_tb_17;
            exception_lineno = exception_keeper_lineno_17;

            goto frame_exception_exit_4;
            // End of try:


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_2;
            frame_return_exit_2:

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_18;
            frame_exception_exit_4:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_d3e45af51badf33c8f61f25aae3f5db1_4, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_d3e45af51badf33c8f61f25aae3f5db1_4->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_d3e45af51badf33c8f61f25aae3f5db1_4, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_d3e45af51badf33c8f61f25aae3f5db1_4,
                type_description_3,
                outline_5_var_i,
                outline_5_var_j
            );


            // Release cached frame if used for exception.
            if (frame_d3e45af51badf33c8f61f25aae3f5db1_4 == cache_frame_d3e45af51badf33c8f61f25aae3f5db1_4) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif
                Py_DECREF(cache_frame_d3e45af51badf33c8f61f25aae3f5db1_4);
                cache_frame_d3e45af51badf33c8f61f25aae3f5db1_4 = NULL;
            }

            assertFrameObject(frame_d3e45af51badf33c8f61f25aae3f5db1_4);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_3;
            frame_no_exception_2:;
            goto skip_nested_handling_2;
            nested_frame_exit_3:;
            type_description_2 = "o";
            goto try_except_handler_18;
            skip_nested_handling_2:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_18:;
            Py_XDECREF(outline_5_var_i);
            outline_5_var_i = NULL;
            Py_XDECREF(outline_5_var_j);
            outline_5_var_j = NULL;
            goto outline_result_6;
            // Exception handler code:
            try_except_handler_18:;
            exception_keeper_type_18 = exception_type;
            exception_keeper_value_18 = exception_value;
            exception_keeper_tb_18 = exception_tb;
            exception_keeper_lineno_18 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(outline_5_var_i);
            outline_5_var_i = NULL;
            Py_XDECREF(outline_5_var_j);
            outline_5_var_j = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_18;
            exception_value = exception_keeper_value_18;
            exception_tb = exception_keeper_tb_18;
            exception_lineno = exception_keeper_lineno_18;

            goto outline_exception_6;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_6:;
            exception_lineno = 384;
            goto frame_exception_exit_2;
            outline_result_6:;
            tmp_dictset_value = TO_DICT(tmp_dict_seq_2, NULL);
            Py_DECREF(tmp_dict_seq_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[145], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 384;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_dict_seq_3;
            // Tried code:
            {
                PyObject *tmp_assign_source_54;
                PyObject *tmp_iter_arg_5;
                PyObject *tmp_called_value_8;
                PyObject *tmp_expression_value_13;
                tmp_expression_value_13 = DICT_GET_ITEM0(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[152]);

                if (unlikely(tmp_expression_value_13 == NULL && CHECK_AND_CLEAR_KEY_ERROR_OCCURRED())) {

                    FORMAT_NAME_ERROR(&exception_type, &exception_value, mod_consts[152]);
                    NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
                    CHAIN_EXCEPTION(exception_value);

                    exception_lineno = 385;
                    type_description_2 = "o";
                    goto try_except_handler_22;
                }

                if (tmp_expression_value_13 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 385;
                    type_description_2 = "o";
                    goto try_except_handler_22;
                }
                tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[217]);
                if (tmp_called_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 385;
                    type_description_2 = "o";
                    goto try_except_handler_22;
                }
                frame_b0c653888873cae870e43ae2c8cc443f_2->m_frame.f_lineno = 385;
                tmp_iter_arg_5 = CALL_FUNCTION_NO_ARGS(tmp_called_value_8);
                Py_DECREF(tmp_called_value_8);
                if (tmp_iter_arg_5 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 385;
                    type_description_2 = "o";
                    goto try_except_handler_22;
                }
                tmp_assign_source_54 = MAKE_ITERATOR(tmp_iter_arg_5);
                Py_DECREF(tmp_iter_arg_5);
                if (tmp_assign_source_54 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 385;
                    type_description_2 = "o";
                    goto try_except_handler_22;
                }
                assert(tmp_HBMatrixType$listcomp_3__$0 == NULL);
                tmp_HBMatrixType$listcomp_3__$0 = tmp_assign_source_54;
            }
            {
                PyObject *tmp_assign_source_55;
                tmp_assign_source_55 = MAKE_LIST_EMPTY(0);
                assert(tmp_HBMatrixType$listcomp_3__contraction == NULL);
                tmp_HBMatrixType$listcomp_3__contraction = tmp_assign_source_55;
            }
            if (isFrameUnusable(cache_frame_32e2c0e8cbf8487c2a479c826485dbad_5)) {
                Py_XDECREF(cache_frame_32e2c0e8cbf8487c2a479c826485dbad_5);

#if _DEBUG_REFCOUNTS
                if (cache_frame_32e2c0e8cbf8487c2a479c826485dbad_5 == NULL) {
                    count_active_frame_cache_instances += 1;
                } else {
                    count_released_frame_cache_instances += 1;
                }
                count_allocated_frame_cache_instances += 1;
#endif
                cache_frame_32e2c0e8cbf8487c2a479c826485dbad_5 = MAKE_FUNCTION_FRAME(codeobj_32e2c0e8cbf8487c2a479c826485dbad, module_scipy$io$harwell_boeing$hb, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
            } else {
                count_hit_frame_cache_instances += 1;
#endif
            }

            assert(cache_frame_32e2c0e8cbf8487c2a479c826485dbad_5->m_type_description == NULL);
            frame_32e2c0e8cbf8487c2a479c826485dbad_5 = cache_frame_32e2c0e8cbf8487c2a479c826485dbad_5;

            // Push the new frame as the currently active one, and we should be exclusively
            // owning it.
            pushFrameStackCompiledFrame(frame_32e2c0e8cbf8487c2a479c826485dbad_5);
            assert(Py_REFCNT(frame_32e2c0e8cbf8487c2a479c826485dbad_5) == 2);

            // Framed code:
            // Tried code:
            loop_start_3:;
            {
                PyObject *tmp_next_source_3;
                PyObject *tmp_assign_source_56;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp_3__$0);
                tmp_next_source_3 = tmp_HBMatrixType$listcomp_3__$0;
                tmp_assign_source_56 = ITERATOR_NEXT(tmp_next_source_3);
                if (tmp_assign_source_56 == NULL) {
                    if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                        goto loop_end_3;
                    } else {

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                        type_description_3 = "oo";
                        exception_lineno = 385;
                        goto try_except_handler_23;
                    }
                }

                {
                    PyObject *old = tmp_HBMatrixType$listcomp_3__iter_value_0;
                    tmp_HBMatrixType$listcomp_3__iter_value_0 = tmp_assign_source_56;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_57;
                PyObject *tmp_iter_arg_6;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp_3__iter_value_0);
                tmp_iter_arg_6 = tmp_HBMatrixType$listcomp_3__iter_value_0;
                tmp_assign_source_57 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_6);
                if (tmp_assign_source_57 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 385;
                    type_description_3 = "oo";
                    goto try_except_handler_24;
                }
                {
                    PyObject *old = tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter;
                    tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter = tmp_assign_source_57;
                    Py_XDECREF(old);
                }

            }
            // Tried code:
            {
                PyObject *tmp_assign_source_58;
                PyObject *tmp_unpack_5;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter);
                tmp_unpack_5 = tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter;
                tmp_assign_source_58 = UNPACK_NEXT(tmp_unpack_5, 0, 2);
                if (tmp_assign_source_58 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_3 = "oo";
                    exception_lineno = 385;
                    goto try_except_handler_25;
                }
                {
                    PyObject *old = tmp_HBMatrixType$listcomp$tuple_unpack_3__element_1;
                    tmp_HBMatrixType$listcomp$tuple_unpack_3__element_1 = tmp_assign_source_58;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_assign_source_59;
                PyObject *tmp_unpack_6;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter);
                tmp_unpack_6 = tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter;
                tmp_assign_source_59 = UNPACK_NEXT(tmp_unpack_6, 1, 2);
                if (tmp_assign_source_59 == NULL) {
                    if (!ERROR_OCCURRED()) {
                        exception_type = PyExc_StopIteration;
                        Py_INCREF(exception_type);
                        exception_value = NULL;
                        exception_tb = NULL;
                    } else {
                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    }


                    type_description_3 = "oo";
                    exception_lineno = 385;
                    goto try_except_handler_25;
                }
                {
                    PyObject *old = tmp_HBMatrixType$listcomp$tuple_unpack_3__element_2;
                    tmp_HBMatrixType$listcomp$tuple_unpack_3__element_2 = tmp_assign_source_59;
                    Py_XDECREF(old);
                }

            }
            {
                PyObject *tmp_iterator_name_3;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter);
                tmp_iterator_name_3 = tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter;
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

                            type_description_3 = "oo";
                            exception_lineno = 385;
                            goto try_except_handler_25;
                        }
                    }
                } else {
                    Py_DECREF(tmp_iterator_attempt);

                    exception_type = PyExc_ValueError;
                    Py_INCREF(PyExc_ValueError);
                    exception_value = mod_consts[11];
                    Py_INCREF(exception_value);
                    exception_tb = NULL;

                    type_description_3 = "oo";
                    exception_lineno = 385;
                    goto try_except_handler_25;
                }
            }
            goto try_end_9;
            // Exception handler code:
            try_except_handler_25:;
            exception_keeper_type_19 = exception_type;
            exception_keeper_value_19 = exception_value;
            exception_keeper_tb_19 = exception_tb;
            exception_keeper_lineno_19 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter);
            Py_DECREF(tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter);
            tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_19;
            exception_value = exception_keeper_value_19;
            exception_tb = exception_keeper_tb_19;
            exception_lineno = exception_keeper_lineno_19;

            goto try_except_handler_24;
            // End of try:
            try_end_9:;
            goto try_end_10;
            // Exception handler code:
            try_except_handler_24:;
            exception_keeper_type_20 = exception_type;
            exception_keeper_value_20 = exception_value;
            exception_keeper_tb_20 = exception_tb;
            exception_keeper_lineno_20 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(tmp_HBMatrixType$listcomp$tuple_unpack_3__element_1);
            tmp_HBMatrixType$listcomp$tuple_unpack_3__element_1 = NULL;
            Py_XDECREF(tmp_HBMatrixType$listcomp$tuple_unpack_3__element_2);
            tmp_HBMatrixType$listcomp$tuple_unpack_3__element_2 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_20;
            exception_value = exception_keeper_value_20;
            exception_tb = exception_keeper_tb_20;
            exception_lineno = exception_keeper_lineno_20;

            goto try_except_handler_23;
            // End of try:
            try_end_10:;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter);
            Py_DECREF(tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter);
            tmp_HBMatrixType$listcomp$tuple_unpack_3__source_iter = NULL;
            {
                PyObject *tmp_assign_source_60;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_3__element_1);
                tmp_assign_source_60 = tmp_HBMatrixType$listcomp$tuple_unpack_3__element_1;
                {
                    PyObject *old = outline_6_var_i;
                    outline_6_var_i = tmp_assign_source_60;
                    Py_INCREF(outline_6_var_i);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(tmp_HBMatrixType$listcomp$tuple_unpack_3__element_1);
            tmp_HBMatrixType$listcomp$tuple_unpack_3__element_1 = NULL;

            {
                PyObject *tmp_assign_source_61;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp$tuple_unpack_3__element_2);
                tmp_assign_source_61 = tmp_HBMatrixType$listcomp$tuple_unpack_3__element_2;
                {
                    PyObject *old = outline_6_var_j;
                    outline_6_var_j = tmp_assign_source_61;
                    Py_INCREF(outline_6_var_j);
                    Py_XDECREF(old);
                }

            }
            Py_XDECREF(tmp_HBMatrixType$listcomp$tuple_unpack_3__element_2);
            tmp_HBMatrixType$listcomp$tuple_unpack_3__element_2 = NULL;

            {
                PyObject *tmp_append_list_3;
                PyObject *tmp_append_value_3;
                PyObject *tmp_tuple_element_11;
                CHECK_OBJECT(tmp_HBMatrixType$listcomp_3__contraction);
                tmp_append_list_3 = tmp_HBMatrixType$listcomp_3__contraction;
                CHECK_OBJECT(outline_6_var_j);
                tmp_tuple_element_11 = outline_6_var_j;
                tmp_append_value_3 = MAKE_TUPLE_EMPTY(2);
                PyTuple_SET_ITEM0(tmp_append_value_3, 0, tmp_tuple_element_11);
                CHECK_OBJECT(outline_6_var_i);
                tmp_tuple_element_11 = outline_6_var_i;
                PyTuple_SET_ITEM0(tmp_append_value_3, 1, tmp_tuple_element_11);
                tmp_result = LIST_APPEND1(tmp_append_list_3, tmp_append_value_3);
                if (tmp_result == false) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 385;
                    type_description_3 = "oo";
                    goto try_except_handler_23;
                }
            }
            if (CONSIDER_THREADING() == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_3 = "oo";
                goto try_except_handler_23;
            }
            goto loop_start_3;
            loop_end_3:;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp_3__contraction);
            tmp_dict_seq_3 = tmp_HBMatrixType$listcomp_3__contraction;
            Py_INCREF(tmp_dict_seq_3);
            goto try_return_handler_23;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_23:;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp_3__$0);
            Py_DECREF(tmp_HBMatrixType$listcomp_3__$0);
            tmp_HBMatrixType$listcomp_3__$0 = NULL;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp_3__contraction);
            Py_DECREF(tmp_HBMatrixType$listcomp_3__contraction);
            tmp_HBMatrixType$listcomp_3__contraction = NULL;
            Py_XDECREF(tmp_HBMatrixType$listcomp_3__iter_value_0);
            tmp_HBMatrixType$listcomp_3__iter_value_0 = NULL;
            goto frame_return_exit_3;
            // Exception handler code:
            try_except_handler_23:;
            exception_keeper_type_21 = exception_type;
            exception_keeper_value_21 = exception_value;
            exception_keeper_tb_21 = exception_tb;
            exception_keeper_lineno_21 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            CHECK_OBJECT(tmp_HBMatrixType$listcomp_3__$0);
            Py_DECREF(tmp_HBMatrixType$listcomp_3__$0);
            tmp_HBMatrixType$listcomp_3__$0 = NULL;
            CHECK_OBJECT(tmp_HBMatrixType$listcomp_3__contraction);
            Py_DECREF(tmp_HBMatrixType$listcomp_3__contraction);
            tmp_HBMatrixType$listcomp_3__contraction = NULL;
            Py_XDECREF(tmp_HBMatrixType$listcomp_3__iter_value_0);
            tmp_HBMatrixType$listcomp_3__iter_value_0 = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_21;
            exception_value = exception_keeper_value_21;
            exception_tb = exception_keeper_tb_21;
            exception_lineno = exception_keeper_lineno_21;

            goto frame_exception_exit_5;
            // End of try:


            // Put the previous frame back on top.
            popFrameStack();

            goto frame_no_exception_3;
            frame_return_exit_3:

            // Put the previous frame back on top.
            popFrameStack();

            goto try_return_handler_22;
            frame_exception_exit_5:


            if (exception_tb == NULL) {
                exception_tb = MAKE_TRACEBACK(frame_32e2c0e8cbf8487c2a479c826485dbad_5, exception_lineno);
            } else if (exception_tb->tb_frame != &frame_32e2c0e8cbf8487c2a479c826485dbad_5->m_frame) {
                exception_tb = ADD_TRACEBACK(exception_tb, frame_32e2c0e8cbf8487c2a479c826485dbad_5, exception_lineno);
            }

            // Attaches locals to frame if any.
            Nuitka_Frame_AttachLocals(
                frame_32e2c0e8cbf8487c2a479c826485dbad_5,
                type_description_3,
                outline_6_var_i,
                outline_6_var_j
            );


            // Release cached frame if used for exception.
            if (frame_32e2c0e8cbf8487c2a479c826485dbad_5 == cache_frame_32e2c0e8cbf8487c2a479c826485dbad_5) {
#if _DEBUG_REFCOUNTS
                count_active_frame_cache_instances -= 1;
                count_released_frame_cache_instances += 1;
#endif
                Py_DECREF(cache_frame_32e2c0e8cbf8487c2a479c826485dbad_5);
                cache_frame_32e2c0e8cbf8487c2a479c826485dbad_5 = NULL;
            }

            assertFrameObject(frame_32e2c0e8cbf8487c2a479c826485dbad_5);

            // Put the previous frame back on top.
            popFrameStack();

            // Return the error.
            goto nested_frame_exit_4;
            frame_no_exception_3:;
            goto skip_nested_handling_3;
            nested_frame_exit_4:;
            type_description_2 = "o";
            goto try_except_handler_22;
            skip_nested_handling_3:;
            NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
            return NULL;
            // Return handler code:
            try_return_handler_22:;
            Py_XDECREF(outline_6_var_i);
            outline_6_var_i = NULL;
            Py_XDECREF(outline_6_var_j);
            outline_6_var_j = NULL;
            goto outline_result_7;
            // Exception handler code:
            try_except_handler_22:;
            exception_keeper_type_22 = exception_type;
            exception_keeper_value_22 = exception_value;
            exception_keeper_tb_22 = exception_tb;
            exception_keeper_lineno_22 = exception_lineno;
            exception_type = NULL;
            exception_value = NULL;
            exception_tb = NULL;
            exception_lineno = 0;

            Py_XDECREF(outline_6_var_i);
            outline_6_var_i = NULL;
            Py_XDECREF(outline_6_var_j);
            outline_6_var_j = NULL;
            // Re-raise.
            exception_type = exception_keeper_type_22;
            exception_value = exception_keeper_value_22;
            exception_tb = exception_keeper_tb_22;
            exception_lineno = exception_keeper_lineno_22;

            goto outline_exception_7;
            // End of try:
            NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
            return NULL;
            outline_exception_7:;
            exception_lineno = 385;
            goto frame_exception_exit_2;
            outline_result_7:;
            tmp_dictset_value = TO_DICT(tmp_dict_seq_3, NULL);
            Py_DECREF(tmp_dict_seq_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[146], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 385;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }
        {
            PyObject *tmp_classmethod_arg_3;


            tmp_classmethod_arg_3 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__9_from_fortran();

            tmp_dictset_value = BUILTIN_CLASSMETHOD(tmp_classmethod_arg_3);
            Py_DECREF(tmp_classmethod_arg_3);
            assert(!(tmp_dictset_value == NULL));
            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[62], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_defaults_4;
            tmp_defaults_4 = mod_consts[219];
            Py_INCREF(tmp_defaults_4);


            tmp_dictset_value = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__10___init__(tmp_defaults_4);

            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[208], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        {
            PyObject *tmp_called_value_9;
            PyObject *tmp_args_element_value_1;
            tmp_called_value_9 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_1 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__11_fortran_format();

            frame_b0c653888873cae870e43ae2c8cc443f_2->m_frame.f_lineno = 412;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_1);
            Py_DECREF(tmp_args_element_value_1);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[38], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 412;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b0c653888873cae870e43ae2c8cc443f_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b0c653888873cae870e43ae2c8cc443f_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b0c653888873cae870e43ae2c8cc443f_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b0c653888873cae870e43ae2c8cc443f_2,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_b0c653888873cae870e43ae2c8cc443f_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_4:;
        goto skip_nested_handling_4;
        nested_frame_exit_1:;

        goto try_except_handler_13;
        skip_nested_handling_4:;


        tmp_dictset_value = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__12___repr__();

        tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362, mod_consts[222], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_62;
            PyObject *tmp_called_value_10;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_12;
            PyObject *tmp_kwargs_value_6;
            tmp_called_value_10 = (PyObject *)&PyType_Type;
            tmp_tuple_element_12 = mod_consts[31];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_12);
            tmp_tuple_element_12 = mod_consts[211];
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_12);
            tmp_tuple_element_12 = locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_12);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_4__class_decl_dict;
            frame_d25f54c44ce9e4671cce20190f28d090->m_frame.f_lineno = 362;
            tmp_assign_source_62 = CALL_FUNCTION(tmp_called_value_10, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_62 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 362;

                goto try_except_handler_13;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_62;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_37 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_13;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_13:;
        Py_DECREF(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362);
        locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362 = NULL;
        goto try_return_handler_12;
        // Exception handler code:
        try_except_handler_13:;
        exception_keeper_type_23 = exception_type;
        exception_keeper_value_23 = exception_value;
        exception_keeper_tb_23 = exception_tb;
        exception_keeper_lineno_23 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362);
        locals_scipy$io$harwell_boeing$hb$$$class__4_HBMatrixType_362 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_23;
        exception_value = exception_keeper_value_23;
        exception_tb = exception_keeper_tb_23;
        exception_lineno = exception_keeper_lineno_23;

        goto try_except_handler_12;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_12:;
        CHECK_OBJECT(outline_3_var___class__);
        Py_DECREF(outline_3_var___class__);
        outline_3_var___class__ = NULL;
        goto outline_result_4;
        // Exception handler code:
        try_except_handler_12:;
        exception_keeper_type_24 = exception_type;
        exception_keeper_value_24 = exception_value;
        exception_keeper_tb_24 = exception_tb;
        exception_keeper_lineno_24 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_24;
        exception_value = exception_keeper_value_24;
        exception_tb = exception_keeper_tb_24;
        exception_lineno = exception_keeper_lineno_24;

        goto outline_exception_4;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_4:;
        exception_lineno = 362;
        goto try_except_handler_11;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[31], tmp_assign_source_37);
    }
    goto try_end_11;
    // Exception handler code:
    try_except_handler_11:;
    exception_keeper_type_25 = exception_type;
    exception_keeper_value_25 = exception_value;
    exception_keeper_tb_25 = exception_tb;
    exception_keeper_lineno_25 = exception_lineno;
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
    exception_type = exception_keeper_type_25;
    exception_value = exception_keeper_value_25;
    exception_tb = exception_keeper_tb_25;
    exception_lineno = exception_keeper_lineno_25;

    goto frame_exception_exit_1;
    // End of try:
    try_end_11:;
    CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
    Py_DECREF(tmp_class_creation_4__class_decl_dict);
    tmp_class_creation_4__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_4__prepared);
    Py_DECREF(tmp_class_creation_4__prepared);
    tmp_class_creation_4__prepared = NULL;
    {
        PyObject *tmp_assign_source_63;
        tmp_assign_source_63 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_63;
    }
    {
        PyObject *tmp_assign_source_64;
        tmp_assign_source_64 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_64;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_65;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        tmp_dictset_value = mod_consts[199];
        tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423, mod_consts[200], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[168];
        tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423, mod_consts[201], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_5;
            tmp_defaults_5 = mod_consts[212];
            Py_INCREF(tmp_defaults_5);


            tmp_dictset_value = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__13___init__(tmp_defaults_5);

            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423, mod_consts[208], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_233f07dfbd088de3fdf58f78cec8e875_6 = MAKE_CLASS_FRAME(codeobj_233f07dfbd088de3fdf58f78cec8e875, module_scipy$io$harwell_boeing$hb, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_233f07dfbd088de3fdf58f78cec8e875_6);
        assert(Py_REFCNT(frame_233f07dfbd088de3fdf58f78cec8e875_6) == 2);

        // Framed code:
        {
            PyObject *tmp_called_value_11;
            PyObject *tmp_args_element_value_2;
            tmp_called_value_11 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_2 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__14_title();

            frame_233f07dfbd088de3fdf58f78cec8e875_6->m_frame.f_lineno = 443;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_11, tmp_args_element_value_2);
            Py_DECREF(tmp_args_element_value_2);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423, mod_consts[78], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_12;
            PyObject *tmp_args_element_value_3;
            tmp_called_value_12 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_3 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__15_key();

            frame_233f07dfbd088de3fdf58f78cec8e875_6->m_frame.f_lineno = 447;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_12, tmp_args_element_value_3);
            Py_DECREF(tmp_args_element_value_3);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423, mod_consts[79], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 447;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_13;
            PyObject *tmp_args_element_value_4;
            tmp_called_value_13 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_4 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__16_type();

            frame_233f07dfbd088de3fdf58f78cec8e875_6->m_frame.f_lineno = 451;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_13, tmp_args_element_value_4);
            Py_DECREF(tmp_args_element_value_4);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 451;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423, mod_consts[227], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 451;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_14;
            PyObject *tmp_args_element_value_5;
            tmp_called_value_14 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_5 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__17_structure();

            frame_233f07dfbd088de3fdf58f78cec8e875_6->m_frame.f_lineno = 455;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_14, tmp_args_element_value_5);
            Py_DECREF(tmp_args_element_value_5);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423, mod_consts[65], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 455;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_called_value_15;
            PyObject *tmp_args_element_value_6;
            tmp_called_value_15 = (PyObject *)&PyProperty_Type;


            tmp_args_element_value_6 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__18_storage();

            frame_233f07dfbd088de3fdf58f78cec8e875_6->m_frame.f_lineno = 459;
            tmp_dictset_value = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_15, tmp_args_element_value_6);
            Py_DECREF(tmp_args_element_value_6);
            if (tmp_dictset_value == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
            tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423, mod_consts[67], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 459;
                type_description_2 = "o";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_233f07dfbd088de3fdf58f78cec8e875_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_233f07dfbd088de3fdf58f78cec8e875_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_233f07dfbd088de3fdf58f78cec8e875_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_233f07dfbd088de3fdf58f78cec8e875_6,
            type_description_2,
            outline_7_var___class__
        );



        assertFrameObject(frame_233f07dfbd088de3fdf58f78cec8e875_6);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_5;
        frame_no_exception_5:;
        goto skip_nested_handling_5;
        nested_frame_exit_5:;

        goto try_except_handler_28;
        skip_nested_handling_5:;


        tmp_dictset_value = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__19_read_matrix();

        tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423, mod_consts[169], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));


        tmp_dictset_value = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__20_write_matrix();

        tmp_res = PyDict_SetItem(locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423, mod_consts[176], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_assign_source_66;
            PyObject *tmp_called_value_16;
            PyObject *tmp_args_value_7;
            PyObject *tmp_tuple_element_13;
            PyObject *tmp_kwargs_value_7;
            tmp_called_value_16 = (PyObject *)&PyType_Type;
            tmp_tuple_element_13 = mod_consts[168];
            tmp_args_value_7 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_7, 0, tmp_tuple_element_13);
            tmp_tuple_element_13 = mod_consts[211];
            PyTuple_SET_ITEM0(tmp_args_value_7, 1, tmp_tuple_element_13);
            tmp_tuple_element_13 = locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423;
            PyTuple_SET_ITEM0(tmp_args_value_7, 2, tmp_tuple_element_13);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_7 = tmp_class_creation_5__class_decl_dict;
            frame_d25f54c44ce9e4671cce20190f28d090->m_frame.f_lineno = 423;
            tmp_assign_source_66 = CALL_FUNCTION(tmp_called_value_16, tmp_args_value_7, tmp_kwargs_value_7);
            Py_DECREF(tmp_args_value_7);
            if (tmp_assign_source_66 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 423;

                goto try_except_handler_28;
            }
            assert(outline_7_var___class__ == NULL);
            outline_7_var___class__ = tmp_assign_source_66;
        }
        CHECK_OBJECT(outline_7_var___class__);
        tmp_assign_source_65 = outline_7_var___class__;
        Py_INCREF(tmp_assign_source_65);
        goto try_return_handler_28;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_28:;
        Py_DECREF(locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423);
        locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423 = NULL;
        goto try_return_handler_27;
        // Exception handler code:
        try_except_handler_28:;
        exception_keeper_type_26 = exception_type;
        exception_keeper_value_26 = exception_value;
        exception_keeper_tb_26 = exception_tb;
        exception_keeper_lineno_26 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        Py_DECREF(locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423);
        locals_scipy$io$harwell_boeing$hb$$$class__5_HBFile_423 = NULL;
        // Re-raise.
        exception_type = exception_keeper_type_26;
        exception_value = exception_keeper_value_26;
        exception_tb = exception_keeper_tb_26;
        exception_lineno = exception_keeper_lineno_26;

        goto try_except_handler_27;
        // End of try:
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_27:;
        CHECK_OBJECT(outline_7_var___class__);
        Py_DECREF(outline_7_var___class__);
        outline_7_var___class__ = NULL;
        goto outline_result_8;
        // Exception handler code:
        try_except_handler_27:;
        exception_keeper_type_27 = exception_type;
        exception_keeper_value_27 = exception_value;
        exception_keeper_tb_27 = exception_tb;
        exception_keeper_lineno_27 = exception_lineno;
        exception_type = NULL;
        exception_value = NULL;
        exception_tb = NULL;
        exception_lineno = 0;

        // Re-raise.
        exception_type = exception_keeper_type_27;
        exception_value = exception_keeper_value_27;
        exception_tb = exception_keeper_tb_27;
        exception_lineno = exception_keeper_lineno_27;

        goto outline_exception_8;
        // End of try:
        NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
        return NULL;
        outline_exception_8:;
        exception_lineno = 423;
        goto try_except_handler_26;
        outline_result_8:;
        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[168], tmp_assign_source_65);
    }
    goto try_end_12;
    // Exception handler code:
    try_except_handler_26:;
    exception_keeper_type_28 = exception_type;
    exception_keeper_value_28 = exception_value;
    exception_keeper_tb_28 = exception_tb;
    exception_keeper_lineno_28 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_28;
    exception_value = exception_keeper_value_28;
    exception_tb = exception_keeper_tb_28;
    exception_lineno = exception_keeper_lineno_28;

    goto frame_exception_exit_1;
    // End of try:
    try_end_12:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_d25f54c44ce9e4671cce20190f28d090, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_d25f54c44ce9e4671cce20190f28d090->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_d25f54c44ce9e4671cce20190f28d090, exception_lineno);
    }



    assertFrameObject(frame_d25f54c44ce9e4671cce20190f28d090);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;
    CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
    Py_DECREF(tmp_class_creation_5__class_decl_dict);
    tmp_class_creation_5__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_5__prepared);
    Py_DECREF(tmp_class_creation_5__prepared);
    tmp_class_creation_5__prepared = NULL;
    {
        PyObject *tmp_assign_source_67;


        tmp_assign_source_67 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__21_hb_read();

        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[233], tmp_assign_source_67);
    }
    {
        PyObject *tmp_assign_source_68;
        PyObject *tmp_defaults_6;
        tmp_defaults_6 = mod_consts[212];
        Py_INCREF(tmp_defaults_6);


        tmp_assign_source_68 = MAKE_FUNCTION_scipy$io$harwell_boeing$hb$$$function__22_hb_write(tmp_defaults_6);

        UPDATE_STRING_DICT1(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)mod_consts[234], tmp_assign_source_68);
    }

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("scipy.io.harwell_boeing.hb", false);

    Py_INCREF(module_scipy$io$harwell_boeing$hb);
    return module_scipy$io$harwell_boeing$hb;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_scipy$io$harwell_boeing$hb, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("scipy$io$harwell_boeing$hb", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
