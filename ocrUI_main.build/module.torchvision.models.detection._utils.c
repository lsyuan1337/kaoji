/* Generated code for Python module 'torchvision.models.detection._utils'
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

/* The "module_torchvision$models$detection$_utils" is a Python object pointer of module type.
 *
 * Note: For full compatibility with CPython, every module variable access
 * needs to go through it except for cases where the module cannot possibly
 * have changed in the mean time.
 */

PyObject *module_torchvision$models$detection$_utils;
PyDictObject *moduledict_torchvision$models$detection$_utils;

/* The declarations of module constants used, if any. */
static PyObject *mod_consts[217];
#ifndef __NUITKA_NO_ASSERT__
static Py_hash_t mod_consts_hash[217];
#endif

static PyObject *module_filename_obj = NULL;

/* Indicator if this modules private constants were created yet. */
static bool constants_created = false;

/* Function to create module private constants. */
static void createModuleConstants(void) {
    if (constants_created == false) {
        loadConstantsBlob(&mod_consts[0], UNTRANSLATE("torchvision.models.detection._utils"));
        constants_created = true;

#ifndef __NUITKA_NO_ASSERT__
        for (int i = 0; i < 217; i++) {
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
void checkModuleConstants_torchvision$models$detection$_utils(void) {
    // The module may not have been used at all, then ignore this.
    if (constants_created == false) return;

    for (int i = 0; i < 217; i++) {
        assert(mod_consts_hash[i] == DEEP_HASH(mod_consts[i]));
        CHECK_OBJECT_DEEP(mod_consts[i]);
    }
}
#endif

// The module code objects.
static PyCodeObject *codeobj_d821b1632afd21b7dedac85bd9439984;
static PyCodeObject *codeobj_a3c6b9a34febbce5f40c12eba0e55de0;
static PyCodeObject *codeobj_3155a96ce3cca02f61b960c6eb459abc;
static PyCodeObject *codeobj_a237aceee49bc532285d9c75420ed60b;
static PyCodeObject *codeobj_81cb5fb480a4b37a7b82bb12707b5b4c;
static PyCodeObject *codeobj_10d73233764ecdac1417563895bf5abc;
static PyCodeObject *codeobj_a3ebcf585d3b73a1b36d3cc48a2172d0;
static PyCodeObject *codeobj_b0a2e85daf554a76e60c7c20ebd45bf6;
static PyCodeObject *codeobj_2ef6db0abc00e6cf701048044088def3;
static PyCodeObject *codeobj_2f075e53c14c833cd2c57f19bd6d354b;
static PyCodeObject *codeobj_6c6fd57aef600508da7f2e47fa4c9832;
static PyCodeObject *codeobj_7ecf65c63b5a7c3a8f27882e00771d85;
static PyCodeObject *codeobj_08a4a09d67ffc2f88b82f08dea4cf505;
static PyCodeObject *codeobj_b8f1cae356a9fa95609fb79842f9982f;
static PyCodeObject *codeobj_6d14fc2551987b4c148ef95bb9ca997f;
static PyCodeObject *codeobj_dcec056c8999c298b3e21882917fd75a;
static PyCodeObject *codeobj_9f790f106a9dcf34a77ae460e1f666f3;
static PyCodeObject *codeobj_4090bae9cb95ad680e3391bcdc7c989e;
static PyCodeObject *codeobj_1612e3bdf1fd88268007fd54cbf8c5ea;
static PyCodeObject *codeobj_a2669749acb588b44f90401468c091ac;
static PyCodeObject *codeobj_9d4ec23752c03699e481b5e6e45d3299;
static PyCodeObject *codeobj_25a7236b5b4a0638bf809ae86d0c4516;
static PyCodeObject *codeobj_24dd536e942b08cb96867d0e8fa5636b;
static PyCodeObject *codeobj_88c119aa560ff71cc2e8b11e94b3b214;
static PyCodeObject *codeobj_97a9b5b506e7ed97cb8b12b6406c75e0;
static PyCodeObject *codeobj_0ef582c069735c1e928791b36f12bf67;
static PyCodeObject *codeobj_04cd086ade5906252e92f0699ba4cf01;

static void createModuleCodeObjects(void) {
    module_filename_obj = MAKE_RELATIVE_PATH(mod_consts[192]); CHECK_OBJECT(module_filename_obj);
    codeobj_d821b1632afd21b7dedac85bd9439984 = MAKE_CODE_OBJECT(module_filename_obj, 139, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[193], mod_consts[193], mod_consts[194], NULL, 1, 0, 0);
    codeobj_a3c6b9a34febbce5f40c12eba0e55de0 = MAKE_CODE_OBJECT(module_filename_obj, 164, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[193], mod_consts[193], mod_consts[194], NULL, 1, 0, 0);
    codeobj_3155a96ce3cca02f61b960c6eb459abc = MAKE_CODE_OBJECT(module_filename_obj, 465, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[193], mod_consts[193], mod_consts[195], NULL, 1, 0, 0);
    codeobj_a237aceee49bc532285d9c75420ed60b = MAKE_CODE_OBJECT(module_filename_obj, 1, CO_NOFREE, mod_consts[196], mod_consts[196], NULL, NULL, 0, 0, 0);
    codeobj_81cb5fb480a4b37a7b82bb12707b5b4c = MAKE_CODE_OBJECT(module_filename_obj, 10, CO_NOFREE, mod_consts[133], mod_consts[133], mod_consts[197], NULL, 0, 0, 0);
    codeobj_10d73233764ecdac1417563895bf5abc = MAKE_CODE_OBJECT(module_filename_obj, 121, CO_NOFREE, mod_consts[146], mod_consts[146], mod_consts[197], NULL, 0, 0, 0);
    codeobj_a3ebcf585d3b73a1b36d3cc48a2172d0 = MAKE_CODE_OBJECT(module_filename_obj, 220, CO_NOFREE, mod_consts[158], mod_consts[158], mod_consts[197], NULL, 0, 0, 0);
    codeobj_b0a2e85daf554a76e60c7c20ebd45bf6 = MAKE_CODE_OBJECT(module_filename_obj, 297, CO_NOFREE, mod_consts[165], mod_consts[165], mod_consts[197], NULL, 0, 0, 0);
    codeobj_2ef6db0abc00e6cf701048044088def3 = MAKE_CODE_OBJECT(module_filename_obj, 409, CO_NOFREE, mod_consts[177], mod_consts[177], mod_consts[197], NULL, 0, 0, 0);
    codeobj_2f075e53c14c833cd2c57f19bd6d354b = MAKE_CODE_OBJECT(module_filename_obj, 341, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[198], NULL, 2, 0, 0);
    codeobj_6c6fd57aef600508da7f2e47fa4c9832 = MAKE_CODE_OBJECT(module_filename_obj, 413, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[94], mod_consts[94], mod_consts[199], mod_consts[197], 2, 0, 0);
    codeobj_7ecf65c63b5a7c3a8f27882e00771d85 = MAKE_CODE_OBJECT(module_filename_obj, 24, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[94], mod_consts[94], mod_consts[200], NULL, 2, 0, 0);
    codeobj_08a4a09d67ffc2f88b82f08dea4cf505 = MAKE_CODE_OBJECT(module_filename_obj, 15, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[201], NULL, 3, 0, 0);
    codeobj_b8f1cae356a9fa95609fb79842f9982f = MAKE_CODE_OBJECT(module_filename_obj, 320, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[202], NULL, 4, 0, 0);
    codeobj_6d14fc2551987b4c148ef95bb9ca997f = MAKE_CODE_OBJECT(module_filename_obj, 226, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[203], NULL, 2, 0, 0);
    codeobj_dcec056c8999c298b3e21882917fd75a = MAKE_CODE_OBJECT(module_filename_obj, 410, CO_OPTIMIZED | CO_NEWLOCALS, mod_consts[92], mod_consts[92], mod_consts[204], mod_consts[197], 2, 0, 0);
    codeobj_9f790f106a9dcf34a77ae460e1f666f3 = MAKE_CODE_OBJECT(module_filename_obj, 127, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[92], mod_consts[92], mod_consts[205], NULL, 3, 0, 0);
    codeobj_4090bae9cb95ad680e3391bcdc7c989e = MAKE_CODE_OBJECT(module_filename_obj, 161, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[154], mod_consts[154], mod_consts[206], NULL, 3, 0, 0);
    codeobj_1612e3bdf1fd88268007fd54cbf8c5ea = MAKE_CODE_OBJECT(module_filename_obj, 266, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[207], NULL, 3, 0, 0);
    codeobj_a2669749acb588b44f90401468c091ac = MAKE_CODE_OBJECT(module_filename_obj, 176, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[51], mod_consts[51], mod_consts[208], NULL, 3, 0, 0);
    codeobj_9d4ec23752c03699e481b5e6e45d3299 = MAKE_CODE_OBJECT(module_filename_obj, 138, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[150], mod_consts[150], mod_consts[209], NULL, 3, 0, 0);
    codeobj_25a7236b5b4a0638bf809ae86d0c4516 = MAKE_CODE_OBJECT(module_filename_obj, 73, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[42], mod_consts[42], mod_consts[210], NULL, 3, 0, 0);
    codeobj_24dd536e942b08cb96867d0e8fa5636b = MAKE_CODE_OBJECT(module_filename_obj, 145, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[211], NULL, 3, 0, 0);
    codeobj_88c119aa560ff71cc2e8b11e94b3b214 = MAKE_CODE_OBJECT(module_filename_obj, 233, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[37], mod_consts[37], mod_consts[212], NULL, 3, 0, 0);
    codeobj_97a9b5b506e7ed97cb8b12b6406c75e0 = MAKE_CODE_OBJECT(module_filename_obj, 425, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[189], mod_consts[189], mod_consts[213], NULL, 2, 0, 0);
    codeobj_0ef582c069735c1e928791b36f12bf67 = MAKE_CODE_OBJECT(module_filename_obj, 443, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[191], mod_consts[191], mod_consts[214], NULL, 2, 0, 0);
    codeobj_04cd086ade5906252e92f0699ba4cf01 = MAKE_CODE_OBJECT(module_filename_obj, 379, CO_OPTIMIZED | CO_NEWLOCALS | CO_NOFREE, mod_consts[88], mod_consts[88], mod_consts[215], NULL, 4, 0, 0);
}

// The module function declarations.
NUITKA_CROSS_MODULE PyObject *impl___main__$$$function__1__mro_entries_conversion(PyObject **python_pars);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__10_encode_single(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__11_decode_single(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__12___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__13___call__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__14_set_low_quality_matches_(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__15___init__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__16___call__(PyObject *annotations, struct Nuitka_CellObject **closure);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__17_overwrite_eps(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__18_retrieve_out_channels(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__1___init__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__2___call__(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__3_encode_boxes(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__4___init__(PyObject *defaults, PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__5_encode(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__6_encode_single(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__7_decode(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__8_decode_single(PyObject *annotations);


static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__9___init__(PyObject *defaults, PyObject *annotations);


// The module function definitions.
static PyObject *impl_torchvision$models$detection$_utils$$$function__1___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_batch_size_per_image = python_pars[1];
    PyObject *par_positive_fraction = python_pars[2];
    struct Nuitka_FrameObject *frame_08a4a09d67ffc2f88b82f08dea4cf505;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_08a4a09d67ffc2f88b82f08dea4cf505 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_08a4a09d67ffc2f88b82f08dea4cf505)) {
        Py_XDECREF(cache_frame_08a4a09d67ffc2f88b82f08dea4cf505);

#if _DEBUG_REFCOUNTS
        if (cache_frame_08a4a09d67ffc2f88b82f08dea4cf505 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_08a4a09d67ffc2f88b82f08dea4cf505 = MAKE_FUNCTION_FRAME(codeobj_08a4a09d67ffc2f88b82f08dea4cf505, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_08a4a09d67ffc2f88b82f08dea4cf505->m_type_description == NULL);
    frame_08a4a09d67ffc2f88b82f08dea4cf505 = cache_frame_08a4a09d67ffc2f88b82f08dea4cf505;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_08a4a09d67ffc2f88b82f08dea4cf505);
    assert(Py_REFCNT(frame_08a4a09d67ffc2f88b82f08dea4cf505) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_batch_size_per_image);
        tmp_assattr_value_1 = par_batch_size_per_image;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[0], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 21;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_positive_fraction);
        tmp_assattr_value_2 = par_positive_fraction;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[1], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 22;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_08a4a09d67ffc2f88b82f08dea4cf505, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_08a4a09d67ffc2f88b82f08dea4cf505->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_08a4a09d67ffc2f88b82f08dea4cf505, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_08a4a09d67ffc2f88b82f08dea4cf505,
        type_description_1,
        par_self,
        par_batch_size_per_image,
        par_positive_fraction
    );


    // Release cached frame if used for exception.
    if (frame_08a4a09d67ffc2f88b82f08dea4cf505 == cache_frame_08a4a09d67ffc2f88b82f08dea4cf505) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_08a4a09d67ffc2f88b82f08dea4cf505);
        cache_frame_08a4a09d67ffc2f88b82f08dea4cf505 = NULL;
    }

    assertFrameObject(frame_08a4a09d67ffc2f88b82f08dea4cf505);

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
    CHECK_OBJECT(par_batch_size_per_image);
    Py_DECREF(par_batch_size_per_image);
    CHECK_OBJECT(par_positive_fraction);
    Py_DECREF(par_positive_fraction);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_batch_size_per_image);
    Py_DECREF(par_batch_size_per_image);
    CHECK_OBJECT(par_positive_fraction);
    Py_DECREF(par_positive_fraction);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__2___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_matched_idxs = python_pars[1];
    PyObject *var_pos_idx = NULL;
    PyObject *var_neg_idx = NULL;
    PyObject *var_matched_idxs_per_image = NULL;
    PyObject *var_positive = NULL;
    PyObject *var_negative = NULL;
    PyObject *var_num_pos = NULL;
    PyObject *var_num_neg = NULL;
    PyObject *var_perm1 = NULL;
    PyObject *var_perm2 = NULL;
    PyObject *var_pos_idx_per_image = NULL;
    PyObject *var_neg_idx_per_image = NULL;
    PyObject *var_pos_idx_per_image_mask = NULL;
    PyObject *var_neg_idx_per_image_mask = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_7ecf65c63b5a7c3a8f27882e00771d85;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_7ecf65c63b5a7c3a8f27882e00771d85 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    {
        PyObject *tmp_assign_source_1;
        tmp_assign_source_1 = MAKE_LIST_EMPTY(0);
        assert(var_pos_idx == NULL);
        var_pos_idx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = MAKE_LIST_EMPTY(0);
        assert(var_neg_idx == NULL);
        var_neg_idx = tmp_assign_source_2;
    }
    // Tried code:
    if (isFrameUnusable(cache_frame_7ecf65c63b5a7c3a8f27882e00771d85)) {
        Py_XDECREF(cache_frame_7ecf65c63b5a7c3a8f27882e00771d85);

#if _DEBUG_REFCOUNTS
        if (cache_frame_7ecf65c63b5a7c3a8f27882e00771d85 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_7ecf65c63b5a7c3a8f27882e00771d85 = MAKE_FUNCTION_FRAME(codeobj_7ecf65c63b5a7c3a8f27882e00771d85, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_7ecf65c63b5a7c3a8f27882e00771d85->m_type_description == NULL);
    frame_7ecf65c63b5a7c3a8f27882e00771d85 = cache_frame_7ecf65c63b5a7c3a8f27882e00771d85;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_7ecf65c63b5a7c3a8f27882e00771d85);
    assert(Py_REFCNT(frame_7ecf65c63b5a7c3a8f27882e00771d85) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_iter_arg_1;
        CHECK_OBJECT(par_matched_idxs);
        tmp_iter_arg_1 = par_matched_idxs;
        tmp_assign_source_3 = MAKE_ITERATOR(tmp_iter_arg_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 42;
            type_description_1 = "ooooooooooooooo";
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
                type_description_1 = "ooooooooooooooo";
                exception_lineno = 42;
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
            PyObject *old = var_matched_idxs_per_image;
            var_matched_idxs_per_image = tmp_assign_source_5;
            Py_INCREF(var_matched_idxs_per_image);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_matched_idxs_per_image);
        tmp_cmp_expr_left_1 = var_matched_idxs_per_image;
        tmp_cmp_expr_right_1 = mod_consts[5];
        tmp_args_element_value_1 = RICH_COMPARE_GE_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 43;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame.f_lineno = 43;
        tmp_expression_value_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_1 = mod_consts[6];
        tmp_assign_source_6 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 43;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_positive;
            var_positive = tmp_assign_source_6;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_subscript_value_2;
        tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_4 == NULL)) {
            tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_matched_idxs_per_image);
        tmp_cmp_expr_left_2 = var_matched_idxs_per_image;
        tmp_cmp_expr_right_2 = mod_consts[6];
        tmp_args_element_value_2 = RICH_COMPARE_EQ_OBJECT_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 44;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame.f_lineno = 44;
        tmp_expression_value_3 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_subscript_value_2 = mod_consts[6];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_2, 0);
        Py_DECREF(tmp_expression_value_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 44;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_negative;
            var_negative = tmp_assign_source_7;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_int_arg_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_5 = par_self;
        tmp_mult_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[0]);
        if (tmp_mult_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        if (par_self == NULL) {
            Py_DECREF(tmp_mult_expr_left_1);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 46;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_6 = par_self;
        tmp_mult_expr_right_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[1]);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_1);

            exception_lineno = 46;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_int_arg_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_left_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_int_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_8 = PyNumber_Int(tmp_int_arg_1);
        Py_DECREF(tmp_int_arg_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 46;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_num_pos;
            var_num_pos = tmp_assign_source_8;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_4;
        tmp_called_value_3 = LOOKUP_BUILTIN(mod_consts[8]);
        assert(tmp_called_value_3 != NULL);
        CHECK_OBJECT(var_positive);
        tmp_called_instance_1 = var_positive;
        frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame.f_lineno = 48;
        tmp_args_element_value_3 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[9]);
        if (tmp_args_element_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_num_pos);
        tmp_args_element_value_4 = var_num_pos;
        frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame.f_lineno = 48;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_9 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_args_element_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 48;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_num_pos;
            assert(old != NULL);
            var_num_pos = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_7;
        if (par_self == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[7]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 49;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_7 = par_self;
        tmp_sub_expr_left_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[0]);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_num_pos);
        tmp_sub_expr_right_1 = var_num_pos;
        tmp_assign_source_10 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 49;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_num_neg;
            var_num_neg = tmp_assign_source_10;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_6;
        tmp_called_value_4 = LOOKUP_BUILTIN(mod_consts[8]);
        assert(tmp_called_value_4 != NULL);
        CHECK_OBJECT(var_negative);
        tmp_called_instance_2 = var_negative;
        frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame.f_lineno = 51;
        tmp_args_element_value_5 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[9]);
        if (tmp_args_element_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_num_neg);
        tmp_args_element_value_6 = var_num_neg;
        frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame.f_lineno = 51;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6};
            tmp_assign_source_11 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_4, call_args);
        }

        Py_DECREF(tmp_args_element_value_5);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 51;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_num_neg;
            assert(old != NULL);
            var_num_neg = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_stop_value_1;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[10]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_positive);
        tmp_called_instance_3 = var_positive;
        frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame.f_lineno = 54;
        tmp_kw_call_arg_value_0_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[9]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 54;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_positive);
        tmp_expression_value_10 = var_positive;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[11]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 54;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame.f_lineno = 54;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_expression_value_8 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_5, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_num_pos);
        tmp_stop_value_1 = var_num_pos;
        tmp_subscript_value_3 = MAKE_SLICE_OBJECT1(tmp_stop_value_1);
        assert(!(tmp_subscript_value_3 == NULL));
        tmp_assign_source_12 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_3);
        Py_DECREF(tmp_expression_value_8);
        Py_DECREF(tmp_subscript_value_3);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 54;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_perm1;
            var_perm1 = tmp_assign_source_12;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_4;
        PyObject *tmp_stop_value_2;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[10]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_negative);
        tmp_called_instance_4 = var_negative;
        frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame.f_lineno = 55;
        tmp_kw_call_arg_value_0_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_4, mod_consts[9]);
        if (tmp_kw_call_arg_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);

            exception_lineno = 55;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_negative);
        tmp_expression_value_13 = var_negative;
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[11]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_6);
            Py_DECREF(tmp_kw_call_arg_value_0_2);

            exception_lineno = 55;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame.f_lineno = 55;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_expression_value_11 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_6, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_kw_call_arg_value_0_2);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_expression_value_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_num_neg);
        tmp_stop_value_2 = var_num_neg;
        tmp_subscript_value_4 = MAKE_SLICE_OBJECT1(tmp_stop_value_2);
        assert(!(tmp_subscript_value_4 == NULL));
        tmp_assign_source_13 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_4);
        Py_DECREF(tmp_expression_value_11);
        Py_DECREF(tmp_subscript_value_4);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 55;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_perm2;
            var_perm2 = tmp_assign_source_13;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_positive);
        tmp_expression_value_14 = var_positive;
        CHECK_OBJECT(var_perm1);
        tmp_subscript_value_5 = var_perm1;
        tmp_assign_source_14 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_5);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 57;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_pos_idx_per_image;
            var_pos_idx_per_image = tmp_assign_source_14;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_negative);
        tmp_expression_value_15 = var_negative;
        CHECK_OBJECT(var_perm2);
        tmp_subscript_value_6 = var_perm2;
        tmp_assign_source_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_6);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 58;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_neg_idx_per_image;
            var_neg_idx_per_image = tmp_assign_source_15;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_called_value_7;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_arg_value_0_3;
        PyObject *tmp_kw_call_dict_value_0_3;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_7 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[13]);
        if (tmp_called_value_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_matched_idxs_per_image);
        tmp_kw_call_arg_value_0_3 = var_matched_idxs_per_image;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 61;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_0_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[14]);
        if (tmp_kw_call_dict_value_0_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_7);

            exception_lineno = 61;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame.f_lineno = 61;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_3};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_3};
            tmp_assign_source_16 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_7, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_7);
        Py_DECREF(tmp_kw_call_dict_value_0_3);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 61;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_pos_idx_per_image_mask;
            var_pos_idx_per_image_mask = tmp_assign_source_16;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_called_value_8;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_kw_call_arg_value_0_4;
        PyObject *tmp_kw_call_dict_value_0_4;
        PyObject *tmp_expression_value_19;
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_called_value_8 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[13]);
        if (tmp_called_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_matched_idxs_per_image);
        tmp_kw_call_arg_value_0_4 = var_matched_idxs_per_image;
        tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_19 == NULL)) {
            tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 62;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_kw_call_dict_value_0_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_19, mod_consts[14]);
        if (tmp_kw_call_dict_value_0_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_8);

            exception_lineno = 62;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame.f_lineno = 62;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_4};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_4};
            tmp_assign_source_17 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_8, args, kw_values, mod_consts[15]);
        }

        Py_DECREF(tmp_called_value_8);
        Py_DECREF(tmp_kw_call_dict_value_0_4);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 62;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        {
            PyObject *old = var_neg_idx_per_image_mask;
            var_neg_idx_per_image_mask = tmp_assign_source_17;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_ass_subvalue_1 = mod_consts[5];
        CHECK_OBJECT(var_pos_idx_per_image_mask);
        tmp_ass_subscribed_1 = var_pos_idx_per_image_mask;
        CHECK_OBJECT(var_pos_idx_per_image);
        tmp_ass_subscript_1 = var_pos_idx_per_image;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 64;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        tmp_ass_subvalue_2 = mod_consts[5];
        CHECK_OBJECT(var_neg_idx_per_image_mask);
        tmp_ass_subscribed_2 = var_neg_idx_per_image_mask;
        CHECK_OBJECT(var_neg_idx_per_image);
        tmp_ass_subscript_2 = var_neg_idx_per_image;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 65;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
    }
    {
        PyObject *tmp_called_value_9;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_7;
        if (var_pos_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 67;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_20 = var_pos_idx;
        tmp_called_value_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_20, mod_consts[17]);
        if (tmp_called_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_pos_idx_per_image_mask);
        tmp_args_element_value_7 = var_pos_idx_per_image_mask;
        frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame.f_lineno = 67;
        tmp_call_result_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_9, tmp_args_element_value_7);
        Py_DECREF(tmp_called_value_9);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 67;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_1);
    }
    {
        PyObject *tmp_called_value_10;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_call_result_2;
        PyObject *tmp_args_element_value_8;
        if (var_neg_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 68;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }

        tmp_expression_value_21 = var_neg_idx;
        tmp_called_value_10 = LOOKUP_ATTRIBUTE(tmp_expression_value_21, mod_consts[17]);
        if (tmp_called_value_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        CHECK_OBJECT(var_neg_idx_per_image_mask);
        tmp_args_element_value_8 = var_neg_idx_per_image_mask;
        frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame.f_lineno = 68;
        tmp_call_result_2 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_10, tmp_args_element_value_8);
        Py_DECREF(tmp_called_value_10);
        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 68;
            type_description_1 = "ooooooooooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 42;
        type_description_1 = "ooooooooooooooo";
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
        PyObject *tmp_tuple_element_1;
        if (var_pos_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[16]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 70;
            type_description_1 = "ooooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_tuple_element_1 = var_pos_idx;
        tmp_return_value = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_return_value, 0, tmp_tuple_element_1);
        if (var_neg_idx == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[18]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 70;
            type_description_1 = "ooooooooooooooo";
            goto tuple_build_exception_1;
        }

        tmp_tuple_element_1 = var_neg_idx;
        PyTuple_SET_ITEM0(tmp_return_value, 1, tmp_tuple_element_1);
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_return_value);
        goto frame_exception_exit_1;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
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
        exception_tb = MAKE_TRACEBACK(frame_7ecf65c63b5a7c3a8f27882e00771d85, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_7ecf65c63b5a7c3a8f27882e00771d85->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_7ecf65c63b5a7c3a8f27882e00771d85, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_7ecf65c63b5a7c3a8f27882e00771d85,
        type_description_1,
        par_self,
        par_matched_idxs,
        var_pos_idx,
        var_neg_idx,
        var_matched_idxs_per_image,
        var_positive,
        var_negative,
        var_num_pos,
        var_num_neg,
        var_perm1,
        var_perm2,
        var_pos_idx_per_image,
        var_neg_idx_per_image,
        var_pos_idx_per_image_mask,
        var_neg_idx_per_image_mask
    );


    // Release cached frame if used for exception.
    if (frame_7ecf65c63b5a7c3a8f27882e00771d85 == cache_frame_7ecf65c63b5a7c3a8f27882e00771d85) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_7ecf65c63b5a7c3a8f27882e00771d85);
        cache_frame_7ecf65c63b5a7c3a8f27882e00771d85 = NULL;
    }

    assertFrameObject(frame_7ecf65c63b5a7c3a8f27882e00771d85);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_pos_idx);
    var_pos_idx = NULL;
    Py_XDECREF(var_neg_idx);
    var_neg_idx = NULL;
    Py_XDECREF(var_matched_idxs_per_image);
    var_matched_idxs_per_image = NULL;
    Py_XDECREF(var_positive);
    var_positive = NULL;
    Py_XDECREF(var_negative);
    var_negative = NULL;
    Py_XDECREF(var_num_pos);
    var_num_pos = NULL;
    Py_XDECREF(var_num_neg);
    var_num_neg = NULL;
    Py_XDECREF(var_perm1);
    var_perm1 = NULL;
    Py_XDECREF(var_perm2);
    var_perm2 = NULL;
    Py_XDECREF(var_pos_idx_per_image);
    var_pos_idx_per_image = NULL;
    Py_XDECREF(var_neg_idx_per_image);
    var_neg_idx_per_image = NULL;
    Py_XDECREF(var_pos_idx_per_image_mask);
    var_pos_idx_per_image_mask = NULL;
    Py_XDECREF(var_neg_idx_per_image_mask);
    var_neg_idx_per_image_mask = NULL;
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

    Py_XDECREF(var_pos_idx);
    var_pos_idx = NULL;
    Py_XDECREF(var_neg_idx);
    var_neg_idx = NULL;
    Py_XDECREF(var_matched_idxs_per_image);
    var_matched_idxs_per_image = NULL;
    Py_XDECREF(var_positive);
    var_positive = NULL;
    Py_XDECREF(var_negative);
    var_negative = NULL;
    Py_XDECREF(var_num_pos);
    var_num_pos = NULL;
    Py_XDECREF(var_num_neg);
    var_num_neg = NULL;
    Py_XDECREF(var_perm1);
    var_perm1 = NULL;
    Py_XDECREF(var_perm2);
    var_perm2 = NULL;
    Py_XDECREF(var_pos_idx_per_image);
    var_pos_idx_per_image = NULL;
    Py_XDECREF(var_neg_idx_per_image);
    var_neg_idx_per_image = NULL;
    Py_XDECREF(var_pos_idx_per_image_mask);
    var_pos_idx_per_image_mask = NULL;
    Py_XDECREF(var_neg_idx_per_image_mask);
    var_neg_idx_per_image_mask = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_matched_idxs);
    Py_DECREF(par_matched_idxs);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_matched_idxs);
    Py_DECREF(par_matched_idxs);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__3_encode_boxes(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_reference_boxes = python_pars[0];
    PyObject *par_proposals = python_pars[1];
    PyObject *par_weights = python_pars[2];
    PyObject *var_wx = NULL;
    PyObject *var_wy = NULL;
    PyObject *var_ww = NULL;
    PyObject *var_wh = NULL;
    PyObject *var_proposals_x1 = NULL;
    PyObject *var_proposals_y1 = NULL;
    PyObject *var_proposals_x2 = NULL;
    PyObject *var_proposals_y2 = NULL;
    PyObject *var_reference_boxes_x1 = NULL;
    PyObject *var_reference_boxes_y1 = NULL;
    PyObject *var_reference_boxes_x2 = NULL;
    PyObject *var_reference_boxes_y2 = NULL;
    PyObject *var_ex_widths = NULL;
    PyObject *var_ex_heights = NULL;
    PyObject *var_ex_ctr_x = NULL;
    PyObject *var_ex_ctr_y = NULL;
    PyObject *var_gt_widths = NULL;
    PyObject *var_gt_heights = NULL;
    PyObject *var_gt_ctr_x = NULL;
    PyObject *var_gt_ctr_y = NULL;
    PyObject *var_targets_dx = NULL;
    PyObject *var_targets_dy = NULL;
    PyObject *var_targets_dw = NULL;
    PyObject *var_targets_dh = NULL;
    PyObject *var_targets = NULL;
    struct Nuitka_FrameObject *frame_25a7236b5b4a0638bf809ae86d0c4516;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_25a7236b5b4a0638bf809ae86d0c4516 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_25a7236b5b4a0638bf809ae86d0c4516)) {
        Py_XDECREF(cache_frame_25a7236b5b4a0638bf809ae86d0c4516);

#if _DEBUG_REFCOUNTS
        if (cache_frame_25a7236b5b4a0638bf809ae86d0c4516 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_25a7236b5b4a0638bf809ae86d0c4516 = MAKE_FUNCTION_FRAME(codeobj_25a7236b5b4a0638bf809ae86d0c4516, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_25a7236b5b4a0638bf809ae86d0c4516->m_type_description == NULL);
    frame_25a7236b5b4a0638bf809ae86d0c4516 = cache_frame_25a7236b5b4a0638bf809ae86d0c4516;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_25a7236b5b4a0638bf809ae86d0c4516);
    assert(Py_REFCNT(frame_25a7236b5b4a0638bf809ae86d0c4516) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_weights);
        tmp_expression_value_1 = par_weights;
        tmp_subscript_value_1 = mod_consts[6];
        tmp_assign_source_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 86;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_wx == NULL);
        var_wx = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_weights);
        tmp_expression_value_2 = par_weights;
        tmp_subscript_value_2 = mod_consts[5];
        tmp_assign_source_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_2, tmp_subscript_value_2, 1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 87;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_wy == NULL);
        var_wy = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        CHECK_OBJECT(par_weights);
        tmp_expression_value_3 = par_weights;
        tmp_subscript_value_3 = mod_consts[20];
        tmp_assign_source_3 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_3, tmp_subscript_value_3, 2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 88;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ww == NULL);
        var_ww = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_weights);
        tmp_expression_value_4 = par_weights;
        tmp_subscript_value_4 = mod_consts[21];
        tmp_assign_source_4 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_4, 3);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 89;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_wh == NULL);
        var_wh = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(par_proposals);
        tmp_expression_value_5 = par_proposals;
        tmp_subscript_value_5 = mod_consts[22];
        tmp_called_instance_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_25a7236b5b4a0638bf809ae86d0c4516->m_frame.f_lineno = 91;
        tmp_assign_source_5 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_1,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 91;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_proposals_x1 == NULL);
        var_proposals_x1 = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(par_proposals);
        tmp_expression_value_6 = par_proposals;
        tmp_subscript_value_6 = mod_consts[25];
        tmp_called_instance_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_25a7236b5b4a0638bf809ae86d0c4516->m_frame.f_lineno = 92;
        tmp_assign_source_6 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        Py_DECREF(tmp_called_instance_2);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 92;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_proposals_y1 == NULL);
        var_proposals_y1 = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(par_proposals);
        tmp_expression_value_7 = par_proposals;
        tmp_subscript_value_7 = mod_consts[26];
        tmp_called_instance_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_25a7236b5b4a0638bf809ae86d0c4516->m_frame.f_lineno = 93;
        tmp_assign_source_7 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 93;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_proposals_x2 == NULL);
        var_proposals_x2 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(par_proposals);
        tmp_expression_value_8 = par_proposals;
        tmp_subscript_value_8 = mod_consts[27];
        tmp_called_instance_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
        if (tmp_called_instance_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_25a7236b5b4a0638bf809ae86d0c4516->m_frame.f_lineno = 94;
        tmp_assign_source_8 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_4,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        Py_DECREF(tmp_called_instance_4);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 94;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_proposals_y2 == NULL);
        var_proposals_y2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_instance_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(par_reference_boxes);
        tmp_expression_value_9 = par_reference_boxes;
        tmp_subscript_value_9 = mod_consts[22];
        tmp_called_instance_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_9);
        if (tmp_called_instance_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_25a7236b5b4a0638bf809ae86d0c4516->m_frame.f_lineno = 96;
        tmp_assign_source_9 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_5,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        Py_DECREF(tmp_called_instance_5);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 96;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reference_boxes_x1 == NULL);
        var_reference_boxes_x1 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_instance_6;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(par_reference_boxes);
        tmp_expression_value_10 = par_reference_boxes;
        tmp_subscript_value_10 = mod_consts[25];
        tmp_called_instance_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_10);
        if (tmp_called_instance_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_25a7236b5b4a0638bf809ae86d0c4516->m_frame.f_lineno = 97;
        tmp_assign_source_10 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_6,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        Py_DECREF(tmp_called_instance_6);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 97;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reference_boxes_y1 == NULL);
        var_reference_boxes_y1 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_called_instance_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(par_reference_boxes);
        tmp_expression_value_11 = par_reference_boxes;
        tmp_subscript_value_11 = mod_consts[26];
        tmp_called_instance_7 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_11);
        if (tmp_called_instance_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_25a7236b5b4a0638bf809ae86d0c4516->m_frame.f_lineno = 98;
        tmp_assign_source_11 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_7,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        Py_DECREF(tmp_called_instance_7);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 98;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reference_boxes_x2 == NULL);
        var_reference_boxes_x2 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_instance_8;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_12;
        CHECK_OBJECT(par_reference_boxes);
        tmp_expression_value_12 = par_reference_boxes;
        tmp_subscript_value_12 = mod_consts[27];
        tmp_called_instance_8 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_12);
        if (tmp_called_instance_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_25a7236b5b4a0638bf809ae86d0c4516->m_frame.f_lineno = 99;
        tmp_assign_source_12 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_8,
            mod_consts[23],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        Py_DECREF(tmp_called_instance_8);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 99;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reference_boxes_y2 == NULL);
        var_reference_boxes_y2 = tmp_assign_source_12;
    }
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        CHECK_OBJECT(var_proposals_x2);
        tmp_sub_expr_left_1 = var_proposals_x2;
        CHECK_OBJECT(var_proposals_x1);
        tmp_sub_expr_right_1 = var_proposals_x1;
        tmp_assign_source_13 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 102;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ex_widths == NULL);
        var_ex_widths = tmp_assign_source_13;
    }
    {
        PyObject *tmp_assign_source_14;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        CHECK_OBJECT(var_proposals_y2);
        tmp_sub_expr_left_2 = var_proposals_y2;
        CHECK_OBJECT(var_proposals_y1);
        tmp_sub_expr_right_2 = var_proposals_y1;
        tmp_assign_source_14 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 103;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ex_heights == NULL);
        var_ex_heights = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(var_proposals_x1);
        tmp_add_expr_left_1 = var_proposals_x1;
        tmp_mult_expr_left_1 = mod_consts[28];
        CHECK_OBJECT(var_ex_widths);
        tmp_mult_expr_right_1 = var_ex_widths;
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_15 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 104;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ex_ctr_x == NULL);
        var_ex_ctr_x = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        CHECK_OBJECT(var_proposals_y1);
        tmp_add_expr_left_2 = var_proposals_y1;
        tmp_mult_expr_left_2 = mod_consts[28];
        CHECK_OBJECT(var_ex_heights);
        tmp_mult_expr_right_2 = var_ex_heights;
        tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_16 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 105;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ex_ctr_y == NULL);
        var_ex_ctr_y = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        CHECK_OBJECT(var_reference_boxes_x2);
        tmp_sub_expr_left_3 = var_reference_boxes_x2;
        CHECK_OBJECT(var_reference_boxes_x1);
        tmp_sub_expr_right_3 = var_reference_boxes_x1;
        tmp_assign_source_17 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 107;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gt_widths == NULL);
        var_gt_widths = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        CHECK_OBJECT(var_reference_boxes_y2);
        tmp_sub_expr_left_4 = var_reference_boxes_y2;
        CHECK_OBJECT(var_reference_boxes_y1);
        tmp_sub_expr_right_4 = var_reference_boxes_y1;
        tmp_assign_source_18 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 108;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gt_heights == NULL);
        var_gt_heights = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        CHECK_OBJECT(var_reference_boxes_x1);
        tmp_add_expr_left_3 = var_reference_boxes_x1;
        tmp_mult_expr_left_3 = mod_consts[28];
        CHECK_OBJECT(var_gt_widths);
        tmp_mult_expr_right_3 = var_gt_widths;
        tmp_add_expr_right_3 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_19 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 109;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gt_ctr_x == NULL);
        var_gt_ctr_x = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        CHECK_OBJECT(var_reference_boxes_y1);
        tmp_add_expr_left_4 = var_reference_boxes_y1;
        tmp_mult_expr_left_4 = mod_consts[28];
        CHECK_OBJECT(var_gt_heights);
        tmp_mult_expr_right_4 = var_gt_heights;
        tmp_add_expr_right_4 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        if (tmp_add_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_20 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 110;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gt_ctr_y == NULL);
        var_gt_ctr_y = tmp_assign_source_20;
    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        CHECK_OBJECT(var_wx);
        tmp_mult_expr_left_5 = var_wx;
        CHECK_OBJECT(var_gt_ctr_x);
        tmp_sub_expr_left_5 = var_gt_ctr_x;
        CHECK_OBJECT(var_ex_ctr_x);
        tmp_sub_expr_right_5 = var_ex_ctr_x;
        tmp_mult_expr_right_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        if (tmp_mult_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_1 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_right_5);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ex_widths);
        tmp_truediv_expr_right_1 = var_ex_widths;
        tmp_assign_source_21 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 112;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_targets_dx == NULL);
        var_targets_dx = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        CHECK_OBJECT(var_wy);
        tmp_mult_expr_left_6 = var_wy;
        CHECK_OBJECT(var_gt_ctr_y);
        tmp_sub_expr_left_6 = var_gt_ctr_y;
        CHECK_OBJECT(var_ex_ctr_y);
        tmp_sub_expr_right_6 = var_ex_ctr_y;
        tmp_mult_expr_right_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        if (tmp_mult_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truediv_expr_left_2 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_right_6);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ex_heights);
        tmp_truediv_expr_right_2 = var_ex_heights;
        tmp_assign_source_22 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 113;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_targets_dy == NULL);
        var_targets_dy = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        CHECK_OBJECT(var_ww);
        tmp_mult_expr_left_7 = var_ww;
        tmp_expression_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_13 == NULL)) {
            tmp_expression_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_13, mod_consts[29]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gt_widths);
        tmp_truediv_expr_left_3 = var_gt_widths;
        CHECK_OBJECT(var_ex_widths);
        tmp_truediv_expr_right_3 = var_ex_widths;
        tmp_args_element_value_1 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_25a7236b5b4a0638bf809ae86d0c4516->m_frame.f_lineno = 114;
        tmp_mult_expr_right_7 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_mult_expr_right_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_right_7);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 114;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_targets_dw == NULL);
        var_targets_dw = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        CHECK_OBJECT(var_wh);
        tmp_mult_expr_left_8 = var_wh;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[29]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_gt_heights);
        tmp_truediv_expr_left_4 = var_gt_heights;
        CHECK_OBJECT(var_ex_heights);
        tmp_truediv_expr_right_4 = var_ex_heights;
        tmp_args_element_value_2 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        if (tmp_args_element_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_25a7236b5b4a0638bf809ae86d0c4516->m_frame.f_lineno = 115;
        tmp_mult_expr_right_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_mult_expr_right_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        Py_DECREF(tmp_mult_expr_right_8);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 115;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_targets_dh == NULL);
        var_targets_dh = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[30]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_targets_dx);
        tmp_tuple_element_2 = var_targets_dx;
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_targets_dy);
        tmp_tuple_element_2 = var_targets_dy;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_targets_dw);
        tmp_tuple_element_2 = var_targets_dw;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        CHECK_OBJECT(var_targets_dh);
        tmp_tuple_element_2 = var_targets_dh;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 3, tmp_tuple_element_2);
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[31]);
        frame_25a7236b5b4a0638bf809ae86d0c4516->m_frame.f_lineno = 117;
        tmp_assign_source_25 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 117;
            type_description_1 = "oooooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_targets == NULL);
        var_targets = tmp_assign_source_25;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_25a7236b5b4a0638bf809ae86d0c4516, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_25a7236b5b4a0638bf809ae86d0c4516->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_25a7236b5b4a0638bf809ae86d0c4516, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_25a7236b5b4a0638bf809ae86d0c4516,
        type_description_1,
        par_reference_boxes,
        par_proposals,
        par_weights,
        var_wx,
        var_wy,
        var_ww,
        var_wh,
        var_proposals_x1,
        var_proposals_y1,
        var_proposals_x2,
        var_proposals_y2,
        var_reference_boxes_x1,
        var_reference_boxes_y1,
        var_reference_boxes_x2,
        var_reference_boxes_y2,
        var_ex_widths,
        var_ex_heights,
        var_ex_ctr_x,
        var_ex_ctr_y,
        var_gt_widths,
        var_gt_heights,
        var_gt_ctr_x,
        var_gt_ctr_y,
        var_targets_dx,
        var_targets_dy,
        var_targets_dw,
        var_targets_dh,
        var_targets
    );


    // Release cached frame if used for exception.
    if (frame_25a7236b5b4a0638bf809ae86d0c4516 == cache_frame_25a7236b5b4a0638bf809ae86d0c4516) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_25a7236b5b4a0638bf809ae86d0c4516);
        cache_frame_25a7236b5b4a0638bf809ae86d0c4516 = NULL;
    }

    assertFrameObject(frame_25a7236b5b4a0638bf809ae86d0c4516);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_targets);
    tmp_return_value = var_targets;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_wx);
    Py_DECREF(var_wx);
    var_wx = NULL;
    CHECK_OBJECT(var_wy);
    Py_DECREF(var_wy);
    var_wy = NULL;
    CHECK_OBJECT(var_ww);
    Py_DECREF(var_ww);
    var_ww = NULL;
    CHECK_OBJECT(var_wh);
    Py_DECREF(var_wh);
    var_wh = NULL;
    CHECK_OBJECT(var_proposals_x1);
    Py_DECREF(var_proposals_x1);
    var_proposals_x1 = NULL;
    CHECK_OBJECT(var_proposals_y1);
    Py_DECREF(var_proposals_y1);
    var_proposals_y1 = NULL;
    CHECK_OBJECT(var_proposals_x2);
    Py_DECREF(var_proposals_x2);
    var_proposals_x2 = NULL;
    CHECK_OBJECT(var_proposals_y2);
    Py_DECREF(var_proposals_y2);
    var_proposals_y2 = NULL;
    CHECK_OBJECT(var_reference_boxes_x1);
    Py_DECREF(var_reference_boxes_x1);
    var_reference_boxes_x1 = NULL;
    CHECK_OBJECT(var_reference_boxes_y1);
    Py_DECREF(var_reference_boxes_y1);
    var_reference_boxes_y1 = NULL;
    CHECK_OBJECT(var_reference_boxes_x2);
    Py_DECREF(var_reference_boxes_x2);
    var_reference_boxes_x2 = NULL;
    CHECK_OBJECT(var_reference_boxes_y2);
    Py_DECREF(var_reference_boxes_y2);
    var_reference_boxes_y2 = NULL;
    CHECK_OBJECT(var_ex_widths);
    Py_DECREF(var_ex_widths);
    var_ex_widths = NULL;
    CHECK_OBJECT(var_ex_heights);
    Py_DECREF(var_ex_heights);
    var_ex_heights = NULL;
    CHECK_OBJECT(var_ex_ctr_x);
    Py_DECREF(var_ex_ctr_x);
    var_ex_ctr_x = NULL;
    CHECK_OBJECT(var_ex_ctr_y);
    Py_DECREF(var_ex_ctr_y);
    var_ex_ctr_y = NULL;
    CHECK_OBJECT(var_gt_widths);
    Py_DECREF(var_gt_widths);
    var_gt_widths = NULL;
    CHECK_OBJECT(var_gt_heights);
    Py_DECREF(var_gt_heights);
    var_gt_heights = NULL;
    CHECK_OBJECT(var_gt_ctr_x);
    Py_DECREF(var_gt_ctr_x);
    var_gt_ctr_x = NULL;
    CHECK_OBJECT(var_gt_ctr_y);
    Py_DECREF(var_gt_ctr_y);
    var_gt_ctr_y = NULL;
    CHECK_OBJECT(var_targets_dx);
    Py_DECREF(var_targets_dx);
    var_targets_dx = NULL;
    CHECK_OBJECT(var_targets_dy);
    Py_DECREF(var_targets_dy);
    var_targets_dy = NULL;
    CHECK_OBJECT(var_targets_dw);
    Py_DECREF(var_targets_dw);
    var_targets_dw = NULL;
    CHECK_OBJECT(var_targets_dh);
    Py_DECREF(var_targets_dh);
    var_targets_dh = NULL;
    CHECK_OBJECT(var_targets);
    Py_DECREF(var_targets);
    var_targets = NULL;
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

    Py_XDECREF(var_wx);
    var_wx = NULL;
    Py_XDECREF(var_wy);
    var_wy = NULL;
    Py_XDECREF(var_ww);
    var_ww = NULL;
    Py_XDECREF(var_wh);
    var_wh = NULL;
    Py_XDECREF(var_proposals_x1);
    var_proposals_x1 = NULL;
    Py_XDECREF(var_proposals_y1);
    var_proposals_y1 = NULL;
    Py_XDECREF(var_proposals_x2);
    var_proposals_x2 = NULL;
    Py_XDECREF(var_proposals_y2);
    var_proposals_y2 = NULL;
    Py_XDECREF(var_reference_boxes_x1);
    var_reference_boxes_x1 = NULL;
    Py_XDECREF(var_reference_boxes_y1);
    var_reference_boxes_y1 = NULL;
    Py_XDECREF(var_reference_boxes_x2);
    var_reference_boxes_x2 = NULL;
    Py_XDECREF(var_reference_boxes_y2);
    var_reference_boxes_y2 = NULL;
    Py_XDECREF(var_ex_widths);
    var_ex_widths = NULL;
    Py_XDECREF(var_ex_heights);
    var_ex_heights = NULL;
    Py_XDECREF(var_ex_ctr_x);
    var_ex_ctr_x = NULL;
    Py_XDECREF(var_ex_ctr_y);
    var_ex_ctr_y = NULL;
    Py_XDECREF(var_gt_widths);
    var_gt_widths = NULL;
    Py_XDECREF(var_gt_heights);
    var_gt_heights = NULL;
    Py_XDECREF(var_gt_ctr_x);
    var_gt_ctr_x = NULL;
    Py_XDECREF(var_gt_ctr_y);
    var_gt_ctr_y = NULL;
    Py_XDECREF(var_targets_dx);
    var_targets_dx = NULL;
    Py_XDECREF(var_targets_dy);
    var_targets_dy = NULL;
    Py_XDECREF(var_targets_dw);
    var_targets_dw = NULL;
    Py_XDECREF(var_targets_dh);
    var_targets_dh = NULL;
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
    CHECK_OBJECT(par_reference_boxes);
    Py_DECREF(par_reference_boxes);
    CHECK_OBJECT(par_proposals);
    Py_DECREF(par_proposals);
    CHECK_OBJECT(par_weights);
    Py_DECREF(par_weights);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_reference_boxes);
    Py_DECREF(par_reference_boxes);
    CHECK_OBJECT(par_proposals);
    Py_DECREF(par_proposals);
    CHECK_OBJECT(par_weights);
    Py_DECREF(par_weights);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__4___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_weights = python_pars[1];
    PyObject *par_bbox_xform_clip = python_pars[2];
    struct Nuitka_FrameObject *frame_9f790f106a9dcf34a77ae460e1f666f3;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_9f790f106a9dcf34a77ae460e1f666f3 = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_9f790f106a9dcf34a77ae460e1f666f3)) {
        Py_XDECREF(cache_frame_9f790f106a9dcf34a77ae460e1f666f3);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9f790f106a9dcf34a77ae460e1f666f3 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9f790f106a9dcf34a77ae460e1f666f3 = MAKE_FUNCTION_FRAME(codeobj_9f790f106a9dcf34a77ae460e1f666f3, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9f790f106a9dcf34a77ae460e1f666f3->m_type_description == NULL);
    frame_9f790f106a9dcf34a77ae460e1f666f3 = cache_frame_9f790f106a9dcf34a77ae460e1f666f3;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9f790f106a9dcf34a77ae460e1f666f3);
    assert(Py_REFCNT(frame_9f790f106a9dcf34a77ae460e1f666f3) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_weights);
        tmp_assattr_value_1 = par_weights;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[33], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 135;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        CHECK_OBJECT(par_bbox_xform_clip);
        tmp_assattr_value_2 = par_bbox_xform_clip;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[34], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 136;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9f790f106a9dcf34a77ae460e1f666f3, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9f790f106a9dcf34a77ae460e1f666f3->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9f790f106a9dcf34a77ae460e1f666f3, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9f790f106a9dcf34a77ae460e1f666f3,
        type_description_1,
        par_self,
        par_weights,
        par_bbox_xform_clip
    );


    // Release cached frame if used for exception.
    if (frame_9f790f106a9dcf34a77ae460e1f666f3 == cache_frame_9f790f106a9dcf34a77ae460e1f666f3) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9f790f106a9dcf34a77ae460e1f666f3);
        cache_frame_9f790f106a9dcf34a77ae460e1f666f3 = NULL;
    }

    assertFrameObject(frame_9f790f106a9dcf34a77ae460e1f666f3);

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
    CHECK_OBJECT(par_weights);
    Py_DECREF(par_weights);
    CHECK_OBJECT(par_bbox_xform_clip);
    Py_DECREF(par_bbox_xform_clip);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_weights);
    Py_DECREF(par_weights);
    CHECK_OBJECT(par_bbox_xform_clip);
    Py_DECREF(par_bbox_xform_clip);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__5_encode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_reference_boxes = python_pars[1];
    PyObject *par_proposals = python_pars[2];
    PyObject *var_boxes_per_image = NULL;
    PyObject *var_targets = NULL;
    PyObject *outline_0_var_b = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_9d4ec23752c03699e481b5e6e45d3299;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_d821b1632afd21b7dedac85bd9439984_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_d821b1632afd21b7dedac85bd9439984_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_9d4ec23752c03699e481b5e6e45d3299 = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_9d4ec23752c03699e481b5e6e45d3299)) {
        Py_XDECREF(cache_frame_9d4ec23752c03699e481b5e6e45d3299);

#if _DEBUG_REFCOUNTS
        if (cache_frame_9d4ec23752c03699e481b5e6e45d3299 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_9d4ec23752c03699e481b5e6e45d3299 = MAKE_FUNCTION_FRAME(codeobj_9d4ec23752c03699e481b5e6e45d3299, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_9d4ec23752c03699e481b5e6e45d3299->m_type_description == NULL);
    frame_9d4ec23752c03699e481b5e6e45d3299 = cache_frame_9d4ec23752c03699e481b5e6e45d3299;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_9d4ec23752c03699e481b5e6e45d3299);
    assert(Py_REFCNT(frame_9d4ec23752c03699e481b5e6e45d3299) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_reference_boxes);
            tmp_iter_arg_1 = par_reference_boxes;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_1 = "ooooo";
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
        if (isFrameUnusable(cache_frame_d821b1632afd21b7dedac85bd9439984_2)) {
            Py_XDECREF(cache_frame_d821b1632afd21b7dedac85bd9439984_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_d821b1632afd21b7dedac85bd9439984_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_d821b1632afd21b7dedac85bd9439984_2 = MAKE_FUNCTION_FRAME(codeobj_d821b1632afd21b7dedac85bd9439984, module_torchvision$models$detection$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_d821b1632afd21b7dedac85bd9439984_2->m_type_description == NULL);
        frame_d821b1632afd21b7dedac85bd9439984_2 = cache_frame_d821b1632afd21b7dedac85bd9439984_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_d821b1632afd21b7dedac85bd9439984_2);
        assert(Py_REFCNT(frame_d821b1632afd21b7dedac85bd9439984_2) == 2);

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
                    type_description_2 = "o";
                    exception_lineno = 139;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_b;
                outline_0_var_b = tmp_assign_source_5;
                Py_INCREF(outline_0_var_b);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_len_arg_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_b);
            tmp_len_arg_1 = outline_0_var_b;
            tmp_append_value_1 = BUILTIN_LEN(tmp_len_arg_1);
            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 139;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 139;
            type_description_2 = "o";
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
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_2;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_d821b1632afd21b7dedac85bd9439984_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_d821b1632afd21b7dedac85bd9439984_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_d821b1632afd21b7dedac85bd9439984_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_d821b1632afd21b7dedac85bd9439984_2,
            type_description_2,
            outline_0_var_b
        );


        // Release cached frame if used for exception.
        if (frame_d821b1632afd21b7dedac85bd9439984_2 == cache_frame_d821b1632afd21b7dedac85bd9439984_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_d821b1632afd21b7dedac85bd9439984_2);
            cache_frame_d821b1632afd21b7dedac85bd9439984_2 = NULL;
        }

        assertFrameObject(frame_d821b1632afd21b7dedac85bd9439984_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_b);
        outline_0_var_b = NULL;
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

        Py_XDECREF(outline_0_var_b);
        outline_0_var_b = NULL;
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
        exception_lineno = 139;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_boxes_per_image == NULL);
        var_boxes_per_image = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_reference_boxes);
        tmp_tuple_element_1 = par_reference_boxes;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[36]);
        frame_9d4ec23752c03699e481b5e6e45d3299->m_frame.f_lineno = 140;
        tmp_assign_source_6 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 140;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_reference_boxes;
            assert(old != NULL);
            par_reference_boxes = tmp_assign_source_6;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_proposals);
        tmp_tuple_element_2 = par_proposals;
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_2);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[36]);
        frame_9d4ec23752c03699e481b5e6e45d3299->m_frame.f_lineno = 141;
        tmp_assign_source_7 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 141;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_proposals;
            assert(old != NULL);
            par_proposals = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_self);
        tmp_called_instance_1 = par_self;
        CHECK_OBJECT(par_reference_boxes);
        tmp_args_element_value_1 = par_reference_boxes;
        CHECK_OBJECT(par_proposals);
        tmp_args_element_value_2 = par_proposals;
        frame_9d4ec23752c03699e481b5e6e45d3299->m_frame.f_lineno = 142;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_8 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_1,
                mod_consts[37],
                call_args
            );
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 142;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        assert(var_targets == NULL);
        var_targets = tmp_assign_source_8;
    }
    {
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(var_targets);
        tmp_expression_value_3 = var_targets;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[38]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_boxes_per_image);
        tmp_args_element_value_3 = var_boxes_per_image;
        tmp_args_element_value_4 = mod_consts[6];
        frame_9d4ec23752c03699e481b5e6e45d3299->m_frame.f_lineno = 143;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_return_value = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_return_value == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 143;
            type_description_1 = "ooooo";
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

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_9d4ec23752c03699e481b5e6e45d3299, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_9d4ec23752c03699e481b5e6e45d3299->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_9d4ec23752c03699e481b5e6e45d3299, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_9d4ec23752c03699e481b5e6e45d3299,
        type_description_1,
        par_self,
        par_reference_boxes,
        par_proposals,
        var_boxes_per_image,
        var_targets
    );


    // Release cached frame if used for exception.
    if (frame_9d4ec23752c03699e481b5e6e45d3299 == cache_frame_9d4ec23752c03699e481b5e6e45d3299) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_9d4ec23752c03699e481b5e6e45d3299);
        cache_frame_9d4ec23752c03699e481b5e6e45d3299 = NULL;
    }

    assertFrameObject(frame_9d4ec23752c03699e481b5e6e45d3299);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_reference_boxes);
    Py_DECREF(par_reference_boxes);
    par_reference_boxes = NULL;
    CHECK_OBJECT(par_proposals);
    Py_DECREF(par_proposals);
    par_proposals = NULL;
    CHECK_OBJECT(var_boxes_per_image);
    Py_DECREF(var_boxes_per_image);
    var_boxes_per_image = NULL;
    CHECK_OBJECT(var_targets);
    Py_DECREF(var_targets);
    var_targets = NULL;
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

    Py_XDECREF(par_reference_boxes);
    par_reference_boxes = NULL;
    Py_XDECREF(par_proposals);
    par_proposals = NULL;
    Py_XDECREF(var_boxes_per_image);
    var_boxes_per_image = NULL;
    Py_XDECREF(var_targets);
    var_targets = NULL;
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


static PyObject *impl_torchvision$models$detection$_utils$$$function__6_encode_single(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_reference_boxes = python_pars[1];
    PyObject *par_proposals = python_pars[2];
    PyObject *var_dtype = NULL;
    PyObject *var_device = NULL;
    PyObject *var_weights = NULL;
    PyObject *var_targets = NULL;
    struct Nuitka_FrameObject *frame_24dd536e942b08cb96867d0e8fa5636b;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_24dd536e942b08cb96867d0e8fa5636b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_24dd536e942b08cb96867d0e8fa5636b)) {
        Py_XDECREF(cache_frame_24dd536e942b08cb96867d0e8fa5636b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_24dd536e942b08cb96867d0e8fa5636b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_24dd536e942b08cb96867d0e8fa5636b = MAKE_FUNCTION_FRAME(codeobj_24dd536e942b08cb96867d0e8fa5636b, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_24dd536e942b08cb96867d0e8fa5636b->m_type_description == NULL);
    frame_24dd536e942b08cb96867d0e8fa5636b = cache_frame_24dd536e942b08cb96867d0e8fa5636b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_24dd536e942b08cb96867d0e8fa5636b);
    assert(Py_REFCNT(frame_24dd536e942b08cb96867d0e8fa5636b) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_reference_boxes);
        tmp_expression_value_1 = par_reference_boxes;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[39]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 154;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dtype == NULL);
        var_dtype = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_reference_boxes);
        tmp_expression_value_2 = par_reference_boxes;
        tmp_assign_source_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[11]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 155;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_device == NULL);
        var_device = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_kw_call_dict_value_1_1;
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[40]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_kw_call_arg_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[33]);
        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 156;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dtype);
        tmp_kw_call_dict_value_0_1 = var_dtype;
        CHECK_OBJECT(var_device);
        tmp_kw_call_dict_value_1_1 = var_device;
        frame_24dd536e942b08cb96867d0e8fa5636b->m_frame.f_lineno = 156;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_assign_source_3 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_1, args, kw_values, mod_consts[41]);
        }

        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 156;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_weights == NULL);
        var_weights = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_called_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        tmp_called_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[42]);

        if (unlikely(tmp_called_value_2 == NULL)) {
            tmp_called_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[42]);
        }

        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_reference_boxes);
        tmp_args_element_value_1 = par_reference_boxes;
        CHECK_OBJECT(par_proposals);
        tmp_args_element_value_2 = par_proposals;
        CHECK_OBJECT(var_weights);
        tmp_args_element_value_3 = var_weights;
        frame_24dd536e942b08cb96867d0e8fa5636b->m_frame.f_lineno = 157;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_assign_source_4 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_2, call_args);
        }

        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 157;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_targets == NULL);
        var_targets = tmp_assign_source_4;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_24dd536e942b08cb96867d0e8fa5636b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_24dd536e942b08cb96867d0e8fa5636b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_24dd536e942b08cb96867d0e8fa5636b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_24dd536e942b08cb96867d0e8fa5636b,
        type_description_1,
        par_self,
        par_reference_boxes,
        par_proposals,
        var_dtype,
        var_device,
        var_weights,
        var_targets
    );


    // Release cached frame if used for exception.
    if (frame_24dd536e942b08cb96867d0e8fa5636b == cache_frame_24dd536e942b08cb96867d0e8fa5636b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_24dd536e942b08cb96867d0e8fa5636b);
        cache_frame_24dd536e942b08cb96867d0e8fa5636b = NULL;
    }

    assertFrameObject(frame_24dd536e942b08cb96867d0e8fa5636b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_targets);
    tmp_return_value = var_targets;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_dtype);
    Py_DECREF(var_dtype);
    var_dtype = NULL;
    CHECK_OBJECT(var_device);
    Py_DECREF(var_device);
    var_device = NULL;
    CHECK_OBJECT(var_weights);
    Py_DECREF(var_weights);
    var_weights = NULL;
    CHECK_OBJECT(var_targets);
    Py_DECREF(var_targets);
    var_targets = NULL;
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

    Py_XDECREF(var_dtype);
    var_dtype = NULL;
    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_weights);
    var_weights = NULL;
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
    CHECK_OBJECT(par_reference_boxes);
    Py_DECREF(par_reference_boxes);
    CHECK_OBJECT(par_proposals);
    Py_DECREF(par_proposals);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_reference_boxes);
    Py_DECREF(par_reference_boxes);
    CHECK_OBJECT(par_proposals);
    Py_DECREF(par_proposals);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__7_decode(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_rel_codes = python_pars[1];
    PyObject *par_boxes = python_pars[2];
    PyObject *var_boxes_per_image = NULL;
    PyObject *var_concat_boxes = NULL;
    PyObject *var_box_sum = NULL;
    PyObject *var_val = NULL;
    PyObject *var_pred_boxes = NULL;
    PyObject *outline_0_var_b = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    struct Nuitka_FrameObject *frame_4090bae9cb95ad680e3391bcdc7c989e;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    int tmp_res;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    struct Nuitka_FrameObject *frame_a3c6b9a34febbce5f40c12eba0e55de0_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_a3c6b9a34febbce5f40c12eba0e55de0_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    static struct Nuitka_FrameObject *cache_frame_4090bae9cb95ad680e3391bcdc7c989e = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_4;
    PyObject *exception_keeper_value_4;
    PyTracebackObject *exception_keeper_tb_4;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_4;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_4090bae9cb95ad680e3391bcdc7c989e)) {
        Py_XDECREF(cache_frame_4090bae9cb95ad680e3391bcdc7c989e);

#if _DEBUG_REFCOUNTS
        if (cache_frame_4090bae9cb95ad680e3391bcdc7c989e == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_4090bae9cb95ad680e3391bcdc7c989e = MAKE_FUNCTION_FRAME(codeobj_4090bae9cb95ad680e3391bcdc7c989e, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_4090bae9cb95ad680e3391bcdc7c989e->m_type_description == NULL);
    frame_4090bae9cb95ad680e3391bcdc7c989e = cache_frame_4090bae9cb95ad680e3391bcdc7c989e;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_4090bae9cb95ad680e3391bcdc7c989e);
    assert(Py_REFCNT(frame_4090bae9cb95ad680e3391bcdc7c989e) == 2);

    // Framed code:
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(par_boxes);
        tmp_isinstance_inst_1 = par_boxes;
        tmp_isinstance_cls_1 = mod_consts[44];
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_1 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 162;
            type_description_1 = "oooooooo";
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
        exception_lineno = 162;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        bool tmp_condition_result_2;
        PyObject *tmp_operand_value_2;
        PyObject *tmp_isinstance_inst_2;
        PyObject *tmp_isinstance_cls_2;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_rel_codes);
        tmp_isinstance_inst_2 = par_rel_codes;
        tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_1 == NULL)) {
            tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_isinstance_cls_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[45]);
        if (tmp_isinstance_cls_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_2, tmp_isinstance_cls_2);
        Py_DECREF(tmp_isinstance_cls_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_operand_value_2 = (tmp_res != 0) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_2);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 163;
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
        PyObject *tmp_raise_type_2;
        tmp_raise_type_2 = PyExc_AssertionError;
        exception_type = tmp_raise_type_2;
        Py_INCREF(tmp_raise_type_2);
        exception_lineno = 163;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_2:;
    {
        PyObject *tmp_assign_source_1;
        // Tried code:
        {
            PyObject *tmp_assign_source_2;
            PyObject *tmp_iter_arg_1;
            CHECK_OBJECT(par_boxes);
            tmp_iter_arg_1 = par_boxes;
            tmp_assign_source_2 = MAKE_ITERATOR(tmp_iter_arg_1);
            if (tmp_assign_source_2 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_1 = "oooooooo";
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
        if (isFrameUnusable(cache_frame_a3c6b9a34febbce5f40c12eba0e55de0_2)) {
            Py_XDECREF(cache_frame_a3c6b9a34febbce5f40c12eba0e55de0_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_a3c6b9a34febbce5f40c12eba0e55de0_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_a3c6b9a34febbce5f40c12eba0e55de0_2 = MAKE_FUNCTION_FRAME(codeobj_a3c6b9a34febbce5f40c12eba0e55de0, module_torchvision$models$detection$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_a3c6b9a34febbce5f40c12eba0e55de0_2->m_type_description == NULL);
        frame_a3c6b9a34febbce5f40c12eba0e55de0_2 = cache_frame_a3c6b9a34febbce5f40c12eba0e55de0_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a3c6b9a34febbce5f40c12eba0e55de0_2);
        assert(Py_REFCNT(frame_a3c6b9a34febbce5f40c12eba0e55de0_2) == 2);

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
                    type_description_2 = "o";
                    exception_lineno = 164;
                    goto try_except_handler_3;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_4;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_5;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_5 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_b;
                outline_0_var_b = tmp_assign_source_5;
                Py_INCREF(outline_0_var_b);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_1;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_b);
            tmp_called_instance_1 = outline_0_var_b;
            frame_a3c6b9a34febbce5f40c12eba0e55de0_2->m_frame.f_lineno = 164;
            tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_1,
                mod_consts[46],
                PyTuple_GET_ITEM(mod_consts[47], 0)
            );

            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 164;
                type_description_2 = "o";
                goto try_except_handler_3;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 164;
            type_description_2 = "o";
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
            exception_tb = MAKE_TRACEBACK(frame_a3c6b9a34febbce5f40c12eba0e55de0_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a3c6b9a34febbce5f40c12eba0e55de0_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a3c6b9a34febbce5f40c12eba0e55de0_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a3c6b9a34febbce5f40c12eba0e55de0_2,
            type_description_2,
            outline_0_var_b
        );


        // Release cached frame if used for exception.
        if (frame_a3c6b9a34febbce5f40c12eba0e55de0_2 == cache_frame_a3c6b9a34febbce5f40c12eba0e55de0_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_a3c6b9a34febbce5f40c12eba0e55de0_2);
            cache_frame_a3c6b9a34febbce5f40c12eba0e55de0_2 = NULL;
        }

        assertFrameObject(frame_a3c6b9a34febbce5f40c12eba0e55de0_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "oooooooo";
        goto try_except_handler_2;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_2:;
        Py_XDECREF(outline_0_var_b);
        outline_0_var_b = NULL;
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

        Py_XDECREF(outline_0_var_b);
        outline_0_var_b = NULL;
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
        exception_lineno = 164;
        goto frame_exception_exit_1;
        outline_result_1:;
        assert(var_boxes_per_image == NULL);
        var_boxes_per_image = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[30]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_boxes);
        tmp_tuple_element_1 = par_boxes;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[36]);
        frame_4090bae9cb95ad680e3391bcdc7c989e->m_frame.f_lineno = 165;
        tmp_assign_source_6 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 165;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_concat_boxes == NULL);
        var_concat_boxes = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = mod_consts[6];
        assert(var_box_sum == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_box_sum = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_iter_arg_2;
        CHECK_OBJECT(var_boxes_per_image);
        tmp_iter_arg_2 = var_boxes_per_image;
        tmp_assign_source_8 = MAKE_ITERATOR(tmp_iter_arg_2);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 167;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(tmp_for_loop_1__for_iterator == NULL);
        tmp_for_loop_1__for_iterator = tmp_assign_source_8;
    }
    // Tried code:
    loop_start_2:;
    {
        PyObject *tmp_next_source_2;
        PyObject *tmp_assign_source_9;
        CHECK_OBJECT(tmp_for_loop_1__for_iterator);
        tmp_next_source_2 = tmp_for_loop_1__for_iterator;
        tmp_assign_source_9 = ITERATOR_NEXT(tmp_next_source_2);
        if (tmp_assign_source_9 == NULL) {
            if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                goto loop_end_2;
            } else {

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                type_description_1 = "oooooooo";
                exception_lineno = 167;
                goto try_except_handler_4;
            }
        }

        {
            PyObject *old = tmp_for_loop_1__iter_value;
            tmp_for_loop_1__iter_value = tmp_assign_source_9;
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_10;
        CHECK_OBJECT(tmp_for_loop_1__iter_value);
        tmp_assign_source_10 = tmp_for_loop_1__iter_value;
        {
            PyObject *old = var_val;
            var_val = tmp_assign_source_10;
            Py_INCREF(var_val);
            Py_XDECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_iadd_expr_left_1;
        PyObject *tmp_iadd_expr_right_1;
        if (var_box_sum == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 168;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }

        tmp_iadd_expr_left_1 = var_box_sum;
        CHECK_OBJECT(var_val);
        tmp_iadd_expr_right_1 = var_val;
        tmp_result = INPLACE_OPERATION_ADD_OBJECT_OBJECT(&tmp_iadd_expr_left_1, tmp_iadd_expr_right_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 168;
            type_description_1 = "oooooooo";
            goto try_except_handler_4;
        }
        tmp_assign_source_11 = tmp_iadd_expr_left_1;
        var_box_sum = tmp_assign_source_11;

    }
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 167;
        type_description_1 = "oooooooo";
        goto try_except_handler_4;
    }
    goto loop_start_2;
    loop_end_2:;
    goto try_end_1;
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
    try_end_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        if (var_box_sum == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 169;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_1 = var_box_sum;
        tmp_cmp_expr_right_1 = mod_consts[6];
        tmp_condition_result_3 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 169;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        CHECK_OBJECT(par_rel_codes);
        tmp_expression_value_3 = par_rel_codes;
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[49]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_box_sum == NULL) {
            Py_DECREF(tmp_called_value_2);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 170;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_1 = var_box_sum;
        tmp_args_element_value_2 = mod_consts[50];
        frame_4090bae9cb95ad680e3391bcdc7c989e->m_frame.f_lineno = 170;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2};
            tmp_assign_source_12 = CALL_FUNCTION_WITH_ARGS2(tmp_called_value_2, call_args);
        }

        Py_DECREF(tmp_called_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 170;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_rel_codes;
            assert(old != NULL);
            par_rel_codes = tmp_assign_source_12;
            Py_DECREF(old);
        }

    }
    branch_no_3:;
    {
        PyObject *tmp_assign_source_13;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        CHECK_OBJECT(par_self);
        tmp_called_instance_2 = par_self;
        CHECK_OBJECT(par_rel_codes);
        tmp_args_element_value_3 = par_rel_codes;
        CHECK_OBJECT(var_concat_boxes);
        tmp_args_element_value_4 = var_concat_boxes;
        frame_4090bae9cb95ad680e3391bcdc7c989e->m_frame.f_lineno = 171;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4};
            tmp_assign_source_13 = CALL_METHOD_WITH_ARGS2(
                tmp_called_instance_2,
                mod_consts[51],
                call_args
            );
        }

        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 171;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_boxes == NULL);
        var_pred_boxes = tmp_assign_source_13;
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        if (var_box_sum == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 172;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_cmp_expr_left_2 = var_box_sum;
        tmp_cmp_expr_right_2 = mod_consts[6];
        tmp_condition_result_4 = RICH_COMPARE_GT_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 172;
            type_description_1 = "oooooooo";
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
        PyObject *tmp_assign_source_14;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_args_element_value_5;
        PyObject *tmp_args_element_value_6;
        PyObject *tmp_args_element_value_7;
        CHECK_OBJECT(var_pred_boxes);
        tmp_expression_value_4 = var_pred_boxes;
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[49]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        if (var_box_sum == NULL) {
            Py_DECREF(tmp_called_value_3);
            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[48]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }

        tmp_args_element_value_5 = var_box_sum;
        tmp_args_element_value_6 = mod_consts[50];
        tmp_args_element_value_7 = mod_consts[52];
        frame_4090bae9cb95ad680e3391bcdc7c989e->m_frame.f_lineno = 173;
        {
            PyObject *call_args[] = {tmp_args_element_value_5, tmp_args_element_value_6, tmp_args_element_value_7};
            tmp_assign_source_14 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_3, call_args);
        }

        Py_DECREF(tmp_called_value_3);
        if (tmp_assign_source_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 173;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_pred_boxes;
            assert(old != NULL);
            var_pred_boxes = tmp_assign_source_14;
            Py_DECREF(old);
        }

    }
    branch_no_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_4090bae9cb95ad680e3391bcdc7c989e, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_4090bae9cb95ad680e3391bcdc7c989e->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_4090bae9cb95ad680e3391bcdc7c989e, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_4090bae9cb95ad680e3391bcdc7c989e,
        type_description_1,
        par_self,
        par_rel_codes,
        par_boxes,
        var_boxes_per_image,
        var_concat_boxes,
        var_box_sum,
        var_val,
        var_pred_boxes
    );


    // Release cached frame if used for exception.
    if (frame_4090bae9cb95ad680e3391bcdc7c989e == cache_frame_4090bae9cb95ad680e3391bcdc7c989e) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_4090bae9cb95ad680e3391bcdc7c989e);
        cache_frame_4090bae9cb95ad680e3391bcdc7c989e = NULL;
    }

    assertFrameObject(frame_4090bae9cb95ad680e3391bcdc7c989e);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    CHECK_OBJECT(var_pred_boxes);
    tmp_return_value = var_pred_boxes;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_rel_codes);
    Py_DECREF(par_rel_codes);
    par_rel_codes = NULL;
    CHECK_OBJECT(var_boxes_per_image);
    Py_DECREF(var_boxes_per_image);
    var_boxes_per_image = NULL;
    CHECK_OBJECT(var_concat_boxes);
    Py_DECREF(var_concat_boxes);
    var_concat_boxes = NULL;
    Py_XDECREF(var_box_sum);
    var_box_sum = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    CHECK_OBJECT(var_pred_boxes);
    Py_DECREF(var_pred_boxes);
    var_pred_boxes = NULL;
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

    Py_XDECREF(par_rel_codes);
    par_rel_codes = NULL;
    Py_XDECREF(var_boxes_per_image);
    var_boxes_per_image = NULL;
    Py_XDECREF(var_concat_boxes);
    var_concat_boxes = NULL;
    Py_XDECREF(var_box_sum);
    var_box_sum = NULL;
    Py_XDECREF(var_val);
    var_val = NULL;
    Py_XDECREF(var_pred_boxes);
    var_pred_boxes = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_boxes);
    Py_DECREF(par_boxes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_boxes);
    Py_DECREF(par_boxes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__8_decode_single(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_rel_codes = python_pars[1];
    PyObject *par_boxes = python_pars[2];
    PyObject *var_widths = NULL;
    PyObject *var_heights = NULL;
    PyObject *var_ctr_x = NULL;
    PyObject *var_ctr_y = NULL;
    PyObject *var_wx = NULL;
    PyObject *var_wy = NULL;
    PyObject *var_ww = NULL;
    PyObject *var_wh = NULL;
    PyObject *var_dx = NULL;
    PyObject *var_dy = NULL;
    PyObject *var_dw = NULL;
    PyObject *var_dh = NULL;
    PyObject *var_pred_ctr_x = NULL;
    PyObject *var_pred_ctr_y = NULL;
    PyObject *var_pred_w = NULL;
    PyObject *var_pred_h = NULL;
    PyObject *var_c_to_c_h = NULL;
    PyObject *var_c_to_c_w = NULL;
    PyObject *var_pred_boxes1 = NULL;
    PyObject *var_pred_boxes2 = NULL;
    PyObject *var_pred_boxes3 = NULL;
    PyObject *var_pred_boxes4 = NULL;
    PyObject *var_pred_boxes = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__element_3 = NULL;
    PyObject *tmp_tuple_unpack_1__element_4 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_a2669749acb588b44f90401468c091ac;
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
    static struct Nuitka_FrameObject *cache_frame_a2669749acb588b44f90401468c091ac = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_a2669749acb588b44f90401468c091ac)) {
        Py_XDECREF(cache_frame_a2669749acb588b44f90401468c091ac);

#if _DEBUG_REFCOUNTS
        if (cache_frame_a2669749acb588b44f90401468c091ac == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_a2669749acb588b44f90401468c091ac = MAKE_FUNCTION_FRAME(codeobj_a2669749acb588b44f90401468c091ac, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_a2669749acb588b44f90401468c091ac->m_type_description == NULL);
    frame_a2669749acb588b44f90401468c091ac = cache_frame_a2669749acb588b44f90401468c091ac;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a2669749acb588b44f90401468c091ac);
    assert(Py_REFCNT(frame_a2669749acb588b44f90401468c091ac) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_1 = par_boxes;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[53]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rel_codes);
        tmp_expression_value_2 = par_rel_codes;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2669749acb588b44f90401468c091ac->m_frame.f_lineno = 186;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 186;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_boxes;
            assert(old != NULL);
            par_boxes = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_3 = par_boxes;
        tmp_subscript_value_1 = mod_consts[26];
        tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_4 = par_boxes;
        tmp_subscript_value_2 = mod_consts[22];
        tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 188;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_widths == NULL);
        var_widths = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_5 = par_boxes;
        tmp_subscript_value_3 = mod_consts[27];
        tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_6 = par_boxes;
        tmp_subscript_value_4 = mod_consts[25];
        tmp_sub_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 189;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_heights == NULL);
        var_heights = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_7 = par_boxes;
        tmp_subscript_value_5 = mod_consts[22];
        tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_5);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_1 = mod_consts[28];
        CHECK_OBJECT(var_widths);
        tmp_mult_expr_right_1 = var_widths;
        tmp_add_expr_right_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 190;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctr_x == NULL);
        var_ctr_x = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_6;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_8 = par_boxes;
        tmp_subscript_value_6 = mod_consts[25];
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_6);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_left_2 = mod_consts[28];
        CHECK_OBJECT(var_heights);
        tmp_mult_expr_right_2 = var_heights;
        tmp_add_expr_right_2 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 191;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctr_y == NULL);
        var_ctr_y = tmp_assign_source_5;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_expression_value_9;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_iter_arg_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[33]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_6 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 193;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_tuple_unpack_1__source_iter == NULL);
        tmp_tuple_unpack_1__source_iter = tmp_assign_source_6;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_unpack_1;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_1 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_7 = UNPACK_NEXT(tmp_unpack_1, 0, 4);
        if (tmp_assign_source_7 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 193;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_8 = UNPACK_NEXT(tmp_unpack_2, 1, 4);
        if (tmp_assign_source_8 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 193;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_unpack_3;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_3 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_9 = UNPACK_NEXT(tmp_unpack_3, 2, 4);
        if (tmp_assign_source_9 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 193;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_3 == NULL);
        tmp_tuple_unpack_1__element_3 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_unpack_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_4 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_10 = UNPACK_NEXT(tmp_unpack_4, 3, 4);
        if (tmp_assign_source_10 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 193;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_4 == NULL);
        tmp_tuple_unpack_1__element_4 = tmp_assign_source_10;
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

                    type_description_1 = "oooooooooooooooooooooooooo";
                    exception_lineno = 193;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[54];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooooooooooooooooooooo";
            exception_lineno = 193;
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
        PyObject *tmp_assign_source_11;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_11 = tmp_tuple_unpack_1__element_1;
        assert(var_wx == NULL);
        Py_INCREF(tmp_assign_source_11);
        var_wx = tmp_assign_source_11;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_12;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_12 = tmp_tuple_unpack_1__element_2;
        assert(var_wy == NULL);
        Py_INCREF(tmp_assign_source_12);
        var_wy = tmp_assign_source_12;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_13;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_3);
        tmp_assign_source_13 = tmp_tuple_unpack_1__element_3;
        assert(var_ww == NULL);
        Py_INCREF(tmp_assign_source_13);
        var_ww = tmp_assign_source_13;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_3);
    tmp_tuple_unpack_1__element_3 = NULL;

    {
        PyObject *tmp_assign_source_14;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_4);
        tmp_assign_source_14 = tmp_tuple_unpack_1__element_4;
        assert(var_wh == NULL);
        Py_INCREF(tmp_assign_source_14);
        var_wh = tmp_assign_source_14;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_4);
    tmp_tuple_unpack_1__element_4 = NULL;

    {
        PyObject *tmp_assign_source_15;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(par_rel_codes);
        tmp_expression_value_10 = par_rel_codes;
        tmp_subscript_value_7 = mod_consts[55];
        tmp_truediv_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_7);
        if (tmp_truediv_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_wx);
        tmp_truediv_expr_right_1 = var_wx;
        tmp_assign_source_15 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        Py_DECREF(tmp_truediv_expr_left_1);
        if (tmp_assign_source_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 194;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dx == NULL);
        var_dx = tmp_assign_source_15;
    }
    {
        PyObject *tmp_assign_source_16;
        PyObject *tmp_truediv_expr_left_2;
        PyObject *tmp_truediv_expr_right_2;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(par_rel_codes);
        tmp_expression_value_11 = par_rel_codes;
        tmp_subscript_value_8 = mod_consts[56];
        tmp_truediv_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_8);
        if (tmp_truediv_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_wy);
        tmp_truediv_expr_right_2 = var_wy;
        tmp_assign_source_16 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_2, tmp_truediv_expr_right_2);
        Py_DECREF(tmp_truediv_expr_left_2);
        if (tmp_assign_source_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 195;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dy == NULL);
        var_dy = tmp_assign_source_16;
    }
    {
        PyObject *tmp_assign_source_17;
        PyObject *tmp_truediv_expr_left_3;
        PyObject *tmp_truediv_expr_right_3;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(par_rel_codes);
        tmp_expression_value_12 = par_rel_codes;
        tmp_subscript_value_9 = mod_consts[57];
        tmp_truediv_expr_left_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_9);
        if (tmp_truediv_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ww);
        tmp_truediv_expr_right_3 = var_ww;
        tmp_assign_source_17 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_3, tmp_truediv_expr_right_3);
        Py_DECREF(tmp_truediv_expr_left_3);
        if (tmp_assign_source_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 196;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dw == NULL);
        var_dw = tmp_assign_source_17;
    }
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_truediv_expr_left_4;
        PyObject *tmp_truediv_expr_right_4;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(par_rel_codes);
        tmp_expression_value_13 = par_rel_codes;
        tmp_subscript_value_10 = mod_consts[58];
        tmp_truediv_expr_left_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_10);
        if (tmp_truediv_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_wh);
        tmp_truediv_expr_right_4 = var_wh;
        tmp_assign_source_18 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_4, tmp_truediv_expr_right_4);
        Py_DECREF(tmp_truediv_expr_left_4);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 197;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_dh == NULL);
        var_dh = tmp_assign_source_18;
    }
    {
        PyObject *tmp_assign_source_19;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_15;
        tmp_expression_value_14 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_14 == NULL)) {
            tmp_expression_value_14 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[59]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dw);
        tmp_kw_call_arg_value_0_1 = var_dw;
        CHECK_OBJECT(par_self);
        tmp_expression_value_15 = par_self;
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[34]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2669749acb588b44f90401468c091ac->m_frame.f_lineno = 200;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_19 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[60]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        if (tmp_assign_source_19 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 200;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_dw;
            assert(old != NULL);
            var_dw = tmp_assign_source_19;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_20;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_kw_call_arg_value_0_2;
        PyObject *tmp_kw_call_dict_value_0_2;
        PyObject *tmp_expression_value_17;
        tmp_expression_value_16 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_16 == NULL)) {
            tmp_expression_value_16 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_16 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[59]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dh);
        tmp_kw_call_arg_value_0_2 = var_dh;
        CHECK_OBJECT(par_self);
        tmp_expression_value_17 = par_self;
        tmp_kw_call_dict_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[34]);
        if (tmp_kw_call_dict_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_3);

            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2669749acb588b44f90401468c091ac->m_frame.f_lineno = 201;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_2};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_2};
            tmp_assign_source_20 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_3, args, kw_values, mod_consts[60]);
        }

        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_kw_call_dict_value_0_2);
        if (tmp_assign_source_20 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 201;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_dh;
            assert(old != NULL);
            var_dh = tmp_assign_source_20;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_21;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        PyObject *tmp_expression_value_18;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_expression_value_19;
        PyObject *tmp_subscript_value_12;
        CHECK_OBJECT(var_dx);
        tmp_mult_expr_left_3 = var_dx;
        CHECK_OBJECT(var_widths);
        tmp_expression_value_18 = var_widths;
        tmp_subscript_value_11 = mod_consts[61];
        tmp_mult_expr_right_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_18, tmp_subscript_value_11);
        if (tmp_mult_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_3 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        Py_DECREF(tmp_mult_expr_right_3);
        if (tmp_add_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ctr_x);
        tmp_expression_value_19 = var_ctr_x;
        tmp_subscript_value_12 = mod_consts[61];
        tmp_add_expr_right_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_12);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_3);

            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_21 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_left_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_assign_source_21 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 203;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_ctr_x == NULL);
        var_pred_ctr_x = tmp_assign_source_21;
    }
    {
        PyObject *tmp_assign_source_22;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_mult_expr_left_4;
        PyObject *tmp_mult_expr_right_4;
        PyObject *tmp_expression_value_20;
        PyObject *tmp_subscript_value_13;
        PyObject *tmp_expression_value_21;
        PyObject *tmp_subscript_value_14;
        CHECK_OBJECT(var_dy);
        tmp_mult_expr_left_4 = var_dy;
        CHECK_OBJECT(var_heights);
        tmp_expression_value_20 = var_heights;
        tmp_subscript_value_13 = mod_consts[61];
        tmp_mult_expr_right_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_13);
        if (tmp_mult_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_add_expr_left_4 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_4, tmp_mult_expr_right_4);
        Py_DECREF(tmp_mult_expr_right_4);
        if (tmp_add_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_ctr_y);
        tmp_expression_value_21 = var_ctr_y;
        tmp_subscript_value_14 = mod_consts[61];
        tmp_add_expr_right_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_21, tmp_subscript_value_14);
        if (tmp_add_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_4);

            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_22 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_left_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_assign_source_22 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 204;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_ctr_y == NULL);
        var_pred_ctr_y = tmp_assign_source_22;
    }
    {
        PyObject *tmp_assign_source_23;
        PyObject *tmp_mult_expr_left_5;
        PyObject *tmp_mult_expr_right_5;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_expression_value_22;
        PyObject *tmp_subscript_value_15;
        tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_1 == NULL)) {
            tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dw);
        tmp_args_element_value_2 = var_dw;
        frame_a2669749acb588b44f90401468c091ac->m_frame.f_lineno = 205;
        tmp_mult_expr_left_5 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[62], tmp_args_element_value_2);
        if (tmp_mult_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_widths);
        tmp_expression_value_22 = var_widths;
        tmp_subscript_value_15 = mod_consts[61];
        tmp_mult_expr_right_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_22, tmp_subscript_value_15);
        if (tmp_mult_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_5);

            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_23 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_5, tmp_mult_expr_right_5);
        Py_DECREF(tmp_mult_expr_left_5);
        Py_DECREF(tmp_mult_expr_right_5);
        if (tmp_assign_source_23 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 205;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_w == NULL);
        var_pred_w = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        PyObject *tmp_mult_expr_left_6;
        PyObject *tmp_mult_expr_right_6;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_expression_value_23;
        PyObject *tmp_subscript_value_16;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_dh);
        tmp_args_element_value_3 = var_dh;
        frame_a2669749acb588b44f90401468c091ac->m_frame.f_lineno = 206;
        tmp_mult_expr_left_6 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_2, mod_consts[62], tmp_args_element_value_3);
        if (tmp_mult_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_heights);
        tmp_expression_value_23 = var_heights;
        tmp_subscript_value_16 = mod_consts[61];
        tmp_mult_expr_right_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_23, tmp_subscript_value_16);
        if (tmp_mult_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_mult_expr_left_6);

            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_24 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_6, tmp_mult_expr_right_6);
        Py_DECREF(tmp_mult_expr_left_6);
        Py_DECREF(tmp_mult_expr_right_6);
        if (tmp_assign_source_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 206;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_h == NULL);
        var_pred_h = tmp_assign_source_24;
    }
    {
        PyObject *tmp_assign_source_25;
        PyObject *tmp_mult_expr_left_7;
        PyObject *tmp_mult_expr_right_7;
        PyObject *tmp_called_value_4;
        PyObject *tmp_expression_value_24;
        PyObject *tmp_kw_call_value_0_1;
        PyObject *tmp_expression_value_25;
        PyObject *tmp_kw_call_value_1_1;
        PyObject *tmp_expression_value_26;
        tmp_expression_value_24 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_24 == NULL)) {
            tmp_expression_value_24 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_24 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_24, mod_consts[63]);
        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pred_ctr_y);
        tmp_expression_value_25 = var_pred_ctr_y;
        tmp_kw_call_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_25, mod_consts[39]);
        if (tmp_kw_call_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);

            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pred_h);
        tmp_expression_value_26 = var_pred_h;
        tmp_kw_call_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_26, mod_consts[11]);
        if (tmp_kw_call_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_4);
            Py_DECREF(tmp_kw_call_value_0_1);

            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2669749acb588b44f90401468c091ac->m_frame.f_lineno = 209;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_1, tmp_kw_call_value_1_1};
            tmp_mult_expr_left_7 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_4, mod_consts[64], kw_values, mod_consts[41]);
        }

        Py_DECREF(tmp_called_value_4);
        Py_DECREF(tmp_kw_call_value_0_1);
        Py_DECREF(tmp_kw_call_value_1_1);
        if (tmp_mult_expr_left_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pred_h);
        tmp_mult_expr_right_7 = var_pred_h;
        tmp_assign_source_25 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_7, tmp_mult_expr_right_7);
        Py_DECREF(tmp_mult_expr_left_7);
        if (tmp_assign_source_25 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 209;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_c_to_c_h == NULL);
        var_c_to_c_h = tmp_assign_source_25;
    }
    {
        PyObject *tmp_assign_source_26;
        PyObject *tmp_mult_expr_left_8;
        PyObject *tmp_mult_expr_right_8;
        PyObject *tmp_called_value_5;
        PyObject *tmp_expression_value_27;
        PyObject *tmp_kw_call_value_0_2;
        PyObject *tmp_expression_value_28;
        PyObject *tmp_kw_call_value_1_2;
        PyObject *tmp_expression_value_29;
        tmp_expression_value_27 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_27 == NULL)) {
            tmp_expression_value_27 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_27, mod_consts[63]);
        if (tmp_called_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pred_ctr_x);
        tmp_expression_value_28 = var_pred_ctr_x;
        tmp_kw_call_value_0_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_28, mod_consts[39]);
        if (tmp_kw_call_value_0_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);

            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pred_w);
        tmp_expression_value_29 = var_pred_w;
        tmp_kw_call_value_1_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_29, mod_consts[11]);
        if (tmp_kw_call_value_1_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_5);
            Py_DECREF(tmp_kw_call_value_0_2);

            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2669749acb588b44f90401468c091ac->m_frame.f_lineno = 210;
        {
            PyObject *kw_values[2] = {tmp_kw_call_value_0_2, tmp_kw_call_value_1_2};
            tmp_mult_expr_left_8 = CALL_FUNCTION_WITH_POSARGS1_KWSPLIT(tmp_called_value_5, mod_consts[64], kw_values, mod_consts[41]);
        }

        Py_DECREF(tmp_called_value_5);
        Py_DECREF(tmp_kw_call_value_0_2);
        Py_DECREF(tmp_kw_call_value_1_2);
        if (tmp_mult_expr_left_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pred_w);
        tmp_mult_expr_right_8 = var_pred_w;
        tmp_assign_source_26 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_8, tmp_mult_expr_right_8);
        Py_DECREF(tmp_mult_expr_left_8);
        if (tmp_assign_source_26 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 210;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_c_to_c_w == NULL);
        var_c_to_c_w = tmp_assign_source_26;
    }
    {
        PyObject *tmp_assign_source_27;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        CHECK_OBJECT(var_pred_ctr_x);
        tmp_sub_expr_left_3 = var_pred_ctr_x;
        CHECK_OBJECT(var_c_to_c_w);
        tmp_sub_expr_right_3 = var_c_to_c_w;
        tmp_assign_source_27 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        if (tmp_assign_source_27 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 212;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_boxes1 == NULL);
        var_pred_boxes1 = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        CHECK_OBJECT(var_pred_ctr_y);
        tmp_sub_expr_left_4 = var_pred_ctr_y;
        CHECK_OBJECT(var_c_to_c_h);
        tmp_sub_expr_right_4 = var_c_to_c_h;
        tmp_assign_source_28 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        if (tmp_assign_source_28 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 213;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_boxes2 == NULL);
        var_pred_boxes2 = tmp_assign_source_28;
    }
    {
        PyObject *tmp_assign_source_29;
        PyObject *tmp_add_expr_left_5;
        PyObject *tmp_add_expr_right_5;
        CHECK_OBJECT(var_pred_ctr_x);
        tmp_add_expr_left_5 = var_pred_ctr_x;
        CHECK_OBJECT(var_c_to_c_w);
        tmp_add_expr_right_5 = var_c_to_c_w;
        tmp_assign_source_29 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_5, tmp_add_expr_right_5);
        if (tmp_assign_source_29 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 214;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_boxes3 == NULL);
        var_pred_boxes3 = tmp_assign_source_29;
    }
    {
        PyObject *tmp_assign_source_30;
        PyObject *tmp_add_expr_left_6;
        PyObject *tmp_add_expr_right_6;
        CHECK_OBJECT(var_pred_ctr_y);
        tmp_add_expr_left_6 = var_pred_ctr_y;
        CHECK_OBJECT(var_c_to_c_h);
        tmp_add_expr_right_6 = var_c_to_c_h;
        tmp_assign_source_30 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_6, tmp_add_expr_right_6);
        if (tmp_assign_source_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 215;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_boxes4 == NULL);
        var_pred_boxes4 = tmp_assign_source_30;
    }
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_called_instance_3;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_30;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_30 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_30 == NULL)) {
            tmp_expression_value_30 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_30 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_30, mod_consts[65]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pred_boxes1);
        tmp_tuple_element_2 = var_pred_boxes1;
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_pred_boxes2);
        tmp_tuple_element_2 = var_pred_boxes2;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_pred_boxes3);
        tmp_tuple_element_2 = var_pred_boxes3;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        CHECK_OBJECT(var_pred_boxes4);
        tmp_tuple_element_2 = var_pred_boxes4;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 3, tmp_tuple_element_2);
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[66]);
        frame_a2669749acb588b44f90401468c091ac->m_frame.f_lineno = 216;
        tmp_called_instance_3 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_called_instance_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_a2669749acb588b44f90401468c091ac->m_frame.f_lineno = 216;
        tmp_assign_source_31 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_3,
            mod_consts[67],
            PyTuple_GET_ITEM(mod_consts[24], 0)
        );

        Py_DECREF(tmp_called_instance_3);
        if (tmp_assign_source_31 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 216;
            type_description_1 = "oooooooooooooooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_boxes == NULL);
        var_pred_boxes = tmp_assign_source_31;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a2669749acb588b44f90401468c091ac, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a2669749acb588b44f90401468c091ac->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a2669749acb588b44f90401468c091ac, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_a2669749acb588b44f90401468c091ac,
        type_description_1,
        par_self,
        par_rel_codes,
        par_boxes,
        var_widths,
        var_heights,
        var_ctr_x,
        var_ctr_y,
        var_wx,
        var_wy,
        var_ww,
        var_wh,
        var_dx,
        var_dy,
        var_dw,
        var_dh,
        var_pred_ctr_x,
        var_pred_ctr_y,
        var_pred_w,
        var_pred_h,
        var_c_to_c_h,
        var_c_to_c_w,
        var_pred_boxes1,
        var_pred_boxes2,
        var_pred_boxes3,
        var_pred_boxes4,
        var_pred_boxes
    );


    // Release cached frame if used for exception.
    if (frame_a2669749acb588b44f90401468c091ac == cache_frame_a2669749acb588b44f90401468c091ac) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_a2669749acb588b44f90401468c091ac);
        cache_frame_a2669749acb588b44f90401468c091ac = NULL;
    }

    assertFrameObject(frame_a2669749acb588b44f90401468c091ac);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_pred_boxes);
    tmp_return_value = var_pred_boxes;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(par_boxes);
    Py_DECREF(par_boxes);
    par_boxes = NULL;
    CHECK_OBJECT(var_widths);
    Py_DECREF(var_widths);
    var_widths = NULL;
    CHECK_OBJECT(var_heights);
    Py_DECREF(var_heights);
    var_heights = NULL;
    CHECK_OBJECT(var_ctr_x);
    Py_DECREF(var_ctr_x);
    var_ctr_x = NULL;
    CHECK_OBJECT(var_ctr_y);
    Py_DECREF(var_ctr_y);
    var_ctr_y = NULL;
    CHECK_OBJECT(var_wx);
    Py_DECREF(var_wx);
    var_wx = NULL;
    CHECK_OBJECT(var_wy);
    Py_DECREF(var_wy);
    var_wy = NULL;
    CHECK_OBJECT(var_ww);
    Py_DECREF(var_ww);
    var_ww = NULL;
    CHECK_OBJECT(var_wh);
    Py_DECREF(var_wh);
    var_wh = NULL;
    CHECK_OBJECT(var_dx);
    Py_DECREF(var_dx);
    var_dx = NULL;
    CHECK_OBJECT(var_dy);
    Py_DECREF(var_dy);
    var_dy = NULL;
    CHECK_OBJECT(var_dw);
    Py_DECREF(var_dw);
    var_dw = NULL;
    CHECK_OBJECT(var_dh);
    Py_DECREF(var_dh);
    var_dh = NULL;
    CHECK_OBJECT(var_pred_ctr_x);
    Py_DECREF(var_pred_ctr_x);
    var_pred_ctr_x = NULL;
    CHECK_OBJECT(var_pred_ctr_y);
    Py_DECREF(var_pred_ctr_y);
    var_pred_ctr_y = NULL;
    CHECK_OBJECT(var_pred_w);
    Py_DECREF(var_pred_w);
    var_pred_w = NULL;
    CHECK_OBJECT(var_pred_h);
    Py_DECREF(var_pred_h);
    var_pred_h = NULL;
    CHECK_OBJECT(var_c_to_c_h);
    Py_DECREF(var_c_to_c_h);
    var_c_to_c_h = NULL;
    CHECK_OBJECT(var_c_to_c_w);
    Py_DECREF(var_c_to_c_w);
    var_c_to_c_w = NULL;
    CHECK_OBJECT(var_pred_boxes1);
    Py_DECREF(var_pred_boxes1);
    var_pred_boxes1 = NULL;
    CHECK_OBJECT(var_pred_boxes2);
    Py_DECREF(var_pred_boxes2);
    var_pred_boxes2 = NULL;
    CHECK_OBJECT(var_pred_boxes3);
    Py_DECREF(var_pred_boxes3);
    var_pred_boxes3 = NULL;
    CHECK_OBJECT(var_pred_boxes4);
    Py_DECREF(var_pred_boxes4);
    var_pred_boxes4 = NULL;
    CHECK_OBJECT(var_pred_boxes);
    Py_DECREF(var_pred_boxes);
    var_pred_boxes = NULL;
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

    Py_XDECREF(par_boxes);
    par_boxes = NULL;
    Py_XDECREF(var_widths);
    var_widths = NULL;
    Py_XDECREF(var_heights);
    var_heights = NULL;
    Py_XDECREF(var_ctr_x);
    var_ctr_x = NULL;
    Py_XDECREF(var_ctr_y);
    var_ctr_y = NULL;
    Py_XDECREF(var_wx);
    var_wx = NULL;
    Py_XDECREF(var_wy);
    var_wy = NULL;
    Py_XDECREF(var_ww);
    var_ww = NULL;
    Py_XDECREF(var_wh);
    var_wh = NULL;
    Py_XDECREF(var_dx);
    var_dx = NULL;
    Py_XDECREF(var_dy);
    var_dy = NULL;
    Py_XDECREF(var_dw);
    var_dw = NULL;
    Py_XDECREF(var_dh);
    var_dh = NULL;
    Py_XDECREF(var_pred_ctr_x);
    var_pred_ctr_x = NULL;
    Py_XDECREF(var_pred_ctr_y);
    var_pred_ctr_y = NULL;
    Py_XDECREF(var_pred_w);
    var_pred_w = NULL;
    Py_XDECREF(var_pred_h);
    var_pred_h = NULL;
    Py_XDECREF(var_c_to_c_h);
    var_c_to_c_h = NULL;
    Py_XDECREF(var_c_to_c_w);
    var_c_to_c_w = NULL;
    Py_XDECREF(var_pred_boxes1);
    var_pred_boxes1 = NULL;
    Py_XDECREF(var_pred_boxes2);
    var_pred_boxes2 = NULL;
    Py_XDECREF(var_pred_boxes3);
    var_pred_boxes3 = NULL;
    Py_XDECREF(var_pred_boxes4);
    var_pred_boxes4 = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_rel_codes);
    Py_DECREF(par_rel_codes);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_rel_codes);
    Py_DECREF(par_rel_codes);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__9___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_normalize_by_size = python_pars[1];
    struct Nuitka_FrameObject *frame_6d14fc2551987b4c148ef95bb9ca997f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_6d14fc2551987b4c148ef95bb9ca997f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_6d14fc2551987b4c148ef95bb9ca997f)) {
        Py_XDECREF(cache_frame_6d14fc2551987b4c148ef95bb9ca997f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6d14fc2551987b4c148ef95bb9ca997f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6d14fc2551987b4c148ef95bb9ca997f = MAKE_FUNCTION_FRAME(codeobj_6d14fc2551987b4c148ef95bb9ca997f, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6d14fc2551987b4c148ef95bb9ca997f->m_type_description == NULL);
    frame_6d14fc2551987b4c148ef95bb9ca997f = cache_frame_6d14fc2551987b4c148ef95bb9ca997f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6d14fc2551987b4c148ef95bb9ca997f);
    assert(Py_REFCNT(frame_6d14fc2551987b4c148ef95bb9ca997f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        CHECK_OBJECT(par_normalize_by_size);
        tmp_assattr_value_1 = par_normalize_by_size;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[69], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 231;
            type_description_1 = "oo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6d14fc2551987b4c148ef95bb9ca997f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6d14fc2551987b4c148ef95bb9ca997f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6d14fc2551987b4c148ef95bb9ca997f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6d14fc2551987b4c148ef95bb9ca997f,
        type_description_1,
        par_self,
        par_normalize_by_size
    );


    // Release cached frame if used for exception.
    if (frame_6d14fc2551987b4c148ef95bb9ca997f == cache_frame_6d14fc2551987b4c148ef95bb9ca997f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6d14fc2551987b4c148ef95bb9ca997f);
        cache_frame_6d14fc2551987b4c148ef95bb9ca997f = NULL;
    }

    assertFrameObject(frame_6d14fc2551987b4c148ef95bb9ca997f);

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
    CHECK_OBJECT(par_normalize_by_size);
    Py_DECREF(par_normalize_by_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_normalize_by_size);
    Py_DECREF(par_normalize_by_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__10_encode_single(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_reference_boxes = python_pars[1];
    PyObject *par_proposals = python_pars[2];
    PyObject *var_reference_boxes_ctr_x = NULL;
    PyObject *var_reference_boxes_ctr_y = NULL;
    PyObject *var_target_l = NULL;
    PyObject *var_target_t = NULL;
    PyObject *var_target_r = NULL;
    PyObject *var_target_b = NULL;
    PyObject *var_targets = NULL;
    PyObject *var_reference_boxes_w = NULL;
    PyObject *var_reference_boxes_h = NULL;
    PyObject *var_reference_boxes_size = NULL;
    struct Nuitka_FrameObject *frame_88c119aa560ff71cc2e8b11e94b3b214;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_88c119aa560ff71cc2e8b11e94b3b214 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_88c119aa560ff71cc2e8b11e94b3b214)) {
        Py_XDECREF(cache_frame_88c119aa560ff71cc2e8b11e94b3b214);

#if _DEBUG_REFCOUNTS
        if (cache_frame_88c119aa560ff71cc2e8b11e94b3b214 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_88c119aa560ff71cc2e8b11e94b3b214 = MAKE_FUNCTION_FRAME(codeobj_88c119aa560ff71cc2e8b11e94b3b214, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_88c119aa560ff71cc2e8b11e94b3b214->m_type_description == NULL);
    frame_88c119aa560ff71cc2e8b11e94b3b214 = cache_frame_88c119aa560ff71cc2e8b11e94b3b214;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_88c119aa560ff71cc2e8b11e94b3b214);
    assert(Py_REFCNT(frame_88c119aa560ff71cc2e8b11e94b3b214) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_2;
        tmp_mult_expr_left_1 = mod_consts[28];
        CHECK_OBJECT(par_reference_boxes);
        tmp_expression_value_1 = par_reference_boxes;
        tmp_subscript_value_1 = mod_consts[22];
        tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_reference_boxes);
        tmp_expression_value_2 = par_reference_boxes;
        tmp_subscript_value_2 = mod_consts[26];
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 246;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 246;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reference_boxes_ctr_x == NULL);
        var_reference_boxes_ctr_x = tmp_assign_source_1;
    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_4;
        tmp_mult_expr_left_2 = mod_consts[28];
        CHECK_OBJECT(par_reference_boxes);
        tmp_expression_value_3 = par_reference_boxes;
        tmp_subscript_value_3 = mod_consts[25];
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_reference_boxes);
        tmp_expression_value_4 = par_reference_boxes;
        tmp_subscript_value_4 = mod_consts[27];
        tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 247;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 247;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reference_boxes_ctr_y == NULL);
        var_reference_boxes_ctr_y = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_5;
        CHECK_OBJECT(var_reference_boxes_ctr_x);
        tmp_sub_expr_left_1 = var_reference_boxes_ctr_x;
        CHECK_OBJECT(par_proposals);
        tmp_expression_value_5 = par_proposals;
        tmp_subscript_value_5 = mod_consts[22];
        tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_5);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 250;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_target_l == NULL);
        var_target_l = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(var_reference_boxes_ctr_y);
        tmp_sub_expr_left_2 = var_reference_boxes_ctr_y;
        CHECK_OBJECT(par_proposals);
        tmp_expression_value_6 = par_proposals;
        tmp_subscript_value_6 = mod_consts[25];
        tmp_sub_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_6);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 251;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_target_t == NULL);
        var_target_t = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_subscript_value_7;
        CHECK_OBJECT(par_proposals);
        tmp_expression_value_7 = par_proposals;
        tmp_subscript_value_7 = mod_consts[26];
        tmp_sub_expr_left_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_7);
        if (tmp_sub_expr_left_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_reference_boxes_ctr_x);
        tmp_sub_expr_right_3 = var_reference_boxes_ctr_x;
        tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_left_3);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 252;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_target_r == NULL);
        var_target_r = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(par_proposals);
        tmp_expression_value_8 = par_proposals;
        tmp_subscript_value_8 = mod_consts[27];
        tmp_sub_expr_left_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_8);
        if (tmp_sub_expr_left_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_reference_boxes_ctr_y);
        tmp_sub_expr_right_4 = var_reference_boxes_ctr_y;
        tmp_assign_source_6 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_left_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 253;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_target_b == NULL);
        var_target_b = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_9 == NULL)) {
            tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[65]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_target_l);
        tmp_tuple_element_2 = var_target_l;
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_target_t);
        tmp_tuple_element_2 = var_target_t;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_target_r);
        tmp_tuple_element_2 = var_target_r;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        CHECK_OBJECT(var_target_b);
        tmp_tuple_element_2 = var_target_b;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 3, tmp_tuple_element_2);
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[31]);
        frame_88c119aa560ff71cc2e8b11e94b3b214->m_frame.f_lineno = 255;
        tmp_assign_source_7 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 255;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_targets == NULL);
        var_targets = tmp_assign_source_7;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[69]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 256;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 256;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_assign_source_8;
        PyObject *tmp_sub_expr_left_5;
        PyObject *tmp_sub_expr_right_5;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_9;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(par_reference_boxes);
        tmp_expression_value_11 = par_reference_boxes;
        tmp_subscript_value_9 = mod_consts[26];
        tmp_sub_expr_left_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_9);
        if (tmp_sub_expr_left_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_reference_boxes);
        tmp_expression_value_12 = par_reference_boxes;
        tmp_subscript_value_10 = mod_consts[22];
        tmp_sub_expr_right_5 = LOOKUP_SUBSCRIPT(tmp_expression_value_12, tmp_subscript_value_10);
        if (tmp_sub_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_5);

            exception_lineno = 257;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_5, tmp_sub_expr_right_5);
        Py_DECREF(tmp_sub_expr_left_5);
        Py_DECREF(tmp_sub_expr_right_5);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 257;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reference_boxes_w == NULL);
        var_reference_boxes_w = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_sub_expr_left_6;
        PyObject *tmp_sub_expr_right_6;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_11;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_12;
        CHECK_OBJECT(par_reference_boxes);
        tmp_expression_value_13 = par_reference_boxes;
        tmp_subscript_value_11 = mod_consts[27];
        tmp_sub_expr_left_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_11);
        if (tmp_sub_expr_left_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_reference_boxes);
        tmp_expression_value_14 = par_reference_boxes;
        tmp_subscript_value_12 = mod_consts[25];
        tmp_sub_expr_right_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_12);
        if (tmp_sub_expr_right_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_6);

            exception_lineno = 258;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_6, tmp_sub_expr_right_6);
        Py_DECREF(tmp_sub_expr_left_6);
        Py_DECREF(tmp_sub_expr_right_6);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 258;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reference_boxes_h == NULL);
        var_reference_boxes_h = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_15 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_15 == NULL)) {
            tmp_expression_value_15 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_15, mod_consts[65]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_reference_boxes_w);
        tmp_tuple_element_4 = var_reference_boxes_w;
        tmp_tuple_element_3 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_reference_boxes_h);
        tmp_tuple_element_4 = var_reference_boxes_h;
        PyTuple_SET_ITEM0(tmp_tuple_element_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(var_reference_boxes_w);
        tmp_tuple_element_4 = var_reference_boxes_w;
        PyTuple_SET_ITEM0(tmp_tuple_element_3, 2, tmp_tuple_element_4);
        CHECK_OBJECT(var_reference_boxes_h);
        tmp_tuple_element_4 = var_reference_boxes_h;
        PyTuple_SET_ITEM0(tmp_tuple_element_3, 3, tmp_tuple_element_4);
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_3);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[31]);
        frame_88c119aa560ff71cc2e8b11e94b3b214->m_frame.f_lineno = 259;
        tmp_assign_source_10 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 259;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_reference_boxes_size == NULL);
        var_reference_boxes_size = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_truediv_expr_left_1;
        PyObject *tmp_truediv_expr_right_1;
        CHECK_OBJECT(var_targets);
        tmp_truediv_expr_left_1 = var_targets;
        CHECK_OBJECT(var_reference_boxes_size);
        tmp_truediv_expr_right_1 = var_reference_boxes_size;
        tmp_assign_source_11 = BINARY_OPERATION_TRUEDIV_OBJECT_OBJECT_OBJECT(tmp_truediv_expr_left_1, tmp_truediv_expr_right_1);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 262;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = var_targets;
            assert(old != NULL);
            var_targets = tmp_assign_source_11;
            Py_DECREF(old);
        }

    }
    branch_no_1:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_88c119aa560ff71cc2e8b11e94b3b214, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_88c119aa560ff71cc2e8b11e94b3b214->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_88c119aa560ff71cc2e8b11e94b3b214, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_88c119aa560ff71cc2e8b11e94b3b214,
        type_description_1,
        par_self,
        par_reference_boxes,
        par_proposals,
        var_reference_boxes_ctr_x,
        var_reference_boxes_ctr_y,
        var_target_l,
        var_target_t,
        var_target_r,
        var_target_b,
        var_targets,
        var_reference_boxes_w,
        var_reference_boxes_h,
        var_reference_boxes_size
    );


    // Release cached frame if used for exception.
    if (frame_88c119aa560ff71cc2e8b11e94b3b214 == cache_frame_88c119aa560ff71cc2e8b11e94b3b214) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_88c119aa560ff71cc2e8b11e94b3b214);
        cache_frame_88c119aa560ff71cc2e8b11e94b3b214 = NULL;
    }

    assertFrameObject(frame_88c119aa560ff71cc2e8b11e94b3b214);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_targets);
    tmp_return_value = var_targets;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_reference_boxes_ctr_x);
    Py_DECREF(var_reference_boxes_ctr_x);
    var_reference_boxes_ctr_x = NULL;
    CHECK_OBJECT(var_reference_boxes_ctr_y);
    Py_DECREF(var_reference_boxes_ctr_y);
    var_reference_boxes_ctr_y = NULL;
    CHECK_OBJECT(var_target_l);
    Py_DECREF(var_target_l);
    var_target_l = NULL;
    CHECK_OBJECT(var_target_t);
    Py_DECREF(var_target_t);
    var_target_t = NULL;
    CHECK_OBJECT(var_target_r);
    Py_DECREF(var_target_r);
    var_target_r = NULL;
    CHECK_OBJECT(var_target_b);
    Py_DECREF(var_target_b);
    var_target_b = NULL;
    CHECK_OBJECT(var_targets);
    Py_DECREF(var_targets);
    var_targets = NULL;
    Py_XDECREF(var_reference_boxes_w);
    var_reference_boxes_w = NULL;
    Py_XDECREF(var_reference_boxes_h);
    var_reference_boxes_h = NULL;
    Py_XDECREF(var_reference_boxes_size);
    var_reference_boxes_size = NULL;
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

    Py_XDECREF(var_reference_boxes_ctr_x);
    var_reference_boxes_ctr_x = NULL;
    Py_XDECREF(var_reference_boxes_ctr_y);
    var_reference_boxes_ctr_y = NULL;
    Py_XDECREF(var_target_l);
    var_target_l = NULL;
    Py_XDECREF(var_target_t);
    var_target_t = NULL;
    Py_XDECREF(var_target_r);
    var_target_r = NULL;
    Py_XDECREF(var_target_b);
    var_target_b = NULL;
    Py_XDECREF(var_targets);
    var_targets = NULL;
    Py_XDECREF(var_reference_boxes_w);
    var_reference_boxes_w = NULL;
    Py_XDECREF(var_reference_boxes_h);
    var_reference_boxes_h = NULL;
    Py_XDECREF(var_reference_boxes_size);
    var_reference_boxes_size = NULL;
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
    CHECK_OBJECT(par_reference_boxes);
    Py_DECREF(par_reference_boxes);
    CHECK_OBJECT(par_proposals);
    Py_DECREF(par_proposals);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_reference_boxes);
    Py_DECREF(par_reference_boxes);
    CHECK_OBJECT(par_proposals);
    Py_DECREF(par_proposals);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__11_decode_single(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_rel_codes = python_pars[1];
    PyObject *par_boxes = python_pars[2];
    PyObject *var_ctr_x = NULL;
    PyObject *var_ctr_y = NULL;
    PyObject *var_boxes_w = NULL;
    PyObject *var_boxes_h = NULL;
    PyObject *var_boxes_size = NULL;
    PyObject *var_pred_boxes1 = NULL;
    PyObject *var_pred_boxes2 = NULL;
    PyObject *var_pred_boxes3 = NULL;
    PyObject *var_pred_boxes4 = NULL;
    PyObject *var_pred_boxes = NULL;
    struct Nuitka_FrameObject *frame_1612e3bdf1fd88268007fd54cbf8c5ea;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_1612e3bdf1fd88268007fd54cbf8c5ea = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_1612e3bdf1fd88268007fd54cbf8c5ea)) {
        Py_XDECREF(cache_frame_1612e3bdf1fd88268007fd54cbf8c5ea);

#if _DEBUG_REFCOUNTS
        if (cache_frame_1612e3bdf1fd88268007fd54cbf8c5ea == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_1612e3bdf1fd88268007fd54cbf8c5ea = MAKE_FUNCTION_FRAME(codeobj_1612e3bdf1fd88268007fd54cbf8c5ea, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_1612e3bdf1fd88268007fd54cbf8c5ea->m_type_description == NULL);
    frame_1612e3bdf1fd88268007fd54cbf8c5ea = cache_frame_1612e3bdf1fd88268007fd54cbf8c5ea;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_1612e3bdf1fd88268007fd54cbf8c5ea);
    assert(Py_REFCNT(frame_1612e3bdf1fd88268007fd54cbf8c5ea) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_1 = par_boxes;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[53]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_rel_codes);
        tmp_expression_value_2 = par_rel_codes;
        tmp_args_element_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[39]);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_1);

            exception_lineno = 279;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        frame_1612e3bdf1fd88268007fd54cbf8c5ea->m_frame.f_lineno = 279;
        tmp_assign_source_1 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_1, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 279;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_boxes;
            assert(old != NULL);
            par_boxes = tmp_assign_source_1;
            Py_DECREF(old);
        }

    }
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_mult_expr_left_1;
        PyObject *tmp_mult_expr_right_1;
        PyObject *tmp_add_expr_left_1;
        PyObject *tmp_add_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        tmp_mult_expr_left_1 = mod_consts[28];
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_3 = par_boxes;
        tmp_subscript_value_1 = mod_consts[22];
        tmp_add_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_add_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_4 = par_boxes;
        tmp_subscript_value_2 = mod_consts[26];
        tmp_add_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_2);
        if (tmp_add_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_1);

            exception_lineno = 281;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_1 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_1, tmp_add_expr_right_1);
        Py_DECREF(tmp_add_expr_left_1);
        Py_DECREF(tmp_add_expr_right_1);
        if (tmp_mult_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_2 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_1, tmp_mult_expr_right_1);
        Py_DECREF(tmp_mult_expr_right_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 281;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctr_x == NULL);
        var_ctr_x = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_mult_expr_left_2;
        PyObject *tmp_mult_expr_right_2;
        PyObject *tmp_add_expr_left_2;
        PyObject *tmp_add_expr_right_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_subscript_value_4;
        tmp_mult_expr_left_2 = mod_consts[28];
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_5 = par_boxes;
        tmp_subscript_value_3 = mod_consts[25];
        tmp_add_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_add_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_6 = par_boxes;
        tmp_subscript_value_4 = mod_consts[27];
        tmp_add_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_6, tmp_subscript_value_4);
        if (tmp_add_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_add_expr_left_2);

            exception_lineno = 282;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_mult_expr_right_2 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_2, tmp_add_expr_right_2);
        Py_DECREF(tmp_add_expr_left_2);
        Py_DECREF(tmp_add_expr_right_2);
        if (tmp_mult_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_3 = BINARY_OPERATION_MULT_OBJECT_FLOAT_OBJECT(tmp_mult_expr_left_2, tmp_mult_expr_right_2);
        Py_DECREF(tmp_mult_expr_right_2);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 282;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_ctr_y == NULL);
        var_ctr_y = tmp_assign_source_3;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_expression_value_7;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[69]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 283;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 283;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
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
        PyObject *tmp_assign_source_4;
        PyObject *tmp_sub_expr_left_1;
        PyObject *tmp_sub_expr_right_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_subscript_value_5;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_subscript_value_6;
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_8 = par_boxes;
        tmp_subscript_value_5 = mod_consts[26];
        tmp_sub_expr_left_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_5);
        if (tmp_sub_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_9 = par_boxes;
        tmp_subscript_value_6 = mod_consts[22];
        tmp_sub_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_6);
        if (tmp_sub_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_1);

            exception_lineno = 284;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_4 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_1, tmp_sub_expr_right_1);
        Py_DECREF(tmp_sub_expr_left_1);
        Py_DECREF(tmp_sub_expr_right_1);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 284;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_boxes_w == NULL);
        var_boxes_w = tmp_assign_source_4;
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_sub_expr_left_2;
        PyObject *tmp_sub_expr_right_2;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_subscript_value_7;
        PyObject *tmp_expression_value_11;
        PyObject *tmp_subscript_value_8;
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_10 = par_boxes;
        tmp_subscript_value_7 = mod_consts[27];
        tmp_sub_expr_left_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_7);
        if (tmp_sub_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_boxes);
        tmp_expression_value_11 = par_boxes;
        tmp_subscript_value_8 = mod_consts[25];
        tmp_sub_expr_right_2 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_8);
        if (tmp_sub_expr_right_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_sub_expr_left_2);

            exception_lineno = 285;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_5 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_2, tmp_sub_expr_right_2);
        Py_DECREF(tmp_sub_expr_left_2);
        Py_DECREF(tmp_sub_expr_right_2);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 285;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_boxes_h == NULL);
        var_boxes_h = tmp_assign_source_5;
    }
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_tuple_element_2;
        PyObject *tmp_kwargs_value_1;
        tmp_expression_value_12 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_12 == NULL)) {
            tmp_expression_value_12 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_12, mod_consts[65]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_boxes_w);
        tmp_tuple_element_2 = var_boxes_w;
        tmp_tuple_element_1 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_boxes_h);
        tmp_tuple_element_2 = var_boxes_h;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 1, tmp_tuple_element_2);
        CHECK_OBJECT(var_boxes_w);
        tmp_tuple_element_2 = var_boxes_w;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 2, tmp_tuple_element_2);
        CHECK_OBJECT(var_boxes_h);
        tmp_tuple_element_2 = var_boxes_h;
        PyTuple_SET_ITEM0(tmp_tuple_element_1, 3, tmp_tuple_element_2);
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_1, 0, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[31]);
        frame_1612e3bdf1fd88268007fd54cbf8c5ea->m_frame.f_lineno = 286;
        tmp_assign_source_6 = CALL_FUNCTION(tmp_called_value_2, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 286;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_boxes_size == NULL);
        var_boxes_size = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_mult_expr_left_3;
        PyObject *tmp_mult_expr_right_3;
        CHECK_OBJECT(par_rel_codes);
        tmp_mult_expr_left_3 = par_rel_codes;
        CHECK_OBJECT(var_boxes_size);
        tmp_mult_expr_right_3 = var_boxes_size;
        tmp_assign_source_7 = BINARY_OPERATION_MULT_OBJECT_OBJECT_OBJECT(tmp_mult_expr_left_3, tmp_mult_expr_right_3);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 287;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        {
            PyObject *old = par_rel_codes;
            assert(old != NULL);
            par_rel_codes = tmp_assign_source_7;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_sub_expr_left_3;
        PyObject *tmp_sub_expr_right_3;
        PyObject *tmp_expression_value_13;
        PyObject *tmp_subscript_value_9;
        CHECK_OBJECT(var_ctr_x);
        tmp_sub_expr_left_3 = var_ctr_x;
        if (par_rel_codes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_13 = par_rel_codes;
        tmp_subscript_value_9 = mod_consts[22];
        tmp_sub_expr_right_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_13, tmp_subscript_value_9);
        if (tmp_sub_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_3, tmp_sub_expr_right_3);
        Py_DECREF(tmp_sub_expr_right_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 289;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_boxes1 == NULL);
        var_pred_boxes1 = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_sub_expr_left_4;
        PyObject *tmp_sub_expr_right_4;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_subscript_value_10;
        CHECK_OBJECT(var_ctr_y);
        tmp_sub_expr_left_4 = var_ctr_y;
        if (par_rel_codes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 290;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_14 = par_rel_codes;
        tmp_subscript_value_10 = mod_consts[25];
        tmp_sub_expr_right_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_14, tmp_subscript_value_10);
        if (tmp_sub_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = BINARY_OPERATION_SUB_OBJECT_OBJECT_OBJECT(tmp_sub_expr_left_4, tmp_sub_expr_right_4);
        Py_DECREF(tmp_sub_expr_right_4);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 290;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_boxes2 == NULL);
        var_pred_boxes2 = tmp_assign_source_9;
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_add_expr_left_3;
        PyObject *tmp_add_expr_right_3;
        PyObject *tmp_expression_value_15;
        PyObject *tmp_subscript_value_11;
        CHECK_OBJECT(var_ctr_x);
        tmp_add_expr_left_3 = var_ctr_x;
        if (par_rel_codes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 291;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_15 = par_rel_codes;
        tmp_subscript_value_11 = mod_consts[26];
        tmp_add_expr_right_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_15, tmp_subscript_value_11);
        if (tmp_add_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_10 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_3, tmp_add_expr_right_3);
        Py_DECREF(tmp_add_expr_right_3);
        if (tmp_assign_source_10 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 291;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_boxes3 == NULL);
        var_pred_boxes3 = tmp_assign_source_10;
    }
    {
        PyObject *tmp_assign_source_11;
        PyObject *tmp_add_expr_left_4;
        PyObject *tmp_add_expr_right_4;
        PyObject *tmp_expression_value_16;
        PyObject *tmp_subscript_value_12;
        CHECK_OBJECT(var_ctr_y);
        tmp_add_expr_left_4 = var_ctr_y;
        if (par_rel_codes == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[72]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }

        tmp_expression_value_16 = par_rel_codes;
        tmp_subscript_value_12 = mod_consts[27];
        tmp_add_expr_right_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_16, tmp_subscript_value_12);
        if (tmp_add_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_11 = BINARY_OPERATION_ADD_OBJECT_OBJECT_OBJECT(tmp_add_expr_left_4, tmp_add_expr_right_4);
        Py_DECREF(tmp_add_expr_right_4);
        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 292;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_boxes4 == NULL);
        var_pred_boxes4 = tmp_assign_source_11;
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_called_value_3;
        PyObject *tmp_expression_value_17;
        PyObject *tmp_args_value_2;
        PyObject *tmp_tuple_element_3;
        PyObject *tmp_tuple_element_4;
        PyObject *tmp_kwargs_value_2;
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[65]);
        if (tmp_called_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_pred_boxes1);
        tmp_tuple_element_4 = var_pred_boxes1;
        tmp_tuple_element_3 = MAKE_TUPLE_EMPTY(4);
        PyTuple_SET_ITEM0(tmp_tuple_element_3, 0, tmp_tuple_element_4);
        CHECK_OBJECT(var_pred_boxes2);
        tmp_tuple_element_4 = var_pred_boxes2;
        PyTuple_SET_ITEM0(tmp_tuple_element_3, 1, tmp_tuple_element_4);
        CHECK_OBJECT(var_pred_boxes3);
        tmp_tuple_element_4 = var_pred_boxes3;
        PyTuple_SET_ITEM0(tmp_tuple_element_3, 2, tmp_tuple_element_4);
        CHECK_OBJECT(var_pred_boxes4);
        tmp_tuple_element_4 = var_pred_boxes4;
        PyTuple_SET_ITEM0(tmp_tuple_element_3, 3, tmp_tuple_element_4);
        tmp_args_value_2 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM(tmp_args_value_2, 0, tmp_tuple_element_3);
        tmp_kwargs_value_2 = DICT_COPY(mod_consts[31]);
        frame_1612e3bdf1fd88268007fd54cbf8c5ea->m_frame.f_lineno = 293;
        tmp_assign_source_12 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
        Py_DECREF(tmp_called_value_3);
        Py_DECREF(tmp_args_value_2);
        Py_DECREF(tmp_kwargs_value_2);
        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 293;
            type_description_1 = "ooooooooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_boxes == NULL);
        var_pred_boxes = tmp_assign_source_12;
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_1612e3bdf1fd88268007fd54cbf8c5ea, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_1612e3bdf1fd88268007fd54cbf8c5ea->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_1612e3bdf1fd88268007fd54cbf8c5ea, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_1612e3bdf1fd88268007fd54cbf8c5ea,
        type_description_1,
        par_self,
        par_rel_codes,
        par_boxes,
        var_ctr_x,
        var_ctr_y,
        var_boxes_w,
        var_boxes_h,
        var_boxes_size,
        var_pred_boxes1,
        var_pred_boxes2,
        var_pred_boxes3,
        var_pred_boxes4,
        var_pred_boxes
    );


    // Release cached frame if used for exception.
    if (frame_1612e3bdf1fd88268007fd54cbf8c5ea == cache_frame_1612e3bdf1fd88268007fd54cbf8c5ea) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_1612e3bdf1fd88268007fd54cbf8c5ea);
        cache_frame_1612e3bdf1fd88268007fd54cbf8c5ea = NULL;
    }

    assertFrameObject(frame_1612e3bdf1fd88268007fd54cbf8c5ea);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_pred_boxes);
    tmp_return_value = var_pred_boxes;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(par_rel_codes);
    par_rel_codes = NULL;
    CHECK_OBJECT(par_boxes);
    Py_DECREF(par_boxes);
    par_boxes = NULL;
    CHECK_OBJECT(var_ctr_x);
    Py_DECREF(var_ctr_x);
    var_ctr_x = NULL;
    CHECK_OBJECT(var_ctr_y);
    Py_DECREF(var_ctr_y);
    var_ctr_y = NULL;
    Py_XDECREF(var_boxes_w);
    var_boxes_w = NULL;
    Py_XDECREF(var_boxes_h);
    var_boxes_h = NULL;
    Py_XDECREF(var_boxes_size);
    var_boxes_size = NULL;
    CHECK_OBJECT(var_pred_boxes1);
    Py_DECREF(var_pred_boxes1);
    var_pred_boxes1 = NULL;
    CHECK_OBJECT(var_pred_boxes2);
    Py_DECREF(var_pred_boxes2);
    var_pred_boxes2 = NULL;
    CHECK_OBJECT(var_pred_boxes3);
    Py_DECREF(var_pred_boxes3);
    var_pred_boxes3 = NULL;
    CHECK_OBJECT(var_pred_boxes4);
    Py_DECREF(var_pred_boxes4);
    var_pred_boxes4 = NULL;
    CHECK_OBJECT(var_pred_boxes);
    Py_DECREF(var_pred_boxes);
    var_pred_boxes = NULL;
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

    Py_XDECREF(par_rel_codes);
    par_rel_codes = NULL;
    Py_XDECREF(par_boxes);
    par_boxes = NULL;
    Py_XDECREF(var_ctr_x);
    var_ctr_x = NULL;
    Py_XDECREF(var_ctr_y);
    var_ctr_y = NULL;
    Py_XDECREF(var_boxes_w);
    var_boxes_w = NULL;
    Py_XDECREF(var_boxes_h);
    var_boxes_h = NULL;
    Py_XDECREF(var_boxes_size);
    var_boxes_size = NULL;
    Py_XDECREF(var_pred_boxes1);
    var_pred_boxes1 = NULL;
    Py_XDECREF(var_pred_boxes2);
    var_pred_boxes2 = NULL;
    Py_XDECREF(var_pred_boxes3);
    var_pred_boxes3 = NULL;
    Py_XDECREF(var_pred_boxes4);
    var_pred_boxes4 = NULL;
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


static PyObject *impl_torchvision$models$detection$_utils$$$function__12___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_high_threshold = python_pars[1];
    PyObject *par_low_threshold = python_pars[2];
    PyObject *par_allow_low_quality_matches = python_pars[3];
    struct Nuitka_FrameObject *frame_b8f1cae356a9fa95609fb79842f9982f;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    bool tmp_result;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    int tmp_res;
    static struct Nuitka_FrameObject *cache_frame_b8f1cae356a9fa95609fb79842f9982f = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_b8f1cae356a9fa95609fb79842f9982f)) {
        Py_XDECREF(cache_frame_b8f1cae356a9fa95609fb79842f9982f);

#if _DEBUG_REFCOUNTS
        if (cache_frame_b8f1cae356a9fa95609fb79842f9982f == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_b8f1cae356a9fa95609fb79842f9982f = MAKE_FUNCTION_FRAME(codeobj_b8f1cae356a9fa95609fb79842f9982f, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_b8f1cae356a9fa95609fb79842f9982f->m_type_description == NULL);
    frame_b8f1cae356a9fa95609fb79842f9982f = cache_frame_b8f1cae356a9fa95609fb79842f9982f;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_b8f1cae356a9fa95609fb79842f9982f);
    assert(Py_REFCNT(frame_b8f1cae356a9fa95609fb79842f9982f) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = mod_consts[50];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_1 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[74], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 334;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_2;
        PyObject *tmp_assattr_target_2;
        tmp_assattr_value_2 = mod_consts[75];
        CHECK_OBJECT(par_self);
        tmp_assattr_target_2 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_2, mod_consts[76], tmp_assattr_value_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 335;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        bool tmp_condition_result_1;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        CHECK_OBJECT(par_low_threshold);
        tmp_cmp_expr_left_1 = par_low_threshold;
        CHECK_OBJECT(par_high_threshold);
        tmp_cmp_expr_right_1 = par_high_threshold;
        tmp_operand_value_1 = RICH_COMPARE_LE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 336;
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
        tmp_raise_type_1 = PyExc_AssertionError;
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_lineno = 336;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "oooo";
        goto frame_exception_exit_1;
    }
    branch_no_1:;
    {
        PyObject *tmp_assattr_value_3;
        PyObject *tmp_assattr_target_3;
        CHECK_OBJECT(par_high_threshold);
        tmp_assattr_value_3 = par_high_threshold;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_3 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_3, mod_consts[77], tmp_assattr_value_3);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 337;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_4;
        PyObject *tmp_assattr_target_4;
        CHECK_OBJECT(par_low_threshold);
        tmp_assattr_value_4 = par_low_threshold;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_4 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_4, mod_consts[78], tmp_assattr_value_4);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 338;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_assattr_value_5;
        PyObject *tmp_assattr_target_5;
        CHECK_OBJECT(par_allow_low_quality_matches);
        tmp_assattr_value_5 = par_allow_low_quality_matches;
        CHECK_OBJECT(par_self);
        tmp_assattr_target_5 = par_self;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_5, mod_consts[79], tmp_assattr_value_5);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 339;
            type_description_1 = "oooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_b8f1cae356a9fa95609fb79842f9982f, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_b8f1cae356a9fa95609fb79842f9982f->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_b8f1cae356a9fa95609fb79842f9982f, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_b8f1cae356a9fa95609fb79842f9982f,
        type_description_1,
        par_self,
        par_high_threshold,
        par_low_threshold,
        par_allow_low_quality_matches
    );


    // Release cached frame if used for exception.
    if (frame_b8f1cae356a9fa95609fb79842f9982f == cache_frame_b8f1cae356a9fa95609fb79842f9982f) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_b8f1cae356a9fa95609fb79842f9982f);
        cache_frame_b8f1cae356a9fa95609fb79842f9982f = NULL;
    }

    assertFrameObject(frame_b8f1cae356a9fa95609fb79842f9982f);

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
    CHECK_OBJECT(par_high_threshold);
    Py_DECREF(par_high_threshold);
    CHECK_OBJECT(par_low_threshold);
    Py_DECREF(par_low_threshold);
    CHECK_OBJECT(par_allow_low_quality_matches);
    Py_DECREF(par_allow_low_quality_matches);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_high_threshold);
    Py_DECREF(par_high_threshold);
    CHECK_OBJECT(par_low_threshold);
    Py_DECREF(par_low_threshold);
    CHECK_OBJECT(par_allow_low_quality_matches);
    Py_DECREF(par_allow_low_quality_matches);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__13___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_match_quality_matrix = python_pars[1];
    PyObject *var_matched_vals = NULL;
    PyObject *var_matches = NULL;
    PyObject *var_all_matches = NULL;
    PyObject *var_below_low_threshold = NULL;
    PyObject *var_between_thresholds = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_2f075e53c14c833cd2c57f19bd6d354b;
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
    bool tmp_result;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    static struct Nuitka_FrameObject *cache_frame_2f075e53c14c833cd2c57f19bd6d354b = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_2f075e53c14c833cd2c57f19bd6d354b)) {
        Py_XDECREF(cache_frame_2f075e53c14c833cd2c57f19bd6d354b);

#if _DEBUG_REFCOUNTS
        if (cache_frame_2f075e53c14c833cd2c57f19bd6d354b == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_2f075e53c14c833cd2c57f19bd6d354b = MAKE_FUNCTION_FRAME(codeobj_2f075e53c14c833cd2c57f19bd6d354b, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_2f075e53c14c833cd2c57f19bd6d354b->m_type_description == NULL);
    frame_2f075e53c14c833cd2c57f19bd6d354b = cache_frame_2f075e53c14c833cd2c57f19bd6d354b;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_2f075e53c14c833cd2c57f19bd6d354b);
    assert(Py_REFCNT(frame_2f075e53c14c833cd2c57f19bd6d354b) == 2);

    // Framed code:
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_match_quality_matrix);
        tmp_called_instance_1 = par_match_quality_matrix;
        frame_2f075e53c14c833cd2c57f19bd6d354b->m_frame.f_lineno = 352;
        tmp_cmp_expr_left_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[9]);
        if (tmp_cmp_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_1 = mod_consts[6];
        tmp_condition_result_1 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_left_1);
        if (tmp_condition_result_1 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 352;
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
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_cmp_expr_left_2;
        PyObject *tmp_cmp_expr_right_2;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_subscript_value_1;
        CHECK_OBJECT(par_match_quality_matrix);
        tmp_expression_value_2 = par_match_quality_matrix;
        tmp_expression_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[81]);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_subscript_value_1 = mod_consts[6];
        tmp_cmp_expr_left_2 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_1, tmp_subscript_value_1, 0);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_cmp_expr_left_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_cmp_expr_right_2 = mod_consts[6];
        tmp_condition_result_2 = RICH_COMPARE_EQ_NBOOL_OBJECT_LONG(tmp_cmp_expr_left_2, tmp_cmp_expr_right_2);
        Py_DECREF(tmp_cmp_expr_left_2);
        if (tmp_condition_result_2 == NUITKA_BOOL_EXCEPTION) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 354;
            type_description_1 = "ooooooo";
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
        PyObject *tmp_raise_type_1;
        PyObject *tmp_make_exception_arg_1;
        tmp_make_exception_arg_1 = mod_consts[82];
        frame_2f075e53c14c833cd2c57f19bd6d354b->m_frame.f_lineno = 355;
        tmp_raise_type_1 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_1);
        assert(!(tmp_raise_type_1 == NULL));
        exception_type = tmp_raise_type_1;
        exception_lineno = 355;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    goto branch_end_2;
    branch_no_2:;
    {
        PyObject *tmp_raise_type_2;
        PyObject *tmp_make_exception_arg_2;
        tmp_make_exception_arg_2 = mod_consts[83];
        frame_2f075e53c14c833cd2c57f19bd6d354b->m_frame.f_lineno = 357;
        tmp_raise_type_2 = CALL_FUNCTION_WITH_SINGLE_ARG(PyExc_ValueError, tmp_make_exception_arg_2);
        assert(!(tmp_raise_type_2 == NULL));
        exception_type = tmp_raise_type_2;
        exception_lineno = 357;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_end_2:;
    branch_no_1:;
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_3;
        CHECK_OBJECT(par_match_quality_matrix);
        tmp_expression_value_3 = par_match_quality_matrix;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_2f075e53c14c833cd2c57f19bd6d354b->m_frame.f_lineno = 361;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[47], 0), mod_consts[85]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 361;
            type_description_1 = "ooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 361;
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 361;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "ooooooo";
                    exception_lineno = 361;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[86];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "ooooooo";
            exception_lineno = 361;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_matched_vals == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_matched_vals = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var_matches == NULL);
        Py_INCREF(tmp_assign_source_5);
        var_matches = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        nuitka_bool tmp_condition_result_3;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_attribute_value_1;
        int tmp_truth_name_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_4 = par_self;
        tmp_attribute_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[79]);
        if (tmp_attribute_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 362;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_attribute_value_1);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_1);

            exception_lineno = 362;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_3 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_1);
        if (tmp_condition_result_3 == NUITKA_BOOL_TRUE) {
            goto branch_yes_3;
        } else {
            goto branch_no_3;
        }
    }
    branch_yes_3:;
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_instance_2;
        CHECK_OBJECT(var_matches);
        tmp_called_instance_2 = var_matches;
        frame_2f075e53c14c833cd2c57f19bd6d354b->m_frame.f_lineno = 363;
        tmp_assign_source_6 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[87]);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 363;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_all_matches == NULL);
        var_all_matches = tmp_assign_source_6;
    }
    goto branch_end_3;
    branch_no_3:;
    {
        PyObject *tmp_assign_source_7;
        tmp_assign_source_7 = Py_None;
        assert(var_all_matches == NULL);
        Py_INCREF(tmp_assign_source_7);
        var_all_matches = tmp_assign_source_7;
    }
    branch_end_3:;
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_cmp_expr_left_3;
        PyObject *tmp_cmp_expr_right_3;
        PyObject *tmp_expression_value_5;
        CHECK_OBJECT(var_matched_vals);
        tmp_cmp_expr_left_3 = var_matched_vals;
        CHECK_OBJECT(par_self);
        tmp_expression_value_5 = par_self;
        tmp_cmp_expr_right_3 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[78]);
        if (tmp_cmp_expr_right_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_8 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_3, tmp_cmp_expr_right_3);
        Py_DECREF(tmp_cmp_expr_right_3);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 368;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_below_low_threshold == NULL);
        var_below_low_threshold = tmp_assign_source_8;
    }
    {
        PyObject *tmp_assign_source_9;
        PyObject *tmp_bitand_expr_left_1;
        PyObject *tmp_bitand_expr_right_1;
        PyObject *tmp_cmp_expr_left_4;
        PyObject *tmp_cmp_expr_right_4;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_cmp_expr_left_5;
        PyObject *tmp_cmp_expr_right_5;
        PyObject *tmp_expression_value_7;
        CHECK_OBJECT(var_matched_vals);
        tmp_cmp_expr_left_4 = var_matched_vals;
        CHECK_OBJECT(par_self);
        tmp_expression_value_6 = par_self;
        tmp_cmp_expr_right_4 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[78]);
        if (tmp_cmp_expr_right_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_left_1 = RICH_COMPARE_GE_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_4, tmp_cmp_expr_right_4);
        Py_DECREF(tmp_cmp_expr_right_4);
        if (tmp_bitand_expr_left_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_matched_vals);
        tmp_cmp_expr_left_5 = var_matched_vals;
        CHECK_OBJECT(par_self);
        tmp_expression_value_7 = par_self;
        tmp_cmp_expr_right_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_7, mod_consts[77]);
        if (tmp_cmp_expr_right_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_1);

            exception_lineno = 369;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_bitand_expr_right_1 = RICH_COMPARE_LT_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_5, tmp_cmp_expr_right_5);
        Py_DECREF(tmp_cmp_expr_right_5);
        if (tmp_bitand_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_bitand_expr_left_1);

            exception_lineno = 369;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_9 = BINARY_OPERATION_BITAND_OBJECT_OBJECT_OBJECT(tmp_bitand_expr_left_1, tmp_bitand_expr_right_1);
        Py_DECREF(tmp_bitand_expr_left_1);
        Py_DECREF(tmp_bitand_expr_right_1);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 369;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_between_thresholds == NULL);
        var_between_thresholds = tmp_assign_source_9;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_8;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_self);
        tmp_expression_value_8 = par_self;
        tmp_ass_subvalue_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[74]);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_matches);
        tmp_ass_subscribed_1 = var_matches;
        CHECK_OBJECT(var_below_low_threshold);
        tmp_ass_subscript_1 = var_below_low_threshold;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 370;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        PyObject *tmp_ass_subvalue_2;
        PyObject *tmp_expression_value_9;
        PyObject *tmp_ass_subscribed_2;
        PyObject *tmp_ass_subscript_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_9 = par_self;
        tmp_ass_subvalue_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[76]);
        if (tmp_ass_subvalue_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_matches);
        tmp_ass_subscribed_2 = var_matches;
        CHECK_OBJECT(var_between_thresholds);
        tmp_ass_subscript_2 = var_between_thresholds;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_2, tmp_ass_subscript_2, tmp_ass_subvalue_2);
        Py_DECREF(tmp_ass_subvalue_2);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 371;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
    }
    {
        nuitka_bool tmp_condition_result_4;
        PyObject *tmp_expression_value_10;
        PyObject *tmp_attribute_value_2;
        int tmp_truth_name_2;
        CHECK_OBJECT(par_self);
        tmp_expression_value_10 = par_self;
        tmp_attribute_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_10, mod_consts[79]);
        if (tmp_attribute_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 373;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_truth_name_2 = CHECK_IF_TRUE(tmp_attribute_value_2);
        if (tmp_truth_name_2 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_attribute_value_2);

            exception_lineno = 373;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_4 = tmp_truth_name_2 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        Py_DECREF(tmp_attribute_value_2);
        if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
            goto branch_yes_4;
        } else {
            goto branch_no_4;
        }
    }
    branch_yes_4:;
    {
        bool tmp_condition_result_5;
        PyObject *tmp_cmp_expr_left_6;
        PyObject *tmp_cmp_expr_right_6;
        CHECK_OBJECT(var_all_matches);
        tmp_cmp_expr_left_6 = var_all_matches;
        tmp_cmp_expr_right_6 = Py_None;
        tmp_condition_result_5 = (tmp_cmp_expr_left_6 == tmp_cmp_expr_right_6) ? true : false;
        if (tmp_condition_result_5 != false) {
            goto branch_yes_5;
        } else {
            goto branch_no_5;
        }
    }
    branch_yes_5:;
    {
        PyObject *tmp_raise_type_3;
        tmp_raise_type_3 = PyExc_AssertionError;
        exception_type = tmp_raise_type_3;
        Py_INCREF(tmp_raise_type_3);
        exception_lineno = 374;
        RAISE_EXCEPTION_WITH_TYPE(&exception_type, &exception_value, &exception_tb);
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }
    branch_no_5:;
    {
        PyObject *tmp_called_instance_3;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_args_element_value_3;
        CHECK_OBJECT(par_self);
        tmp_called_instance_3 = par_self;
        CHECK_OBJECT(var_matches);
        tmp_args_element_value_1 = var_matches;
        CHECK_OBJECT(var_all_matches);
        tmp_args_element_value_2 = var_all_matches;
        CHECK_OBJECT(par_match_quality_matrix);
        tmp_args_element_value_3 = par_match_quality_matrix;
        frame_2f075e53c14c833cd2c57f19bd6d354b->m_frame.f_lineno = 375;
        {
            PyObject *call_args[] = {tmp_args_element_value_1, tmp_args_element_value_2, tmp_args_element_value_3};
            tmp_call_result_1 = CALL_METHOD_WITH_ARGS3(
                tmp_called_instance_3,
                mod_consts[88],
                call_args
            );
        }

        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 375;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    branch_no_4:;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_2f075e53c14c833cd2c57f19bd6d354b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_2f075e53c14c833cd2c57f19bd6d354b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_2f075e53c14c833cd2c57f19bd6d354b, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_2f075e53c14c833cd2c57f19bd6d354b,
        type_description_1,
        par_self,
        par_match_quality_matrix,
        var_matched_vals,
        var_matches,
        var_all_matches,
        var_below_low_threshold,
        var_between_thresholds
    );


    // Release cached frame if used for exception.
    if (frame_2f075e53c14c833cd2c57f19bd6d354b == cache_frame_2f075e53c14c833cd2c57f19bd6d354b) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_2f075e53c14c833cd2c57f19bd6d354b);
        cache_frame_2f075e53c14c833cd2c57f19bd6d354b = NULL;
    }

    assertFrameObject(frame_2f075e53c14c833cd2c57f19bd6d354b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_matches);
    tmp_return_value = var_matches;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_matched_vals);
    Py_DECREF(var_matched_vals);
    var_matched_vals = NULL;
    CHECK_OBJECT(var_matches);
    Py_DECREF(var_matches);
    var_matches = NULL;
    Py_XDECREF(var_all_matches);
    var_all_matches = NULL;
    CHECK_OBJECT(var_below_low_threshold);
    Py_DECREF(var_below_low_threshold);
    var_below_low_threshold = NULL;
    CHECK_OBJECT(var_between_thresholds);
    Py_DECREF(var_between_thresholds);
    var_between_thresholds = NULL;
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

    Py_XDECREF(var_matched_vals);
    var_matched_vals = NULL;
    Py_XDECREF(var_matches);
    var_matches = NULL;
    Py_XDECREF(var_all_matches);
    var_all_matches = NULL;
    Py_XDECREF(var_below_low_threshold);
    var_below_low_threshold = NULL;
    Py_XDECREF(var_between_thresholds);
    var_between_thresholds = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_match_quality_matrix);
    Py_DECREF(par_match_quality_matrix);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_match_quality_matrix);
    Py_DECREF(par_match_quality_matrix);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__14_set_low_quality_matches_(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_matches = python_pars[1];
    PyObject *par_all_matches = python_pars[2];
    PyObject *par_match_quality_matrix = python_pars[3];
    PyObject *var_highest_quality_foreach_gt = NULL;
    PyObject *var__ = NULL;
    PyObject *var_gt_pred_pairs_of_highest_quality = NULL;
    PyObject *var_pred_inds_to_update = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_04cd086ade5906252e92f0699ba4cf01;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_04cd086ade5906252e92f0699ba4cf01 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_04cd086ade5906252e92f0699ba4cf01)) {
        Py_XDECREF(cache_frame_04cd086ade5906252e92f0699ba4cf01);

#if _DEBUG_REFCOUNTS
        if (cache_frame_04cd086ade5906252e92f0699ba4cf01 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_04cd086ade5906252e92f0699ba4cf01 = MAKE_FUNCTION_FRAME(codeobj_04cd086ade5906252e92f0699ba4cf01, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_04cd086ade5906252e92f0699ba4cf01->m_type_description == NULL);
    frame_04cd086ade5906252e92f0699ba4cf01 = cache_frame_04cd086ade5906252e92f0699ba4cf01;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_04cd086ade5906252e92f0699ba4cf01);
    assert(Py_REFCNT(frame_04cd086ade5906252e92f0699ba4cf01) == 2);

    // Framed code:
    // Tried code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_match_quality_matrix);
        tmp_expression_value_1 = par_match_quality_matrix;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        frame_04cd086ade5906252e92f0699ba4cf01->m_frame.f_lineno = 388;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[24], 0), mod_consts[85]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooooooo";
            goto try_except_handler_2;
        }
        tmp_assign_source_1 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 388;
            type_description_1 = "oooooooo";
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
        tmp_assign_source_2 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_2 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 388;
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooooo";
            exception_lineno = 388;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_3;
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

                    type_description_1 = "oooooooo";
                    exception_lineno = 388;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[86];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooooo";
            exception_lineno = 388;
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
        PyObject *tmp_assign_source_4;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_4 = tmp_tuple_unpack_1__element_1;
        assert(var_highest_quality_foreach_gt == NULL);
        Py_INCREF(tmp_assign_source_4);
        var_highest_quality_foreach_gt = tmp_assign_source_4;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_2;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_5);
        var__ = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_cmp_expr_left_1;
        PyObject *tmp_cmp_expr_right_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_subscript_value_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[4]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_match_quality_matrix);
        tmp_cmp_expr_left_1 = par_match_quality_matrix;
        CHECK_OBJECT(var_highest_quality_foreach_gt);
        tmp_expression_value_3 = var_highest_quality_foreach_gt;
        tmp_subscript_value_1 = mod_consts[61];
        tmp_cmp_expr_right_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_1);
        if (tmp_cmp_expr_right_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 390;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        tmp_args_element_value_1 = RICH_COMPARE_EQ_OBJECT_OBJECT_OBJECT(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
        Py_DECREF(tmp_cmp_expr_right_1);
        if (tmp_args_element_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 390;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        frame_04cd086ade5906252e92f0699ba4cf01->m_frame.f_lineno = 390;
        tmp_assign_source_6 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 390;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_gt_pred_pairs_of_highest_quality == NULL);
        var_gt_pred_pairs_of_highest_quality = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_subscript_value_2;
        CHECK_OBJECT(var_gt_pred_pairs_of_highest_quality);
        tmp_expression_value_4 = var_gt_pred_pairs_of_highest_quality;
        tmp_subscript_value_2 = mod_consts[5];
        tmp_assign_source_7 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_4, tmp_subscript_value_2, 1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 405;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_pred_inds_to_update == NULL);
        var_pred_inds_to_update = tmp_assign_source_7;
    }
    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_subscript_value_3;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        CHECK_OBJECT(par_all_matches);
        tmp_expression_value_5 = par_all_matches;
        CHECK_OBJECT(var_pred_inds_to_update);
        tmp_subscript_value_3 = var_pred_inds_to_update;
        tmp_ass_subvalue_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_5, tmp_subscript_value_3);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_matches);
        tmp_ass_subscribed_1 = par_matches;
        CHECK_OBJECT(var_pred_inds_to_update);
        tmp_ass_subscript_1 = var_pred_inds_to_update;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 406;
            type_description_1 = "oooooooo";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_04cd086ade5906252e92f0699ba4cf01, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_04cd086ade5906252e92f0699ba4cf01->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_04cd086ade5906252e92f0699ba4cf01, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_04cd086ade5906252e92f0699ba4cf01,
        type_description_1,
        par_self,
        par_matches,
        par_all_matches,
        par_match_quality_matrix,
        var_highest_quality_foreach_gt,
        var__,
        var_gt_pred_pairs_of_highest_quality,
        var_pred_inds_to_update
    );


    // Release cached frame if used for exception.
    if (frame_04cd086ade5906252e92f0699ba4cf01 == cache_frame_04cd086ade5906252e92f0699ba4cf01) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_04cd086ade5906252e92f0699ba4cf01);
        cache_frame_04cd086ade5906252e92f0699ba4cf01 = NULL;
    }

    assertFrameObject(frame_04cd086ade5906252e92f0699ba4cf01);

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
    CHECK_OBJECT(var_highest_quality_foreach_gt);
    Py_DECREF(var_highest_quality_foreach_gt);
    var_highest_quality_foreach_gt = NULL;
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    CHECK_OBJECT(var_gt_pred_pairs_of_highest_quality);
    Py_DECREF(var_gt_pred_pairs_of_highest_quality);
    var_gt_pred_pairs_of_highest_quality = NULL;
    CHECK_OBJECT(var_pred_inds_to_update);
    Py_DECREF(var_pred_inds_to_update);
    var_pred_inds_to_update = NULL;
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

    Py_XDECREF(var_highest_quality_foreach_gt);
    var_highest_quality_foreach_gt = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_gt_pred_pairs_of_highest_quality);
    var_gt_pred_pairs_of_highest_quality = NULL;
    Py_XDECREF(var_pred_inds_to_update);
    var_pred_inds_to_update = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_matches);
    Py_DECREF(par_matches);
    CHECK_OBJECT(par_all_matches);
    Py_DECREF(par_all_matches);
    CHECK_OBJECT(par_match_quality_matrix);
    Py_DECREF(par_match_quality_matrix);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_matches);
    Py_DECREF(par_matches);
    CHECK_OBJECT(par_all_matches);
    Py_DECREF(par_all_matches);
    CHECK_OBJECT(par_match_quality_matrix);
    Py_DECREF(par_match_quality_matrix);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__15___init__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_threshold = python_pars[1];
    struct Nuitka_FrameObject *frame_dcec056c8999c298b3e21882917fd75a;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    static struct Nuitka_FrameObject *cache_frame_dcec056c8999c298b3e21882917fd75a = NULL;
    PyObject *tmp_return_value = NULL;

    // Actual function body.
    if (isFrameUnusable(cache_frame_dcec056c8999c298b3e21882917fd75a)) {
        Py_XDECREF(cache_frame_dcec056c8999c298b3e21882917fd75a);

#if _DEBUG_REFCOUNTS
        if (cache_frame_dcec056c8999c298b3e21882917fd75a == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_dcec056c8999c298b3e21882917fd75a = MAKE_FUNCTION_FRAME(codeobj_dcec056c8999c298b3e21882917fd75a, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_dcec056c8999c298b3e21882917fd75a->m_type_description == NULL);
    frame_dcec056c8999c298b3e21882917fd75a = cache_frame_dcec056c8999c298b3e21882917fd75a;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_dcec056c8999c298b3e21882917fd75a);
    assert(Py_REFCNT(frame_dcec056c8999c298b3e21882917fd75a) == 2);

    // Framed code:
    {
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_call_result_1;
        PyObject *tmp_args_value_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kwargs_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 411;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_expression_value_1 = BUILTIN_SUPER0(moduledict_torchvision$models$detection$_utils, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_expression_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[92]);
        Py_DECREF(tmp_expression_value_1);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_threshold);
        tmp_tuple_element_1 = par_threshold;
        tmp_args_value_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_1);
        CHECK_OBJECT(par_threshold);
        tmp_tuple_element_1 = par_threshold;
        PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_1);
        tmp_kwargs_value_1 = DICT_COPY(mod_consts[93]);
        frame_dcec056c8999c298b3e21882917fd75a->m_frame.f_lineno = 411;
        tmp_call_result_1 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
        Py_DECREF(tmp_called_value_1);
        Py_DECREF(tmp_args_value_1);
        Py_DECREF(tmp_kwargs_value_1);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 411;
            type_description_1 = "ooc";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_dcec056c8999c298b3e21882917fd75a, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_dcec056c8999c298b3e21882917fd75a->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_dcec056c8999c298b3e21882917fd75a, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_dcec056c8999c298b3e21882917fd75a,
        type_description_1,
        par_self,
        par_threshold,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_dcec056c8999c298b3e21882917fd75a == cache_frame_dcec056c8999c298b3e21882917fd75a) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_dcec056c8999c298b3e21882917fd75a);
        cache_frame_dcec056c8999c298b3e21882917fd75a = NULL;
    }

    assertFrameObject(frame_dcec056c8999c298b3e21882917fd75a);

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
    CHECK_OBJECT(par_threshold);
    Py_DECREF(par_threshold);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_threshold);
    Py_DECREF(par_threshold);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__16___call__(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_self = python_pars[0];
    PyObject *par_match_quality_matrix = python_pars[1];
    PyObject *var_matches = NULL;
    PyObject *var__ = NULL;
    PyObject *var_highest_quality_pred_foreach_gt = NULL;
    PyObject *tmp_tuple_unpack_1__element_1 = NULL;
    PyObject *tmp_tuple_unpack_1__element_2 = NULL;
    PyObject *tmp_tuple_unpack_1__source_iter = NULL;
    struct Nuitka_FrameObject *frame_6c6fd57aef600508da7f2e47fa4c9832;
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
    bool tmp_result;
    static struct Nuitka_FrameObject *cache_frame_6c6fd57aef600508da7f2e47fa4c9832 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_6c6fd57aef600508da7f2e47fa4c9832)) {
        Py_XDECREF(cache_frame_6c6fd57aef600508da7f2e47fa4c9832);

#if _DEBUG_REFCOUNTS
        if (cache_frame_6c6fd57aef600508da7f2e47fa4c9832 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_6c6fd57aef600508da7f2e47fa4c9832 = MAKE_FUNCTION_FRAME(codeobj_6c6fd57aef600508da7f2e47fa4c9832, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_6c6fd57aef600508da7f2e47fa4c9832->m_type_description == NULL);
    frame_6c6fd57aef600508da7f2e47fa4c9832 = cache_frame_6c6fd57aef600508da7f2e47fa4c9832;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_6c6fd57aef600508da7f2e47fa4c9832);
    assert(Py_REFCNT(frame_6c6fd57aef600508da7f2e47fa4c9832) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_called_instance_1;
        PyObject *tmp_type_arg_value_1;
        PyObject *tmp_object_arg_value_1;
        PyObject *tmp_args_element_value_1;
        if (Nuitka_Cell_GET(self->m_closure[0]) == NULL) {

            FORMAT_UNBOUND_CLOSURE_ERROR(&exception_type, &exception_value, mod_consts[91]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 414;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }

        tmp_type_arg_value_1 = Nuitka_Cell_GET(self->m_closure[0]);
        CHECK_OBJECT(par_self);
        tmp_object_arg_value_1 = par_self;
        tmp_called_instance_1 = BUILTIN_SUPER0(moduledict_torchvision$models$detection$_utils, tmp_type_arg_value_1, tmp_object_arg_value_1);
        if (tmp_called_instance_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(par_match_quality_matrix);
        tmp_args_element_value_1 = par_match_quality_matrix;
        frame_6c6fd57aef600508da7f2e47fa4c9832->m_frame.f_lineno = 414;
        tmp_assign_source_1 = CALL_METHOD_WITH_SINGLE_ARG(tmp_called_instance_1, mod_consts[94], tmp_args_element_value_1);
        Py_DECREF(tmp_called_instance_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 414;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        assert(var_matches == NULL);
        var_matches = tmp_assign_source_1;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_match_quality_matrix);
        tmp_expression_value_1 = par_match_quality_matrix;
        tmp_called_value_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[84]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        frame_6c6fd57aef600508da7f2e47fa4c9832->m_frame.f_lineno = 417;
        tmp_iter_arg_1 = CALL_FUNCTION_WITH_NO_ARGS_KWSPLIT(tmp_called_value_1, &PyTuple_GET_ITEM(mod_consts[24], 0), mod_consts[85]);
        Py_DECREF(tmp_called_value_1);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
        }
        tmp_assign_source_2 = MAKE_UNPACK_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 417;
            type_description_1 = "oooooc";
            goto try_except_handler_2;
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
        tmp_assign_source_3 = UNPACK_NEXT(tmp_unpack_1, 0, 2);
        if (tmp_assign_source_3 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooc";
            exception_lineno = 417;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_1 == NULL);
        tmp_tuple_unpack_1__element_1 = tmp_assign_source_3;
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_unpack_2;
        CHECK_OBJECT(tmp_tuple_unpack_1__source_iter);
        tmp_unpack_2 = tmp_tuple_unpack_1__source_iter;
        tmp_assign_source_4 = UNPACK_NEXT(tmp_unpack_2, 1, 2);
        if (tmp_assign_source_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "oooooc";
            exception_lineno = 417;
            goto try_except_handler_3;
        }
        assert(tmp_tuple_unpack_1__element_2 == NULL);
        tmp_tuple_unpack_1__element_2 = tmp_assign_source_4;
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

                    type_description_1 = "oooooc";
                    exception_lineno = 417;
                    goto try_except_handler_3;
                }
            }
        } else {
            Py_DECREF(tmp_iterator_attempt);

            exception_type = PyExc_ValueError;
            Py_INCREF(PyExc_ValueError);
            exception_value = mod_consts[86];
            Py_INCREF(exception_value);
            exception_tb = NULL;

            type_description_1 = "oooooc";
            exception_lineno = 417;
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
        PyObject *tmp_assign_source_5;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_1);
        tmp_assign_source_5 = tmp_tuple_unpack_1__element_1;
        assert(var__ == NULL);
        Py_INCREF(tmp_assign_source_5);
        var__ = tmp_assign_source_5;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_1);
    tmp_tuple_unpack_1__element_1 = NULL;

    {
        PyObject *tmp_assign_source_6;
        CHECK_OBJECT(tmp_tuple_unpack_1__element_2);
        tmp_assign_source_6 = tmp_tuple_unpack_1__element_2;
        assert(var_highest_quality_pred_foreach_gt == NULL);
        Py_INCREF(tmp_assign_source_6);
        var_highest_quality_pred_foreach_gt = tmp_assign_source_6;
    }
    Py_XDECREF(tmp_tuple_unpack_1__element_2);
    tmp_tuple_unpack_1__element_2 = NULL;

    {
        PyObject *tmp_ass_subvalue_1;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_2;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_called_instance_2;
        PyObject *tmp_kw_call_dict_value_0_1;
        PyObject *tmp_expression_value_3;
        PyObject *tmp_kw_call_dict_value_1_1;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_ass_subscribed_1;
        PyObject *tmp_ass_subscript_1;
        tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_2 == NULL)) {
            tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_2, mod_consts[95]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_highest_quality_pred_foreach_gt);
        tmp_called_instance_2 = var_highest_quality_pred_foreach_gt;
        frame_6c6fd57aef600508da7f2e47fa4c9832->m_frame.f_lineno = 419;
        tmp_kw_call_arg_value_0_1 = CALL_METHOD_WITH_SINGLE_ARG(
            tmp_called_instance_2,
            mod_consts[46],
            PyTuple_GET_ITEM(mod_consts[47], 0)
        );

        if (tmp_kw_call_arg_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 419;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_3 == NULL)) {
            tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 419;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        tmp_kw_call_dict_value_0_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_3, mod_consts[96]);
        if (tmp_kw_call_dict_value_0_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);

            exception_lineno = 419;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_highest_quality_pred_foreach_gt);
        tmp_expression_value_4 = var_highest_quality_pred_foreach_gt;
        tmp_kw_call_dict_value_1_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
        if (tmp_kw_call_dict_value_1_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);
            Py_DECREF(tmp_kw_call_arg_value_0_1);
            Py_DECREF(tmp_kw_call_dict_value_0_1);

            exception_lineno = 419;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        frame_6c6fd57aef600508da7f2e47fa4c9832->m_frame.f_lineno = 418;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[2] = {tmp_kw_call_dict_value_0_1, tmp_kw_call_dict_value_1_1};
            tmp_ass_subvalue_1 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[41]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_0_1);
        Py_DECREF(tmp_kw_call_dict_value_1_1);
        if (tmp_ass_subvalue_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
        CHECK_OBJECT(var_matches);
        tmp_ass_subscribed_1 = var_matches;
        CHECK_OBJECT(var_highest_quality_pred_foreach_gt);
        tmp_ass_subscript_1 = var_highest_quality_pred_foreach_gt;
        tmp_result = SET_SUBSCRIPT(tmp_ass_subscribed_1, tmp_ass_subscript_1, tmp_ass_subvalue_1);
        Py_DECREF(tmp_ass_subvalue_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 418;
            type_description_1 = "oooooc";
            goto frame_exception_exit_1;
        }
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_6c6fd57aef600508da7f2e47fa4c9832, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_6c6fd57aef600508da7f2e47fa4c9832->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_6c6fd57aef600508da7f2e47fa4c9832, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_6c6fd57aef600508da7f2e47fa4c9832,
        type_description_1,
        par_self,
        par_match_quality_matrix,
        var_matches,
        var__,
        var_highest_quality_pred_foreach_gt,
        self->m_closure[0]
    );


    // Release cached frame if used for exception.
    if (frame_6c6fd57aef600508da7f2e47fa4c9832 == cache_frame_6c6fd57aef600508da7f2e47fa4c9832) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_6c6fd57aef600508da7f2e47fa4c9832);
        cache_frame_6c6fd57aef600508da7f2e47fa4c9832 = NULL;
    }

    assertFrameObject(frame_6c6fd57aef600508da7f2e47fa4c9832);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    CHECK_OBJECT(var_matches);
    tmp_return_value = var_matches;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_matches);
    Py_DECREF(var_matches);
    var_matches = NULL;
    CHECK_OBJECT(var__);
    Py_DECREF(var__);
    var__ = NULL;
    CHECK_OBJECT(var_highest_quality_pred_foreach_gt);
    Py_DECREF(var_highest_quality_pred_foreach_gt);
    var_highest_quality_pred_foreach_gt = NULL;
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

    Py_XDECREF(var_matches);
    var_matches = NULL;
    Py_XDECREF(var__);
    var__ = NULL;
    Py_XDECREF(var_highest_quality_pred_foreach_gt);
    var_highest_quality_pred_foreach_gt = NULL;
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
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_match_quality_matrix);
    Py_DECREF(par_match_quality_matrix);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_self);
    Py_DECREF(par_self);
    CHECK_OBJECT(par_match_quality_matrix);
    Py_DECREF(par_match_quality_matrix);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__17_overwrite_eps(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    PyObject *par_eps = python_pars[1];
    PyObject *var_module = NULL;
    PyObject *tmp_for_loop_1__for_iterator = NULL;
    PyObject *tmp_for_loop_1__iter_value = NULL;
    struct Nuitka_FrameObject *frame_97a9b5b506e7ed97cb8b12b6406c75e0;
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
    static struct Nuitka_FrameObject *cache_frame_97a9b5b506e7ed97cb8b12b6406c75e0 = NULL;
    PyObject *tmp_return_value = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_97a9b5b506e7ed97cb8b12b6406c75e0)) {
        Py_XDECREF(cache_frame_97a9b5b506e7ed97cb8b12b6406c75e0);

#if _DEBUG_REFCOUNTS
        if (cache_frame_97a9b5b506e7ed97cb8b12b6406c75e0 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_97a9b5b506e7ed97cb8b12b6406c75e0 = MAKE_FUNCTION_FRAME(codeobj_97a9b5b506e7ed97cb8b12b6406c75e0, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_97a9b5b506e7ed97cb8b12b6406c75e0->m_type_description == NULL);
    frame_97a9b5b506e7ed97cb8b12b6406c75e0 = cache_frame_97a9b5b506e7ed97cb8b12b6406c75e0;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_97a9b5b506e7ed97cb8b12b6406c75e0);
    assert(Py_REFCNT(frame_97a9b5b506e7ed97cb8b12b6406c75e0) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_iter_arg_1;
        PyObject *tmp_called_instance_1;
        CHECK_OBJECT(par_model);
        tmp_called_instance_1 = par_model;
        frame_97a9b5b506e7ed97cb8b12b6406c75e0->m_frame.f_lineno = 438;
        tmp_iter_arg_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[97]);
        if (tmp_iter_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooo";
            goto frame_exception_exit_1;
        }
        tmp_assign_source_1 = MAKE_ITERATOR(tmp_iter_arg_1);
        Py_DECREF(tmp_iter_arg_1);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 438;
            type_description_1 = "ooo";
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
                type_description_1 = "ooo";
                exception_lineno = 438;
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
            PyObject *old = var_module;
            var_module = tmp_assign_source_3;
            Py_INCREF(var_module);
            Py_XDECREF(old);
        }

    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        CHECK_OBJECT(var_module);
        tmp_isinstance_inst_1 = var_module;
        tmp_isinstance_cls_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[98]);

        if (unlikely(tmp_isinstance_cls_1 == NULL)) {
            tmp_isinstance_cls_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[98]);
        }

        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 439;
            type_description_1 = "ooo";
            goto try_except_handler_2;
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
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        if (par_eps == NULL) {

            FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[99]);
            exception_tb = NULL;
            NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
            CHAIN_EXCEPTION(exception_value);

            exception_lineno = 440;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }

        tmp_assattr_value_1 = par_eps;
        CHECK_OBJECT(var_module);
        tmp_assattr_target_1 = var_module;
        tmp_result = SET_ATTRIBUTE(tmp_assattr_target_1, mod_consts[99], tmp_assattr_value_1);
        if (tmp_result == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 440;
            type_description_1 = "ooo";
            goto try_except_handler_2;
        }
    }
    branch_no_1:;
    if (CONSIDER_THREADING() == false) {
        assert(ERROR_OCCURRED());

        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


        exception_lineno = 438;
        type_description_1 = "ooo";
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


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_97a9b5b506e7ed97cb8b12b6406c75e0, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_97a9b5b506e7ed97cb8b12b6406c75e0->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_97a9b5b506e7ed97cb8b12b6406c75e0, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_97a9b5b506e7ed97cb8b12b6406c75e0,
        type_description_1,
        par_model,
        par_eps,
        var_module
    );


    // Release cached frame if used for exception.
    if (frame_97a9b5b506e7ed97cb8b12b6406c75e0 == cache_frame_97a9b5b506e7ed97cb8b12b6406c75e0) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_97a9b5b506e7ed97cb8b12b6406c75e0);
        cache_frame_97a9b5b506e7ed97cb8b12b6406c75e0 = NULL;
    }

    assertFrameObject(frame_97a9b5b506e7ed97cb8b12b6406c75e0);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_1:;
    Py_XDECREF(tmp_for_loop_1__iter_value);
    tmp_for_loop_1__iter_value = NULL;
    CHECK_OBJECT(tmp_for_loop_1__for_iterator);
    Py_DECREF(tmp_for_loop_1__for_iterator);
    tmp_for_loop_1__for_iterator = NULL;
    tmp_return_value = Py_None;
    Py_INCREF(tmp_return_value);
    goto try_return_handler_1;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    Py_XDECREF(var_module);
    var_module = NULL;
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

    Py_XDECREF(var_module);
    var_module = NULL;
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
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_eps);
    Py_DECREF(par_eps);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}


static PyObject *impl_torchvision$models$detection$_utils$$$function__18_retrieve_out_channels(struct Nuitka_FunctionObject const *self, PyObject **python_pars) {
    // Preserve error status for checks
#ifndef __NUITKA_NO_ASSERT__
    NUITKA_MAY_BE_UNUSED bool had_error = ERROR_OCCURRED();
#endif

    // Local variable declarations.
    PyObject *par_model = python_pars[0];
    PyObject *par_size = python_pars[1];
    PyObject *var_in_training = NULL;
    PyObject *var_device = NULL;
    PyObject *var_tmp_img = NULL;
    PyObject *var_features = NULL;
    PyObject *var_out_channels = NULL;
    PyObject *outline_0_var_x = NULL;
    PyObject *tmp_listcomp_1__$0 = NULL;
    PyObject *tmp_listcomp_1__contraction = NULL;
    PyObject *tmp_listcomp_1__iter_value_0 = NULL;
    PyObject *tmp_with_1__enter = NULL;
    PyObject *tmp_with_1__exit = NULL;
    nuitka_bool tmp_with_1__indicator = NUITKA_BOOL_UNASSIGNED;
    PyObject *tmp_with_1__source = NULL;
    struct Nuitka_FrameObject *frame_0ef582c069735c1e928791b36f12bf67;
    NUITKA_MAY_BE_UNUSED char const *type_description_1 = NULL;
    PyObject *exception_type = NULL;
    PyObject *exception_value = NULL;
    PyTracebackObject *exception_tb = NULL;
    NUITKA_MAY_BE_UNUSED int exception_lineno = 0;
    NUITKA_MAY_BE_UNUSED nuitka_void tmp_unused;
    int tmp_res;
    struct Nuitka_FrameObject *frame_3155a96ce3cca02f61b960c6eb459abc_2;
    NUITKA_MAY_BE_UNUSED char const *type_description_2 = NULL;
    bool tmp_result;
    PyObject *exception_keeper_type_1;
    PyObject *exception_keeper_value_1;
    PyTracebackObject *exception_keeper_tb_1;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_1;
    static struct Nuitka_FrameObject *cache_frame_3155a96ce3cca02f61b960c6eb459abc_2 = NULL;
    PyObject *exception_keeper_type_2;
    PyObject *exception_keeper_value_2;
    PyTracebackObject *exception_keeper_tb_2;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_2;
    PyObject *exception_keeper_type_3;
    PyObject *exception_keeper_value_3;
    PyTracebackObject *exception_keeper_tb_3;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_3;
    struct Nuitka_ExceptionStackItem exception_preserved_1;
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
    PyObject *tmp_return_value = NULL;
    static struct Nuitka_FrameObject *cache_frame_0ef582c069735c1e928791b36f12bf67 = NULL;
    PyObject *exception_keeper_type_7;
    PyObject *exception_keeper_value_7;
    PyTracebackObject *exception_keeper_tb_7;
    NUITKA_MAY_BE_UNUSED int exception_keeper_lineno_7;

    // Actual function body.
    // Tried code:
    if (isFrameUnusable(cache_frame_0ef582c069735c1e928791b36f12bf67)) {
        Py_XDECREF(cache_frame_0ef582c069735c1e928791b36f12bf67);

#if _DEBUG_REFCOUNTS
        if (cache_frame_0ef582c069735c1e928791b36f12bf67 == NULL) {
            count_active_frame_cache_instances += 1;
        } else {
            count_released_frame_cache_instances += 1;
        }
        count_allocated_frame_cache_instances += 1;
#endif
        cache_frame_0ef582c069735c1e928791b36f12bf67 = MAKE_FUNCTION_FRAME(codeobj_0ef582c069735c1e928791b36f12bf67, module_torchvision$models$detection$_utils, sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *)+sizeof(void *));
#if _DEBUG_REFCOUNTS
    } else {
        count_hit_frame_cache_instances += 1;
#endif
    }

    assert(cache_frame_0ef582c069735c1e928791b36f12bf67->m_type_description == NULL);
    frame_0ef582c069735c1e928791b36f12bf67 = cache_frame_0ef582c069735c1e928791b36f12bf67;

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_0ef582c069735c1e928791b36f12bf67);
    assert(Py_REFCNT(frame_0ef582c069735c1e928791b36f12bf67) == 2);

    // Framed code:
    {
        PyObject *tmp_assign_source_1;
        PyObject *tmp_expression_value_1;
        CHECK_OBJECT(par_model);
        tmp_expression_value_1 = par_model;
        tmp_assign_source_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_1, mod_consts[101]);
        if (tmp_assign_source_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 455;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        assert(var_in_training == NULL);
        var_in_training = tmp_assign_source_1;
    }
    {
        PyObject *tmp_called_instance_1;
        PyObject *tmp_call_result_1;
        CHECK_OBJECT(par_model);
        tmp_called_instance_1 = par_model;
        frame_0ef582c069735c1e928791b36f12bf67->m_frame.f_lineno = 456;
        tmp_call_result_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_1, mod_consts[102]);
        if (tmp_call_result_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 456;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_1);
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_2;
        PyObject *tmp_called_instance_2;
        tmp_called_instance_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_called_instance_2 == NULL)) {
            tmp_called_instance_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_called_instance_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_0ef582c069735c1e928791b36f12bf67->m_frame.f_lineno = 458;
        tmp_assign_source_2 = CALL_METHOD_NO_ARGS(tmp_called_instance_2, mod_consts[103]);
        if (tmp_assign_source_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        assert(tmp_with_1__source == NULL);
        tmp_with_1__source = tmp_assign_source_2;
    }
    {
        PyObject *tmp_assign_source_3;
        PyObject *tmp_called_value_1;
        PyObject *tmp_expression_value_2;
        CHECK_OBJECT(tmp_with_1__source);
        tmp_expression_value_2 = tmp_with_1__source;
        tmp_called_value_1 = LOOKUP_SPECIAL(tmp_expression_value_2, mod_consts[104]);
        if (tmp_called_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        frame_0ef582c069735c1e928791b36f12bf67->m_frame.f_lineno = 458;
        tmp_assign_source_3 = CALL_FUNCTION_NO_ARGS(tmp_called_value_1);
        Py_DECREF(tmp_called_value_1);
        if (tmp_assign_source_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ooooooo";
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
        tmp_assign_source_4 = LOOKUP_SPECIAL(tmp_expression_value_3, mod_consts[105]);
        if (tmp_assign_source_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 458;
            type_description_1 = "ooooooo";
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
    // Tried code:
    // Tried code:
    {
        PyObject *tmp_assign_source_6;
        PyObject *tmp_expression_value_4;
        PyObject *tmp_value_value_1;
        PyObject *tmp_called_instance_3;
        CHECK_OBJECT(par_model);
        tmp_called_instance_3 = par_model;
        frame_0ef582c069735c1e928791b36f12bf67->m_frame.f_lineno = 460;
        tmp_value_value_1 = CALL_METHOD_NO_ARGS(tmp_called_instance_3, mod_consts[106]);
        if (tmp_value_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_expression_value_4 = ITERATOR_NEXT(tmp_value_value_1);
        Py_DECREF(tmp_value_value_1);
        if (tmp_expression_value_4 == NULL) {
            if (!ERROR_OCCURRED()) {
                exception_type = PyExc_StopIteration;
                Py_INCREF(exception_type);
                exception_value = NULL;
                exception_tb = NULL;
            } else {
                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            }


            type_description_1 = "ooooooo";
            exception_lineno = 460;
            goto try_except_handler_4;
        }
        tmp_assign_source_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_4, mod_consts[11]);
        Py_DECREF(tmp_expression_value_4);
        if (tmp_assign_source_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 460;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(var_device == NULL);
        var_device = tmp_assign_source_6;
    }
    {
        PyObject *tmp_assign_source_7;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_kw_call_arg_value_0_1;
        PyObject *tmp_tuple_element_1;
        PyObject *tmp_kw_call_dict_value_0_1;
        tmp_expression_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_5 == NULL)) {
            tmp_expression_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[107]);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_tuple_element_1 = mod_consts[5];
        tmp_kw_call_arg_value_0_1 = MAKE_TUPLE_EMPTY(4);
        {
            PyObject *tmp_expression_value_6;
            PyObject *tmp_subscript_value_1;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_2;
            PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_1, 0, tmp_tuple_element_1);
            tmp_tuple_element_1 = mod_consts[21];
            PyTuple_SET_ITEM0(tmp_kw_call_arg_value_0_1, 1, tmp_tuple_element_1);
            CHECK_OBJECT(par_size);
            tmp_expression_value_6 = par_size;
            tmp_subscript_value_1 = mod_consts[5];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_6, tmp_subscript_value_1, 1);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 461;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_1, 2, tmp_tuple_element_1);
            CHECK_OBJECT(par_size);
            tmp_expression_value_7 = par_size;
            tmp_subscript_value_2 = mod_consts[6];
            tmp_tuple_element_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_7, tmp_subscript_value_2, 0);
            if (tmp_tuple_element_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 461;
                type_description_1 = "ooooooo";
                goto tuple_build_exception_1;
            }
            PyTuple_SET_ITEM(tmp_kw_call_arg_value_0_1, 3, tmp_tuple_element_1);
        }
        goto tuple_build_noexception_1;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_1:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        goto try_except_handler_4;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_1:;
        CHECK_OBJECT(var_device);
        tmp_kw_call_dict_value_0_1 = var_device;
        frame_0ef582c069735c1e928791b36f12bf67->m_frame.f_lineno = 461;
        {
            PyObject *args[] = {tmp_kw_call_arg_value_0_1};
            PyObject *kw_values[1] = {tmp_kw_call_dict_value_0_1};
            tmp_assign_source_7 = CALL_FUNCTION_WITH_ARGS1_KWSPLIT(tmp_called_value_2, args, kw_values, mod_consts[12]);
        }

        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_kw_call_arg_value_0_1);
        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 461;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(var_tmp_img == NULL);
        var_tmp_img = tmp_assign_source_7;
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_called_value_3;
        PyObject *tmp_args_element_value_1;
        CHECK_OBJECT(par_model);
        tmp_called_value_3 = par_model;
        CHECK_OBJECT(var_tmp_img);
        tmp_args_element_value_1 = var_tmp_img;
        frame_0ef582c069735c1e928791b36f12bf67->m_frame.f_lineno = 462;
        tmp_assign_source_8 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_3, tmp_args_element_value_1);
        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 462;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        assert(var_features == NULL);
        var_features = tmp_assign_source_8;
    }
    {
        nuitka_bool tmp_condition_result_1;
        PyObject *tmp_isinstance_inst_1;
        PyObject *tmp_isinstance_cls_1;
        PyObject *tmp_expression_value_8;
        CHECK_OBJECT(var_features);
        tmp_isinstance_inst_1 = var_features;
        tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_8 == NULL)) {
            tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_isinstance_cls_1 = LOOKUP_ATTRIBUTE(tmp_expression_value_8, mod_consts[45]);
        if (tmp_isinstance_cls_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_res = PyObject_IsInstance(tmp_isinstance_inst_1, tmp_isinstance_cls_1);
        Py_DECREF(tmp_isinstance_cls_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 463;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_called_value_4;
        PyObject *tmp_args_element_value_2;
        PyObject *tmp_list_element_1;
        PyObject *tmp_tuple_element_2;
        tmp_called_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[108]);

        if (unlikely(tmp_called_value_4 == NULL)) {
            tmp_called_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[108]);
        }

        if (tmp_called_value_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        tmp_tuple_element_2 = mod_consts[109];
        tmp_list_element_1 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_list_element_1, 0, tmp_tuple_element_2);
        CHECK_OBJECT(var_features);
        tmp_tuple_element_2 = var_features;
        PyTuple_SET_ITEM0(tmp_list_element_1, 1, tmp_tuple_element_2);
        tmp_args_element_value_2 = MAKE_LIST_EMPTY(1);
        PyList_SET_ITEM(tmp_args_element_value_2, 0, tmp_list_element_1);
        frame_0ef582c069735c1e928791b36f12bf67->m_frame.f_lineno = 464;
        tmp_assign_source_9 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_4, tmp_args_element_value_2);
        Py_DECREF(tmp_args_element_value_2);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 464;
            type_description_1 = "ooooooo";
            goto try_except_handler_4;
        }
        {
            PyObject *old = var_features;
            assert(old != NULL);
            var_features = tmp_assign_source_9;
            Py_DECREF(old);
        }

    }
    branch_no_1:;
    {
        PyObject *tmp_assign_source_10;
        // Tried code:
        {
            PyObject *tmp_assign_source_11;
            PyObject *tmp_iter_arg_1;
            PyObject *tmp_called_value_5;
            PyObject *tmp_expression_value_9;
            CHECK_OBJECT(var_features);
            tmp_expression_value_9 = var_features;
            tmp_called_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_9, mod_consts[110]);
            if (tmp_called_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }
            frame_0ef582c069735c1e928791b36f12bf67->m_frame.f_lineno = 465;
            tmp_iter_arg_1 = CALL_FUNCTION_NO_ARGS(tmp_called_value_5);
            Py_DECREF(tmp_called_value_5);
            if (tmp_iter_arg_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }
            tmp_assign_source_11 = MAKE_ITERATOR(tmp_iter_arg_1);
            Py_DECREF(tmp_iter_arg_1);
            if (tmp_assign_source_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_1 = "ooooooo";
                goto try_except_handler_5;
            }
            assert(tmp_listcomp_1__$0 == NULL);
            tmp_listcomp_1__$0 = tmp_assign_source_11;
        }
        {
            PyObject *tmp_assign_source_12;
            tmp_assign_source_12 = MAKE_LIST_EMPTY(0);
            assert(tmp_listcomp_1__contraction == NULL);
            tmp_listcomp_1__contraction = tmp_assign_source_12;
        }
        if (isFrameUnusable(cache_frame_3155a96ce3cca02f61b960c6eb459abc_2)) {
            Py_XDECREF(cache_frame_3155a96ce3cca02f61b960c6eb459abc_2);

#if _DEBUG_REFCOUNTS
            if (cache_frame_3155a96ce3cca02f61b960c6eb459abc_2 == NULL) {
                count_active_frame_cache_instances += 1;
            } else {
                count_released_frame_cache_instances += 1;
            }
            count_allocated_frame_cache_instances += 1;
#endif
            cache_frame_3155a96ce3cca02f61b960c6eb459abc_2 = MAKE_FUNCTION_FRAME(codeobj_3155a96ce3cca02f61b960c6eb459abc, module_torchvision$models$detection$_utils, sizeof(void *));
#if _DEBUG_REFCOUNTS
        } else {
            count_hit_frame_cache_instances += 1;
#endif
        }

        assert(cache_frame_3155a96ce3cca02f61b960c6eb459abc_2->m_type_description == NULL);
        frame_3155a96ce3cca02f61b960c6eb459abc_2 = cache_frame_3155a96ce3cca02f61b960c6eb459abc_2;

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_3155a96ce3cca02f61b960c6eb459abc_2);
        assert(Py_REFCNT(frame_3155a96ce3cca02f61b960c6eb459abc_2) == 2);

        // Framed code:
        // Tried code:
        loop_start_1:;
        {
            PyObject *tmp_next_source_1;
            PyObject *tmp_assign_source_13;
            CHECK_OBJECT(tmp_listcomp_1__$0);
            tmp_next_source_1 = tmp_listcomp_1__$0;
            tmp_assign_source_13 = ITERATOR_NEXT(tmp_next_source_1);
            if (tmp_assign_source_13 == NULL) {
                if (CHECK_AND_CLEAR_STOP_ITERATION_OCCURRED()) {

                    goto loop_end_1;
                } else {

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                    type_description_2 = "o";
                    exception_lineno = 465;
                    goto try_except_handler_6;
                }
            }

            {
                PyObject *old = tmp_listcomp_1__iter_value_0;
                tmp_listcomp_1__iter_value_0 = tmp_assign_source_13;
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_assign_source_14;
            CHECK_OBJECT(tmp_listcomp_1__iter_value_0);
            tmp_assign_source_14 = tmp_listcomp_1__iter_value_0;
            {
                PyObject *old = outline_0_var_x;
                outline_0_var_x = tmp_assign_source_14;
                Py_INCREF(outline_0_var_x);
                Py_XDECREF(old);
            }

        }
        {
            PyObject *tmp_append_list_1;
            PyObject *tmp_append_value_1;
            PyObject *tmp_called_instance_4;
            CHECK_OBJECT(tmp_listcomp_1__contraction);
            tmp_append_list_1 = tmp_listcomp_1__contraction;
            CHECK_OBJECT(outline_0_var_x);
            tmp_called_instance_4 = outline_0_var_x;
            frame_3155a96ce3cca02f61b960c6eb459abc_2->m_frame.f_lineno = 465;
            tmp_append_value_1 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_4,
                mod_consts[46],
                PyTuple_GET_ITEM(mod_consts[24], 0)
            );

            if (tmp_append_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
            tmp_result = LIST_APPEND1(tmp_append_list_1, tmp_append_value_1);
            if (tmp_result == false) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 465;
                type_description_2 = "o";
                goto try_except_handler_6;
            }
        }
        if (CONSIDER_THREADING() == false) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_2 = "o";
            goto try_except_handler_6;
        }
        goto loop_start_1;
        loop_end_1:;
        CHECK_OBJECT(tmp_listcomp_1__contraction);
        tmp_assign_source_10 = tmp_listcomp_1__contraction;
        Py_INCREF(tmp_assign_source_10);
        goto try_return_handler_6;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_6:;
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
        try_except_handler_6:;
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
        frame_return_exit_2:

        // Put the previous frame back on top.
        popFrameStack();

        goto try_return_handler_5;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_3155a96ce3cca02f61b960c6eb459abc_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_3155a96ce3cca02f61b960c6eb459abc_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_3155a96ce3cca02f61b960c6eb459abc_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_3155a96ce3cca02f61b960c6eb459abc_2,
            type_description_2,
            outline_0_var_x
        );


        // Release cached frame if used for exception.
        if (frame_3155a96ce3cca02f61b960c6eb459abc_2 == cache_frame_3155a96ce3cca02f61b960c6eb459abc_2) {
#if _DEBUG_REFCOUNTS
            count_active_frame_cache_instances -= 1;
            count_released_frame_cache_instances += 1;
#endif
            Py_DECREF(cache_frame_3155a96ce3cca02f61b960c6eb459abc_2);
            cache_frame_3155a96ce3cca02f61b960c6eb459abc_2 = NULL;
        }

        assertFrameObject(frame_3155a96ce3cca02f61b960c6eb459abc_2);

        // Put the previous frame back on top.
        popFrameStack();

        // Return the error.
        goto nested_frame_exit_1;
        frame_no_exception_1:;
        goto skip_nested_handling_1;
        nested_frame_exit_1:;
        type_description_1 = "ooooooo";
        goto try_except_handler_5;
        skip_nested_handling_1:;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
        goto outline_result_1;
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

        Py_XDECREF(outline_0_var_x);
        outline_0_var_x = NULL;
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
        exception_lineno = 465;
        goto try_except_handler_4;
        outline_result_1:;
        assert(var_out_channels == NULL);
        var_out_channels = tmp_assign_source_10;
    }
    goto try_end_1;
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

    // Preserve existing published exception id 1.
    exception_preserved_1 = GET_CURRENT_EXCEPTION();

    if (exception_keeper_tb_3 == NULL) {
        exception_keeper_tb_3 = MAKE_TRACEBACK(frame_0ef582c069735c1e928791b36f12bf67, exception_keeper_lineno_3);
    } else if (exception_keeper_lineno_3 != 0) {
        exception_keeper_tb_3 = ADD_TRACEBACK(exception_keeper_tb_3, frame_0ef582c069735c1e928791b36f12bf67, exception_keeper_lineno_3);
    }

    PUBLISH_CURRENT_EXCEPTION(&exception_keeper_type_3, &exception_keeper_value_3, &exception_keeper_tb_3);
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
        nuitka_bool tmp_assign_source_15;
        tmp_assign_source_15 = NUITKA_BOOL_FALSE;
        tmp_with_1__indicator = tmp_assign_source_15;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_called_value_6;
        PyObject *tmp_args_element_value_3;
        PyObject *tmp_args_element_value_4;
        PyObject *tmp_args_element_value_5;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_6 = tmp_with_1__exit;
        tmp_args_element_value_3 = EXC_TYPE(PyThreadState_GET());
        tmp_args_element_value_4 = EXC_VALUE(PyThreadState_GET());
        tmp_args_element_value_5 = (PyObject *)EXC_TRACEBACK(PyThreadState_GET());
        frame_0ef582c069735c1e928791b36f12bf67->m_frame.f_lineno = 465;
        {
            PyObject *call_args[] = {tmp_args_element_value_3, tmp_args_element_value_4, tmp_args_element_value_5};
            tmp_operand_value_1 = CALL_FUNCTION_WITH_ARGS3(tmp_called_value_6, call_args);
        }

        if (tmp_operand_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooo";
            goto try_except_handler_7;
        }
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        Py_DECREF(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooo";
            goto try_except_handler_7;
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
        exception_lineno = 465;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0ef582c069735c1e928791b36f12bf67->m_frame) frame_0ef582c069735c1e928791b36f12bf67->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_7;
    branch_no_3:;
    goto branch_end_2;
    branch_no_2:;
    tmp_result = RERAISE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
    if (unlikely(tmp_result == false)) {
        exception_lineno = 458;
    }

    if (exception_tb && exception_tb->tb_frame == &frame_0ef582c069735c1e928791b36f12bf67->m_frame) frame_0ef582c069735c1e928791b36f12bf67->m_frame.f_lineno = exception_tb->tb_lineno;
    type_description_1 = "ooooooo";
    goto try_except_handler_7;
    branch_end_2:;
    goto try_end_2;
    // Exception handler code:
    try_except_handler_7:;
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

    goto try_except_handler_3;
    // End of try:
    try_end_2:;
    // Restore previous exception id 1.
    SET_CURRENT_EXCEPTION(&exception_preserved_1);

    goto try_end_1;
    NUITKA_CANNOT_GET_HERE("exception handler codes exits in all cases");
    return NULL;
    // End of try:
    try_end_1:;
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
        PyObject *tmp_called_value_7;
        PyObject *tmp_call_result_2;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_7 = tmp_with_1__exit;
        frame_0ef582c069735c1e928791b36f12bf67->m_frame.f_lineno = 465;
        tmp_call_result_2 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_7, mod_consts[111]);

        if (tmp_call_result_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);

            Py_DECREF(exception_keeper_type_5);
            Py_XDECREF(exception_keeper_value_5);
            Py_XDECREF(exception_keeper_tb_5);

            exception_lineno = 465;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_2);
    }
    branch_no_4:;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto try_except_handler_2;
    // End of try:
    try_end_3:;
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
        PyObject *tmp_called_value_8;
        PyObject *tmp_call_result_3;
        CHECK_OBJECT(tmp_with_1__exit);
        tmp_called_value_8 = tmp_with_1__exit;
        frame_0ef582c069735c1e928791b36f12bf67->m_frame.f_lineno = 465;
        tmp_call_result_3 = CALL_FUNCTION_WITH_POSARGS3(tmp_called_value_8, mod_consts[111]);

        if (tmp_call_result_3 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 465;
            type_description_1 = "ooooooo";
            goto try_except_handler_2;
        }
        Py_DECREF(tmp_call_result_3);
    }
    branch_no_5:;
    goto try_end_4;
    // Exception handler code:
    try_except_handler_2:;
    exception_keeper_type_6 = exception_type;
    exception_keeper_value_6 = exception_value;
    exception_keeper_tb_6 = exception_tb;
    exception_keeper_lineno_6 = exception_lineno;
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
    exception_type = exception_keeper_type_6;
    exception_value = exception_keeper_value_6;
    exception_tb = exception_keeper_tb_6;
    exception_lineno = exception_keeper_lineno_6;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_with_1__source);
    Py_DECREF(tmp_with_1__source);
    tmp_with_1__source = NULL;
    CHECK_OBJECT(tmp_with_1__enter);
    Py_DECREF(tmp_with_1__enter);
    tmp_with_1__enter = NULL;
    Py_XDECREF(tmp_with_1__exit);
    tmp_with_1__exit = NULL;
    {
        nuitka_bool tmp_condition_result_6;
        int tmp_truth_name_1;
        CHECK_OBJECT(var_in_training);
        tmp_truth_name_1 = CHECK_IF_TRUE(var_in_training);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 467;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        tmp_condition_result_6 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_6 == NUITKA_BOOL_TRUE) {
            goto branch_yes_6;
        } else {
            goto branch_no_6;
        }
    }
    branch_yes_6:;
    {
        PyObject *tmp_called_instance_5;
        PyObject *tmp_call_result_4;
        CHECK_OBJECT(par_model);
        tmp_called_instance_5 = par_model;
        frame_0ef582c069735c1e928791b36f12bf67->m_frame.f_lineno = 468;
        tmp_call_result_4 = CALL_METHOD_NO_ARGS(tmp_called_instance_5, mod_consts[112]);
        if (tmp_call_result_4 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 468;
            type_description_1 = "ooooooo";
            goto frame_exception_exit_1;
        }
        Py_DECREF(tmp_call_result_4);
    }
    branch_no_6:;
    if (var_out_channels == NULL) {

        FORMAT_UNBOUND_LOCAL_ERROR(&exception_type, &exception_value, mod_consts[113]);
        exception_tb = NULL;
        NORMALIZE_EXCEPTION(&exception_type, &exception_value, &exception_tb);
        CHAIN_EXCEPTION(exception_value);

        exception_lineno = 470;
        type_description_1 = "ooooooo";
        goto frame_exception_exit_1;
    }

    tmp_return_value = var_out_channels;
    Py_INCREF(tmp_return_value);
    goto frame_return_exit_1;


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_2;
    frame_return_exit_1:

    // Put the previous frame back on top.
    popFrameStack();

    goto try_return_handler_1;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_0ef582c069735c1e928791b36f12bf67, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_0ef582c069735c1e928791b36f12bf67->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_0ef582c069735c1e928791b36f12bf67, exception_lineno);
    }

    // Attaches locals to frame if any.
    Nuitka_Frame_AttachLocals(
        frame_0ef582c069735c1e928791b36f12bf67,
        type_description_1,
        par_model,
        par_size,
        var_in_training,
        var_device,
        var_tmp_img,
        var_features,
        var_out_channels
    );


    // Release cached frame if used for exception.
    if (frame_0ef582c069735c1e928791b36f12bf67 == cache_frame_0ef582c069735c1e928791b36f12bf67) {
#if _DEBUG_REFCOUNTS
        count_active_frame_cache_instances -= 1;
        count_released_frame_cache_instances += 1;
#endif
        Py_DECREF(cache_frame_0ef582c069735c1e928791b36f12bf67);
        cache_frame_0ef582c069735c1e928791b36f12bf67 = NULL;
    }

    assertFrameObject(frame_0ef582c069735c1e928791b36f12bf67);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto try_except_handler_1;
    frame_no_exception_2:;
    NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
    return NULL;
    // Return handler code:
    try_return_handler_1:;
    CHECK_OBJECT(var_in_training);
    Py_DECREF(var_in_training);
    var_in_training = NULL;
    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_tmp_img);
    var_tmp_img = NULL;
    Py_XDECREF(var_features);
    var_features = NULL;
    Py_XDECREF(var_out_channels);
    var_out_channels = NULL;
    goto function_return_exit;
    // Exception handler code:
    try_except_handler_1:;
    exception_keeper_type_7 = exception_type;
    exception_keeper_value_7 = exception_value;
    exception_keeper_tb_7 = exception_tb;
    exception_keeper_lineno_7 = exception_lineno;
    exception_type = NULL;
    exception_value = NULL;
    exception_tb = NULL;
    exception_lineno = 0;

    Py_XDECREF(var_in_training);
    var_in_training = NULL;
    Py_XDECREF(var_device);
    var_device = NULL;
    Py_XDECREF(var_tmp_img);
    var_tmp_img = NULL;
    Py_XDECREF(var_features);
    var_features = NULL;
    Py_XDECREF(var_out_channels);
    var_out_channels = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_7;
    exception_value = exception_keeper_value_7;
    exception_tb = exception_keeper_tb_7;
    exception_lineno = exception_keeper_lineno_7;

    goto function_exception_exit;
    // End of try:

    NUITKA_CANNOT_GET_HERE("Return statement must have exited already.");
    return NULL;

function_exception_exit:
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);
    assert(exception_type);
    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);

    return NULL;

function_return_exit:
   // Function cleanup code if any.
    CHECK_OBJECT(par_model);
    Py_DECREF(par_model);
    CHECK_OBJECT(par_size);
    Py_DECREF(par_size);

   // Actual function exit with return value, making sure we did not make
   // the error status worse despite non-NULL return.
   CHECK_OBJECT(tmp_return_value);
   assert(had_error || !ERROR_OCCURRED());
   return tmp_return_value;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__10_encode_single(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__10_encode_single,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[162],
#endif
        codeobj_88c119aa560ff71cc2e8b11e94b3b214,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        mod_consts[71],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__11_decode_single(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__11_decode_single,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[163],
#endif
        codeobj_1612e3bdf1fd88268007fd54cbf8c5ea,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        mod_consts[73],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__12___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__12___init__,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[170],
#endif
        codeobj_b8f1cae356a9fa95609fb79842f9982f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        mod_consts[80],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__13___call__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__13___call__,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[172],
#endif
        codeobj_2f075e53c14c833cd2c57f19bd6d354b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        mod_consts[89],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__14_set_low_quality_matches_(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__14_set_low_quality_matches_,
        mod_consts[88],
#if PYTHON_VERSION >= 0x300
        mod_consts[175],
#endif
        codeobj_04cd086ade5906252e92f0699ba4cf01,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        mod_consts[90],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__15___init__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__15___init__,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[184],
#endif
        codeobj_dcec056c8999c298b3e21882917fd75a,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__16___call__(PyObject *annotations, struct Nuitka_CellObject **closure) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__16___call__,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[185],
#endif
        codeobj_6c6fd57aef600508da7f2e47fa4c9832,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        NULL,
        closure,
        1
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__17_overwrite_eps(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__17_overwrite_eps,
        mod_consts[189],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_97a9b5b506e7ed97cb8b12b6406c75e0,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        mod_consts[100],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__18_retrieve_out_channels(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__18_retrieve_out_channels,
        mod_consts[191],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_0ef582c069735c1e928791b36f12bf67,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        mod_consts[114],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__1___init__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__1___init__,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[136],
#endif
        codeobj_08a4a09d67ffc2f88b82f08dea4cf505,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        mod_consts[2],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__2___call__(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__2___call__,
        mod_consts[94],
#if PYTHON_VERSION >= 0x300
        mod_consts[139],
#endif
        codeobj_7ecf65c63b5a7c3a8f27882e00771d85,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        mod_consts[19],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__3_encode_boxes(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__3_encode_boxes,
        mod_consts[42],
#if PYTHON_VERSION >= 0x300
        NULL,
#endif
        codeobj_25a7236b5b4a0638bf809ae86d0c4516,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        mod_consts[32],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__4___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__4___init__,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[149],
#endif
        codeobj_9f790f106a9dcf34a77ae460e1f666f3,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        mod_consts[35],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__5_encode(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__5_encode,
        mod_consts[150],
#if PYTHON_VERSION >= 0x300
        mod_consts[151],
#endif
        codeobj_9d4ec23752c03699e481b5e6e45d3299,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__6_encode_single(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__6_encode_single,
        mod_consts[37],
#if PYTHON_VERSION >= 0x300
        mod_consts[152],
#endif
        codeobj_24dd536e942b08cb96867d0e8fa5636b,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        mod_consts[43],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__7_decode(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__7_decode,
        mod_consts[154],
#if PYTHON_VERSION >= 0x300
        mod_consts[155],
#endif
        codeobj_4090bae9cb95ad680e3391bcdc7c989e,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        NULL,
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__8_decode_single(PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__8_decode_single,
        mod_consts[51],
#if PYTHON_VERSION >= 0x300
        mod_consts[156],
#endif
        codeobj_a2669749acb588b44f90401468c091ac,
        NULL,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        mod_consts[68],
        NULL,
        0
    );


    return (PyObject *)result;
}



static PyObject *MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__9___init__(PyObject *defaults, PyObject *annotations) {
    struct Nuitka_FunctionObject *result = Nuitka_Function_New(
        impl_torchvision$models$detection$_utils$$$function__9___init__,
        mod_consts[92],
#if PYTHON_VERSION >= 0x300
        mod_consts[161],
#endif
        codeobj_6d14fc2551987b4c148ef95bb9ca997f,
        defaults,
#if PYTHON_VERSION >= 0x300
        NULL,
        annotations,
#endif
        module_torchvision$models$detection$_utils,
        mod_consts[70],
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

function_impl_code functable_torchvision$models$detection$_utils[] = {
    impl_torchvision$models$detection$_utils$$$function__1___init__,
    impl_torchvision$models$detection$_utils$$$function__2___call__,
    impl_torchvision$models$detection$_utils$$$function__3_encode_boxes,
    impl_torchvision$models$detection$_utils$$$function__4___init__,
    impl_torchvision$models$detection$_utils$$$function__5_encode,
    impl_torchvision$models$detection$_utils$$$function__6_encode_single,
    impl_torchvision$models$detection$_utils$$$function__7_decode,
    impl_torchvision$models$detection$_utils$$$function__8_decode_single,
    impl_torchvision$models$detection$_utils$$$function__9___init__,
    impl_torchvision$models$detection$_utils$$$function__10_encode_single,
    impl_torchvision$models$detection$_utils$$$function__11_decode_single,
    impl_torchvision$models$detection$_utils$$$function__12___init__,
    impl_torchvision$models$detection$_utils$$$function__13___call__,
    impl_torchvision$models$detection$_utils$$$function__14_set_low_quality_matches_,
    impl_torchvision$models$detection$_utils$$$function__15___init__,
    impl_torchvision$models$detection$_utils$$$function__16___call__,
    impl_torchvision$models$detection$_utils$$$function__17_overwrite_eps,
    impl_torchvision$models$detection$_utils$$$function__18_retrieve_out_channels,
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

    function_impl_code *current = functable_torchvision$models$detection$_utils;
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

    if (offset > sizeof(functable_torchvision$models$detection$_utils) || offset < 0) {
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
        functable_torchvision$models$detection$_utils[offset],
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
        module_torchvision$models$detection$_utils,
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
PyObject *modulecode_torchvision$models$detection$_utils(PyObject *module, struct Nuitka_MetaPathBasedLoaderEntry const *loader_entry) {
    // Report entry to PGO.
    PGO_onModuleEntered("torchvision.models.detection._utils");

    // Store the module for future use.
    module_torchvision$models$detection$_utils = module;

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
        PRINT_STRING("torchvision.models.detection._utils: Calling setupMetaPathBasedLoader().\n");
#endif
        setupMetaPathBasedLoader();

#if PYTHON_VERSION >= 0x300
        patchInspectModule();
#endif

#endif

        /* The constants only used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.models.detection._utils: Calling createModuleConstants().\n");
#endif
        createModuleConstants();

        /* The code objects used by this module are created now. */
#ifdef _NUITKA_TRACE
        PRINT_STRING("torchvision.models.detection._utils: Calling createModuleCodeObjects().\n");
#endif
        createModuleCodeObjects();

        init_done = true;
    }

    // PRINT_STRING("in inittorchvision$models$detection$_utils\n");

    moduledict_torchvision$models$detection$_utils = MODULE_DICT(module_torchvision$models$detection$_utils);

#ifdef _NUITKA_PLUGIN_DILL_ENABLED
    registerDillPluginTables(loader_entry->name, &_method_def_reduce_compiled_function, &_method_def_create_compiled_function);
#endif

    // Set "__compiled__" to what version information we have.
    UPDATE_STRING_DICT0(
        moduledict_torchvision$models$detection$_utils,
        (Nuitka_StringObject *)const_str_plain___compiled__,
        Nuitka_dunder_compiled_value
    );

    // Update "__package__" value to what it ought to be.
    {
#if 0
        UPDATE_STRING_DICT0(
            moduledict_torchvision$models$detection$_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            mod_consts[216]
        );
#elif 0
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)const_str_plain___name__);

        UPDATE_STRING_DICT0(
            moduledict_torchvision$models$detection$_utils,
            (Nuitka_StringObject *)const_str_plain___package__,
            module_name
        );
#else

#if PYTHON_VERSION < 0x300
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)const_str_plain___name__);
        char const *module_name_cstr = PyString_AS_STRING(module_name);

        char const *last_dot = strrchr(module_name_cstr, '.');

        if (last_dot != NULL) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$models$detection$_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyString_FromStringAndSize(module_name_cstr, last_dot - module_name_cstr)
            );
        }
#else
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)const_str_plain___name__);
        Py_ssize_t dot_index = PyUnicode_Find(module_name, const_str_dot, 0, PyUnicode_GetLength(module_name), -1);

        if (dot_index != -1) {
            UPDATE_STRING_DICT1(
                moduledict_torchvision$models$detection$_utils,
                (Nuitka_StringObject *)const_str_plain___package__,
                PyUnicode_Substring(module_name, 0, dot_index)
            );
        }
#endif
#endif
    }

    CHECK_OBJECT(module_torchvision$models$detection$_utils);

    // For deep importing of a module we need to have "__builtins__", so we set
    // it ourselves in the same way than CPython does. Note: This must be done
    // before the frame object is allocated, or else it may fail.

    if (GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)const_str_plain___builtins__) == NULL) {
        PyObject *value = (PyObject *)builtin_module;

        // Check if main module, not a dict then but the module itself.
#if defined(_NUITKA_MODULE) || !0
        value = PyModule_GetDict(value);
#endif

        UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)const_str_plain___builtins__, value);
    }

    UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)const_str_plain___loader__, (PyObject *)&Nuitka_Loader_Type);

#if PYTHON_VERSION >= 0x340
// Set the "__spec__" value

#if 0
    // Main modules just get "None" as spec.
    UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)const_str_plain___spec__, Py_None);
#else
    // Other modules get a "ModuleSpec" from the standard mechanism.
    {
        PyObject *bootstrap_module = getImportLibBootstrapModule();
        CHECK_OBJECT(bootstrap_module);

        PyObject *_spec_from_module = PyObject_GetAttrString(bootstrap_module, "_spec_from_module");
        CHECK_OBJECT(_spec_from_module);

        PyObject *spec_value = CALL_FUNCTION_WITH_SINGLE_ARG(_spec_from_module, module_torchvision$models$detection$_utils);
        Py_DECREF(_spec_from_module);

        // We can assume this to never fail, or else we are in trouble anyway.
        // CHECK_OBJECT(spec_value);

        if (spec_value == NULL) {
            PyErr_PrintEx(0);
            abort();
        }

// Mark the execution in the "__spec__" value.
        SET_ATTRIBUTE(spec_value, const_str_plain__initializing, Py_True);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)const_str_plain___spec__, spec_value);
    }
#endif
#endif

    // Temp variables if any
    PyObject *outline_0_var___class__ = NULL;
    PyObject *outline_1_var___class__ = NULL;
    PyObject *outline_2_var___class__ = NULL;
    PyObject *outline_3_var___class__ = NULL;
    struct Nuitka_CellObject *outline_4_var___class__ = Nuitka_Cell_Empty();
    PyObject *tmp_class_creation_1__class_decl_dict = NULL;
    PyObject *tmp_class_creation_1__prepared = NULL;
    PyObject *tmp_class_creation_2__class_decl_dict = NULL;
    PyObject *tmp_class_creation_2__prepared = NULL;
    PyObject *tmp_class_creation_3__class_decl_dict = NULL;
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
    struct Nuitka_FrameObject *frame_a237aceee49bc532285d9c75420ed60b;
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
    PyObject *locals_torchvision$models$detection$_utils$$$class__1_BalancedPositiveNegativeSampler_10 = NULL;
    PyObject *tmp_dictset_value;
    int tmp_res;
    struct Nuitka_FrameObject *frame_81cb5fb480a4b37a7b82bb12707b5b4c_2;
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
    PyObject *locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121 = NULL;
    struct Nuitka_FrameObject *frame_10d73233764ecdac1417563895bf5abc_3;
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
    PyObject *locals_torchvision$models$detection$_utils$$$class__3_BoxLinearCoder_220 = NULL;
    struct Nuitka_FrameObject *frame_a3ebcf585d3b73a1b36d3cc48a2172d0_4;
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
    PyObject *locals_torchvision$models$detection$_utils$$$class__4_Matcher_297 = NULL;
    struct Nuitka_FrameObject *frame_b0a2e85daf554a76e60c7c20ebd45bf6_5;
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
    PyObject *locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409 = NULL;
    struct Nuitka_FrameObject *frame_2ef6db0abc00e6cf701048044088def3_6;
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
        UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[115], tmp_assign_source_1);
    }
    {
        PyObject *tmp_assign_source_2;
        tmp_assign_source_2 = module_filename_obj;
        UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[116], tmp_assign_source_2);
    }
    frame_a237aceee49bc532285d9c75420ed60b = MAKE_MODULE_FRAME(codeobj_a237aceee49bc532285d9c75420ed60b, module_torchvision$models$detection$_utils);

    // Push the new frame as the currently active one, and we should be exclusively
    // owning it.
    pushFrameStackCompiledFrame(frame_a237aceee49bc532285d9c75420ed60b);
    assert(Py_REFCNT(frame_a237aceee49bc532285d9c75420ed60b) == 2);

    // Framed code:
    {
        PyObject *tmp_assattr_value_1;
        PyObject *tmp_assattr_target_1;
        tmp_assattr_value_1 = module_filename_obj;
        tmp_assattr_target_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[117]);

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
        tmp_assattr_target_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[117]);

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
        UPDATE_STRING_DICT0(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[120], tmp_assign_source_3);
    }
    {
        PyObject *tmp_assign_source_4;
        PyObject *tmp_name_value_1;
        PyObject *tmp_globals_arg_value_1;
        PyObject *tmp_locals_arg_value_1;
        PyObject *tmp_fromlist_value_1;
        PyObject *tmp_level_value_1;
        tmp_name_value_1 = mod_consts[121];
        tmp_globals_arg_value_1 = (PyObject *)moduledict_torchvision$models$detection$_utils;
        tmp_locals_arg_value_1 = Py_None;
        tmp_fromlist_value_1 = Py_None;
        tmp_level_value_1 = mod_consts[6];
        frame_a237aceee49bc532285d9c75420ed60b->m_frame.f_lineno = 1;
        tmp_assign_source_4 = IMPORT_MODULE5(tmp_name_value_1, tmp_globals_arg_value_1, tmp_locals_arg_value_1, tmp_fromlist_value_1, tmp_level_value_1);
        assert(!(tmp_assign_source_4 == NULL));
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[121], tmp_assign_source_4);
    }
    {
        PyObject *tmp_assign_source_5;
        PyObject *tmp_import_name_from_1;
        PyObject *tmp_name_value_2;
        PyObject *tmp_globals_arg_value_2;
        PyObject *tmp_locals_arg_value_2;
        PyObject *tmp_fromlist_value_2;
        PyObject *tmp_level_value_2;
        tmp_name_value_2 = mod_consts[122];
        tmp_globals_arg_value_2 = (PyObject *)moduledict_torchvision$models$detection$_utils;
        tmp_locals_arg_value_2 = Py_None;
        tmp_fromlist_value_2 = mod_consts[123];
        tmp_level_value_2 = mod_consts[6];
        frame_a237aceee49bc532285d9c75420ed60b->m_frame.f_lineno = 2;
        tmp_import_name_from_1 = IMPORT_MODULE5(tmp_name_value_2, tmp_globals_arg_value_2, tmp_locals_arg_value_2, tmp_fromlist_value_2, tmp_level_value_2);
        if (tmp_import_name_from_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_1)) {
            tmp_assign_source_5 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_1,
                (PyObject *)moduledict_torchvision$models$detection$_utils,
                mod_consts[108],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_5 = IMPORT_NAME(tmp_import_name_from_1, mod_consts[108]);
        }

        Py_DECREF(tmp_import_name_from_1);
        if (tmp_assign_source_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 2;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[108], tmp_assign_source_5);
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
        PyObject *tmp_import_name_from_2;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_2 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_2)) {
            tmp_assign_source_7 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_2,
                (PyObject *)moduledict_torchvision$models$detection$_utils,
                mod_consts[124],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_7 = IMPORT_NAME(tmp_import_name_from_2, mod_consts[124]);
        }

        if (tmp_assign_source_7 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[124], tmp_assign_source_7);
    }
    {
        PyObject *tmp_assign_source_8;
        PyObject *tmp_import_name_from_3;
        CHECK_OBJECT(tmp_import_from_1__module);
        tmp_import_name_from_3 = tmp_import_from_1__module;
        if (PyModule_Check(tmp_import_name_from_3)) {
            tmp_assign_source_8 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_3,
                (PyObject *)moduledict_torchvision$models$detection$_utils,
                mod_consts[125],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_8 = IMPORT_NAME(tmp_import_name_from_3, mod_consts[125]);
        }

        if (tmp_assign_source_8 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 3;

            goto try_except_handler_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[125], tmp_assign_source_8);
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
        PyObject *tmp_assign_source_9;
        PyObject *tmp_name_value_3;
        PyObject *tmp_globals_arg_value_3;
        PyObject *tmp_locals_arg_value_3;
        PyObject *tmp_fromlist_value_3;
        PyObject *tmp_level_value_3;
        tmp_name_value_3 = mod_consts[3];
        tmp_globals_arg_value_3 = (PyObject *)moduledict_torchvision$models$detection$_utils;
        tmp_locals_arg_value_3 = Py_None;
        tmp_fromlist_value_3 = Py_None;
        tmp_level_value_3 = mod_consts[6];
        frame_a237aceee49bc532285d9c75420ed60b->m_frame.f_lineno = 5;
        tmp_assign_source_9 = IMPORT_MODULE5(tmp_name_value_3, tmp_globals_arg_value_3, tmp_locals_arg_value_3, tmp_fromlist_value_3, tmp_level_value_3);
        if (tmp_assign_source_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 5;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3], tmp_assign_source_9);
    }
    {
        PyObject *tmp_assign_source_10;
        PyObject *tmp_name_value_4;
        PyObject *tmp_globals_arg_value_4;
        PyObject *tmp_locals_arg_value_4;
        PyObject *tmp_fromlist_value_4;
        PyObject *tmp_level_value_4;
        tmp_name_value_4 = mod_consts[3];
        tmp_globals_arg_value_4 = (PyObject *)moduledict_torchvision$models$detection$_utils;
        tmp_locals_arg_value_4 = Py_None;
        tmp_fromlist_value_4 = mod_consts[126];
        tmp_level_value_4 = mod_consts[6];
        frame_a237aceee49bc532285d9c75420ed60b->m_frame.f_lineno = 6;
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
        PyObject *tmp_import_name_from_4;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_4 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_4)) {
            tmp_assign_source_11 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_4,
                (PyObject *)moduledict_torchvision$models$detection$_utils,
                mod_consts[45],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_11 = IMPORT_NAME(tmp_import_name_from_4, mod_consts[45]);
        }

        if (tmp_assign_source_11 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45], tmp_assign_source_11);
    }
    {
        PyObject *tmp_assign_source_12;
        PyObject *tmp_import_name_from_5;
        CHECK_OBJECT(tmp_import_from_2__module);
        tmp_import_name_from_5 = tmp_import_from_2__module;
        if (PyModule_Check(tmp_import_name_from_5)) {
            tmp_assign_source_12 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_5,
                (PyObject *)moduledict_torchvision$models$detection$_utils,
                mod_consts[127],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_12 = IMPORT_NAME(tmp_import_name_from_5, mod_consts[127]);
        }

        if (tmp_assign_source_12 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 6;

            goto try_except_handler_2;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[127], tmp_assign_source_12);
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
        PyObject *tmp_assign_source_13;
        PyObject *tmp_import_name_from_6;
        PyObject *tmp_name_value_5;
        PyObject *tmp_globals_arg_value_5;
        PyObject *tmp_locals_arg_value_5;
        PyObject *tmp_fromlist_value_5;
        PyObject *tmp_level_value_5;
        tmp_name_value_5 = mod_consts[128];
        tmp_globals_arg_value_5 = (PyObject *)moduledict_torchvision$models$detection$_utils;
        tmp_locals_arg_value_5 = Py_None;
        tmp_fromlist_value_5 = mod_consts[129];
        tmp_level_value_5 = mod_consts[6];
        frame_a237aceee49bc532285d9c75420ed60b->m_frame.f_lineno = 7;
        tmp_import_name_from_6 = IMPORT_MODULE5(tmp_name_value_5, tmp_globals_arg_value_5, tmp_locals_arg_value_5, tmp_fromlist_value_5, tmp_level_value_5);
        if (tmp_import_name_from_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        if (PyModule_Check(tmp_import_name_from_6)) {
            tmp_assign_source_13 = IMPORT_NAME_OR_MODULE(
                tmp_import_name_from_6,
                (PyObject *)moduledict_torchvision$models$detection$_utils,
                mod_consts[98],
                mod_consts[6]
            );
        } else {
            tmp_assign_source_13 = IMPORT_NAME(tmp_import_name_from_6, mod_consts[98]);
        }

        Py_DECREF(tmp_import_name_from_6);
        if (tmp_assign_source_13 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 7;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[98], tmp_assign_source_13);
    }
    {
        PyObject *tmp_assign_source_14;
        tmp_assign_source_14 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__class_decl_dict == NULL);
        tmp_class_creation_1__class_decl_dict = tmp_assign_source_14;
    }
    {
        PyObject *tmp_assign_source_15;
        tmp_assign_source_15 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_1__prepared == NULL);
        tmp_class_creation_1__prepared = tmp_assign_source_15;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_16;
        {
            PyObject *tmp_set_locals_1;
            CHECK_OBJECT(tmp_class_creation_1__prepared);
            tmp_set_locals_1 = tmp_class_creation_1__prepared;
            locals_torchvision$models$detection$_utils$$$class__1_BalancedPositiveNegativeSampler_10 = tmp_set_locals_1;
            Py_INCREF(tmp_set_locals_1);
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__1_BalancedPositiveNegativeSampler_10, mod_consts[131], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[132];
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__1_BalancedPositiveNegativeSampler_10, mod_consts[115], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[133];
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__1_BalancedPositiveNegativeSampler_10, mod_consts[134], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_annotations_1;
            tmp_annotations_1 = DICT_COPY(mod_consts[135]);


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__1___init__(tmp_annotations_1);

            tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__1_BalancedPositiveNegativeSampler_10, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_81cb5fb480a4b37a7b82bb12707b5b4c_2 = MAKE_CLASS_FRAME(codeobj_81cb5fb480a4b37a7b82bb12707b5b4c, module_torchvision$models$detection$_utils, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_81cb5fb480a4b37a7b82bb12707b5b4c_2);
        assert(Py_REFCNT(frame_81cb5fb480a4b37a7b82bb12707b5b4c_2) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_2;
            PyObject *tmp_dict_key_1;
            PyObject *tmp_dict_value_1;
            PyObject *tmp_expression_value_1;
            PyObject *tmp_subscript_value_1;
            tmp_dict_key_1 = mod_consts[137];
            tmp_expression_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_expression_value_1 == NULL)) {
                tmp_expression_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
            }

            if (tmp_expression_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_subscript_value_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_subscript_value_1 == NULL)) {
                tmp_subscript_value_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_subscript_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_1, tmp_subscript_value_1);
            if (tmp_dict_value_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
            tmp_annotations_2 = _PyDict_NewPresized( 2 );
            {
                PyObject *tmp_expression_value_2;
                PyObject *tmp_subscript_value_2;
                PyObject *tmp_tuple_element_1;
                PyObject *tmp_expression_value_3;
                PyObject *tmp_subscript_value_3;
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
                tmp_dict_key_1 = mod_consts[138];
                tmp_expression_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[125]);

                if (unlikely(tmp_expression_value_2 == NULL)) {
                    tmp_expression_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
                }

                if (tmp_expression_value_2 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_expression_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[124]);

                if (unlikely(tmp_expression_value_3 == NULL)) {
                    tmp_expression_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                }

                if (tmp_expression_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_3 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_subscript_value_3 == NULL)) {
                    tmp_subscript_value_3 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                }

                if (tmp_subscript_value_3 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_3, tmp_subscript_value_3);
                if (tmp_tuple_element_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_subscript_value_2 = MAKE_TUPLE_EMPTY(2);
                {
                    PyObject *tmp_expression_value_4;
                    PyObject *tmp_subscript_value_4;
                    PyTuple_SET_ITEM(tmp_subscript_value_2, 0, tmp_tuple_element_1);
                    tmp_expression_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[124]);

                    if (unlikely(tmp_expression_value_4 == NULL)) {
                        tmp_expression_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                    }

                    if (tmp_expression_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 24;
                        type_description_2 = "o";
                        goto tuple_build_exception_1;
                    }
                    tmp_subscript_value_4 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_subscript_value_4 == NULL)) {
                        tmp_subscript_value_4 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                    }

                    if (tmp_subscript_value_4 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 24;
                        type_description_2 = "o";
                        goto tuple_build_exception_1;
                    }
                    tmp_tuple_element_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_4, tmp_subscript_value_4);
                    if (tmp_tuple_element_1 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 24;
                        type_description_2 = "o";
                        goto tuple_build_exception_1;
                    }
                    PyTuple_SET_ITEM(tmp_subscript_value_2, 1, tmp_tuple_element_1);
                }
                goto tuple_build_noexception_1;
                // Exception handling pass through code for tuple_build:
                tuple_build_exception_1:;
                Py_DECREF(tmp_subscript_value_2);
                goto dict_build_exception_1;
                // Finished with no exception for tuple_build:
                tuple_build_noexception_1:;
                tmp_dict_value_1 = LOOKUP_SUBSCRIPT(tmp_expression_value_2, tmp_subscript_value_2);
                Py_DECREF(tmp_subscript_value_2);
                if (tmp_dict_value_1 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 24;
                    type_description_2 = "o";
                    goto dict_build_exception_1;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_2, tmp_dict_key_1, tmp_dict_value_1);
                Py_DECREF(tmp_dict_value_1);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_1;
            // Exception handling pass through code for dict_build:
            dict_build_exception_1:;
            Py_DECREF(tmp_annotations_2);
            goto frame_exception_exit_2;
            // Finished with no exception for dict_build:
            dict_build_noexception_1:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__2___call__(tmp_annotations_2);

            tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__1_BalancedPositiveNegativeSampler_10, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 24;
                type_description_2 = "o";
                goto frame_exception_exit_2;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_1;
        frame_exception_exit_2:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_81cb5fb480a4b37a7b82bb12707b5b4c_2, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_81cb5fb480a4b37a7b82bb12707b5b4c_2->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_81cb5fb480a4b37a7b82bb12707b5b4c_2, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_81cb5fb480a4b37a7b82bb12707b5b4c_2,
            type_description_2,
            outline_0_var___class__
        );



        assertFrameObject(frame_81cb5fb480a4b37a7b82bb12707b5b4c_2);

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
            PyObject *tmp_assign_source_17;
            PyObject *tmp_called_value_1;
            PyObject *tmp_args_value_1;
            PyObject *tmp_tuple_element_2;
            PyObject *tmp_kwargs_value_1;
            tmp_called_value_1 = (PyObject *)&PyType_Type;
            tmp_tuple_element_2 = mod_consts[133];
            tmp_args_value_1 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_1, 0, tmp_tuple_element_2);
            tmp_tuple_element_2 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_args_value_1, 1, tmp_tuple_element_2);
            tmp_tuple_element_2 = locals_torchvision$models$detection$_utils$$$class__1_BalancedPositiveNegativeSampler_10;
            PyTuple_SET_ITEM0(tmp_args_value_1, 2, tmp_tuple_element_2);
            CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
            tmp_kwargs_value_1 = tmp_class_creation_1__class_decl_dict;
            frame_a237aceee49bc532285d9c75420ed60b->m_frame.f_lineno = 10;
            tmp_assign_source_17 = CALL_FUNCTION(tmp_called_value_1, tmp_args_value_1, tmp_kwargs_value_1);
            Py_DECREF(tmp_args_value_1);
            if (tmp_assign_source_17 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 10;

                goto try_except_handler_5;
            }
            assert(outline_0_var___class__ == NULL);
            outline_0_var___class__ = tmp_assign_source_17;
        }
        CHECK_OBJECT(outline_0_var___class__);
        tmp_assign_source_16 = outline_0_var___class__;
        Py_INCREF(tmp_assign_source_16);
        goto try_return_handler_5;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_5:;
        Py_DECREF(locals_torchvision$models$detection$_utils$$$class__1_BalancedPositiveNegativeSampler_10);
        locals_torchvision$models$detection$_utils$$$class__1_BalancedPositiveNegativeSampler_10 = NULL;
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

        Py_DECREF(locals_torchvision$models$detection$_utils$$$class__1_BalancedPositiveNegativeSampler_10);
        locals_torchvision$models$detection$_utils$$$class__1_BalancedPositiveNegativeSampler_10 = NULL;
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
        exception_lineno = 10;
        goto try_except_handler_3;
        outline_result_1:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[133], tmp_assign_source_16);
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

    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_5;
    exception_value = exception_keeper_value_5;
    exception_tb = exception_keeper_tb_5;
    exception_lineno = exception_keeper_lineno_5;

    goto frame_exception_exit_1;
    // End of try:
    try_end_3:;
    CHECK_OBJECT(tmp_class_creation_1__class_decl_dict);
    Py_DECREF(tmp_class_creation_1__class_decl_dict);
    tmp_class_creation_1__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_1__prepared);
    Py_DECREF(tmp_class_creation_1__prepared);
    tmp_class_creation_1__prepared = NULL;
    {
        PyObject *tmp_assign_source_18;
        PyObject *tmp_called_value_2;
        PyObject *tmp_expression_value_5;
        PyObject *tmp_expression_value_6;
        PyObject *tmp_args_element_value_1;
        PyObject *tmp_annotations_3;
        PyObject *tmp_dict_key_2;
        PyObject *tmp_dict_value_2;
        tmp_expression_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[3]);

        if (unlikely(tmp_expression_value_6 == NULL)) {
            tmp_expression_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[3]);
        }

        if (tmp_expression_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_expression_value_5 = LOOKUP_ATTRIBUTE(tmp_expression_value_6, mod_consts[141]);
        if (tmp_expression_value_5 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_called_value_2 = LOOKUP_ATTRIBUTE(tmp_expression_value_5, mod_consts[142]);
        Py_DECREF(tmp_expression_value_5);
        if (tmp_called_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        tmp_dict_key_2 = mod_consts[143];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
            Py_DECREF(tmp_called_value_2);

            exception_lineno = 74;

            goto frame_exception_exit_1;
        }
        tmp_annotations_3 = _PyDict_NewPresized( 4 );
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[144];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[33];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        tmp_dict_key_2 = mod_consts[138];
        tmp_dict_value_2 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

        if (unlikely(tmp_dict_value_2 == NULL)) {
            tmp_dict_value_2 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
        }

        if (tmp_dict_value_2 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 74;

            goto dict_build_exception_2;
        }
        tmp_res = PyDict_SetItem(tmp_annotations_3, tmp_dict_key_2, tmp_dict_value_2);
        assert(!(tmp_res != 0));
        goto dict_build_noexception_2;
        // Exception handling pass through code for dict_build:
        dict_build_exception_2:;
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_annotations_3);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_2:;


        tmp_args_element_value_1 = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__3_encode_boxes(tmp_annotations_3);

        frame_a237aceee49bc532285d9c75420ed60b->m_frame.f_lineno = 73;
        tmp_assign_source_18 = CALL_FUNCTION_WITH_SINGLE_ARG(tmp_called_value_2, tmp_args_element_value_1);
        Py_DECREF(tmp_called_value_2);
        Py_DECREF(tmp_args_element_value_1);
        if (tmp_assign_source_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 73;

            goto frame_exception_exit_1;
        }
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[42], tmp_assign_source_18);
    }
    {
        PyObject *tmp_assign_source_19;
        tmp_assign_source_19 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__class_decl_dict == NULL);
        tmp_class_creation_2__class_decl_dict = tmp_assign_source_19;
    }
    {
        PyObject *tmp_assign_source_20;
        tmp_assign_source_20 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_2__prepared == NULL);
        tmp_class_creation_2__prepared = tmp_assign_source_20;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_21;
        {
            PyObject *tmp_set_locals_2;
            CHECK_OBJECT(tmp_class_creation_2__prepared);
            tmp_set_locals_2 = tmp_class_creation_2__prepared;
            locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121 = tmp_set_locals_2;
            Py_INCREF(tmp_set_locals_2);
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121, mod_consts[131], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[145];
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121, mod_consts[115], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[146];
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121, mod_consts[134], tmp_dictset_value);
        assert(!(tmp_res != 0));
        // Tried code:
        // Tried code:
        frame_10d73233764ecdac1417563895bf5abc_3 = MAKE_CLASS_FRAME(codeobj_10d73233764ecdac1417563895bf5abc, module_torchvision$models$detection$_utils, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_10d73233764ecdac1417563895bf5abc_3);
        assert(Py_REFCNT(frame_10d73233764ecdac1417563895bf5abc_3) == 2);

        // Framed code:
        {
            PyObject *tmp_defaults_1;
            PyObject *tmp_tuple_element_3;
            PyObject *tmp_called_instance_1;
            PyObject *tmp_annotations_4;
            PyObject *tmp_dict_key_3;
            PyObject *tmp_dict_value_3;
            PyObject *tmp_expression_value_7;
            PyObject *tmp_subscript_value_5;
            tmp_called_instance_1 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[121]);

            if (unlikely(tmp_called_instance_1 == NULL)) {
                tmp_called_instance_1 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[121]);
            }

            if (tmp_called_instance_1 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            frame_10d73233764ecdac1417563895bf5abc_3->m_frame.f_lineno = 128;
            tmp_tuple_element_3 = CALL_METHOD_WITH_SINGLE_ARG(
                tmp_called_instance_1,
                mod_consts[29],
                PyTuple_GET_ITEM(mod_consts[147], 0)
            );

            if (tmp_tuple_element_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_defaults_1 = MAKE_TUPLE_EMPTY(1);
            PyTuple_SET_ITEM(tmp_defaults_1, 0, tmp_tuple_element_3);
            tmp_dict_key_3 = mod_consts[33];
            tmp_expression_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[125]);

            if (unlikely(tmp_expression_value_7 == NULL)) {
                tmp_expression_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
            }

            if (tmp_expression_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_1);

                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_5 = mod_consts[148];
            tmp_dict_value_3 = LOOKUP_SUBSCRIPT(tmp_expression_value_7, tmp_subscript_value_5);
            if (tmp_dict_value_3 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);
                Py_DECREF(tmp_defaults_1);

                exception_lineno = 128;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_4 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            Py_DECREF(tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[34];
            tmp_dict_value_3 = (PyObject *)&PyFloat_Type;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));
            tmp_dict_key_3 = mod_consts[138];
            tmp_dict_value_3 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_4, tmp_dict_key_3, tmp_dict_value_3);
            assert(!(tmp_res != 0));


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__4___init__(tmp_defaults_1, tmp_annotations_4);

            tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 127;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_5;
            PyObject *tmp_dict_key_4;
            PyObject *tmp_dict_value_4;
            PyObject *tmp_expression_value_8;
            PyObject *tmp_subscript_value_6;
            tmp_dict_key_4 = mod_consts[143];
            tmp_expression_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_expression_value_8 == NULL)) {
                tmp_expression_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
            }

            if (tmp_expression_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_subscript_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_subscript_value_6 == NULL)) {
                tmp_subscript_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_subscript_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_8, tmp_subscript_value_6);
            if (tmp_dict_value_4 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_5 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_9;
                PyObject *tmp_subscript_value_7;
                PyObject *tmp_expression_value_10;
                PyObject *tmp_subscript_value_8;
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[144];
                tmp_expression_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[124]);

                if (unlikely(tmp_expression_value_9 == NULL)) {
                    tmp_expression_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                }

                if (tmp_expression_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_subscript_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_subscript_value_7 == NULL)) {
                    tmp_subscript_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                }

                if (tmp_subscript_value_7 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_9, tmp_subscript_value_7);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
                tmp_dict_key_4 = mod_consts[138];
                tmp_expression_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[124]);

                if (unlikely(tmp_expression_value_10 == NULL)) {
                    tmp_expression_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                }

                if (tmp_expression_value_10 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_subscript_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_subscript_value_8 == NULL)) {
                    tmp_subscript_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                }

                if (tmp_subscript_value_8 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_dict_value_4 = LOOKUP_SUBSCRIPT(tmp_expression_value_10, tmp_subscript_value_8);
                if (tmp_dict_value_4 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 138;
                    type_description_2 = "o";
                    goto dict_build_exception_3;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_5, tmp_dict_key_4, tmp_dict_value_4);
                Py_DECREF(tmp_dict_value_4);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_3;
            // Exception handling pass through code for dict_build:
            dict_build_exception_3:;
            Py_DECREF(tmp_annotations_5);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_3:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__5_encode(tmp_annotations_5);

            tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121, mod_consts[150], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 138;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_6;
            PyObject *tmp_dict_key_5;
            PyObject *tmp_dict_value_5;
            tmp_dict_key_5 = mod_consts[143];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_6 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[144];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            tmp_dict_key_5 = mod_consts[138];
            tmp_dict_value_5 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_5 == NULL)) {
                tmp_dict_value_5 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_5 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto dict_build_exception_4;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_6, tmp_dict_key_5, tmp_dict_value_5);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_4;
            // Exception handling pass through code for dict_build:
            dict_build_exception_4:;
            Py_DECREF(tmp_annotations_6);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_4:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__6_encode_single(tmp_annotations_6);

            tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 145;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_7;
            PyObject *tmp_dict_key_6;
            PyObject *tmp_dict_value_6;
            tmp_dict_key_6 = mod_consts[72];
            tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_6 == NULL)) {
                tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_6 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_7 = _PyDict_NewPresized( 3 );
            {
                PyObject *tmp_expression_value_11;
                PyObject *tmp_subscript_value_9;
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[153];
                tmp_expression_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[124]);

                if (unlikely(tmp_expression_value_11 == NULL)) {
                    tmp_expression_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
                }

                if (tmp_expression_value_11 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_subscript_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_subscript_value_9 == NULL)) {
                    tmp_subscript_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                }

                if (tmp_subscript_value_9 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_dict_value_6 = LOOKUP_SUBSCRIPT(tmp_expression_value_11, tmp_subscript_value_9);
                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                Py_DECREF(tmp_dict_value_6);
                assert(!(tmp_res != 0));
                tmp_dict_key_6 = mod_consts[138];
                tmp_dict_value_6 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

                if (unlikely(tmp_dict_value_6 == NULL)) {
                    tmp_dict_value_6 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                }

                if (tmp_dict_value_6 == NULL) {
                    assert(ERROR_OCCURRED());

                    FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                    exception_lineno = 161;
                    type_description_2 = "o";
                    goto dict_build_exception_5;
                }
                tmp_res = PyDict_SetItem(tmp_annotations_7, tmp_dict_key_6, tmp_dict_value_6);
                assert(!(tmp_res != 0));
            }
            goto dict_build_noexception_5;
            // Exception handling pass through code for dict_build:
            dict_build_exception_5:;
            Py_DECREF(tmp_annotations_7);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_5:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__7_decode(tmp_annotations_7);

            tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121, mod_consts[154], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 161;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }
        {
            PyObject *tmp_annotations_8;
            PyObject *tmp_dict_key_7;
            PyObject *tmp_dict_value_7;
            tmp_dict_key_7 = mod_consts[72];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
            tmp_annotations_8 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[153];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            tmp_dict_key_7 = mod_consts[138];
            tmp_dict_value_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_7 == NULL)) {
                tmp_dict_value_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_7 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto dict_build_exception_6;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_8, tmp_dict_key_7, tmp_dict_value_7);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_6;
            // Exception handling pass through code for dict_build:
            dict_build_exception_6:;
            Py_DECREF(tmp_annotations_8);
            goto frame_exception_exit_3;
            // Finished with no exception for dict_build:
            dict_build_noexception_6:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__8_decode_single(tmp_annotations_8);

            tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 176;
                type_description_2 = "o";
                goto frame_exception_exit_3;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_2;
        frame_exception_exit_3:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_10d73233764ecdac1417563895bf5abc_3, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_10d73233764ecdac1417563895bf5abc_3->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_10d73233764ecdac1417563895bf5abc_3, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_10d73233764ecdac1417563895bf5abc_3,
            type_description_2,
            outline_1_var___class__
        );



        assertFrameObject(frame_10d73233764ecdac1417563895bf5abc_3);

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
            PyObject *tmp_assign_source_22;
            PyObject *tmp_called_value_3;
            PyObject *tmp_args_value_2;
            PyObject *tmp_tuple_element_4;
            PyObject *tmp_kwargs_value_2;
            tmp_called_value_3 = (PyObject *)&PyType_Type;
            tmp_tuple_element_4 = mod_consts[146];
            tmp_args_value_2 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_2, 0, tmp_tuple_element_4);
            tmp_tuple_element_4 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_args_value_2, 1, tmp_tuple_element_4);
            tmp_tuple_element_4 = locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121;
            PyTuple_SET_ITEM0(tmp_args_value_2, 2, tmp_tuple_element_4);
            CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
            tmp_kwargs_value_2 = tmp_class_creation_2__class_decl_dict;
            frame_a237aceee49bc532285d9c75420ed60b->m_frame.f_lineno = 121;
            tmp_assign_source_22 = CALL_FUNCTION(tmp_called_value_3, tmp_args_value_2, tmp_kwargs_value_2);
            Py_DECREF(tmp_args_value_2);
            if (tmp_assign_source_22 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 121;

                goto try_except_handler_8;
            }
            assert(outline_1_var___class__ == NULL);
            outline_1_var___class__ = tmp_assign_source_22;
        }
        CHECK_OBJECT(outline_1_var___class__);
        tmp_assign_source_21 = outline_1_var___class__;
        Py_INCREF(tmp_assign_source_21);
        goto try_return_handler_8;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_8:;
        Py_DECREF(locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121);
        locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121 = NULL;
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

        Py_DECREF(locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121);
        locals_torchvision$models$detection$_utils$$$class__2_BoxCoder_121 = NULL;
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
        exception_lineno = 121;
        goto try_except_handler_6;
        outline_result_2:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[146], tmp_assign_source_21);
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

    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_8;
    exception_value = exception_keeper_value_8;
    exception_tb = exception_keeper_tb_8;
    exception_lineno = exception_keeper_lineno_8;

    goto frame_exception_exit_1;
    // End of try:
    try_end_4:;
    CHECK_OBJECT(tmp_class_creation_2__class_decl_dict);
    Py_DECREF(tmp_class_creation_2__class_decl_dict);
    tmp_class_creation_2__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_2__prepared);
    Py_DECREF(tmp_class_creation_2__prepared);
    tmp_class_creation_2__prepared = NULL;
    {
        PyObject *tmp_assign_source_23;
        tmp_assign_source_23 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__class_decl_dict == NULL);
        tmp_class_creation_3__class_decl_dict = tmp_assign_source_23;
    }
    {
        PyObject *tmp_assign_source_24;
        tmp_assign_source_24 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_3__prepared == NULL);
        tmp_class_creation_3__prepared = tmp_assign_source_24;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_25;
        {
            PyObject *tmp_set_locals_3;
            CHECK_OBJECT(tmp_class_creation_3__prepared);
            tmp_set_locals_3 = tmp_class_creation_3__prepared;
            locals_torchvision$models$detection$_utils$$$class__3_BoxLinearCoder_220 = tmp_set_locals_3;
            Py_INCREF(tmp_set_locals_3);
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__3_BoxLinearCoder_220, mod_consts[131], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[157];
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__3_BoxLinearCoder_220, mod_consts[115], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[158];
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__3_BoxLinearCoder_220, mod_consts[134], tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_2;
            PyObject *tmp_annotations_9;
            tmp_defaults_2 = mod_consts[159];
            tmp_annotations_9 = DICT_COPY(mod_consts[160]);
            Py_INCREF(tmp_defaults_2);


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__9___init__(tmp_defaults_2, tmp_annotations_9);

            tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__3_BoxLinearCoder_220, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_a3ebcf585d3b73a1b36d3cc48a2172d0_4 = MAKE_CLASS_FRAME(codeobj_a3ebcf585d3b73a1b36d3cc48a2172d0, module_torchvision$models$detection$_utils, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_a3ebcf585d3b73a1b36d3cc48a2172d0_4);
        assert(Py_REFCNT(frame_a3ebcf585d3b73a1b36d3cc48a2172d0_4) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_10;
            PyObject *tmp_dict_key_8;
            PyObject *tmp_dict_value_8;
            tmp_dict_key_8 = mod_consts[143];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_10 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[144];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            tmp_dict_key_8 = mod_consts[138];
            tmp_dict_value_8 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_8 == NULL)) {
                tmp_dict_value_8 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_8 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto dict_build_exception_7;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_10, tmp_dict_key_8, tmp_dict_value_8);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_7;
            // Exception handling pass through code for dict_build:
            dict_build_exception_7:;
            Py_DECREF(tmp_annotations_10);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_7:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__10_encode_single(tmp_annotations_10);

            tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__3_BoxLinearCoder_220, mod_consts[37], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 233;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }
        {
            PyObject *tmp_annotations_11;
            PyObject *tmp_dict_key_9;
            PyObject *tmp_dict_value_9;
            tmp_dict_key_9 = mod_consts[72];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
            tmp_annotations_11 = _PyDict_NewPresized( 3 );
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[153];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            tmp_dict_key_9 = mod_consts[138];
            tmp_dict_value_9 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_9 == NULL)) {
                tmp_dict_value_9 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto dict_build_exception_8;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_11, tmp_dict_key_9, tmp_dict_value_9);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_8;
            // Exception handling pass through code for dict_build:
            dict_build_exception_8:;
            Py_DECREF(tmp_annotations_11);
            goto frame_exception_exit_4;
            // Finished with no exception for dict_build:
            dict_build_noexception_8:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__11_decode_single(tmp_annotations_11);

            tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__3_BoxLinearCoder_220, mod_consts[51], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 266;
                type_description_2 = "o";
                goto frame_exception_exit_4;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_3;
        frame_exception_exit_4:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_a3ebcf585d3b73a1b36d3cc48a2172d0_4, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_a3ebcf585d3b73a1b36d3cc48a2172d0_4->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_a3ebcf585d3b73a1b36d3cc48a2172d0_4, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_a3ebcf585d3b73a1b36d3cc48a2172d0_4,
            type_description_2,
            outline_2_var___class__
        );



        assertFrameObject(frame_a3ebcf585d3b73a1b36d3cc48a2172d0_4);

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
            PyObject *tmp_assign_source_26;
            PyObject *tmp_called_value_4;
            PyObject *tmp_args_value_3;
            PyObject *tmp_tuple_element_5;
            PyObject *tmp_kwargs_value_3;
            tmp_called_value_4 = (PyObject *)&PyType_Type;
            tmp_tuple_element_5 = mod_consts[158];
            tmp_args_value_3 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_3, 0, tmp_tuple_element_5);
            tmp_tuple_element_5 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_args_value_3, 1, tmp_tuple_element_5);
            tmp_tuple_element_5 = locals_torchvision$models$detection$_utils$$$class__3_BoxLinearCoder_220;
            PyTuple_SET_ITEM0(tmp_args_value_3, 2, tmp_tuple_element_5);
            CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
            tmp_kwargs_value_3 = tmp_class_creation_3__class_decl_dict;
            frame_a237aceee49bc532285d9c75420ed60b->m_frame.f_lineno = 220;
            tmp_assign_source_26 = CALL_FUNCTION(tmp_called_value_4, tmp_args_value_3, tmp_kwargs_value_3);
            Py_DECREF(tmp_args_value_3);
            if (tmp_assign_source_26 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 220;

                goto try_except_handler_11;
            }
            assert(outline_2_var___class__ == NULL);
            outline_2_var___class__ = tmp_assign_source_26;
        }
        CHECK_OBJECT(outline_2_var___class__);
        tmp_assign_source_25 = outline_2_var___class__;
        Py_INCREF(tmp_assign_source_25);
        goto try_return_handler_11;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_11:;
        Py_DECREF(locals_torchvision$models$detection$_utils$$$class__3_BoxLinearCoder_220);
        locals_torchvision$models$detection$_utils$$$class__3_BoxLinearCoder_220 = NULL;
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

        Py_DECREF(locals_torchvision$models$detection$_utils$$$class__3_BoxLinearCoder_220);
        locals_torchvision$models$detection$_utils$$$class__3_BoxLinearCoder_220 = NULL;
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
        exception_lineno = 220;
        goto try_except_handler_9;
        outline_result_3:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[158], tmp_assign_source_25);
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

    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    // Re-raise.
    exception_type = exception_keeper_type_11;
    exception_value = exception_keeper_value_11;
    exception_tb = exception_keeper_tb_11;
    exception_lineno = exception_keeper_lineno_11;

    goto frame_exception_exit_1;
    // End of try:
    try_end_5:;
    CHECK_OBJECT(tmp_class_creation_3__class_decl_dict);
    Py_DECREF(tmp_class_creation_3__class_decl_dict);
    tmp_class_creation_3__class_decl_dict = NULL;
    CHECK_OBJECT(tmp_class_creation_3__prepared);
    Py_DECREF(tmp_class_creation_3__prepared);
    tmp_class_creation_3__prepared = NULL;
    {
        PyObject *tmp_assign_source_27;
        tmp_assign_source_27 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__class_decl_dict == NULL);
        tmp_class_creation_4__class_decl_dict = tmp_assign_source_27;
    }
    {
        PyObject *tmp_assign_source_28;
        tmp_assign_source_28 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_4__prepared == NULL);
        tmp_class_creation_4__prepared = tmp_assign_source_28;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_29;
        {
            PyObject *tmp_set_locals_4;
            CHECK_OBJECT(tmp_class_creation_4__prepared);
            tmp_set_locals_4 = tmp_class_creation_4__prepared;
            locals_torchvision$models$detection$_utils$$$class__4_Matcher_297 = tmp_set_locals_4;
            Py_INCREF(tmp_set_locals_4);
        }
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__4_Matcher_297, mod_consts[131], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[164];
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__4_Matcher_297, mod_consts[115], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[165];
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__4_Matcher_297, mod_consts[134], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[50];
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__4_Matcher_297, mod_consts[74], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = mod_consts[75];
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__4_Matcher_297, mod_consts[76], tmp_dictset_value);
        assert(!(tmp_res != 0));
        tmp_dictset_value = DICT_COPY(mod_consts[166]);
        tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__4_Matcher_297, mod_consts[167], tmp_dictset_value);
        Py_DECREF(tmp_dictset_value);
        assert(!(tmp_res != 0));
        {
            PyObject *tmp_defaults_3;
            PyObject *tmp_annotations_12;
            tmp_defaults_3 = mod_consts[168];
            tmp_annotations_12 = DICT_COPY(mod_consts[169]);
            Py_INCREF(tmp_defaults_3);


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__12___init__(tmp_defaults_3, tmp_annotations_12);

            tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__4_Matcher_297, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            assert(!(tmp_res != 0));
        }
        // Tried code:
        // Tried code:
        frame_b0a2e85daf554a76e60c7c20ebd45bf6_5 = MAKE_CLASS_FRAME(codeobj_b0a2e85daf554a76e60c7c20ebd45bf6, module_torchvision$models$detection$_utils, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_b0a2e85daf554a76e60c7c20ebd45bf6_5);
        assert(Py_REFCNT(frame_b0a2e85daf554a76e60c7c20ebd45bf6_5) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_13;
            PyObject *tmp_dict_key_10;
            PyObject *tmp_dict_value_10;
            tmp_dict_key_10 = mod_consts[171];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_13 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            tmp_dict_key_10 = mod_consts[138];
            tmp_dict_value_10 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_10 == NULL)) {
                tmp_dict_value_10 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_10 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto dict_build_exception_9;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_13, tmp_dict_key_10, tmp_dict_value_10);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_9;
            // Exception handling pass through code for dict_build:
            dict_build_exception_9:;
            Py_DECREF(tmp_annotations_13);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_9:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__13___call__(tmp_annotations_13);

            tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__4_Matcher_297, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 341;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }
        {
            PyObject *tmp_annotations_14;
            PyObject *tmp_dict_key_11;
            PyObject *tmp_dict_value_11;
            tmp_dict_key_11 = mod_consts[173];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
            tmp_annotations_14 = _PyDict_NewPresized( 4 );
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[174];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;
                type_description_2 = "o";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[171];
            tmp_dict_value_11 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

            if (unlikely(tmp_dict_value_11 == NULL)) {
                tmp_dict_value_11 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
            }

            if (tmp_dict_value_11 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;
                type_description_2 = "o";
                goto dict_build_exception_10;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            tmp_dict_key_11 = mod_consts[138];
            tmp_dict_value_11 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_14, tmp_dict_key_11, tmp_dict_value_11);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_10;
            // Exception handling pass through code for dict_build:
            dict_build_exception_10:;
            Py_DECREF(tmp_annotations_14);
            goto frame_exception_exit_5;
            // Finished with no exception for dict_build:
            dict_build_noexception_10:;


            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__14_set_low_quality_matches_(tmp_annotations_14);

            tmp_res = PyDict_SetItem(locals_torchvision$models$detection$_utils$$$class__4_Matcher_297, mod_consts[88], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 379;
                type_description_2 = "o";
                goto frame_exception_exit_5;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_4;
        frame_exception_exit_5:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_b0a2e85daf554a76e60c7c20ebd45bf6_5, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_b0a2e85daf554a76e60c7c20ebd45bf6_5->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_b0a2e85daf554a76e60c7c20ebd45bf6_5, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_b0a2e85daf554a76e60c7c20ebd45bf6_5,
            type_description_2,
            outline_3_var___class__
        );



        assertFrameObject(frame_b0a2e85daf554a76e60c7c20ebd45bf6_5);

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
            PyObject *tmp_assign_source_30;
            PyObject *tmp_called_value_5;
            PyObject *tmp_args_value_4;
            PyObject *tmp_tuple_element_6;
            PyObject *tmp_kwargs_value_4;
            tmp_called_value_5 = (PyObject *)&PyType_Type;
            tmp_tuple_element_6 = mod_consts[165];
            tmp_args_value_4 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_4, 0, tmp_tuple_element_6);
            tmp_tuple_element_6 = mod_consts[140];
            PyTuple_SET_ITEM0(tmp_args_value_4, 1, tmp_tuple_element_6);
            tmp_tuple_element_6 = locals_torchvision$models$detection$_utils$$$class__4_Matcher_297;
            PyTuple_SET_ITEM0(tmp_args_value_4, 2, tmp_tuple_element_6);
            CHECK_OBJECT(tmp_class_creation_4__class_decl_dict);
            tmp_kwargs_value_4 = tmp_class_creation_4__class_decl_dict;
            frame_a237aceee49bc532285d9c75420ed60b->m_frame.f_lineno = 297;
            tmp_assign_source_30 = CALL_FUNCTION(tmp_called_value_5, tmp_args_value_4, tmp_kwargs_value_4);
            Py_DECREF(tmp_args_value_4);
            if (tmp_assign_source_30 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 297;

                goto try_except_handler_14;
            }
            assert(outline_3_var___class__ == NULL);
            outline_3_var___class__ = tmp_assign_source_30;
        }
        CHECK_OBJECT(outline_3_var___class__);
        tmp_assign_source_29 = outline_3_var___class__;
        Py_INCREF(tmp_assign_source_29);
        goto try_return_handler_14;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_14:;
        Py_DECREF(locals_torchvision$models$detection$_utils$$$class__4_Matcher_297);
        locals_torchvision$models$detection$_utils$$$class__4_Matcher_297 = NULL;
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

        Py_DECREF(locals_torchvision$models$detection$_utils$$$class__4_Matcher_297);
        locals_torchvision$models$detection$_utils$$$class__4_Matcher_297 = NULL;
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
        exception_lineno = 297;
        goto try_except_handler_12;
        outline_result_4:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[165], tmp_assign_source_29);
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
    {
        PyObject *tmp_assign_source_31;
        PyObject *tmp_tuple_element_7;
        tmp_tuple_element_7 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[165]);

        if (unlikely(tmp_tuple_element_7 == NULL)) {
            tmp_tuple_element_7 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[165]);
        }

        assert(!(tmp_tuple_element_7 == NULL));
        tmp_assign_source_31 = MAKE_TUPLE_EMPTY(1);
        PyTuple_SET_ITEM0(tmp_assign_source_31, 0, tmp_tuple_element_7);
        assert(tmp_class_creation_5__bases_orig == NULL);
        tmp_class_creation_5__bases_orig = tmp_assign_source_31;
    }
    // Tried code:
    {
        PyObject *tmp_assign_source_32;
        PyObject *tmp_dircall_arg1_1;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dircall_arg1_1 = tmp_class_creation_5__bases_orig;
        Py_INCREF(tmp_dircall_arg1_1);

        {
            PyObject *dir_call_args[] = {tmp_dircall_arg1_1};
            tmp_assign_source_32 = impl___main__$$$function__1__mro_entries_conversion(dir_call_args);
        }
        if (tmp_assign_source_32 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__bases == NULL);
        tmp_class_creation_5__bases = tmp_assign_source_32;
    }
    {
        PyObject *tmp_assign_source_33;
        tmp_assign_source_33 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__class_decl_dict == NULL);
        tmp_class_creation_5__class_decl_dict = tmp_assign_source_33;
    }
    {
        PyObject *tmp_assign_source_34;
        PyObject *tmp_metaclass_value_1;
        nuitka_bool tmp_condition_result_1;
        int tmp_truth_name_1;
        PyObject *tmp_type_arg_1;
        PyObject *tmp_expression_value_12;
        PyObject *tmp_subscript_value_10;
        PyObject *tmp_bases_value_1;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_truth_name_1 = CHECK_IF_TRUE(tmp_class_creation_5__bases);
        if (tmp_truth_name_1 == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto try_except_handler_15;
        }
        tmp_condition_result_1 = tmp_truth_name_1 == 0 ? NUITKA_BOOL_FALSE : NUITKA_BOOL_TRUE;
        if (tmp_condition_result_1 == NUITKA_BOOL_TRUE) {
            goto condexpr_true_1;
        } else {
            goto condexpr_false_1;
        }
        condexpr_true_1:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_expression_value_12 = tmp_class_creation_5__bases;
        tmp_subscript_value_10 = mod_consts[6];
        tmp_type_arg_1 = LOOKUP_SUBSCRIPT_CONST(tmp_expression_value_12, tmp_subscript_value_10, 0);
        if (tmp_type_arg_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto try_except_handler_15;
        }
        tmp_metaclass_value_1 = BUILTIN_TYPE1(tmp_type_arg_1);
        Py_DECREF(tmp_type_arg_1);
        if (tmp_metaclass_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto try_except_handler_15;
        }
        goto condexpr_end_1;
        condexpr_false_1:;
        tmp_metaclass_value_1 = (PyObject *)&PyType_Type;
        Py_INCREF(tmp_metaclass_value_1);
        condexpr_end_1:;
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_bases_value_1 = tmp_class_creation_5__bases;
        tmp_assign_source_34 = SELECT_METACLASS(tmp_metaclass_value_1, tmp_bases_value_1);
        Py_DECREF(tmp_metaclass_value_1);
        if (tmp_assign_source_34 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__metaclass == NULL);
        tmp_class_creation_5__metaclass = tmp_assign_source_34;
    }
    {
        nuitka_bool tmp_condition_result_2;
        PyObject *tmp_expression_value_13;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_13 = tmp_class_creation_5__metaclass;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_13, mod_consts[176]);
        tmp_condition_result_2 = (tmp_result) ? NUITKA_BOOL_TRUE : NUITKA_BOOL_FALSE;
        if (tmp_condition_result_2 == NUITKA_BOOL_TRUE) {
            goto branch_yes_1;
        } else {
            goto branch_no_1;
        }
    }
    branch_yes_1:;
    {
        PyObject *tmp_assign_source_35;
        PyObject *tmp_called_value_6;
        PyObject *tmp_expression_value_14;
        PyObject *tmp_args_value_5;
        PyObject *tmp_tuple_element_8;
        PyObject *tmp_kwargs_value_5;
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_expression_value_14 = tmp_class_creation_5__metaclass;
        tmp_called_value_6 = LOOKUP_ATTRIBUTE(tmp_expression_value_14, mod_consts[176]);
        if (tmp_called_value_6 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto try_except_handler_15;
        }
        tmp_tuple_element_8 = mod_consts[177];
        tmp_args_value_5 = MAKE_TUPLE_EMPTY(2);
        PyTuple_SET_ITEM0(tmp_args_value_5, 0, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_5__bases);
        tmp_tuple_element_8 = tmp_class_creation_5__bases;
        PyTuple_SET_ITEM0(tmp_args_value_5, 1, tmp_tuple_element_8);
        CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
        tmp_kwargs_value_5 = tmp_class_creation_5__class_decl_dict;
        frame_a237aceee49bc532285d9c75420ed60b->m_frame.f_lineno = 409;
        tmp_assign_source_35 = CALL_FUNCTION(tmp_called_value_6, tmp_args_value_5, tmp_kwargs_value_5);
        Py_DECREF(tmp_called_value_6);
        Py_DECREF(tmp_args_value_5);
        if (tmp_assign_source_35 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto try_except_handler_15;
        }
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_35;
    }
    {
        bool tmp_condition_result_3;
        PyObject *tmp_operand_value_1;
        PyObject *tmp_expression_value_15;
        CHECK_OBJECT(tmp_class_creation_5__prepared);
        tmp_expression_value_15 = tmp_class_creation_5__prepared;
        tmp_result = HAS_ATTR_BOOL(tmp_expression_value_15, mod_consts[178]);
        tmp_operand_value_1 = (tmp_result) ? Py_True : Py_False;
        tmp_res = CHECK_IF_TRUE(tmp_operand_value_1);
        if (tmp_res == -1) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto try_except_handler_15;
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
        PyObject *tmp_tuple_element_9;
        PyObject *tmp_getattr_target_1;
        PyObject *tmp_getattr_attr_1;
        PyObject *tmp_getattr_default_1;
        tmp_raise_type_1 = PyExc_TypeError;
        tmp_mod_expr_left_1 = mod_consts[179];
        CHECK_OBJECT(tmp_class_creation_5__metaclass);
        tmp_getattr_target_1 = tmp_class_creation_5__metaclass;
        tmp_getattr_attr_1 = mod_consts[180];
        tmp_getattr_default_1 = mod_consts[181];
        tmp_tuple_element_9 = BUILTIN_GETATTR(tmp_getattr_target_1, tmp_getattr_attr_1, tmp_getattr_default_1);
        if (tmp_tuple_element_9 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto try_except_handler_15;
        }
        tmp_mod_expr_right_1 = MAKE_TUPLE_EMPTY(2);
        {
            PyObject *tmp_expression_value_16;
            PyObject *tmp_type_arg_2;
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 0, tmp_tuple_element_9);
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_type_arg_2 = tmp_class_creation_5__prepared;
            tmp_expression_value_16 = BUILTIN_TYPE1(tmp_type_arg_2);
            assert(!(tmp_expression_value_16 == NULL));
            tmp_tuple_element_9 = LOOKUP_ATTRIBUTE(tmp_expression_value_16, mod_consts[180]);
            Py_DECREF(tmp_expression_value_16);
            if (tmp_tuple_element_9 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;

                goto tuple_build_exception_2;
            }
            PyTuple_SET_ITEM(tmp_mod_expr_right_1, 1, tmp_tuple_element_9);
        }
        goto tuple_build_noexception_2;
        // Exception handling pass through code for tuple_build:
        tuple_build_exception_2:;
        Py_DECREF(tmp_mod_expr_right_1);
        goto try_except_handler_15;
        // Finished with no exception for tuple_build:
        tuple_build_noexception_2:;
        tmp_raise_value_1 = BINARY_OPERATION_MOD_OBJECT_UNICODE_TUPLE(tmp_mod_expr_left_1, tmp_mod_expr_right_1);
        Py_DECREF(tmp_mod_expr_right_1);
        if (tmp_raise_value_1 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto try_except_handler_15;
        }
        exception_type = tmp_raise_type_1;
        Py_INCREF(tmp_raise_type_1);
        exception_value = tmp_raise_value_1;
        exception_lineno = 409;
        RAISE_EXCEPTION_IMPLICIT(&exception_type, &exception_value, &exception_tb);

        goto try_except_handler_15;
    }
    branch_no_2:;
    goto branch_end_1;
    branch_no_1:;
    {
        PyObject *tmp_assign_source_36;
        tmp_assign_source_36 = MAKE_DICT_EMPTY();
        assert(tmp_class_creation_5__prepared == NULL);
        tmp_class_creation_5__prepared = tmp_assign_source_36;
    }
    branch_end_1:;
    {
        PyObject *tmp_assign_source_37;
        {
            PyObject *tmp_set_locals_5;
            CHECK_OBJECT(tmp_class_creation_5__prepared);
            tmp_set_locals_5 = tmp_class_creation_5__prepared;
            locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409 = tmp_set_locals_5;
            Py_INCREF(tmp_set_locals_5);
        }
        // Tried code:
        // Tried code:
        tmp_dictset_value = mod_consts[130];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409, mod_consts[131], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto try_except_handler_17;
        }
        tmp_dictset_value = mod_consts[177];
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409, mod_consts[134], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto try_except_handler_17;
        }
        frame_2ef6db0abc00e6cf701048044088def3_6 = MAKE_CLASS_FRAME(codeobj_2ef6db0abc00e6cf701048044088def3, module_torchvision$models$detection$_utils, NULL, sizeof(void *));

        // Push the new frame as the currently active one, and we should be exclusively
        // owning it.
        pushFrameStackCompiledFrame(frame_2ef6db0abc00e6cf701048044088def3_6);
        assert(Py_REFCNT(frame_2ef6db0abc00e6cf701048044088def3_6) == 2);

        // Framed code:
        {
            PyObject *tmp_annotations_15;
            PyObject *tmp_dict_key_12;
            PyObject *tmp_dict_value_12;
            struct Nuitka_CellObject *tmp_closure_1[1];
            tmp_dict_key_12 = mod_consts[182];
            tmp_dict_value_12 = PyObject_GetItem(locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409, mod_consts[183]);

            if (tmp_dict_value_12 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_12 = (PyObject *)&PyFloat_Type;
                    Py_INCREF(tmp_dict_value_12);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_15 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
            Py_DECREF(tmp_dict_value_12);
            assert(!(tmp_res != 0));
            tmp_dict_key_12 = mod_consts[138];
            tmp_dict_value_12 = Py_None;
            tmp_res = PyDict_SetItem(tmp_annotations_15, tmp_dict_key_12, tmp_dict_value_12);
            assert(!(tmp_res != 0));

            tmp_closure_1[0] = outline_4_var___class__;
            Py_INCREF(tmp_closure_1[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__15___init__(tmp_annotations_15, tmp_closure_1);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409, mod_consts[92], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 410;
                type_description_2 = "c";
                goto frame_exception_exit_6;
            }
        }
        {
            PyObject *tmp_annotations_16;
            PyObject *tmp_dict_key_13;
            PyObject *tmp_dict_value_13;
            struct Nuitka_CellObject *tmp_closure_2[1];
            tmp_dict_key_13 = mod_consts[171];
            tmp_dict_value_13 = PyObject_GetItem(locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409, mod_consts[45]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_dict_value_13 == NULL)) {
                        tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                    }

                    if (tmp_dict_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 413;
                        type_description_2 = "c";
                        goto frame_exception_exit_6;
                    }
                    Py_INCREF(tmp_dict_value_13);
                } else {
                    goto frame_exception_exit_6;
                }
            }

            tmp_annotations_16 = _PyDict_NewPresized( 2 );
            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            tmp_dict_key_13 = mod_consts[138];
            tmp_dict_value_13 = PyObject_GetItem(locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409, mod_consts[45]);

            if (tmp_dict_value_13 == NULL) {
                if (CHECK_AND_CLEAR_KEY_ERROR_OCCURRED()) {
                    tmp_dict_value_13 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[45]);

                    if (unlikely(tmp_dict_value_13 == NULL)) {
                        tmp_dict_value_13 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[45]);
                    }

                    if (tmp_dict_value_13 == NULL) {
                        assert(ERROR_OCCURRED());

                        FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                        exception_lineno = 413;
                        type_description_2 = "c";
                        goto dict_build_exception_11;
                    }
                    Py_INCREF(tmp_dict_value_13);
                } else {
                    goto dict_build_exception_11;
                }
            }

            tmp_res = PyDict_SetItem(tmp_annotations_16, tmp_dict_key_13, tmp_dict_value_13);
            Py_DECREF(tmp_dict_value_13);
            assert(!(tmp_res != 0));
            goto dict_build_noexception_11;
            // Exception handling pass through code for dict_build:
            dict_build_exception_11:;
            Py_DECREF(tmp_annotations_16);
            goto frame_exception_exit_6;
            // Finished with no exception for dict_build:
            dict_build_noexception_11:;

            tmp_closure_2[0] = outline_4_var___class__;
            Py_INCREF(tmp_closure_2[0]);

            tmp_dictset_value = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__16___call__(tmp_annotations_16, tmp_closure_2);

            tmp_res = PyObject_SetItem(locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409, mod_consts[94], tmp_dictset_value);
            Py_DECREF(tmp_dictset_value);
            if (tmp_res != 0) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 413;
                type_description_2 = "c";
                goto frame_exception_exit_6;
            }
        }


        // Put the previous frame back on top.
        popFrameStack();

        goto frame_no_exception_5;
        frame_exception_exit_6:


        if (exception_tb == NULL) {
            exception_tb = MAKE_TRACEBACK(frame_2ef6db0abc00e6cf701048044088def3_6, exception_lineno);
        } else if (exception_tb->tb_frame != &frame_2ef6db0abc00e6cf701048044088def3_6->m_frame) {
            exception_tb = ADD_TRACEBACK(exception_tb, frame_2ef6db0abc00e6cf701048044088def3_6, exception_lineno);
        }

        // Attaches locals to frame if any.
        Nuitka_Frame_AttachLocals(
            frame_2ef6db0abc00e6cf701048044088def3_6,
            type_description_2,
            outline_4_var___class__
        );



        assertFrameObject(frame_2ef6db0abc00e6cf701048044088def3_6);

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
            nuitka_bool tmp_condition_result_4;
            PyObject *tmp_cmp_expr_left_1;
            PyObject *tmp_cmp_expr_right_1;
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_cmp_expr_left_1 = tmp_class_creation_5__bases;
            CHECK_OBJECT(tmp_class_creation_5__bases_orig);
            tmp_cmp_expr_right_1 = tmp_class_creation_5__bases_orig;
            tmp_condition_result_4 = RICH_COMPARE_NE_NBOOL_OBJECT_TUPLE(tmp_cmp_expr_left_1, tmp_cmp_expr_right_1);
            if (tmp_condition_result_4 == NUITKA_BOOL_EXCEPTION) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;

                goto try_except_handler_17;
            }
            if (tmp_condition_result_4 == NUITKA_BOOL_TRUE) {
                goto branch_yes_3;
            } else {
                goto branch_no_3;
            }
        }
        branch_yes_3:;
        CHECK_OBJECT(tmp_class_creation_5__bases_orig);
        tmp_dictset_value = tmp_class_creation_5__bases_orig;
        tmp_res = PyObject_SetItem(locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409, mod_consts[186], tmp_dictset_value);
        if (tmp_res != 0) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 409;

            goto try_except_handler_17;
        }
        branch_no_3:;
        {
            PyObject *tmp_assign_source_38;
            PyObject *tmp_called_value_7;
            PyObject *tmp_args_value_6;
            PyObject *tmp_tuple_element_10;
            PyObject *tmp_kwargs_value_6;
            CHECK_OBJECT(tmp_class_creation_5__metaclass);
            tmp_called_value_7 = tmp_class_creation_5__metaclass;
            tmp_tuple_element_10 = mod_consts[177];
            tmp_args_value_6 = MAKE_TUPLE_EMPTY(3);
            PyTuple_SET_ITEM0(tmp_args_value_6, 0, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_5__bases);
            tmp_tuple_element_10 = tmp_class_creation_5__bases;
            PyTuple_SET_ITEM0(tmp_args_value_6, 1, tmp_tuple_element_10);
            tmp_tuple_element_10 = locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409;
            PyTuple_SET_ITEM0(tmp_args_value_6, 2, tmp_tuple_element_10);
            CHECK_OBJECT(tmp_class_creation_5__class_decl_dict);
            tmp_kwargs_value_6 = tmp_class_creation_5__class_decl_dict;
            frame_a237aceee49bc532285d9c75420ed60b->m_frame.f_lineno = 409;
            tmp_assign_source_38 = CALL_FUNCTION(tmp_called_value_7, tmp_args_value_6, tmp_kwargs_value_6);
            Py_DECREF(tmp_args_value_6);
            if (tmp_assign_source_38 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 409;

                goto try_except_handler_17;
            }
            assert(Nuitka_Cell_GET(outline_4_var___class__) == NULL);
            PyCell_SET(outline_4_var___class__, tmp_assign_source_38);

        }
        CHECK_OBJECT(Nuitka_Cell_GET(outline_4_var___class__));
        tmp_assign_source_37 = Nuitka_Cell_GET(outline_4_var___class__);
        Py_INCREF(tmp_assign_source_37);
        goto try_return_handler_17;
        NUITKA_CANNOT_GET_HERE("tried codes exits in all cases");
        return NULL;
        // Return handler code:
        try_return_handler_17:;
        Py_DECREF(locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409);
        locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409 = NULL;
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

        Py_DECREF(locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409);
        locals_torchvision$models$detection$_utils$$$class__5_SSDMatcher_409 = NULL;
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
        exception_lineno = 409;
        goto try_except_handler_15;
        outline_result_5:;
        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[177], tmp_assign_source_37);
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

    CHECK_OBJECT(tmp_class_creation_5__bases_orig);
    Py_DECREF(tmp_class_creation_5__bases_orig);
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
        PyObject *tmp_assign_source_39;
        PyObject *tmp_annotations_17;
        PyObject *tmp_dict_key_14;
        PyObject *tmp_dict_value_14;
        PyObject *tmp_expression_value_17;
        tmp_dict_key_14 = mod_consts[187];
        tmp_expression_value_17 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_expression_value_17 == NULL)) {
            tmp_expression_value_17 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_expression_value_17 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_14 = LOOKUP_ATTRIBUTE(tmp_expression_value_17, mod_consts[188]);
        if (tmp_dict_value_14 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 425;

            goto frame_exception_exit_1;
        }
        tmp_annotations_17 = _PyDict_NewPresized( 3 );
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_14, tmp_dict_value_14);
        Py_DECREF(tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[99];
        tmp_dict_value_14 = (PyObject *)&PyFloat_Type;
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));
        tmp_dict_key_14 = mod_consts[138];
        tmp_dict_value_14 = Py_None;
        tmp_res = PyDict_SetItem(tmp_annotations_17, tmp_dict_key_14, tmp_dict_value_14);
        assert(!(tmp_res != 0));


        tmp_assign_source_39 = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__17_overwrite_eps(tmp_annotations_17);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[189], tmp_assign_source_39);
    }
    {
        PyObject *tmp_assign_source_40;
        PyObject *tmp_annotations_18;
        PyObject *tmp_dict_key_15;
        PyObject *tmp_dict_value_15;
        PyObject *tmp_expression_value_18;
        tmp_dict_key_15 = mod_consts[187];
        tmp_expression_value_18 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[127]);

        if (unlikely(tmp_expression_value_18 == NULL)) {
            tmp_expression_value_18 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[127]);
        }

        if (tmp_expression_value_18 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_dict_value_15 = LOOKUP_ATTRIBUTE(tmp_expression_value_18, mod_consts[188]);
        if (tmp_dict_value_15 == NULL) {
            assert(ERROR_OCCURRED());

            FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


            exception_lineno = 443;

            goto frame_exception_exit_1;
        }
        tmp_annotations_18 = _PyDict_NewPresized( 3 );
        {
            PyObject *tmp_expression_value_19;
            PyObject *tmp_subscript_value_11;
            PyObject *tmp_expression_value_20;
            PyObject *tmp_subscript_value_12;
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[46];
            tmp_expression_value_19 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[125]);

            if (unlikely(tmp_expression_value_19 == NULL)) {
                tmp_expression_value_19 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[125]);
            }

            if (tmp_expression_value_19 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_11 = mod_consts[190];
            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_19, tmp_subscript_value_11);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
            tmp_dict_key_15 = mod_consts[138];
            tmp_expression_value_20 = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[124]);

            if (unlikely(tmp_expression_value_20 == NULL)) {
                tmp_expression_value_20 = GET_MODULE_VARIABLE_VALUE_FALLBACK(mod_consts[124]);
            }

            if (tmp_expression_value_20 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto dict_build_exception_12;
            }
            tmp_subscript_value_12 = (PyObject *)&PyLong_Type;
            tmp_dict_value_15 = LOOKUP_SUBSCRIPT(tmp_expression_value_20, tmp_subscript_value_12);
            if (tmp_dict_value_15 == NULL) {
                assert(ERROR_OCCURRED());

                FETCH_ERROR_OCCURRED(&exception_type, &exception_value, &exception_tb);


                exception_lineno = 443;

                goto dict_build_exception_12;
            }
            tmp_res = PyDict_SetItem(tmp_annotations_18, tmp_dict_key_15, tmp_dict_value_15);
            Py_DECREF(tmp_dict_value_15);
            assert(!(tmp_res != 0));
        }
        goto dict_build_noexception_12;
        // Exception handling pass through code for dict_build:
        dict_build_exception_12:;
        Py_DECREF(tmp_annotations_18);
        goto frame_exception_exit_1;
        // Finished with no exception for dict_build:
        dict_build_noexception_12:;


        tmp_assign_source_40 = MAKE_FUNCTION_torchvision$models$detection$_utils$$$function__18_retrieve_out_channels(tmp_annotations_18);

        UPDATE_STRING_DICT1(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)mod_consts[191], tmp_assign_source_40);
    }


    // Put the previous frame back on top.
    popFrameStack();

    goto frame_no_exception_6;
    frame_exception_exit_1:


    if (exception_tb == NULL) {
        exception_tb = MAKE_TRACEBACK(frame_a237aceee49bc532285d9c75420ed60b, exception_lineno);
    } else if (exception_tb->tb_frame != &frame_a237aceee49bc532285d9c75420ed60b->m_frame) {
        exception_tb = ADD_TRACEBACK(exception_tb, frame_a237aceee49bc532285d9c75420ed60b, exception_lineno);
    }



    assertFrameObject(frame_a237aceee49bc532285d9c75420ed60b);

    // Put the previous frame back on top.
    popFrameStack();

    // Return the error.
    goto module_exception_exit;
    frame_no_exception_6:;

    // Report to PGO about leaving the module without error.
    PGO_onModuleExit("torchvision.models.detection._utils", false);

    Py_INCREF(module_torchvision$models$detection$_utils);
    return module_torchvision$models$detection$_utils;
    module_exception_exit:

#if defined(_NUITKA_MODULE) && 0
    {
        PyObject *module_name = GET_STRING_DICT_VALUE(moduledict_torchvision$models$detection$_utils, (Nuitka_StringObject *)const_str_plain___name__);

        if (module_name != NULL) {
            Nuitka_DelModule(module_name);
        }
    }
#endif
    PGO_onModuleExit("torchvision$models$detection$_utils", false);

    RESTORE_ERROR_OCCURRED(exception_type, exception_value, exception_tb);
    return NULL;
}
